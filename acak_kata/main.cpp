#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;
int jumlah, i, acak, nyawa= 3;
string cheat, kata = "Semarang", kata_tebak;

int main()
{
cheat = kata;
    srand(static_cast<unsigned int>(time(NULL)));
    // int i = 1;
    //cout << "Masukkan kata : " ;
    //cin >> kata;
    jumlah = kata.size();
    //cout << "jumlah huruf dari " << kata << " adalah : " << jumlah << endl << endl;
    // jumlah = kata.size();
    for(i=0;i<jumlah;i++) {
        acak = rand() % jumlah;
        if(acak!=i){
            char tmp = kata[i];
            kata[i] = kata[acak];
            kata[acak]=tmp;
        }else {
            i--;
        }
    }
    cout << "kata acak : " << kata << endl << " kata ini memiliki " << jumlah << " huruf" << endl;


    while(nyawa>=0){
    cout << "Tebak kata yang benar : " ;
    cin >> kata_tebak ;
            if(kata_tebak==cheat) {
                cout << "selamat anda benar" << endl;
                break;
            } else if(kata_tebak!=kata && nyawa!=0){
                cout << "tebakan anda salah silahkan coba lagi" << endl;
                cout << "nyawa " << nyawa << endl;
                nyawa=nyawa-1;
            } else if(nyawa == 0) {
                cout << "nyawa anda habis \n" ;
                cout << "game over" ;
                nyawa=nyawa-1;
                }
        }
    return 0;
}
