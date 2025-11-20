#include <iostream>
#include <string>
#include <algorithm> // for transform

using namespace std;

// Function to convert a string to lowercase
string toLowerCase(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

int main() {
    const int totalQuestions = 10;
    string questions[totalQuestions] = {
        "What is the capital of Albania?",
        "What is the capital of Bulgaria?",
        "What is the capital of Italy?",
        "What is the capital of Spain?",
        "What is the capital of Portugal?",
        "What is the capital of Finland?",
        "What is the capital of Belgium?",
        "What is the capital of Switzerland?",
        "What is the capital of Poland?",
        "What is the capital of Ukraine?"
    };

    string answers[totalQuestions] = {
        "tirana",
        "sofia",
        "rome",
        "madrid",
        "lisbon",
        "helsinki",
        "brussels",
        "bern",
        "warsaw",
        "kyiv"
    };

    int score = 0;
    string userAnswer;

    cout << " European Capitals Quiz " << endl;
    cout << "Answer the following questions:" << endl << endl;

    for (int i = 0; i < totalQuestions; i++) {
        cout << i + 1 << ". " << questions[i] << endl;
        cout << "Your answer: ";
        getline(cin, userAnswer);

        // Convert both to lowercase for comparison
        if (toLowerCase(userAnswer) == answers[i]) {
            cout << " Correct!" << endl;
            score++;
        } else {
        cout << " Wrong The correct answer is " << answers[i] << "." << endl;
        }
        cout << endl;
    }

    cout << "You got " << score << " out of " << totalQuestions << " correct." << endl;
    cout << "Your score: " << (score * 100 / totalQuestions) << "%" << endl;

    return 0;
}

