 # Final Reflection - Smart Flashcard
 
## Section 1: Project Summary

My project is a command-line flashcard study tool called **Smart Flashcards**. It lets the user creat flashcards with a question and answer, review them one by one, and save/load them using a file so the card stay between runs.
**Features I implemented:**
- Add new flashcards (question + answer)
- Review flashcards one at a time and mark them correct/incorrect
- Save all flashcards to a text file
- Load all flashcards from a file when the program starts
- Automated tests for add, review, and save/load

**What my project does well:**
- It has a clear, simple menu.
- The study flow makes sense: add → review → save → load.
- It doesn’t crash when there are no flashcards.
- It keeps my flashcards even after I close the program.

---

## Section 2: What Remains

There are still some things I did not finish completely:

**Not implemented or only partially implemented:**
- Quiz mode (a mode where the user types the answer and the program checks it)
- Deleting a specific flashcard by question
- Extra statistics (like total correct, accuracy percentage)
- More advanced error handling for bad file formats or corrupted files

**Remaining bugs or issues:**
- Quiz mode option is in the menu, but it still uses a TODO placeholder.
- There is no option yet to remove a card if I don’t need it anymore.
- The file format is simple and does not handle edge cases like very long lines or special characters.

**What I would need to do to consider this project “complete”:**
- Fully implement quiz mode with answer checking and scoring.
- Add a “delete flashcard” feature from the menu.
- Improve error handling for file loading (for example, show a message if the file is missing or broken).
- Add some basic stats, like number of cards and how many were marked correct.

---

## Section 3: Time Estimate for Remaining Work

Here is my estimate for the remaining pieces:

| Remaining Item                 | Time Estimate | Priority    |
|--------------------------------|--------------:|------------:|
| Implement quiz mode            |      3–4 hrs  | Must-have   |
| Delete flashcard by question   |      1–2 hrs  | Should-have |
| Better file error handling     |      1–2 hrs  | Should-have |
| Add basic statistics (accuracy)|      2–3 hrs  | Nice-to-have|
| Extra polish on UI/messages    |      1–2 hrs  | Nice-to-have|

---

## Section 4: What I Learned

During this project, I learned and practiced a lot of C++ concepts:

- How to design and use **classes** (`Flashcard`, `FlashcardManager`) with headers and .cpp files.
- How to store objects in a `std::vector` and loop through them.
- How to write and run **unit tests** using small test programs.
- How to use **file I/O** (`ifstream` and `ofstream`) to save and load data.
- How to think about program flow and user experience in a console app.

**Hardest parts of the project:**
- Getting CMake, CLion, and GitHub all set up correctly.
- Understanding how everything connects: main.cpp, classes, CMakeLists, and tests.
- Making sure the file format for save/load was consistent so loading works correctly.
- Keeping track of all the features and checkpoints at the same time.

**What I would do differently if I started over:**
- Plan the features and file format more clearly at the start.
- Start the tests earlier instead of writing them after everything.
- Commit to GitHub more often with smaller changes.
- Leave more time for quiz mode and “delete” feature.

**What I am most proud of:**
- I got three main features (Add, Review, Save/Load) all working together.
- I wrote multiple test files and used them to catch mistakes.
- I pushed through setup problems and build errors instead of giving up.
- I now have a working study tool that actually feels useful.

**How my understanding of data structures changed:**
- I got more comfortable using `std::vector` and indexing it safely.
- I understand better how objects live inside containers and how methods like `push_back`, `size`, and `erase` work.
- I saw how classes and vectors together can model something real, like a deck of flashcards.

---

## Section 5: Time Log

These are rough estimates of how much time I spent across the whole project:

- **Planning and design:** 3–4 hours
- **Implementation (coding features):** 10–12 hours
- **Testing and debugging:** 6–8 hours
- **Documentation and reflection (README, plans, tests, reflections):** 4–5 hours

**Total estimated time:** about **23–29 hours** over all checkpoints and the final submission.
