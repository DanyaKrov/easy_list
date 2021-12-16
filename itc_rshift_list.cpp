#include "easy_list.h"

void itc_rshift_list(vector <int> &mass){
    if (mass.size() != 0){
    for (int i = 0; i < mass.size() - 1; i++) {
        mass[i + 1] = mass[i];
    }
    int x = mass[mass.size() - 1];
    mass[0] = x;
    }
}
