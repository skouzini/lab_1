make :
	g++ main.cpp TodoList.cpp TodoList.h TodoListInterface.h -lm -o todo
	
clean : 
	todo main.cpp TodoList.cpp TodoList.h TodoListInterface.h