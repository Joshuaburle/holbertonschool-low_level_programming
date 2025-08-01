# Doubly Linked Lists

This project contains implementations of functions to manipulate doubly linked lists in C.

## Requirements

- All files compiled on Ubuntu 20.04 LTS using gcc
- Code follows Betty style guidelines
- No global variables allowed
- Maximum 5 functions per file
- Only allowed standard library functions: malloc, free, printf, exit
- All function prototypes included in lists.h header file

## Data Structure

The project uses the following data structure for doubly linked lists:

```c
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

## Tasks

### 0. Print list
Function that prints all elements of a dlistint_t list.
- **File:** 0-print_dlistint.c
- **Prototype:** `size_t print_dlistint(const dlistint_t *h);`
- **Returns:** the number of nodes

### 1. List length
Function that returns the number of elements in a linked dlistint_t list.
- **File:** 1-dlistint_len.c
- **Prototype:** `size_t dlistint_len(const dlistint_t *h);`
- **Returns:** the number of elements

### 2. Add node
Function that adds a new node at the beginning of a dlistint_t list.
- **File:** 2-add_dnodeint.c
- **Prototype:** `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
- **Returns:** the address of the new element, or NULL if it failed

### 3. Add node at the end
Function that adds a new node at the end of a dlistint_t list.
- **File:** 3-add_dnodeint_end.c
- **Prototype:** `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
- **Returns:** the address of the new element, or NULL if it failed

### 4. Free list
Function that frees a dlistint_t list.
- **File:** 4-free_dlistint.c
- **Prototype:** `void free_dlistint(dlistint_t *head);`

### 5. Get node at index
Function that returns the nth node of a dlistint_t linked list.
- **File:** 5-get_dnodeint.c
- **Prototype:** `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
- **Returns:** the nth node, or NULL if the node does not exist

### 6. Sum list
Function that returns the sum of all the data (n) of a dlistint_t linked list.
- **File:** 6-sum_dlistint.c
- **Prototype:** `int sum_dlistint(dlistint_t *head);`
- **Returns:** the sum of all data, or 0 if the list is empty

### 7. Insert at index
Function that inserts a new node at a given position.
- **File:** 7-insert_dnodeint.c
- **Prototype:** `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`
- **Returns:** the address of the new node, or NULL if it failed

### 8. Delete at index
Function that deletes the node at index of a dlistint_t linked list.
- **File:** 8-delete_dnodeint.c
- **Prototype:** `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
- **Returns:** 1 if it succeeded, -1 if it failed

## Compilation

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 [main_file] [function_file] -o [output]
```

## Author

Project developed as part of Holberton School curriculum.