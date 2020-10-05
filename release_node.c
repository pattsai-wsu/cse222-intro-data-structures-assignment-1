#include "header.h"

void release_node(struct node *ll, int getIndexCurrent) {
  ll[getIndexCurrent].valid=0;            // takes the index value from the get_indexes function
}                                     // and sets the valid field to 0 for that element
