#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node* next;
};

// Takes a pointer to the first node in the list,
// adds a node to the start of the list and returns it.
struct node* add_to_list(struct node* list, int n)
{
    struct node* new_node;

    new_node = malloc(sizeof(struct node));
    if (new_node == NULL) {
        printf("[ERROR] Malloc failed in add_to_list");
        exit(EXIT_FAILURE);
    }

    new_node->value = n;
    new_node->next = list;
    return new_node;
}

// Reads a series of integers from input,
// and stores them reversed in a linked list.
// Returns the first node in the list.
struct node* read_numbers(void)
{
    struct node* first = NULL;
    int n;

    printf("Enter a series of integers (0 to terminate): ");
    for (;;) {
        scanf("%d", &n);
        if (n == 0) {
            return first;
        }
        first = add_to_list(first, n);
    }
}

// Searches a linked list for the given integer,
// if found returns a pointer to the node,
// otherwise returns a NULL pointer.
struct node* search_list(struct node* list, int n)
{
    struct node* p;

    for (p = list; p != NULL; p = p->next) {
        if (p->value == n) {
            return p;
        }
    }
    return NULL;
}

struct node* delete_from_list(struct node* list, int n)
{
    struct node *cur, *prev;

    // Look through with a trailing pointer
    for (cur = list, prev = NULL; cur != NULL && cur->value != n; cur = cur->next, prev = cur) {
        ;
    }

    // We have failed to find the node with n
    if (cur == NULL) {
        return list;
    }

    // The node to be deleted is at the start of the list
    if (prev == NULL) {
        list = list->next;
    } else {
        prev->next = cur->next;
    }

    free(cur);
    return list;
}

int main(void)
{
    struct node* first = read_numbers();
    return 0;
}
