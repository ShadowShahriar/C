# Overview

This repository contains the practice programs I created to learn the C programming language. I started to learn C on the **10th of July** and would like to practice at least one program daily to build an effective learning habit.

# Learning Resources

Currently, I am following a few YouTube videos and articles listed below. I will add more once I complete these -

1. [**Bro Code**](https://www.youtube.com/c/BroCodez): [C Full Course 🕹️ -Learn to code today-【𝙁𝙧𝙚𝙚】](https://youtu.be/87SH2Cn0s9A)

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
