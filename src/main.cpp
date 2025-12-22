#include <iostream>
#include <limits>
#include <string>
#include "../include/flashcard_manager.h"

using namespace std;

void displayMenu();
string getLineTrimmed(const string& prompt);

int main() {
    FlashcardManager manager("flashcards.txt");

    //Load flashcards from file (if it exists)
    manager.loadFromFile("flashcards.txt");

    bool running = true;
    int choice = 0;

    while (running) {
        displayMenu();

        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter a number from the menu.\n";
            continue;
        }
        //Clear leftover newline
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //clear newline

        if (choice == 1) {
            //Add flashcard
            string q = getLineTrimmed("Question: ");
            string a = getLineTrimmed("Answer: ");

            Flashcard card(q, a);
            manager.addFlashcard(card);
            cout << "Flashcard added successfully!\n";
        } else if (choice == 2) {
            // Review Flashcard
            manager.reviewAll();

        } else if (choice == 3) {
            // Quiz mode
            manager.quizMode();


        } else if (choice == 4) {
            // Save & quit
            if (manager.saveToFile("flashcards.txt")) {
                cout << "Flashcards saved. Goodbye!\n";
            } else {
                cout << "Goodbye (warning: could not save flashcards).\n";
            }
            running = false;

        } else {
            cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}

void displayMenu() {
    cout << "\n=== Smart Flashcards ===\n"
         << "1. Add new flashcard\n"
         << "2. Review flashcards\n"
         << "3. Quiz mode\n"
         << "4. Save and quit\n"
         << "Choice: ";
}

string getLineTrimmed(const string& prompt) {
    cout << prompt;
    string s; getline(cin, s);
    // simple trim of trailing carriage return on Windows if present
    if (!s.empty() && s.back() == '\r') s.pop_back();
    return s;
}

