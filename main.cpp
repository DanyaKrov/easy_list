#include "easy_list.h"

int main()
{
    vector<int> vector1 = new vector<int>(2, 4);
    vector<int> vector2 = new vector<int>(1, 2);
    itc_even_index_list(vector1, vector2);
    list_print(vector2);
}
