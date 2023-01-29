// Piyapoom Boonak 65543206070-6
//https://l.facebook.com/l.php?u=https%3A%2F%2Fyoutu.be%2FP_Pufq9bVr8%3Ffbclid%3DIwAR3Nmvcx018Z8rFS9OdM8arSb70u4YtIYWACfCET4P3KHSvLGOquqGGeCUk&h=AT3lAp2HeOhe4y2o7uIkQ-X8rLU_hxRTzgA5W6VWDZe6IE-9AmTXL7UCAn4bayYQzq2EE-hEF4Ghn5DpImtySkujNzyYyu7RLCunbHyRn_s2Ah_cYOF2lCAm5tyKrSmTh7pG7w
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* start = NULL;

void AddNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = start;
    start = newNode;
}

void ShowAll() {
    struct Node* ptr = start;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void ShowBack(struct Node *start)
{
    struct Node* current = start;
    if (current == NULL)
        return;
    ShowBack(current->next);
    printf("%d ", current->data);

}

void Swap(int num1, int num2){
    struct Node* current = start;
    struct Node* node1 = NULL;
    struct Node* node2 = NULL;

    while(current != NULL){
        if(current->data == num1){
            node1 = current;
        }else if(current->data == num2){
            node2 = current;
        }

        if(node1 != NULL && node2 != NULL){
            break;
        }
        current = current->next;
    }

    if(node1 != NULL && node2 != NULL){
        int temp = node1->data;
        node1->data = node2->data;
        node2->data = temp;
    }
}

void UpdateNode(int data, int newData) {
    struct Node* ptr = start;
    while (ptr != NULL) {
        if (ptr->data == data) {
            ptr->data = newData;
            break;
        }
        ptr = ptr->next;
    }
}

int main() {
    printf("-----AddNoding-----  ");
    AddNode(40);
    AddNode(30);
    AddNode(20);
    AddNode(10);
    ShowAll(); 
    UpdateNode(10, 99);
    printf("-----UpDateNoding----- ");
    ShowAll(); 
    printf("-----ShowBacking----- ");
    ShowBack(start);
    printf("\n");
    printf("-----Swaping-----");
    Swap(20, 30);
    ShowAll(); 
    printf("-----Swaping------");
    Swap(40, 99);
    ShowAll();
    return 0;
}
