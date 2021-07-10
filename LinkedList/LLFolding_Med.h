//
// Created by Kushagra Kandpal on 03-07-2021.
//

/*
 * Link to Problem: https://binarysearch.com/problems/Linked-List-Folding
 */
#ifndef DS_LLFOLDING_MED_H
#define DS_LLFOLDING_MED_H

#endif //DS_LLFOLDING_MED_H

#include "../DSAImplementation/linkedlists.h"

LLNode* solve(LLNode* node) {
    int temp1, temp2;
    LLNode* temp = node;
    if(node==0) return 0;
    int size = 0;
    vector <int> f,fin;
    while(temp!=0){
        f.push_back(temp->val);
        temp = temp->next;
        size++;
    }
    cout<<size;
    if(size%2==0){temp1 = size/2 - 1; temp2 = size/2;}
    else{fin.push_back(f[size/2]); temp1 = size/2-1; temp2 = size/2+1;}
    for(int i = 0; i <= temp1; i++) fin.push_back(f[temp1-i]+f[temp2+i]);
    temp = node;
    temp->val = fin[0];
    for(int i = 1; i< fin.size(); i++){
        temp = temp->next;
        temp->val = fin[i];
    }
    temp->next = 0;
    return node;
}
