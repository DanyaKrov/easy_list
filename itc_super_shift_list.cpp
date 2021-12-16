#include "easy_list.h"

void itc_super_shift_list(vector <int> &mass, int n){
    if (mass.size() != 0){
        if (n < 0){
            itc_rev_list(mass);
            n *= -1;
            while (n != 0){
                itc_rshift_list(mass);
                n--;
            }
            itc_rev_list(mass);
        }
        else{
            while (n != 0){
                itc_rshift_list(mass);
                n--;
            }
        }
    }
}
