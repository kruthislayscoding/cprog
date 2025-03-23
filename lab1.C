# Step 1: Open Terminal on Ubuntu

# Step 2: Create two directories
mkdir project_dir1  # Creates the first directory
mkdir project_dir2  # Creates the second directory

# Step 3: List files in the current directory
ls  # Lists all files and directories in the current directory

# Step 4: Print the present working directory
pwd  # Displays the full path of the current directory

# Step 5: Create files inside the first directory
cd project_dir1  # Change to project_dir1
touch file1.c  # Creates an empty C file
touch file2.c  # Creates another empty C file

# Step 6: List files with details
ls -l  # Lists all files with their permissions, owner, size, and modification date
# File permissions:
# r - readable
# w - writable
# x - executable

# Step 7: Navigate back to the main directory and repeat for the second directory
cd ..  # Return to the main directory
cd project_dir2  # Change to project_dir2
touch file3.c  # Creates an empty C file
touch file4.c  # Creates another empty C file

# Step 8: Remove a directory (only works if it's empty)
cd ..  # Return to main directory
rmdir project_dir2  # Deletes project_dir2 (won't work if it contains files)

# Step 9: Open and edit file1.c using vi editor
vi project_dir1/file1.c  # Opens file1.c in vi editor
# Press 'i' to enter insert mode and write the following code:
/* file1.c - A simple C program */
#include <stdio.h>
int main() {
    printf("Hello from file1!\n");
    return 0;
}
# Press ESC, then type ':wq' to save and exit

# Step 10: Open and edit file2.c
vi project_dir1/file2.c  # Opens file2.c in vi editor
# Press 'i' to enter insert mode and write the following code:
/* file2.c - A simple function */
#include <stdio.h>
void greet() {
    printf("Greetings from file2!\n");
}
# Press ESC, then type ':wq' to save and exit

# Step 11: Clear the terminal
clear  # Clears the screen

# Step 12: Copy file1.c to project_dir2
cp project_dir1/file1.c project_dir2/  # Copies file1.c to project_dir2

# Step 13: Move (rename) file2.c
mv project_dir1/file2.c project_dir1/helper.c  # Renames file2.c to helper.c

# Step 14: Remove file3.c
rm project_dir2/file3.c  # Deletes file3.c from project_dir2

# Step 15: Concatenate and display file contents
cat project_dir1/file1.c  # Displays the contents of file1.c
cat project_dir1/file1.c > project_dir1/file_combined.c  # Redirects content into a new file

# Step 16: Display the beginning and middle portions of a file
head -n 4 project_dir1/file1.c  # Shows the first 4 lines of file1.c
tail -n 4 project_dir1/file1.c  # Shows the last 4 lines of file1.c

# Step 17: Combine two files into a third file
cat project_dir1/file1.c project_dir1/helper.c > project_dir1/merged.c  # Merges contents

# Step 18: Show history of commands used
history  # Displays a list of previously executed commands

# Step 19: Describe a command
man ls  # Opens the manual page for the ls command

# Step 20: Compile C programs
gcc project_dir1/file1.c project_dir1/helper.c -o project_dir1/output  # Compiles C files

# Step 21: Execute compiled program
./project_dir1/output  # Runs the compiled program
