#include <stdio.h>
#include "header.h"

void view(struct node *ll, int x) {
  int i=0;
  printf("index       data           next       valid\n");          //print off the index data next and valid fields of each
  printf("=========================================\n");        // list element use the number that the user supplies 
  while (i<x) {                                                 // for the number of rows to display
    printf(" %3d      %7d      %8d         %d\n", i, ll[i].data, ll[i].next, ll[i].valid);
  i++;
  }
}

