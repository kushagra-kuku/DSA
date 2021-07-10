//
// Created by Kushagra Kandpal on 03-07-2021.
//

/*
 * Link to Prob: https://binarysearch.com/problems/Linked-List-Partitioning
 */
#ifndef DS_LLPARTITION_MED_H
#define DS_LLPARTITION_MED_H

#endif //DS_LLPARTITION_MED_H

#include "../DSAImplementation/linkedlists.h"



LLNode* solve(LLNode* node, int k) {
    if (node == 0) return 0;
    vector<int> high, low;
    int count = 0;
    LLNode* head = new LLNode;
    LLNode* temp = head;
    while(node!=0){
        if(node->val>k) high.push_back(node->val);
        else if (node->val==k) count++;
        else low.push_back(node->val);
        node = node->next;
    }
    if(low.size()==0) {if (count==0) temp->val = high[0]; else temp->val = k;}
    else temp->val = low[0];
    temp->next = new LLNode;
    for(int i = 1;i<low.size()+high.size()+count;i++){
        temp = temp->next;
        if(i>=low.size()) { if(i>=count+low.size()) temp->val = high[i-count-low.size()];
            else temp->val = k;}
        else temp->val = low[i];
        temp->next = new LLNode;
    }
    temp->next = 0;
    return head;
}
