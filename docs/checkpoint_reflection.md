# Checkpoint 1 Reflection

## What I Implemented
For Checkpoint 1, I fully implemented the first feature of my SmartFlashcards project:  
**Adding a new flashcard to the flashcard manager.**

This included:
- Creating Flashcard objects
- Storing them using FlashcardManager’s `addFlashcard()` method
- Updating `main.cpp` to accept user input and build new flashcards
- Writing three automated tests using a separate `test_feature` executable

## Challenges I Faced
I had several challenges while working on this checkpoint:
- Fixing mistakes in `CMakeLists.txt` (missing files, typos)
- Learning how to write and run automated tests using a separate test executable
- Understanding how to structure my tests using `assert`
- Navigating between CLion terminal and Windows PowerShell
- Making sure my files were in the correct places inside the project structure

## What I Learned
I learned:
- How to organize C++ code across headers, source files, and a manager class
- How to create and use objects from my own classes
- How to write small, focused unit tests
- How to use CMake to build both the main executable and a separate test executable
- How to fix CMake errors and understand what the error messages mean

## Testing Results
All three tests for this checkpoint passed:

- `testAddFlashcard` — PASSED
- `testEmptyFlashcard` — PASSED
- `testFlashcardEditing` — PASSED

This confirms that Feature 1 (Add Flashcard) is correctly implemented.

## Questions for Next Checkpoint
- What is the best way to design file loading and saving (text file format)?
- How should I structure the Review and Quiz features for clean user flow?
- Should FlashcardManager handle input validation or should it stay in main?

## Time Spent
Approximately **3–4 hours**.
