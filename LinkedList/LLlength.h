//
// Created by Kushagra Kandpal on 03-07-2021.
//

/*
 * Link to Problem: https://binarysearch.com/problems/Length-of-a-Linked-List
 */
#ifndef DS_LLLENGTH_H
#define DS_LLLENGTH_H

#endif //DS_LLLENGTH_H

#include "../DSAImplementation/linkedlists.h"

int solve(LLNode* node) {
    int res = 0;
    while(node!=0){
        res++;
        node = node->next;
    }
    return res;
}
