# Overview

This repository contains the practice programs I created to learn the C programming language. I started to learn C on the **10th of July** and would like to practice at least one program daily to build an effective learning habit.

# Learning Resources

Currently, I am following a few YouTube videos and articles listed below. I will add more once I complete these -

1. [**Bro Code**](https://www.youtube.com/c/BroCodez): [C Full Course 🕹️ -Learn to code today-【𝙁𝙧𝙚𝙚】](https://youtu.be/87SH2Cn0s9A)

2. [**The Valley of Code**](https://thevalleyofcode.com/): [C Handbook](https://thevalleyofcode.com/c/)

3. [**Beej**](https://beej.us): [Beej's Guide to C Programming](https://beej.us/guide/bgc/)

# Daily Progress

I will save **5-10 minutes** from my daily routine and write down what I learned today.

## 7th July, 2022

Since I reset my laptop, I had to reinstall VSCode and configure necessary tools like Git and GnuPG. These articles made the process easier -

-   [**How to Install Git in VS Code**](https://www.geeksforgeeks.org/how-to-install-git-in-vs-code/)
-   [**How (and why) to sign Git commits**](https://withblue.ink/2020/05/17/how-and-why-to-sign-git-commits.html#setting-up-our-git-to-sign-commits)

I downloaded the **Gpg4win** binary release from [**GnuPG's downloads section**](https://gnupg.org/download/#binary) and installed it on my system. Having done that I tried to sign my first Git commit using the terminal but got the following error message:

```
gpg: signing failed: secret key not available
error: gpg failed to sign the data
fatal: failed to write commit object
```

After looking up a few sites online, [**this Stack Overflow answer**](https://stackoverflow.com/a/51009405) finally solved the issue.

I signed two commits and called it a day!

---

## 8th July, 2022

Initially, I wanted to learn **C++** because it seemed intriguing. Later I found [**this comparison video about C, C++, and C#**](https://youtu.be/sNMtjs_wQiE) and decided to learn **C**. Also watched [**C in 100 Seconds**](https://youtu.be/U3aXWizDbQ4) to get an overview.

---

## 9th July, 2022

Today I collected several **C/C++ courses** and put them in [**this YouTube playlist**](https://www.youtube.com/playlist?list=PLaT_B7j20CQ3OQ4LNoea9FXA55xnWGBR5).

---

## 10th July, 2022 🎉

### 1. Compiling the C program as an executable

-   I learned about compilers (**GCC** and **Clang**) and how to install them. I haven't done this kind of thing before, so it seemed a bit confusing (especially the relation between **MinGW** and **GCC**). I ran through some issues while installing **MinGW** and found [**this video**](https://youtu.be/Zcy981HhGw0) that solved the problem.

-   I wrote [**my first C program**](./src/01-my-first-program.c) and compiled it as a Windows executable.

Having done that, I looked up for solutions to customize the executable's icon and file details. I came to know about **windres** and resource files. [**This Stack Overflow answer**](https://stackoverflow.com/a/708382) helped me to accomplish what I was trying to do.

### 2. Customizing the executable's appearance

-   I created an icon, dropped in the working directory, and created a `icon.rc` file -

    ```
    id ICON "my-program.ico"
    ```

-   I converted that `.rc` file into a `.res` file using the **windres** command -

    ```
    windres icon.rc -O coff -o icon.res
    ```

-   Then I compiled the C program with **GCC** -

    ```
    gcc 01-my-first-program.c icon.res -o 01-my-first-program.exe
    ```

### 3. Adding version information to the executable

-   I created another `.rc` file named `version.rc` and wrote the following -

    ```
    1 VERSIONINFO
    FILEVERSION     1,0,0,0
    PRODUCTVERSION  1,0,0,0
    BEGIN
    BLOCK "StringFileInfo"
    	BEGIN
    		BLOCK "040904E4"
    		BEGIN
    			VALUE "CompanyName", "Awesome Nonsense"
    			VALUE "FileDescription", "My First C Program"
    			VALUE "FileVersion", "1.0.0.0"
    			VALUE "InternalName", "01-my-first-program"
    			VALUE "LegalCopyright", "S. Shahriar <shadowshahriar.dev@gmail.com>"
    			VALUE "OriginalFilename", "01-my-first-program.exe"
    			VALUE "ProductName", "My App"
    			VALUE "ProductVersion", "1.0.0.0"
    		END
    	END
    BLOCK "VarFileInfo"
    	BEGIN
    		VALUE "Translation", 0x409, 1252
    	END
    END
    ```

-   Likewise, I converted the `.rc` file into a `.res` file -

    ```
    windres version.rc -O coff -o version.res
    ```

-   Then I compiled the program with both `.res` files -

    ```
    gcc 01-my-first-program.c icon.res version.res -o 01-my-first-program.exe
    ```

---

## 11th July, 2022

### 1. Inline and block comments

C comments are like JavaScript comments. We type two forward slashes for an inline comment -

```C
// This is a single line comment
```

...and two asterisks surrounded by forward slashes (`/**/`). Anything inside the asterisks are ignored by the compiler -

```C
/**
 * This
 * is
 * a
 * multi-line
 * comment
 */
```

### 2. Escape sequences and `printf`

-   Escape sequences are also the same as JavaScript. Escape sequences begin with a backslash followed by specific characters or symbols. For example - `\n`, `\t`, `\r`

-   Unlike `console.log`, the `printf` method in C enters inline text in the terminal.

### 3. Variables

-   Since **C is a statically typed language**, type checking is done at compile-time. (See [Stack Overflow answer: **What is the difference between statically typed and dynamically typed languages?**](https://stackoverflow.com/a/1520342))

-   A variable is an allocated space in the memory to store a value. We refer to the name of the variable to access its stored value. We need to tell what kind of data we store in the variable. This process is called **Declaration**.

-   Creating a variable is done in two steps - **Declaration** and **Initialization**. First, we specify the variable's data type, then we initialize it with a value.

-   To display a variable's value in a `printf` statement, we add our variable (`maxZoom`) as an argument and specify a placeholder (`%d`) in the statement -

    ```C
    int maxZoom = 5;
    printf("Maximum zoom is %d times", maxZoom);
    ```

    What placeholder we set depends on the variable's data type. For example -

    | Data Type                        | Placeholder |
    | -------------------------------- | ----------- |
    | `int` (Integer)                  | `%d`        |
    | `float` (Floating Point Number)  | `%f`        |
    | `char` (Single Character)        | `%c`        |
    | `char x[]` (Array of Characters) | `%s`        |

-   While initializing a variable, we use single quotes (`''`) for single characters and double quotes (`""`) for an array of characters. For example -

    ```C
    char zoomAxis = 'Y';
    char pane[] = "XZ";
    ```

---

## 12th July, 2022

### 1. Data Types and Format Specifiers

**The ANSI C spec standard** determines the minimum values of each type.

|          | Data Type                                    | Minimum Range                    | Format Specifier | Memory Size                    |
| -------- | -------------------------------------------- | -------------------------------- | ---------------- | ------------------------------ |
|          | **char** (Single Character)                  | -128 to 127                      | `%c` or `%d`     | 1 byte                         |
| unsigned | **char** (Single Character)                  | 0 to 255                         | `%c` or `%d`     | 1 byte                         |
|          | **char x[]** (Array of Characters)           |                                  | `%s`             |                                |
|          | **bool** (Boolean)                           | 0 (false) and 1 (true)           | `%d`             | 1 byte                         |
|          | **int** (Integer)                            | -2,147,483,648 to -2,147,483,647 | `%d`             | 4 bytes                        |
| unsigned | **int** (Integer)                            | 0 to 4,294,967,295               | `%u`             | 4 bytes                        |
|          | **short** (Integer)                          | -32,768 to 32,767                | `%d`             | 2 bytes                        |
|          | **long** (Integer)                           | -2,147,483,648 to -2,147,483,647 | `%ld`            | 4 bytes                        |
| unsigned | **long** (Integer)                           | 0 to 4,294,967,295               | `%lu`            | 4 bytes                        |
|          | **long long** (Integer)                      | -9 quintillion to 9 quintillion  | `%lld`           | 8 bytes                        |
| unsigned | **long long** (Integer)                      | 0 to 18 quintillion              | `%llu`           | 8 bytes                        |
|          | **float** (Floating Point Number)            | first 6-7 digits                 | `%f`             | 4 bytes (32 bits of precision) |
|          | **double** (Double of **float**'s precision) | first 15-16 digits               | `%lf`            | 8 bytes (64 bits of precision) |

-   `char` is generally used to hold letters of the ASCII chart (%, A, b...). But can be used to store small integers ranging from `-128` to `127`.
-   We can prepend `unsigned` keyword to start the range from 0. In this way, the range for the `char` type becomes `0` to `255`.
-   By default, most data types are already signed and we don't need to explicitly add the `signed` keyword.
-   `double` is more accurate than `float` because it has more precision and uses more memory.
-   Technically it takes **1 bit** to represent a `boolean`. But the `bool` type still takes **1 byte** of memory.

### 2. Overflow and Size of Data Types

-   **If we go beyond a type's range, it will reset to whatever the beginning is**. For example, the `unsigned char` can hold integers from `0` to `255`. If we initialize with `256`, the result becomes `0`.

-   The range for other integer types such as `int`, `short`, and `long` varies depending on the implementation and Operating System. We can create [a program to retrieve the size of data types](./src/05-size-of-the-types.c) using the `sizeof` method.

## 13th July, 2022

### 1. Format Specifiers

-   We use format specifiers in a `printf` statement to specify the type of the data we want to display. Most common format specifiers are -

    -   **%c** (Character)
    -   **%d** (Integer)
    -   **%s** (Array of Characters or _string_)
    -   **%f** (Float)
    -   **%lf** (Double)

-   We also use format specifiers to _format_ the type of data to be displayed -

    -   `%.1`: This one sets the decimal precision of a floating-point number. In other words, it specifies how many digits we want after the decimal point. For example -

    ```C
    float seek_at = 10.2324;
    printf("Seek at: %.2f\n", seek_at); // Seek at: 10.23
    printf("Seek at: %.3f\n", seek_at); // Seek at: 10.232
    ```

    -   `%1`: This one sets a minimum field width for the data. For example -

    ```C
    int seek = 10;
    printf("Seek to: %9d\n", seek); // Seek to: <7 spaces>10
    printf("Seek to: %4d\n", seek); // Seek to: <2 spaces>10
    ```

    -   `%-`: By default, the field text is **right-aligned**. We can append a minus after the percent sign for **left-aligned** text. For example -

    ```C
    int seeknext = 10;
    int seekprev = 7;
    printf("Next: %-9d\n", seeknext); // Seek to: 10<7 spaces>
    printf("Back: %-9d\n", seekprev); // Seek to: 7<8 spaces>
    ```

    Obviously, we can mix them and create a custom format specifier -

    ```C
    float audience_retention = 57.33214;
    float click_through_rate = 6.461127;
    int impressions = 29501;

    printf("Audience Retention: %12.3f\n", audience_retention);
    printf("Click-through Rate: %12.3f\n", click_through_rate);
    printf("Impressions: %19d\n", impressions);
    ```

## 14th July, 2022

### 1. Constants

A constant is a fixed value that is unchanged during the program execution. That means a constant is a variable's value that **can't be initialized twice**. Let me clear it -

-   Regular variables can be initialized **more than one time** -

    ```C
    float pi = 3.141592; // declaration + initialization
    pi = 42.7;			 // re-initialization

    printf("%f", pi); // 42.700001
    ```

-   But `const` variables can be initialized **only once** -

    ```C
    const float PI = 3.141592;
    PI = 42.7;

    printf("%f", PI); // error: assignment of read-only variable 'PI'
    ```

    It is considered good practice to type constant variable names in upper case.

### 2. The `const` keyword vs `#define` directive

Alternatively, we can **initialize** a constant right after including the header files -

```C
#include <stdio.h>
#define RESOLUTION 1080

printf("%u", RESOLUTION); // 1080
```

In this way -

-   We omit the `=` and the semicolon `;`.
-   We don't **declare** the constant's data type because the compiler will infer that from the value.
