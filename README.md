# Low-level programming and Algorithm
## Introduction
Low-level programming is often described as machine-oriented. It is also close to computer peripherals and requires knowledge of the processor's instructions and orientation within the relationships of internal systems or related devices.

Low-level programming aims to guide a specific language compiler to use machine code instructions that will perform the tasks in the fastest and safest possible way, using the minimum amount of memory. It often uses the individual advantages of the core or system periphery to achieve this. 
## C Programming Language
![C Programming ](https://www.geeksforgeeks.org/wp-content/uploads/Clanguage-768x256.png)

C is a procedural programming language with a static system that has the functionality of structured programming, recursion, and lexical variable scoping. C was created with constructs that transfer well to common hardware instructions. It has a long history of use in programs that were previously written in assembly language. 

C programming language is a machine-independent programming language that is mainly used to create many types of applications and operating systems such as Windows, and other complicated programs such as the Oracle database, Git, Python interpreter, and games and is considered a programming foundation in the process of learning any other programming language. Operating systems and diverse application software for computer architectures ranging from supercomputers to PLCs and embedded systems are examples of such applications.

![Structure of C program](https://media.geeksforgeeks.org/wp-content/cdn-uploads/StructureOfCprogram.png)

[Learn more](https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=&cad=rja&uact=8&ved=2ahUKEwjz9pCBqNj5AhVI4aQKHWp9C28QFnoECAUQAQ&url=https%3A%2F%2Fwww.geeksforgeeks.org%2Fc-programming-language%2F&usg=AOvVaw0d4Ze3JmG2Nr4wVJa7YXk6)

## Requirements
### C
* Allowed editors: `vi`, `vim`, `emacs`
* All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* Your code should use the `Betty` style. It will be checked using [`betty-style.pl`](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [`betty-doc.pl`](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
## More Info
### Betty linter
To run the Betty linter just with command `betty <filename>`:

* Go to the [Betty](https://alx-intranet.hbtn.io/rltoken/wQ4sMfsWfxvyfN67Sc11zA) repository
* Clone the [repo](https://alx-intranet.hbtn.io/rltoken/wQ4sMfsWfxvyfN67Sc11zA) to your local machine
* `cd` into the Betty directory
* Install the linter with `sudo ./install.sh`
* `emacs` or `vi` a new file called `betty`, and copy the script below:
```
#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
```
* Once saved, exit file and change permissions to apply to all users with `chmod a+x betty`
* Move the `betty` file into `/bin/` directory or somewhere else in your `$PATH` with `sudo mv betty /bin/`

You can now type `betty <filename>` to run the Betty linter!

## PROJECTS
1. [0x00-hello_world](https://github.com/MarzouqAdebayo/alx-low_level_programming/tree/master/0x00-hello_world)
