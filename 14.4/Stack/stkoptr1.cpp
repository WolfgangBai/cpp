#include <iostream>
#include <cstdlib>
#include <ctime>
#include "stacktp1.h"
const int Num = 3;
int main()
{
    const char * in[Num] = {
        "1: mack", "2:jim", "3:dog"
    };
    const char * out[Num];
    Stack<const char *> st(3);
    st.push(in[0]);
    Stack<const char *> st1 = st;
    st1.pop(out[0]);
    std::cout << out[0] << std::endl;

}
