#include "easy_list.h"

void itc_rev_list(vector <int> &mass){
    int x;
    for (int i = -1; i < mass.size() / 2 - 1; i++) {
        x = mass[mass.size() - i];
        mass[mass.size() - i] = mass[i];
        mass[i] = x;
    }
}
