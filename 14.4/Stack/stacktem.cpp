#include <iostream>
#include <string>
#include <cctype>
#include "stacktp.h"
using std::cin;
using std::cout;

int main()
{
    Stack<std::string> st;
    std::string po ("i love coding");
    std::string pi;
    st.push(po);
    st.pop(pi);
    cout << pi <<  std::endl;
}
