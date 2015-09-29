todo list

Specifications:
	
	An optional switch:

		-f : Once this switch is set, the following argument is considered as a text file name.
			If the switch is not set, the program operates on a default text file named "todo.txt"

	The program responds to three commands:

		* do : this commands must be followed by a number representing the position of the task being checked
			Once the task is proven to be existant, the command checks it.
		*list : this command displays the content of the file containing the list.
			It does not take any argument. Adding any text after it will result in no action.
		*add : this command takes a text as argument and adds it to the bottom of the list.
			If no argument is provided, no action will be taken.
