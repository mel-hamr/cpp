#include<iostream>

int main(int ac, char **av)
{
    int i;
    int j;
    char c;
    i = 1;
    j = 0;
    while (av[i])
    {
        j= 0;
        while (av[i][j] != '\0')
        {
            c = toupper(av[i][j]);
            std::cout <<c;
            j++;
        }
        i++;
        std::cout << " ";
    }
    std::cout << "\n";
}