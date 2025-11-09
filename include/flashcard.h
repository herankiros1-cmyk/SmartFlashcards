#ifndef Flashcard_H
#define Flashcard_H
#include <string>

/**
 * Flashcard represents a single study card with a question and answer .
 */
class Flashcard {
private:
    std::string question;
    std::string answer;
    bool markCorrect;

public:
    FlashCard();
    Flascard(const std::string& q, const std::string& a);

    //Getters
    std::string getQuestion() const;
    std::string getAnswer() const;
    bool isMarkedCorrect() const;

    //Setters
    void setQuestion(const std::string& q);
    void setAnswer(const std::string& a);
    void markCorrect(bool value);
};
#endif //FLASHCARD_H