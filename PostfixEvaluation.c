#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define m 100
int s[m];
int t=-1;
void push(int);
int pop();
int is_operator(char);
int ev(char);

void push(int i){
    if(t>=m-1)
        printf("Stack overflow.");
    t++;
    s[t]=i;
}

int pop(){
    if(t<0){
        printf("Stack underflow.");
        return -1;
    }
    int i=s[t];
    t--;
    return i;
}

int  is_operator(char c){
    if(c=='+' || c=='-' || c=='*' || c=='/')
        return 1;
    return 0;
}

int ev(char *e){
    int i=0;
    char c=e[i];
    int op1,op2,r;
    while(c!='\0'){
        if(c>='0' &&  c<='9'){
            int n=c-'0';
            push(n);
        }
        else if(is_operator(c)){
            op2=pop();
            op1=pop();
            switch(c){
                case '+':
                    r=op1+op2;
                    break;
                case '-':
                    r=op1+op2;
                    break;
                case '*':
                    r=op1*op2;
                    break;
                case '/':
                    r=op1/op2;
                    break;
            }
            push(r);
        }
        i++;
        c=e[i];
    }
    r=pop();
    return r;
}

int  main(){
    char p;
    printf("Enter the expression: ");
    scanf("%s",&p);
    int r=ev(p);
    printf("%d",r);
    return 0;
}