#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int C, M, S;
    int DS;

    cout << "Vnesi go casot : ";
    cin >> C;

    cout << "\nVnesi gi minutite : ";
    cin >> M;

    cout << "\nVnesi gi sekundite : ";
    cin >> S;

    //VSPred = Vkupnite Sekundi pred dodavanjeto na dopolnitelnite sekundi( Brojot na casovite vo sekundi + minutite vo sekundi + sekundite )

    int VSPred = C * 3600 + M * 60 + S;

    //Ovaa komanda i kazhuva na programta(saatot) da pocne pak od 00:00:00 koga ce se nadmine brojot na sekundi vo eden den
    VSPred %= 86400;

     C = VSPred / 3600;
     M = (VSPred % 3600) / 60;
     S = VSPred % 60;

    cout << "\nMomentalnoto vreme e : "
        << setw(2) << setfill('0') << C << ":"
        << setw(2) << setfill('0') << M << ":"
        << setw(2) << setfill('0') << S << endl;

    cout << "\nVnesi gi dopolnitelnite sekundi : ";
    cin >> DS;

    //VSPosle = Vkupnite Sekundi posle dodavanjeto na dopolnitelnite sekundi( Brojot na casovite vo sekundi + minutite vo sekundi + sekundite i dopolnitelnite sekundi )
    //NC = Noviot Cas ( Casot posle dopolnitelnite sekundi )
    //NM = Novite Minuti ( Minutite posle dopolnitelnite sekundi )
    //NS = Novite Sekundi ( Sekundite posle dopolnitelnite sekundi )

    int VSPosle = C * 3600 + M * 60 + S + DS;

    //(Ovde povtorno ce ja iskoristime ovaa komanda za novoto vreme
    VSPosle %= 86400;

    int NC = VSPosle / 3600;
    int NM = (VSPosle % 3600) / 60;
    int NS = VSPosle % 60;

    cout << "\nNovoto vreme posle dopolnitelnite " << DS << " sekundi e : " 
        << setw(2) << setfill('0') << NC << ":"
        << setw(2) << setfill('0') << NM << ":"
        << setw(2) << setfill('0') << NS << endl;



    cin.get(); cin.get();

    return 0;
    
}