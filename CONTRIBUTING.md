# Contributing to Code Radar Solutions

Thank you for your interest in contributing to Code Radar Solutions! This document provides guidelines for contributing to this repository.

## 📋 Table of Contents

- [Code of Conduct](#code-of-conduct)
- [How Can I Contribute?](#how-can-i-contribute)
- [Submission Guidelines](#submission-guidelines)
- [Coding Standards](#coding-standards)
- [Directory Structure](#directory-structure)
- [Testing Your Code](#testing-your-code)

## 🤝 Code of Conduct

- Be respectful and inclusive
- Provide constructive feedback
- Focus on what is best for the community
- Show empathy towards other contributors

## 🎯 How Can I Contribute?

### 1. Adding New Solutions

You can contribute by adding solutions to new programming problems:

- Ensure the problem is not already solved in the repository
- Follow the directory naming convention
- Write clean, well-documented code
- Test your solution thoroughly

### 2. Improving Existing Solutions

Help improve existing solutions by:

- Optimizing algorithms for better time/space complexity
- Fixing bugs or logical errors
- Improving code readability
- Adding comments for complex logic
- Handling additional edge cases

### 3. Reporting Bugs

If you find a bug in any solution:

1. Check if the issue already exists
2. Open a new issue with:
   - Problem name and directory
   - Description of the bug
   - Expected vs actual behavior
   - Test case that reproduces the bug

### 4. Documentation

Improve documentation by:

- Fixing typos or grammatical errors
- Adding more examples
- Clarifying existing explanations
- Adding problem descriptions

## 📝 Submission Guidelines

### Before Submitting

1. **Search existing problems**: Check if a similar solution already exists
2. **Test thoroughly**: Ensure your code works with various test cases
3. **Follow standards**: Adhere to the coding standards outlined below
4. **Compile without errors**: Your code must compile without warnings or errors

### Submitting a Pull Request

1. **Fork the repository**
   ```bash
   # Click the 'Fork' button on GitHub
   ```

2. **Clone your fork**
   ```bash
   git clone https://github.com/YOUR-USERNAME/Code-Radar-Solutions.git
   cd Code-Radar-Solutions
   ```

3. **Create a new branch**
   ```bash
   git checkout -b add-solution-problem-name
   ```

4. **Add your solution**
   ```bash
   # Create directory with proper naming convention
   mkdir "Problem Name@@UniqueID"
   cd "Problem Name@@UniqueID"
   # Create your code.c file
   ```

5. **Test your solution**
   ```bash
   gcc code.c -o solution
   ./solution
   # Test with multiple inputs
   ```

6. **Commit your changes**
   ```bash
   git add .
   git commit -m "Add solution for Problem Name"
   ```

7. **Push to your fork**
   ```bash
   git push origin add-solution-problem-name
   ```

8. **Create a Pull Request**
   - Go to your fork on GitHub
   - Click "New Pull Request"
   - Provide a clear description of your changes

## 💻 Coding Standards

### File Naming

- **Directory name**: `Problem Name@@UniqueID/`
  - Use clear, descriptive problem names
  - Separate words with spaces
  - Include the unique identifier after `@@`
- **Code file**: Always name it `code.c`

### Code Style

#### Header Files

Always include necessary header files:
```c
#include <stdio.h>
#include <string.h>  // If using string functions
#include <stdlib.h>  // If using dynamic memory
#include <ctype.h>   // If using character type functions
```

#### Main Function

Standard main function format:
```c
int main() {
    // Your code here
    return 0;
}
```

#### Variable Naming

- Use descriptive names: `studentCount` instead of `sc`
- Use camelCase or snake_case consistently
- Avoid single-letter variables except for loops (`i`, `j`, `k`)

#### Code Formatting

```c
// Good spacing and indentation
int main() {
    int num;
    scanf("%d", &num);
    
    if (num > 0) {
        printf("Positive\n");
    } else {
        printf("Non-positive\n");
    }
    
    return 0;
}
```

#### Comments

Add comments for:
- Complex algorithms
- Non-obvious logic
- Important edge cases

```c
// Check if the number is a perfect square
int isPerfectSquare(int num) {
    int sqrt_num = (int)sqrt(num);
    return (sqrt_num * sqrt_num == num);
}
```

### Input/Output Standards

#### Reading Input

```c
// For integers
int num;
scanf("%d", &num);

// For strings with spaces
char str[1000];
fgets(str, sizeof(str), stdin);

// Remove newline from fgets
int len = strlen(str);
if (len > 0 && str[len - 1] == '\n') {
    str[len - 1] = '\0';
}
```

#### Printing Output

```c
// Use appropriate format specifiers
printf("%d\n", intValue);        // Integer
printf("%.2f\n", floatValue);    // Float with 2 decimals
printf("%s\n", stringValue);     // String
```

### Error Handling

Consider edge cases:
```c
// Check for empty strings
if (strlen(str) == 0) {
    printf("Empty string\n");
    return 0;
}

// Check for division by zero
if (divisor == 0) {
    printf("Cannot divide by zero\n");
    return 0;
}

// Validate array bounds
if (index < 0 || index >= arraySize) {
    printf("Invalid index\n");
    return 0;
}
```

## 📁 Directory Structure

Each solution must follow this structure:

```
Problem Name@@UniqueID/
└── code.c
```

Example:
```
Check if Array is Sorted@@676c02002dbc8c3e7a280b6f/
└── code.c
```

## ✅ Testing Your Code

### Compilation Test

```bash
gcc -Wall -Wextra -Werror code.c -o solution
```

Your code should compile without any warnings or errors.

### Test Cases

Test your solution with:

1. **Normal cases**: Typical expected inputs
2. **Edge cases**: 
   - Empty inputs
   - Single element
   - Maximum/minimum values
   - Zero values
3. **Boundary cases**:
   - Array size = 1
   - String length = 0
   - Negative numbers
4. **Special cases**:
   - All same elements
   - Already sorted/reverse sorted
   - Duplicate values

### Sample Test Workflow

```bash
# Compile
gcc code.c -o solution

# Test case 1: Normal input
echo "5 3 8 1" | ./solution

# Test case 2: Edge case
echo "0" | ./solution

# Test case 3: Negative numbers
echo "-5 -3 -8" | ./solution
```

## 🔄 Review Process

After submitting a pull request:

1. **Automated checks**: Your code will be checked for compilation
2. **Code review**: Maintainers will review your code
3. **Feedback**: You may receive suggestions for improvements
4. **Approval**: Once approved, your PR will be merged

## 📚 Resources

### Learning C Programming
- [C Programming Documentation](https://en.cppreference.com/w/c)
- [GeeksforGeeks C Tutorials](https://www.geeksforgeeks.org/c-programming-language/)
- [Learn-C.org](https://www.learn-c.org/)

### Coding Standards
- [GNU Coding Standards](https://www.gnu.org/prep/standards/)
- [Linux Kernel Coding Style](https://www.kernel.org/doc/html/latest/process/coding-style.html)

## ❓ Questions?

If you have questions about contributing:

1. Check existing issues and pull requests
2. Open a new issue with the "question" label
3. Reach out to the maintainers

## 🙏 Thank You!

Every contribution, no matter how small, helps make this repository better for everyone. We appreciate your time and effort!

---

Happy Coding! 🚀
