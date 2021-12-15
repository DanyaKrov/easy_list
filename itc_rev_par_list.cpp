#include "easy_list.h"

void itc_rev_par_list(vector <int> &mass){
    int x;
    for (int i = 1; i < mass.size(); i += 2) {
            x = mass[i - 1];
            mass[i - 1] = mass[i];
            mass[i] = x;
        }
}
