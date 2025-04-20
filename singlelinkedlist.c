#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memomry allocation failed\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void append(Node** head, int value) {
    Node* newNode = createNode(value);
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void display(Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void deleteHead(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty, cannot delete.\n");
        return;
    }
    Node* temp = head;
    *head = (*head)->next;
    free(temp);
    printf("Deleted the first node.\n");
}

void deleteTail(Node** head) {
    if (*head = NULL) {
        printf("List is empty, cannot delete.\n");
        return;
    }

    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
    } else {
        Node* temp = *head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
    printf("Deleted the last node.\n");
}

void inputList(Node** head) {
    int n, value;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        printf("Enter value for element %d: ", i + 1);
        scanf("%d", &value);
        append(head, value);
    }
}

int main() {
    Node* head = NULL;
    int choice, value;

    while(1) {
        
    }
}