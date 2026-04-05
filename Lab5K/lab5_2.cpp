#include <iostream>
#include <unordered_map>

std::unordered_map<int , std::string> map;
    
void create_map(std::unordered_map<int , std::string>& map)
{
    const std::string s = "надцять";
    map[0] = "Нуль";
    map[1] = "Одна";
    map[2] = "Дві";
    map[3] = "Три";
    map[4] = "Чотири";
    map[5] = "П'ять";
    map[6] = "Шість";
    map[7] = "Сім";
    map[8] = "Вісім";
    map[9] = "Дев'ять";
    map[10] = "Десять";
    map[11] = "Оди" + s;
    map[12] = "Два" + s;
    map[13] = "Три" + s;
    map[14] = "Чотир" + s;
    map[15] = "П'ят" + s;
    map[16] = "Шіст" + s;
    map[17] = "Сім" + s;
    map[18] = "Вісім" + s;
    map[19] = "Дев'ят" + s;
    map[20] = "Двадцять";
    map[30] = "Тридцять";
    map[40] = "Сорок";
    map[50] = "П'ятдесят";
    map[60] = "Шістдесят";
    map[70] = "Сімдесят";
    map[80] = "Вісімдесят";
    map[90] = "Дев'яносто";
    for (int i = 2; i < 10; i++)
    {
        int tens = i * 10; 
        for (int j = 1; j < 10; j++)
        {
            map[tens + j] = map[tens] + ' ' + map[j];
        }
    }
}

bool IsOne(int number)
{
    if (map[number].find(map[1]) != std::string::npos)
        return true;
    return false;
}

bool IsTwo_Threee_Four(int number)
{
    if (map[number].find(map[2]) != std::string::npos || map[number].find(map[3]) != std::string::npos || map[number].find(map[4]) != std::string::npos)
        return true;
    return false;
}

void print(int hrn , int kop)
{
    std::string hrn1 = " гривень ";
    std::string hrn2 = " гривня ";
    std::string hrn3 = " гривні ";

    std::string kop1 = " копійок";
    std::string kop2 = " копійка";
    std::string kop3 = " копійки";

    std::string result = "";

    result += map[hrn];

    if (IsOne(hrn))
        result += hrn2;
    else if (IsTwo_Threee_Four(hrn))
        result += hrn3;
    else
        result += hrn1;


    result += map[kop];

    if (IsOne(kop))
        result += kop2;
    else if (IsTwo_Threee_Four(kop))
        result += kop3;
    else
        result += kop1;

    std::cout << result;
}

int main()
{
    create_map(map);

    int hrn , kop;
    std::cout << "Введіть вартість товару (грн та коп)\n";
    std::cin >> hrn >> kop;

    print(hrn , kop);
}