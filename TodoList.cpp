#include "TodoList.h"

TodoList::TodoList() {
    duedate = "";
    task = "";
    tempLine = "";
}
TodoList::~TodoList() {}

/*
*   Adds an item to the todo list with the data specified by the string "_duedate" and the task specified by "_task"
*/
void TodoList::add(string _duedate, string _task) {
    duedate = _duedate;
    task = _task;
    
    outFile.open("todo.txt", ios::app);
    if (outFile.is_open()) {
        outFile << duedate << " " << task << endl;
    }
    else {
        cout << "Error opening file.\n";
    }
    
    outFile.close();
}


int TodoList::removeTask(string _task) {
    task = _task;
    inFile.open("todo.txt");
    temp.open("temp.txt");
    tempLine = "";
    int found = 0;
    
    while (!inFile.eof()) {
        getline(inFile, tempLine);

        if (tempLine.find(task) >= 0 && tempLine.find(task) < tempLine.size()) {
            found = 1;
        }
        else if (tempLine.size() == 0) {
            break;
        }
        else {
            temp << tempLine << endl;
        }
        
    }

    inFile.close();
    temp.close();
    
    remove("todo.txt");
    rename("temp.txt", "todo.txt");
    
    return found;
}

void TodoList::printTodoList() {
    inFile.open("todo.txt");
    tempLine = "";
    
    cout << endl;
    while (!inFile.eof()) {
        getline(inFile, tempLine);

        cout << tempLine << endl;
    }
    cout << endl;
    inFile.close();
}

void TodoList::printDaysTasks(string _date) {
    inFile.open("todo.txt");
    duedate = _date;
    tempLine = "";
    
    cout << endl;
    while (!inFile.eof()) {
        getline(inFile, tempLine);
        if (tempLine.find(duedate) >= 0 && tempLine.find(duedate) < tempLine.size()) {
            cout << tempLine << endl;
        }
    }
    cout << endl;
    
    inFile.close();
}