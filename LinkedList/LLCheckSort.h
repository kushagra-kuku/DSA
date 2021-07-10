//
// Created by Kushagra Kandpal on 03-07-2021.
//

/*
 * Link to Problem: https://binarysearch.com/problems/A-Strictly-Increasing-Linked-List
 */
#ifndef DS_LLCHECKSORT_H
#define DS_LLCHECKSORT_H

#endif //DS_LLCHECKSORT_H

#include "../DSAImplementation/linkedlists.h"

bool solve(LLNode* head) {
    LLNode* temp = head->next;
    int prev = head->val;
    while(temp != 0){
        if (prev>=temp->val) return false;
        prev = temp->val;
        temp = temp->next;
    }
    return true;
}
