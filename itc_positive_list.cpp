#include "easy_list.h"

int itc_positive_list(const vector <int> &mass){
    if (mass.size() != 0){
        int count = 0;
        for (int i = 0; i < mass.size(); i++){
            if (mass[i] > 0)
                count++;
        }
        return count;
    }
    else
        return 0;
}
