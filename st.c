#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100
struct Stack{
int items[MAX_SIZE];
int top;
};
void initialize(struct Stack*stack){
stack->top=-1;
}
int isEmpty(struct Stack*stack){
 return(stack->top==-1);
 }
 int isEmpty(struct Stack*stack){
 return(stack->top == MAX_SIZE-1);
 }
 void push(struct Stack*stack,int item)
 {
  



