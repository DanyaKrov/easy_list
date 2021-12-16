#include "easy_list.h"

bool itc_pos(int a)
{
    int c;
    if (a < 0) {
		return false;
    }
    else
		return true;
}
bool itc_same_parts_list(const vector <int> &mass){
    if (mass.size() != 0){
    bool statement = false;
    for (int i = 1; i < mass.size(); i++){
        if ((itc_pos(mass[i]) > 0 && itc_pos(mass[i - 1]) || !(itc_pos(mass[i]) > 0 || itc_pos(mass[i - 1]))))
            statement = true;
    }
    return statement;
    }
    else
        return false;
}
