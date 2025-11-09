# Implementation Plan-Smart Flashcards

## Feature 1: Add New Flashcard
**Trigger:** User selects " Add new flashcard" from the menu.
** Input Needed:** Question and Answer text.
**Implementation Flow:**
1. In `main()`, prompt the user for question and answer.
2. Create a `Flashcard` object using `Flashcard(q, a)`.
3. Call `manager.addFlashcard(card)` to store it in memory.
4. Display Modified "Flashcard added successfully!"
**Data Modified:** A new Flashcard if added to the deck.
**Functions Used:**
- `Flashcard::Flashcard`(const std::string&, const std::string&)`
- `FlashcardManager::addFlashcard(const Flashcard&)`

---

## Feature 2: Review Flashcards
**Trigger:** User chooses “Review flashcards.”  
**Implementation Flow:**
1. Call `manager.reviewAll()`.
2. Inside that function, loop through each card in `deck`.
3. For each, display the question → wait for Enter → display the answer.
4. Optionally ask user if they got it right; update `markedCorrect`.
   **Data Modified:** May update each card’s `markedCorrect` status.  
   **Functions Used:**
- `FlashcardManager::reviewAll()`
- `Flashcard::getQuestion()`
- `Flashcard::getAnswer()`
- `Flashcard::markCorrect(bool)`

---

## Feature 3: Quiz Mode
**Trigger:** User selects “Quiz mode.”  
**Implementation Flow:**
1. Call `manager.quizMode()`.
2. Randomize order of flashcards.
3. Ask each question and let user type an answer.
4. Compare user answer with the correct one; keep score.
5. Display total score at the end.
   **Data Modified:** Temporary quiz score; may update `markedCorrect`.  
   **Functions Used:**
- `FlashcardManager::quizMode()`
- `Flashcard::getQuestion()`, `Flashcard::getAnswer()`

---

## Feature 4: Save Flashcards to File
**Trigger:** User selects “Save and quit.”  
**Implementation Flow:**
1. In `main()`, before exiting, call `manager.saveToFile("flashcards.txt")`.
2. Inside that function, open an output file stream.
3. For each Flashcard, write question, answer, and correctness status.
4. Close file.
   **Data Modified:** `flashcards.txt` on disk.  
   **Functions Used:**
- `FlashcardManager::saveToFile(const std::string&)`

---

## Feature 5: Load Flashcards from File
**Trigger:** Program start.  
**Implementation Flow:**
1. In `main()`, call `manager.loadFromFile("flashcards.txt")`.
2. Inside that function, open an input file stream.
3. Read each stored card and recreate it in memory.
4. Add each to `deck`.
   **Data Modified:** `deck` vector populated from file.  
   **Functions Used:**
- `FlashcardManager::loadFromFile(const std::string&)`

---

## Feature 6: Remove Flashcard
**Trigger:** (Optional) Add a “Delete flashcard” option.  
**Implementation Flow:**
1. Ask user for the question to remove.
2. Call `manager.removeFlashcard(question)`.
3. Search for that question in `deck` and erase if found.
4. Display “Flashcard removed successfully.”
   **Data Modified:** Removes one Flashcard from the `deck`.  
   **Functions Used:**
- `FlashcardManager::removeFlashcard(const std::string&)`

