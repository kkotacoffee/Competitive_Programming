#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
typedef int elemtype;
struct stack{
  int top;
  elemtype elem[SIZE];
};
void initstack(struct stack *s){
  s->top = -1;
}
int stackempty(struct stack *s){
  return s->top < 0;
} 
void push(struct stack *s, elemtype val){
  s->top++;
  if(s->top >= SIZE){
    printf("stack overflow\n");
    exit(1);
  }else{
    s->elem[s->top] = val;
  }
}
elemtype pop(struct stack *s){
  elemtype val;
  if(s->top < 0){
    printf("stack underflow\n");
    exit(1);
  }else{
    val = s->elem[s->top];
    s->top--;
    return val;
  }
} 
int main(void){
   struct stack Stack;
    initstack(&Stack);
    push(&Stack,1);
    push(&Stack,2);
    pop(&Stack);
    pop(&Stack);
    return 0;
    // Your code here!
}
