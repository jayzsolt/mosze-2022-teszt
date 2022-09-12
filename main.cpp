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
    for (int i = 0; i; i++) /* nem jo a ciklus, i feltetel! */
    {
        std::cout << "Ertek:" /* nincs pontosvesszo */ /* ill. igy csak a stringet irjuk ki egymas utan sokszor, a tenyleges erteket nem */ 
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) /* vesszo szerepel pontosvesszo helyett */
    {
        atlag += b[i] /* nincs pontosvesszo */
    }
    atlag /= N_ELEMENTS; /* osztando ill oszto felcserelendo */ 
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
