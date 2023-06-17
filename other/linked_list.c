#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

struct Node {
    int data;
    struct Node* next;
};

void add_node_at_end(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    // If the list is empty, make the new node the head
    if (head->next == NULL) {
        head->next = newNode;
        return;
    }

    // Traverse to the last node
    struct Node* current = head->next;
    while (current->next != NULL) {
        current = current->next;
    }

    // Add the new node to the end
    current->next = newNode;
}

void delete_last_node(struct Node* head) {
    // If the list is empty or has only one node
    if (head->next == NULL || head->next->next == NULL) {
        free(head->next);
        head->next = NULL;
        return;
    }

    // Traverse to the second-to-last node
    struct Node* current = head->next;
    while (current->next->next != NULL) {
        current = current->next;
    }

    // Delete the last node
    free(current->next);
    current->next = NULL;
}

void print_linked_list(struct Node* head) {
    struct Node* current = head->next;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main(void) {
    struct Node linked_list_head;
    linked_list_head.next = NULL;

    add_node_at_end(&linked_list_head, 1);
    add_node_at_end(&linked_list_head, 2);
    add_node_at_end(&linked_list_head, 3);
    add_node_at_end(&linked_list_head, 4);
    add_node_at_end(&linked_list_head, 5);
    add_node_at_end(&linked_list_head, 6);
    add_node_at_end(&linked_list_head, 7);

    delete_last_node(&linked_list_head);

    print_linked_list(&linked_list_head);

    return 0;
}