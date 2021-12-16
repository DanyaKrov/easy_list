#include "easy_list.h"

void itc_rev_list(vector <int> &mass) {
    if (mass.size() != 0){
        int x;
        for (int i = 0; i < int (mass.size()) / 2; i++){
            x = mass[i];
            mass[i] = mass[mass.size() - i - 1];
            mass[mass.size() - i - 1] = x;
        }
    }
}
