
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
class Question {
public:
    std::string questionText;
    std::vector<std::string> options;
    int correctOption;
    Question(const std::string& text, const std::vector<std::string>& opts, int correct)
        : questionText(text), options(opts), correctOption(correct) {}
};
class Quiz {
public:
    std::vector<Question> questions;
    int score;
    Quiz() : score(0) {}
    void addQuestion(const std::string& text, const std::vector<std::string>& opts, int correct) {
        questions.emplace_back(text, opts, correct);
    }
    void displayQuestion(int index) const {
        const Question& q = questions[index];
        std::cout << "Question " << index + 1 << ": " << q.questionText << "\n";
        for (size_t i = 0; i < q.options.size(); ++i) {
            std::cout << "   " << i + 1 << ". " << q.options[i] << "\n";
        }
    }
    void startQuiz() {
        score = 0;
        for (size_t i = 0; i < questions.size(); ++i) {
            displayQuestion(i);
            int userChoice = getUserChoice();
            if (userChoice == questions[i].correctOption) {
                std::cout << "Correct!\n";
                score++;
            } else {
                std::cout << "Incorrect! Correct option is: " << questions[i].correctOption << "\n";
            }
        }
        std::cout << "Quiz completed! Your score: " << score << "/" << questions.size() << "\n";
    }
    int getUserChoice() const {
        int choice;
        std::cout << "Enter your choice (1-" << questions[0].options.size() << "): ";
        std::cin >> choice;
        // Validate user input
        while (choice < 1 || choice > static_cast<int>(questions[0].options.size())) {
            std::cout << "Invalid choice. Please enter a valid option: ";
            std::cin >> choice;
        }
        return choice;
    }
};
int main() {
    // Seed for randomization
    std::srand(std::time(0));
    // Create a quiz
    Quiz quiz;
    // Add questions
    quiz.addQuestion("What is the capital of France?", { "Berlin", "Paris", "Madrid", "Rome" }, 2);
    quiz.addQuestion("Which planet is known as the Red Planet?", { "Mars", "Jupiter", "Venus", "Saturn" }, 1);
    quiz.addQuestion("What is the largest mammal?", { "Elephant", "Blue Whale", "Giraffe", "Hippopotamus" }, 2);
    // Start the quiz
    quiz.startQuiz();
    return 0;
}