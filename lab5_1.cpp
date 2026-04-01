#include <iostream>
#include <vector>

bool IsNumber(char ch)
{
    if (ch >= '0' && ch <= '9') return true;
    return false;
}

bool IsLatin(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || ch >= 'A' && ch <= 'Z') return true;
    return false;
}

int main()
{
    std::string str;

    std::cout << "Enter string\n";
    std::cin >> str;

    int count = 0;
    bool foundNumber = false;

    std::vector <std::string> latin;
    bool foundWord = false;
    std::string word = "";

    for (int i = 0; i <= str.size(); i++)
    {
        if (IsNumber(str[i]) && !foundNumber) 
            foundNumber = true;
        if ((!IsNumber(str[i]) || i == str.size()) && foundNumber)
        {
            count++;
            foundNumber = false;
        }

        if (IsLatin(str[i]) && !foundWord)
            foundWord = true;
        if ((!IsLatin(str[i]) || i == str.size()) && foundWord)
        {
            latin.emplace_back(word);
            foundWord = false;
            word = "";
        }
        if (foundWord)
            word += str[i];
    }

    std::cout << "Numbers count: " << count << '\n';

    std::cout << "Words with latin\n";

    for (int i = 0; i < latin.size(); i++)
    {
        std::cout << "Word: " << latin[i] << '\n';
    }
}