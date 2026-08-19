# 3-bucket-map

# Employee Directory Management System

A clean C++ console application that simulates an interactive employee directory for a technology company. This project showcases data organization using STL containers, dynamic memory management, and structured object-oriented programming.

## Key Highlights & Concepts Demonstrated
* **Advanced STL Data Structures**: Utilizes a nested map data structure (`std::map<std::string, std::vector<Employee*>>`) to bucket and store dynamic lists of employees indexed by their job category.
* **Safe Memory Management**: Implements a dedicated manual `cleanup` sequence to iterate through pointers, free dynamic heap memory allocations (`delete`), and clear vectors to prevent memory leaks.
* **User-Interactive CLI**: Features a responsive `do-while` control loop that takes user input to dynamically filter and display clean tabulated data tables on screen.

## Tech Stack
* **Language**: C++
* **IDE**: Visual Studio 2026
* **Compiler**: MSVC (Microsoft Visual C++)

## How to Run This Project
1. **Clone the repository**:
   ```bash
   git clone https://github.com/xknifevsfacex/3-Bucket-Map.git
   ```
2. **Open in Visual Studio**:
   * Open Visual Studio 2026.
   * Go to `File > Open > Project/Solution` and choose your directory.
3. **Build & Run**:
   * Press `F5` to compile and launch the interactive console screen.

## Sample Visual Flow
```text
Directory for Teckity Tecky Tech Inc. (Stanton)

Employee Categories:
1. Project Managers
2. Programmers
3. Support Staff
4. Exit

Choice: 2

Programmers:
-----------------
Name    ID
-----------------
David   901234
Eve     900987
Frank   900123
-----------------
```
***

### Next Steps to Finalize
1. **Add the file**: Follow the steps from our previous turn to create this `README.md` file inside your Visual Studio project directory.
2. **Commit and Push**: Type "Added README documentation" in your **Git Changes** tab, click **Commit All**, and click the **Up Arrow (Push)** button.

Once you refresh your GitHub link in your browser, this beautiful formatted layout will instantly appear on the front page of your project!

---

If you'd like, I can help you write the **exact text bullet points** for this project to put right onto your resume next. How does that sound?
