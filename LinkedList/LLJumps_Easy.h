//
// Created by Kushagra Kandpal on 03-07-2021.
//

/*
 * Link to Problem: https://binarysearch.com/problems/Linked-List-Jumps
 */
#ifndef DS_LLJUMPS_EASY_H
#define DS_LLJUMPS_EASY_H

#endif //DS_LLJUMPS_EASY_H

#include "../DSAImplementation/linkedlists.h"

LLNode* solve(LLNode* node) {
    LLNode* result = new LLNode;
    result->val = node->val;
    int i = node->val;
    LLNode* temp = result;
    while (node->next != 0 || i == 0){
        if(i>0) { node = node->next; i--;}
        else{
            temp->next = new LLNode();
            i = node->val;
            temp = temp->next;
            temp->val = i;
        }
    }
    temp->next = 0;
    return result;
}
