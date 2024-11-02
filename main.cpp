#include <iostream>

double jeszczeRaz(double wynik)
{
    char znak, kontynuacja;
    double liczba;
    bool wykonanoRownanie = true;
    std::cout << wynik << std::endl;
    std::cout << "Podaj znak: ";
    std::cin >> znak;
    
    std::cout <<"Podaj liczbe: ";
    std::cin >> liczba;
    
    switch (znak)
    {
    case '+':
        wynik = wynik + liczba; 
        break;
    case '-':
        wynik = wynik - liczba;
        break;
    case '*':
        wynik = wynik * liczba;
        break;
    case '/':
        wynik = wynik/liczba;
    break;
    default:
    std::cout << "Nie poprawne rownanie";
    wykonanoRownanie = false;
    break;
    }
     if (wykonanoRownanie)
    {
    std::cout << "Wynik: " << wynik << std::endl;
    std::cout << "Czy chcesz kontynuować y/n ? ";
    std::cin >> kontynuacja;
    }
    if(kontynuacja == 'y')
    wynik = jeszczeRaz(wynik);

}

 void kalkulator()
{
    double liczba1 ,liczba2, wynik;
    char znak;
    bool wykonanoRownanie = true;
    char kontynuacja;

    std::cout << "Podaj liczbę: ";
    std::cin >> liczba1; 
    std::cout << "Podaj znak: ";
    std::cin >> znak;
    std::cout << "Podaj liczbę: ";
    std::cin >> liczba2;

    switch (znak)
    {
    case '+':
        wynik = liczba1 + liczba2; 
        break;
    case '-':
        wynik = liczba1 - liczba2;
        break;
    case '*':
        wynik = liczba1 * liczba2;
        break;
    case '/':
        wynik = liczba1/liczba2;
    break;
    default:
        std::cout << "Nie poprawne rownanie";
        wykonanoRownanie = false;
        break;
    }
    if (wykonanoRownanie)
    {
    std::cout << "Wynik: " << wynik << std::endl;
    std::cout << "Czy chcesz kontynuować y/n ? ";
    std::cin >> kontynuacja;
    }
    if(kontynuacja == 'y')
    wynik = jeszczeRaz(wynik);
}

int main()
{
    
    kalkulator();

    return 0;
}