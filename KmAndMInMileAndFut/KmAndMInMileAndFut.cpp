#include <iostream>
#include <cstdlib>

using namespace std;

int KmInFtOneMile(int k) {
    const int ftInMile = 5280;
    const double kmInMile = 1.609344;
    double mile1 = k * kmInMile;
    double mile2 = mile1 - (int)mile1;
    int ft = mile2 * ftInMile;
    return ft;
}

int KmInMile(int k) {
    const double kmInMile = 1.609344;
    int mile = k * kmInMile;
    return mile;
}

int MetrInFt(int metr) {
    double mInKm = metr / 1000;
    const int ftInMile = 5280;
    const double kmInMile = 1.609344;
    int ft = mInKm * kmInMile * ftInMile;
    return ft;
}

int main()
{
    system("chcp 1251 > nul");
    int km, m;
    cout << "Введите растояние в километрах: ";
    cin >> km;
    cout << "и метрах: ";
    cin >> m;
    cout << "В " << km << " километрах " << m << " метрах " << KmInMile(km) << " миль " <<
        KmInFtOneMile(km) + MetrInFt(m) << " футов." << endl;
    system("pause > nul");
    return 0;
}
