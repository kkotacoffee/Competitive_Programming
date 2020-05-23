#include <stdio.h>
#include <stdlib.h>

typedef char elementtype;
struct node *list;

struct node {
  elementtype element;
  struct node *next;
  struct node *before;
};

struct node *initlist(void){
  struct node *n;

  n = (struct node *)malloc(sizeof(struct node));
  n->next = NULL;
  return n;
}

void insert(struct node *p, elementtype x){
  struct node *n;

  int i;
  n = (struct node *)malloc(sizeof(struct node));
  n->element = x;
  n->before = p;
  scanf("%d",&i);
  if(i==0){
  n->next = head;
  p->next = n;
  }else{
  n->next = list;
  p->next = n;
  }
}

void delete(struct node *p){
  if(p->next != NULL){
    p->next = p->next->next;
  }
}

int main(void){
  
  list = initlist();

  insert(list, 'a');
  insert(list, 'b');

  printf("%c %c\n", list->next->element, list->next->next->element);

  return 0;
}
