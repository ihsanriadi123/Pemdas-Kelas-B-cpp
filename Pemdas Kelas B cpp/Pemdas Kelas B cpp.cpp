#include <iostream>
using namespace std;

int main() {
    int nBilangan;
    string status;
    srand(time(0));

    nBilangan = rand() % 10;
    cout << "NILAI awal = " << nBilangan << endl;

    if (nBilangan % 2 == 0) {
        nBilangan = nBilangan + 1;

    }

    cout << "NILAInya adalah " << nBilangan << endl;
    
    if (nBilangan % 2 == 0) {
        status = "Genap";
    }
    else {
        status = "ganjir";
    }

    cout << "bilangan akhirnya adalah : " << nBilangan << endl;
    cout << "statusnya adalah : " << status << endl;

    return 0;
}