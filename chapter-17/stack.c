#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct node {
    int value;
    struct node* next;
};

struct node* top = NULL;

void make_empty(void)
{
    struct node* temp;

    while (top != NULL) {
        temp = top;
        top = top->next;
        free(temp);
    }
}

bool is_empty(void)
{
    return top == NULL;
}

bool push(int i)
{
    struct node* new_node;

    new_node = malloc(sizeof(*new_node));
    if (new_node == NULL) {
        return false;
    }

    new_node->value = i;
    new_node->next = top;
    top = new_node;

    return true;
}

int pop(void)
{
    struct node* temp;
    int i;

    if (is_empty()) {
        printf("[ERROR] Stack underflow! Program terminating...");
        exit(EXIT_FAILURE);
    }

    i = top->value;
    temp = top;
    top = top->next;
    free(temp);

    return i;
}
