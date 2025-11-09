#include "../include/flashcard.h"

Flashcard::Flashcard() : question(""), answer(""), markedCorrect(false) {}
Flashcard::Flashcard(const std::string& q, const std::string& a)
    :question(q), answer(a), markedCorrect(false) {}
std::string Flashcard::getQuestion() const {return question;}
std::string Flashcard::getAnswer() const {return answer;}
bool Flashcard::isMarkedCorrect() const {return markedCorrect;}

void Flashcard::setQuestion(const std::string& q) {question = q;}
void Flashcard::setAnswer(const std::string& a) {answer = a;}
void Flashcard::markCorrect(bool value) {markedCorrect = value;}