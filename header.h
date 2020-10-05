#include <stdio.h>
#include <string.h>

#define MYNULL -1

struct node {
  int data;
  int next;
  int valid;
};

void init(struct node*);
int get_node(struct node*);
void get_indexes(struct node*, int, int*, int*);
int add(struct node*, int);
void print(struct node*);
int search(struct node*, int);
int delete(struct node*, int);
void release_node(struct node*, int);
void view(struct node*, int);
void help();

