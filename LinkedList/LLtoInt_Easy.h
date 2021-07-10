//
// Created by Kushagra Kandpal on 03-07-2021.
//

/*
 * Link to Problem : https://binarysearch.com/problems/Linked-List-to-Integer
 */
#ifndef DS_LLTOINT_MED_H
#define DS_LLTOINT_MED_H

#endif //DS_LLTOINT_MED_H

#include "../DSAImplementation/linkedlists.h"

int solve(LLNode* node) {
    vector<bool> f;
    while (node!=0){
        f.push_back(node->val);
        node = node->next;
    }
    int ans = 0;
    for(int i = 0; i < f.size(); i++) if(f[i]) {ans+=pow(2,f.size()-i-1); cout<<ans;}
    return ans;
}
