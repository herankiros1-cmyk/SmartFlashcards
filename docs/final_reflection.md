# Final Reflection – Smart Flashcards

## Section 1: Project Summary

My project is a command-line flashcard study tool called **Smart Flashcards**.  
It allows the user to create flashcards, review them, quiz themselves, and save/load the deck from a file so the cards stay between runs.

**Features I implemented:**
- Add new flashcards
- Review flashcards (question → answer → mark correct/incorrect)
- Save all flashcards to a text file
- Load flashcards at program start
- Basic quiz mode (user types answers and gets a score)
- Automated tests for adding, reviewing, and saving/loading

**What my project does well:**
- Simple and clear menu
- Smooth workflow (add → review → quiz → save)
- Doesn’t crash on empty decks
- Saves and loads consistently
- Works reliably across multiple sessions

---

## Section 2: What Remains

Some features are not finished yet.

**Not implemented or only partly implemented:**
- Delete flashcard by question
- More advanced quiz answer checking
- Statistics such as accuracy or total correct
- Better error handling for corrupted files

**Remaining bugs or issues:**
- Quiz mode does not update each flashcard’s stored correctness
- No delete option yet
- Save/load format is simple and could break with certain characters

**What I would need to make this project fully complete:**
- Improve quiz mode
- Add delete flashcard feature
- Add simple statistics
- Strengthen error handling

---

## Section 3: Time Estimate for Remaining Work

Here is my estimate for the remaining pieces:

| Remaining Item               | Time Estimate | Priority     |
|-----------------------------|--------------:|--------------|
| Implement quiz mode fully   | 3–4 hrs       | Must-have    |
| Delete flashcard feature    | 1–2 hrs       | Should-have  |
| Better file error handling  | 1–2 hrs       | Should-have  |
| Add stats (accuracy, totals)| 2–3 hrs       | Nice-to-have |
| UI/message polishing        | 1–2 hrs       | Nice-to-have |

---

## Section 4: What I Learned

I learned a lot about C++ and building a full project from scratch.

**Skills I improved:**
- Designing and using classes across .h and .cpp files
- Storing objects in vectors and looping through them
- Writing small automated test programs
- Using file I/O to save and load data
- Understanding how a full project connects (main, classes, tests, CMake)

**Hardest parts:**
- Fixing CLion/CMake/GitHub setup issues
- Making save/load consistent
- Debugging build errors
- Keeping track of everything between checkpoints

**What I would do differently:**
- Plan file format earlier
- Write tests sooner
- Commit smaller changes more often
- Leave more time for quiz mode and delete feature

**What I am proud of:**
- I completed three major features that actually work
- I wrote multiple test files and used them effectively
- I solved many setup and build errors
- The project turned into a usable flashcard tool

**How my understanding improved:**
- I learned how vectors really work
- I understand object management better
- I saw how classes + vectors can model real systems like flashcards

---

## Section 5: Time Log

My estimated time spent across the project:

- **Planning & design:** 3–4 hours
- **Implementation:** 10–12 hours
- **Testing & debugging:** 6–8 hours
- **Documentation & reflection:** 4–5 hours

**Total time:** **23–29 hours**

