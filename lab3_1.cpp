#include <iostream>

int main()
{
    std::string str;
    char ch;

    int countS = 0;
    int countT = 0;
    int countN = 0;

    while ((ch = getchar()) != EOF)
    {
        str += ch;
        if (ch == ' ') countS++;
        else if (ch == '\t') countT++;
        else if (ch == '\n') countN++;
    }

    std::cout << "\nString: " << str << '\n';
    std::cout << "Count space: " << countS << '\n'; 
    std::cout << "Count tab: " << countT << '\n'; 
    std::cout << "Count newline: " << countN << '\n'; 
}