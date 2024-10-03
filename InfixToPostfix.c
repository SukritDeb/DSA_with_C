#include<stdio.h>
#include<string.h>
char infix[20],postfix[20],s[20];
int priority(char);
void infix_to_postfix(char[]);
void push(char);
char pop();
int top=-1;

void  main(){
    int i,n;
    printf("Enter the expression: ");
    gets(infix);
    infix_to_postfix(infix);
}

void  infix_to_postfix(char infix[]){
    int i;
    int j=0;
    for(i=0;infix[i]!='\0';i++){
        if(infix[i]>='a' &&  infix[i]<='z')
            postfix[j++]=infix[i];
        else if(infix[i]>='A' && infix[i]<='Z')
            postfix[j++]=infix[i];
        else  if(infix[i]=='(')
            push(infix[i]);
        else if(infix[i]==')'){
             while(s[top]!='(')
                postfix[j++]=pop();
            pop();
        }
        else{
            while(top!=-1 && priority(s[top])>=priority(infix[i]))
                postfix[j++]=pop();
            push(infix[i]);
        }
    }
    while(top>=0)
        postfix[j++]=pop();
    postfix[j]='\0';
    printf("%s", postfix);
}

void push(char item){
    top++;
    s[top]=item;
}

char pop(){
    char temp=s[top];
    top--;
    return temp;
}

int priority(char c){
    if(c=='^')
        return 3;
    else if(c=='*'||c=='/')
        return 2;
    else if(c=='+'||c=='-')
        return 1;
    else
        return 0;
}