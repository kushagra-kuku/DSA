//
// Created by Kushagra Kandpal on 03-07-2021.
//

/*
 * Link to Problem: https://binarysearch.com/problems/Linked-List-Deletion
 */
#ifndef DS_LLDELETETARGET_H
#define DS_LLDELETETARGET_H

#endif //DS_LLDELETETARGET_H

#include "../DSAImplementation/linkedlists.h"

LLNode* solve(LLNode* node, int target) {
    LLNode* result = new LLNode;
    LLNode* ptr = result;
    int size = 0;
    while(node!=0){
        if(node->val!=target){
            if (size == 0) ptr->val = node->val;
            else{
                ptr = ptr->next;
                ptr->val = node->val;
            }
            ptr->next = new LLNode;
            size++;
        }
        node = node->next;
    }
    ptr->next = 0;
    if (size ==0) return 0;
    return result;
}