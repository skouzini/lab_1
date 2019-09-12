# lab_1
TPurpose: Review how to do the following in C++:

Read parameters from the command-line
Manipulate a few variables
Read and write to files
Implement and use a class
Use interface inheritance
 

Project Description: Create a simple program for keeping track of a TODO list.  The program allows users to add and remove items from a todo list, and to view tasks in the TODO list.

Your program should have the following functionality:

1.  It should store the tasks in a text file. I named my file TODOList.txt (and left it initially empty), but you can name it whatever you want.  You can use whatever file format you would like to do this (since only your program will be using the file).  I formatted this file such that a separate task was listed in each line of the file, by storing the due date of the task as the first word in the line, followed by a whitespace and then the task description. In this representation, an example file storing a TODO list with 3 tasks in it would look like this:

Sunday Take a nap
Tuesday Go to class
Thursday Complete Lab 1
To update your TODO list, you’ll need to develop the ability to read in this file, store it in a class object, and then to overwrite the contents of the file with the modified TODO list.  To practice interface inheritance using abstract classes, you should implement the abstract class TodoListInterface.h (click to retrieve).  This means that you’ll create the files TodoList.h and TodoList.cpp that implement the abstract class defined by TodoListInterface.hPreview the document.

 

2.  Your program should allow users to perform four actions:

Add a task to the TODO list,
Remove a task from the TODO list,
Print all tasks in the TODO list, and 
Print all tasks to be accomplished on a certain day.
The user will specify which task they desire to perform by running the program through the command-line with command-line arguments.  The four pure virtual functions specified in “TodoListInterface.h” (add, remove, printTodoList, and printDaysTasks) are designed to carry out these four actions.  You main.cpp file will need to call these four functions (and only these four functions) at the correct times. 

A) Add: To add a task to the TODO list, the user types (assuming the executable of your program is TODO):

./TODO add [date] [task]
For example, to add the task “Take a nap” on “Sunday”, the user would type:

./TODO add Sunday “Take a nap”
 

B) Remove: To remove a task from the TODO list, the user types:

./TODO remove [task]
For example, to remove the task “Take a nap”, the user would type:

./TODO remove “Take a nap”
 

C) Print all tasks: To print all tasks in the TODO list, the user would type:

./TODO printList
 

D) Print a day’s tasks: To print all tasks in the TODO list due on a certain day, the user would type:

./TODO printDay [day]
For example, to print out the tasks due on Sunday, the user would type:

./TODO printDay Sunday
 

3.  Since your main.cpp program can only call the four pure virtual functions specified in TodoListInterface.h, the constructor of your TodoList class (which implements TodoListInterface.h) should read the contents of the TODO list file (step 1), and your destructor should write out the contents (of the possibly modified TODO list) to this file.

 

Grading:

We'll be grading this assignment together in class.  We'll score it as follows:

+20 points: If your program allows you to add items to your TODO list using the command-line
+20 points: If your can remove items from your TODO list using the command-line
+20 points: If your program correctly prints out the TODO list when printList is specified
+20 points: If your program correctly prints out a specific day's TODO list when printDay is specified
+20 points: If your program still works when you replace your main.cpp file with somebody else's.
Of course, if your program isn't perfect when we grade it in class, you'll have the chance to fix up whatever isn't quite right with it and re-grade it.  The points are intended solely to guide you in what to do and make sure you know, rather that to judge your eternal worth
