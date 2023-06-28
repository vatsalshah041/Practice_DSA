#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *start=NULL;


void create_ll(){
    struct node *nn, *temp;
    int x, val;

    printf("Enter the number of values to be entered in ll: ");
    scanf("%d",&x);

    for(int i=0; i<x; i++){
        printf("%d",i);
        printf("Enter the %d value: ",(i+1));
        scanf("%d",&val);

        nn= (struct node*)malloc(sizeof(struct node));
        nn->data=val;
        if(start==NULL){
            start=nn;
        }
        else{
            temp=start;
            while(temp->next!=NULL){
                temp=temp->next;
            };
            temp->next=nn;
        }
    }
}

void display_ll(){
    struct node *temp;
    temp=start;
    if(temp==NULL){
        printf("Linked list is empty...");
    }
    else{
        while(temp->next!=NULL){
            printf("\t %d",temp->data);
            temp=temp->next;
        }
        printf("\t %d",temp->data);
    }
}

void main(){

    int choice;
    
    while(choice!=3){
    printf("Enter your choice: ");
    scanf("%d",&choice);

    if(choice == 1){
        create_ll();
        printf("Linked list created.");
    }
    else if(choice == 2){
        display_ll();
    }
}
}