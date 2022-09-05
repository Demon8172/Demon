#include <stdio.h>
#include "malloc.h"
#include "stdlib.h"
#define LO 1;

// void insertAter();
// void  insertMotFront();
void insertMostFront();
void insertAftr();
void insertAfter();
void print_data();

struct Node{
    int data;
    struct Node * next;};

int input = 0;
int d=0;
void add_end();





int main() {
int p =1;



    struct Node *first = NULL;
    struct Node *second = NULL;
    struct Node* last = NULL;

    first = (struct Node *)malloc(sizeof(struct Node));
    last = (struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    printf("Wellcom Please Enter 3 data\n");
    int loop=0,u = 0;
    for(loop = 1;loop<=3;loop++){

        printf("Enter %d data :",loop);
        scanf("%d",&u);
        switch (loop) {

            case 1:
            first->data=u;
            first->next=second;
            case 2:
            second->data=u;
            second->next=last;
            case 3:
            last->data= u;
            last->next=NULL;

        }  }print_data(first);
    for (int w =1;w<=1000000;w++){


        printf("<1>add data in end :::\n<2>add data in first \n<3>Enter data in second\n<0>exit\n\n");
        scanf("%d", &input);
        if (input == 1) {
            printf("Enter data ::");
            scanf("%d", &d);
            add_end(first, d);
            print_data(first);
        } else if (input == 2) {

            printf("Enter data ::");
            scanf("%d", &d);
            insertMostFront(&first, d);
            print_data(first);
        } else if (input == 3) {
            printf("Enter data ::");
            scanf("%d", &d);
            insertAfter(second, d);
            print_data(first);
        } else if (input==0){
            exit(1);
        } else
        {\
        printf("error.....");}

    }



    return 0;
}
void add_end(struct Node *sru , int dat) {
    struct Node *point ,*temp;
    point = sru;
    temp= (struct Node*) malloc(sizeof(struct Node));
    temp->data= dat;
    temp->next= NULL;
    while (point->next!=NULL){

        point=point->next;
    }
    point->next = temp;
}








void insertAfter(struct Node* prev_node , int data){

    if( prev_node == NULL){
        return;
    }
    struct Node* newNode = (struct Node*) malloc(sizeof (struct Node));

    newNode->data = data;
    newNode->next =prev_node->next;
    prev_node->next =newNode;

}
void insertMostFront(struct Node** head_ref , int data){


    struct Node* newNode = (struct Node*) malloc(sizeof (struct Node));

    newNode->data = data;
    newNode->next = (*head_ref);

    (*head_ref)=newNode;}
    void print_data(struct Node *no){

        struct Node* temp = no;
        while( temp != NULL){

            printf("data : %d \n",temp->data);
            temp = temp->next;


        }

}
#include <stdio.h>
#include "malloc.h"
#include "stdlib.h"
#define LO 1;

// void insertAter();
// void  insertMotFront();
void insertMostFront();
void insertAftr();
void insertAfter();
void print_data();

struct Node{
    int data;
    struct Node * next;};

int input = 0;
int d=0;
void add_end();





int main() {
int p =1;



    struct Node *first = NULL;
    struct Node *second = NULL;
    struct Node* last = NULL;

    first = (struct Node *)malloc(sizeof(struct Node));
    last = (struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    printf("Wellcom Please Enter 3 data\n");
    int loop=0,u = 0;
    for(loop = 1;loop<=3;loop++){

        printf("Enter %d data :",loop);
        scanf("%d",&u);
        switch (loop) {

            case 1:
            first->data=u;
            first->next=second;
            case 2:
            second->data=u;
            second->next=last;
            case 3:
            last->data= u;
            last->next=NULL;

        }  }print_data(first);
    for (int w =1;w<=1000000;w++){


        printf("<1>add data in end :::\n<2>add data in first \n<3>Enter data in second\n<0>exit\n\n");
        scanf("%d", &input);
        if (input == 1) {
            printf("Enter data ::");
            scanf("%d", &d);
            add_end(first, d);
            print_data(first);
        } else if (input == 2) {

            printf("Enter data ::");
            scanf("%d", &d);
            insertMostFront(&first, d);
            print_data(first);
        } else if (input == 3) {
            printf("Enter data ::");
            scanf("%d", &d);
            insertAfter(second, d);
            print_data(first);
        } else if (input==0){
            exit(1);
        } else
        {\
        printf("error.....");}

    }



    return 0;
}
void add_end(struct Node *sru , int dat) {
    struct Node *point ,*temp;
    point = sru;
    temp= (struct Node*) malloc(sizeof(struct Node));
    temp->data= dat;
    temp->next= NULL;
    while (point->next!=NULL){

        point=point->next;
    }
    point->next = temp;
}








void insertAfter(struct Node* prev_node , int data){

    if( prev_node == NULL){
        return;
    }
    struct Node* newNode = (struct Node*) malloc(sizeof (struct Node));

    newNode->data = data;
    newNode->next =prev_node->next;
    prev_node->next =newNode;

}
void insertMostFront(struct Node** head_ref , int data){


    struct Node* newNode = (struct Node*) malloc(sizeof (struct Node));

    newNode->data = data;
    newNode->next = (*head_ref);

    (*head_ref)=newNode;}
    void print_data(struct Node *no){

        struct Node* temp = no;
        while( temp != NULL){

            printf("data : %d \n",temp->data);
            temp = temp->next;


        }

}
