#include <iostream>

template <typename Max>
Max max(Max nbr1 , Max nbr2)
{
    if (nbr2 == nbr1)
        return (nbr2);
    return(nbr2 < nbr1 ? nbr1 : nbr2);
}

template <typename Min>
Min min(Min nbr1 , Min nbr2)
{
    if (nbr2 == nbr1)
        return (nbr2);
    return(nbr1 < nbr2 ? nbr1 : nbr2);
}

template <typename Swap>
void swap(Swap &nbr1 , Swap &nbr2)
{
    Swap temp;

    temp = nbr1;
    nbr1 = nbr2;
    nbr2 = temp;
}