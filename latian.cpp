#include <iostream>
#include <cstring>
using namespace std;

char pzl[15][15] =
{{'T', 'G', 'B', 'W', 'W', 'I', 'N', 'T', 'E', 'R', 'W', 'S', 'E', 'S', 'N'},
 {'A', 'A', 'U', 'N', 'T', 'T', 'M', 'M', 'H', 'F', 'O', 'O', 'D', 'N', 'B'},
 {'J', 'L', 'W', 'C', 'Q', 'L', 'D', 'Z', 'M', 'P', 'M', 'V', 'D', 'M', 'R'},
 {'A', 'S', 'A', 'G', 'M', 'Q', 'U', 'W', 'V', 'V', 'B', 'S', 'O', 'H', 'I'},
 {'B', 'W', 'P', 'L', 'O', 'T', 'A', 'N', 'A', 'D', 'T', 'P', 'G', 'N', 'C'},
 {'R', 'E', 'W', 'N', 'G', 'O', 'D', 'J', 'C', 'P', 'N', 'A', 'T', 'N', 'K'},
 {'E', 'E', 'O', 'T', 'W', 'O', 'S', 'B', 'Q', 'H', 'A', 'R', 'R', 'S', 'A'},
 {'A', 'Z', 'C', 'G', 'E', 'S', 'W', 'E', 'W', 'N', 'A', 'K', 'N', 'P', 'B'},
 {'D', 'I', 'N', 'N', 'E', 'R', 'Q', 'O', 'D', 'L', 'W', 'D', 'C', 'A', 'R'},
 {'O', 'N', 'O', 'P', 'K', 'W', 'M', 'P', 'A', 'R', 'K', 'T', 'Z', 'C', 'C'},
 {'Q', 'B', 'F', 'R', 'O', 'G', 'M', 'A', 'M', 'W', 'P', 'W', 'E', 'E', 'Y'},
 {'L', 'Q', 'Z', 'Q', 'N', 'N', 'M', 'R', 'Z', 'J', 'J', 'S', 'C', 'L', 'G'},
 {'M', 'O', 'S', 'G', 'Z', 'C', 'Z', 'D', 'T', 'D', 'B', 'O', 'O', 'T', 'O'},
 {'P', 'D', 'C', 'R', 'Z', 'M', 'S', 'N', 'G', 'R', 'D', 'N', 'R', 'P', 'Z'},
 {'O', 'H', 'N', 'K', 'Z', 'W', 'A', 'T', 'E', 'R', 'J', 'G', 'T', 'R', 'A'}};
char (*puzzle)[15] = pzl;

void tampilPzl(){
    cout << "-------------------------------------------------\n";
    for(int i=0; i<15; i++){
        cout << "|  ";
        for(int j=0; j<15; j++){
            cout << *(*(puzzle+i)+j) <<"  ";
        }
        cout << "|" << endl;
    }
    cout << "-------------------------------------------------\n";
}

void kapital(){

}

int main(){
    tampilPzl();
    int banyakKata;
    cin >> banyakKata;
    char kata[banyakKata][15];
    for(int i=0; i<banyakKata;i++){
        cin >> kata[i];
    }
    return 0;
}
