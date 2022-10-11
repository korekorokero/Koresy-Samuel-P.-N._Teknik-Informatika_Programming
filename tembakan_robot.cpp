// NAMA     : Koresy Samuel Parlinggoman Nainggolan
// NRP      : 5025221141
// JURUSAN  : Teknik Informatika

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int v0, xmax, loss;
    float vtan;

    cin >> v0;
    if (v0 >= 1 && v0 <= 10)
    {
        v0 = v0 - 1;
        loss = 1;
    }
    else if (v0 >= 11 && v0 <= 20)
    {
        v0 = v0 - 3;
        loss = 3;
    }
    else if (v0 >= 21 && v0 <= 30)
    {
        v0 = v0 - 5;
        loss = 5;
    }

    xmax = pow(v0, 2) * sin(90 * 3.1415 / 180) / 10;
    vtan = sqrt(xmax * 10 / sin(90 * 3.1415 / 180)) + loss;
    cout << xmax << " " << vtan << endl;

    return 0;
}