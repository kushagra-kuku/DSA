//
// Created by Kushagra Kandpal on 03-07-2021.
//
/*
 * Link to Problem: https://binarysearch.com/problems/Add-Linked-Lists
 */

#ifndef DS_LLADDTWO_H
#define DS_LLADDTWO_H

#endif //DS_LLADDTWO_H

#include "../DSAImplementation/linkedlists.h"

LLNode* solve(LLNode* l0, LLNode* l1) {
    int carry = 0, ans = 0;
    LLNode* head = new LLNode;
    LLNode* res = head;
    ans = l0->val + l1->val;
    carry = ans/10;
    res->val = ans - carry*10;
    res->next = new LLNode;
    l0 = l0->next;
    l1 = l1->next;
    while(l0!=0 || l1!=0 || carry>0){
        ans = carry;
        carry = 0;
        if(l0!=0){
            ans+=l0->val;
            l0=l0->next;
        }
        if(l1!=0){
            ans+=l1->val;
            l1=l1->next;
        }
        res = res->next;
        carry = ans/10;
        res->val = ans-carry*10;
        res->next = new LLNode;
    }
    res->next = 0;
    return head;
}

