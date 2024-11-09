#include<iostream>
#include<iomanip>
using namespace std;
int main()
{

    double R,Area;
    cin>>R;

    Area=3.141592653*(R*R);
    cout<<fixed<<setprecision(9)<<Area;
}
