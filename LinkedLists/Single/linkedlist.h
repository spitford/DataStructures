struct Node {
   void *data;
   struct Node *next;
};
typedef struct Node Node;

void push(struct Node **head, void *new_data, size_t data_size);
void printList(struct Node *node, void (*fptr)(void *));
void printInt(void *n);
void printFloat(void *f);
