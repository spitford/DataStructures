#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

void push(Node **head, void *new_data, size_t data_size) {

   Node *new_node = (Node*) malloc(sizeof(Node));

   new_node->data = malloc(data_size);
   new_node->next = (*head);

   int i;
   for (i=0; i < data_size; i++) {
      *(char *)(new_node->data + i) = *(char *)(new_data + i);
   }

   (*head) = new_node;
}

void printList(Node *node, void (*fptr)(void *)) {

   while (node != NULL) {
      (*fptr)(node->data);
      node = node->next;
   }
}

void printInt(void *n) {

   printf(" %d", *(int *)n);
}

void printFloat(void *f) {

   printf(" %f", *(float *)n);
}
