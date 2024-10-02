#include<stdio.h>
#include<stdlib.h>
#define m 5
int q[m];
int f=-1;
int r=-1;

void enqueue(int d){
    if((r+1)%m==f)
        printf("Queue is full\n");
    else if(f==-1)
        f=0;
    r=(r+1)%m;
    q[r]=d;
}

void  dequeue(){
    if(f==-1)
        printf("Queue is empty\n");
    else if(f==r){
        f=-1;
        r=-1;
    }
    else
        f=(f+1)%m;
}

void  display(){
    if(f==-1)
        printf("Queue is empty\n");
    int i=f;
    while(i!=r){
        printf("%d ",q[i]);
        i=(i+1)%m;
    }
    printf("%d",q[r]);
}

int  main(){
    int c,d;
    while(1){
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice:");
        scanf("%d",&c);
        switch(c){
            case 1:
                printf("Enter the element to be inserted:");
                scanf("%d",&d);
                enqueue(d);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
        }
    }
    return 0;
}