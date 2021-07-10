//
// Created by Kushagra Kandpal on 03-07-2021.
//

/*
 * Link to Problem: https://binarysearch.com/problems/Interleaved-Linked-List
 */

#ifndef DS_LLINTERLEAVING_H
#define DS_LLINTERLEAVING_H

#endif //DS_LLINTERLEAVING_H

#include "../DSAImplementation/linkedlists.h"

LLNode* solve(LLNode* l0, LLNode* l1) {
    LLNode* head = new LLNode;
    LLNode* temp = head;
    int i = 0;
    if(l0==0&&l1==0) return 0;
    int size = 0;
    while(l0!=0 || l1!=0){
        int temp1;
        if(l0!=0 && l1!=0){
            if(i%2==0){ temp1 = l0->val; l0 = l0->next;}
            else { temp1 = l1->val; l1 = l1->next;}
            i++;
        }
        else if (l0!=0) { temp1 = l0->val; l0 = l0->next;}
        else if (l1!=0) { temp1 = l1->val; l1 = l1->next;}
        else{
            temp->next = 0;
            break;
        }
        if(size!=0) temp = temp->next;
        temp->val = temp1;
        temp->next = new LLNode;
        size++;
    }
    temp->next = 0;
    return head;
}
