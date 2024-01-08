#include <iostream>

using namespace std;

int main()
{
    int liczba_godzin = 0, ile_bakterii = 1;

   // cout << "Ile godzin up³ynê³o?" << endl; cin >> liczba_godzin;

    while (ile_bakterii <= 1000000000)
    {
        ile_bakterii = ile_bakterii*2;
        liczba_godzin += 1;
        cout << "Minê³o " << liczba_godzin << "godzin. Liczba bakterii: " << ile_bakterii << endl;
    }

  /*do
    {
        ile_bakterii = ile_bakterii*2;
        liczba_godzin += 1;
        cout << "Minê³o " << liczba_godzin << "godzin. Liczba bakterii: " << ile_bakterii << endl;
    }while (ile_bakterii <= 1000000000); */

    return 0;
}
