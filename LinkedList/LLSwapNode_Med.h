//
// Created by Kushagra Kandpal on 03-07-2021.
//

/*
 * Link to Problem : https://binarysearch.com/problems/Swap-Kth-Node-Values
 */
#ifndef DS_LLSWAPNODE_MED_H
#define DS_LLSWAPNODE_MED_H

#endif //DS_LLSWAPNODE_MED_H

#include "../DSAImplementation/linkedlists.h"

LLNode* solve(LLNode* node, int k) {
    int size = 0;
    LLNode* temp = node;
    while(temp != 0) {temp = temp->next; size++;}
    temp = node;
    size-=1;
    if (size-k != k){
        for (int i = 0; i != k; i++) temp = temp -> next;
        int temp1 = temp->val;
        temp = node;
        for (int i = 0; i != size-k; i++) temp = temp -> next;
        int temp2 = temp-> val;
        temp->val = temp1;
        temp = node;
        for (int i = 0; i != k; i++) temp = temp->next;
        temp->val= temp2;
    }
    return node;
}