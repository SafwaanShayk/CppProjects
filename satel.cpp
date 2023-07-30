#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


struct Satellite
{

    string type;
    int range;
    int timings;
    int frequency;
    string orbit;
    int distanceorbit;


}p1[2],p2[2];
int d1, d2;
int january[2] = {d1,d2};

void observingplanet1()
{
    int temp,max;
    for (int i = 0; i < 2; i++)
    {

        cout << "\nEnter The Type Of Satellite" << endl;
        cin >> p1[i].type;
        cout << "\nEnter The Range Of Satellite" << endl;
        cin >> p1[i].range;
        cout << "\nEnter The Frequency Of Satellite" << endl;
        cin >> p1[i].frequency;
        cout << "\nEnter The Name Of Planet Satellite Is Orbiting" << endl;
        cin >> p1[i].orbit;
        cout <<"\nEnter The Distance Of Satellite From Planet" << endl;
        cin >> p1[i].distanceorbit;

    }
    d1 = p1[0].distanceorbit;
    for (int j = 0; j < 2; j++)
    {
        temp = p1[j].distanceorbit;
        if (temp < d1)
        {
            d1 = temp;
        }
    }
    for (int k = 0; k < 2; k++)
    {
        if (p1[k].distanceorbit == d1)
        {
            cout<<"\n"<<p1[k].type<< " SATELLITE IS CLOSEST TO ITS PLANET" << "\n\n";
        }
    }
}
void observingplanet2()
{
    int temp, max;
    for (int i = 0; i < 2; i++)
    {
        cout << "\t\n\nEnter The Type Of Satellite" << endl;
        cin >> p2[i].type;
        cout << "\t\nEnter The Range Of Satellite" << endl;
        cin >> p2[i].range;
        cout << "\t\nEnter The Frequency Of Satellite" << endl;
        cin >> p2[i].frequency;
        cout << "\t\nEnter The Name Of Planet Satellite Is Orbiting" << endl;
        cin >> p2[i].orbit;
        cout << "\t\nEnter The Distance Of Satellite From Planet" << endl;
        cin >> p2[i].distanceorbit;

    }
    d2 = p2[0].distanceorbit;
    for (int j = 0; j < 2; j++)
    {
        temp = p2[j].distanceorbit;
        if (temp < d2)
        {
            d2 = temp;
        }
    }
    for (int k = 0; k < 2; k++)
    {
        if (p2[k].distanceorbit == d1)
        {
            cout<<"\n"<<p1[k].type<< " SATELLITE IS CLOSEST TO ITS PLANET" << "\n\n";
        }
    }
}


int main()
{
    observingplanet1();
    for (int i = 0; i < 2; i++)
    {
        cout << "\t\nThe Type Of Satellite: ";
        cout << p1[i].type << "\n";
        cout << "\t\nThe Range Of Satellite: ";
        cout << p1[i].range << "\n";
        cout << "\t\nThe Frequency Of Satellite: ";
        cout << p1[i].frequency << "\n";
        cout << "\t\nThe Name Of Planet Satellite Is Orbiting: ";
        cout << p1[i].orbit <<"\n";
        cout << "\t\nThe Distance Of Satellite From Planet: ";
        cout << p1[i].distanceorbit <<"\n\n";
    }

return 0;}
