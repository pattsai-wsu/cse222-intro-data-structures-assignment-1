#include "header.h"

int delete(struct node *ll, int x) {
   int getIndexCurrent, getIndexPrevious;

   get_indexes(ll, x, &getIndexCurrent, &getIndexPrevious);   // uses the get indexes function to
                                                              // get the previous and current indexes 
   ll[getIndexPrevious].next=ll[getIndexCurrent].next;        // of the node that will be deleted
   release_node(ll, getIndexCurrent);                         // and the prior node which will have the 
}                                                             // node.next value changed to the current.next value
