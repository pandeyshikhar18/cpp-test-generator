# cpp-test-generator

🚀 A C++ Unit Test Generator Tool using Large Language Models (LLM), Google Test, and YAML-based instruction prompts.

This tool automatically generates, refines, and improves unit tests for any C++ application using build feedback, test outputs, and code coverage analysis.

---

## 📌 Features

- 🧠 LLM-powered test generation (via YAML prompts)
- 🧪 Google Test integration for structured C++ unit testing
- 🔁 Iterative test refinement using LLMs, build logs, and coverage data
- ⚙️ Handles build issues, fixes missing headers, and eliminates duplicate tests
- 📊 Integrates with `gcov` and `lcov` to generate code coverage reports
- 🛠️ Shell script automates the build, test, and coverage flow

---

## 📁 Project Structure

cpp-test-generator/
├── src/ # C++ source files
├── include/ # Header files
├── tests/ # Generated unit tests
├── prompts/ # YAML instruction prompts for LLM
├── build_logs/ # Compilation and test logs
├── out/ # HTML test coverage reports
├── CMakeLists.txt # Build instructions
├── run.sh # Script to run build & coverage
├── README.md # This documentation file
├── report.md # Summary of approach & coverage

yaml
Copy
Edit

---

## 🔧 Requirements

Ensure the following are installed:

- `g++` (C++ compiler)
- `cmake`
- `gcov` + `lcov` (for coverage reports)
- Google Test (manually installed or cloned)
- (Optional) OpenAI/GPT or self-hosted LLM (e.g., LLaMA, Claude, etc.)

---

## 🚀 How to Run

1. Make the script executable:
```bash
chmod +x run.sh
Run the tool:

bash
Copy
Edit
./run.sh
View the coverage report:

bash
Copy
Edit
out/index.html
🤖 How the LLM Works
Initial Generation:
Uses prompts/initial_prompt.yaml to instruct the LLM to generate unit tests from source files.

Refinement Phase:
Uses prompts/refine_prompt.yaml to remove duplicate tests, fix issues, and add edge cases.

You can use any GPT-based model (ChatGPT, Claude, LLaMA, etc.) and paste the YAML + source files to generate tests.

🧪 Sample Test File (Generated)
cpp
Copy
Edit
#include <gtest/gtest.h>
#include "math_utils.h"

TEST(MathUtilsTest, Add) {
    EXPECT_EQ(add(2, 3), 5);
    EXPECT_EQ(add(-1, 1), 0);
}

TEST(MathUtilsTest, Subtract) {
    EXPECT_EQ(subtract(5, 3), 2);
    EXPECT_EQ(subtract(0, 1), -1);
}
📊 Sample Code Coverage Summary
Metric	Result
Statements	100%
Functions	100%
Branches	87%

📁 Open out/index.html to view detailed coverage.

📄 Deliverables
✅ tests/ folder with non-duplicate, refined unit tests

✅ prompts/ folder with YAML instructions

✅ build_logs/ folder with test logs

✅ out/ folder with HTML code coverage reports

✅ report.md with test coverage summary and architecture explanation

🧑‍💻 Author
Shikhar Pandey
🔗 GitHub: @pandeyshikhar18

🏁 License
This project is licensed for educational, academic, and personal use only.
