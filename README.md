# Smart Flashcards
A command-line study tool that helps users create, review, and track flashcards for any subject.

## Features
- Add and delete flashcards with questions and answers
- Review flashcards in random order
- Track user performance (correct/incorrect)
- Save and load flashcards form a file
- Quiz mode with score tracking

## Building
```bash
mkdir build
cd build
cmake ..
cmake --build .
```

## Usage
./SmartFlashcards

## Author
Heran Kiros-CIS 25 Final Project

---

---

## Current Status (Checkpoint 1)

### ✔ Implemented
- Feature 1: **Add New Flashcard**
- Fully working menu option to create flashcards
- Flashcards stored correctly in FlashcardManager
- Automated tests (test_feature executable)
- All 3 tests pass:
    - testAddFlashcard
    - testEmptyFlashcard
    - testFlashcardEditing

### ⏳ In Progress
- Feature 2: Review flashcards
- Feature 3: Quiz mode

### 📋 Planned Features
- Save flashcards to file
- Load flashcards at program start
- Remove flashcard by question
- More advanced quiz scoring

### ⚠ Known Issues / Limitations
- File I/O not implemented yet
- Review mode still uses TODO placeholder
- Quiz mode still uses TODO placeholder

---

## Current Status (Checkpoint 2)

### Implemented
- **Feature 1:** Add New Flashcard
- **Feature 2:** Review Flashcards
  - Fully working review mode
  - Shows question -> waits -> shows answer
  - User marks card correct/incorrect
  - Updates card correctness using `markCorrect(bool)`
- All automated tests for Checkpoint 2 passing:
  - `testReviewOneCard`
  - `testReviewMultipleCards`
  - `testReviewEmpty`

### In Progress
- Quiz mode (Feature 3)
- Save flashcards to file
- Load flashcards at program start

### Planned Features
- Remove flashcard by question
- More advanced scoring and statistics
- Shuffle review more
- File I/O for full persistence

### Known Issues / Limitations
- File I/O still unimplemented 
- Quiz mode still uses TODO placeholder
- Review mode does not show overall performance summary yet
