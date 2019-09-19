#include <iostream>
#include <string>
#include <fstream>
#include "TodoListInterface.h"
#include "TodoList.h"

using namespace std;

int main(int argc, char const *argv[]) {
    //string command;
    string date;
    string task;
    //read in todo.txt
   TodoList *todo = new TodoList();
   
   if (argc > 1) {
       string command = argv[1];
       if (command == "add" && argc >= 4) {
           
        //add task to todo.txt
            //./TODO add [date] [task]
            //./TODO add Sunday “Take a nap”
            date = argv[2];
            task = argv[3];
            
            todo->add(date, task);
            
            cout << "Added \"" << date << " " << task << "\" to todo.txt\n\n";
       }
       else if (command == "remove" && argc >= 3) {
               
               if (todo->removeTask(argv[2]) == 1) {
                   cout <<  endl << "Removed \"" << argv[2] << "\" from todo.txt\n\n";
               }
               else {
                   cout << "Error: could not find \"" << argv[2] << "\" in todo.txt\n\n";
               }
        //remove task from todo.txt
            //./TODO remove [task]
            //./TODO remove “Take a nap”

       }
       else if (command == "printList") {
             
        todo->printTodoList();
  
       }
       else if (command== "printDay" && argc >= 3) {
        
        todo->printDaysTasks(argv[2]);
        //pring tasks from only one day
            //./TODO printDay [day]
            //./TODO printDay Sunday

       }
       else {
           cout << "Error: insufficient arguments.\n\n";
       }
   }
   else {
       cout << "Error: insufficient arguments.\n\n";
   }
    
    delete todo;    
    
    return 0;
}