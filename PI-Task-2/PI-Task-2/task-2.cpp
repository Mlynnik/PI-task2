#include "task-2.h"
int Return_To_System_Of_Num(const std::string& s, int b)
{
    assert(s.size() != 0);
    assert(b > 0 && b <= 10);
    int result = 0;
    int pw = 1;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        result += (s[i] - '0') * pw;
        pw *= b;
    }
    return result;
}