## Get Next Line Project Summary

Get Next Line (GNL) is a project at 42 where you develop a function that reads a line from a file descriptor. The goal is to create a function capable of reading lines from any given file descriptor, one line at a time, until the end of the file is reached or an error occurs. This project helps to reinforce your understanding of file manipulation and memory management in C programming.

*For more information, please refer to the subject in the git.*

## Installation

To use Get Next Line, follow the steps below:

1. Clone the project from the Git repository:
```bash
git clone <link_to_repository>
cd get_next_line
```

2. Compile the source code using the provided Makefile:
```bash
make
```

3. If you want to enable additional functionality, such as handling multiple file descriptors or custom buffer sizes, use the `make bonus` command:
```bash
make bonus
```

4. If you want to specify a custom buffer size, use the `BUFFER_SIZE` flag during compilation. For example, to set the buffer size to 64, compile with:
```bash
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=64 your_source_files.c get_next_line.c get_next_line_utils.c -o your_executable
```

5. Include the header file `get_next_line.h` in your source files where you want to use the function.

6. You are now ready to use Get Next Line in your project!

## Usage

To use Get Next Line in your project, call the function `get_next_line(fd, &line)` where `fd` is the file descriptor of the file you want to read and `line` is a pointer to a character pointer that will store the line read from the file.

## Bonus Features

For bonus functionality, you can modify the Get Next Line function to handle multiple file descriptors and/or custom buffer sizes. Additionally, you can implement error handling and improve efficiency for large files or special cases.

## Notes

- Make sure to handle memory allocation and deallocation properly to avoid memory leaks.
- Test your implementation thoroughly with different input files and edge cases.

