//
// Created by Kushagra Kandpal on 07-07-2021.
//

#ifndef DS_TREES_H
#define DS_TREES_H

#endif //DS_TREES_H

template<class Gen>
class BSTnode{
public:
    Gen key;
    BSTnode<Gen>* left = NULL, right = NULL;

    BSTnode<Gen>(){
        key = 0;
    }
    BSTnode<Gen>(Gen k = 0, BSTnode<Gen>* l = 0, BSTnode<Gen>* r = 0){
        left = l;
        right = r;
        key = k;
    }
};