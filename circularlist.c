#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node*next;

};

void print(struct Node*head)
{
    struct Node*ptr=head;
    do{
        printf("%d",ptr->data);
        ptr=ptr->next;
        
    }while(ptr!=head);
}

int main()
{
    struct Node*head;
    struct Node*second;
    struct Node*third;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    
    head->data=99;
    head->next=second;

    second->data=89;
    second->next=third;

    third->data=83;
    third->next=head;

  print(head);

    return 0;

}