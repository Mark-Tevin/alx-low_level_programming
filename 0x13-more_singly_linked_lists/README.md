In this sinked linked task, i am expected to do the following
Write a function that prints all the elements of a listint_t list.
Write a function that returns the number of elements in a linked listint_t list.
Write a function that adds a new node at the beginning of a listint_t list
Write a function that adds a new node at the end of a listint_t list.
Write a function that frees a listint_t list.
Write a function that frees a listint_t list.
Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
Write a function that returns the nth node of a listint_t linked list.
Write a function that returns the sum of all the data (n) of a listint_t linked list
Write a function that inserts a new node at a given position.
Write a function that deletes the node at index index of a listint_t linked list
Write a function that reverses a listint_t linked list.
Write a function that prints a listint_t linked list.
Write a function that frees a listint_t list.

Prototype: size_t free_listint_safe(listint_t **h);
This function can free lists with a loop
You should go though the list only once
Returns: the size of the list that was free’d
The function sets the head to NULL
Write a function that finds the loop in a linked list.

Prototype: listint_t *find_listint_loop(listint_t *head);
Returns: The address of the node where the loop starts, or NULL if there is no loop
You are not allowed to use malloc, free or arrays
You can only declare a maximum of two variables in your function

