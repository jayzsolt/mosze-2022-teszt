#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; /* NELEMENTS nincs deklaralva, NELEMENTS != N_ELEMENTS */ 
    std::cout << '1-100 ertekek duplazasa' /* sor vegerol hianyzik a pontosvesszo */
    for (int i = 0;) /* ciklus szintaktika hiba  */ 
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:" /* nincs pontosvesszo */ 
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) /* vesszo szerepel pontosvesszo helyett */
    {
        atlag += b[i] /* nincs pontosvesszo */
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
