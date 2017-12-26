#include <iostream>
#include "przyjaciele.h"

using namespace std;

Punkt::Punkt(string n, float xx, float yy)
{
    nazwa=n;
    x=xx;
    y=yy;
}

void Punkt::wczytaj()
{
    cout << "Podaj x: "; cin >> x;
    cout << "Podaj y: "; cin >> y;
    cout << "Nazwa punktu: "; cin >> nazwa;
}

Prostokat::Prostokat(string n, float xx, float yy, float s, float w)
{
    nazwa=n;
    x=xx;
    y=yy;
    szerokosc=s;
    wysokosc=w;
}
void Prostokat::wczytaj()
{
    cout<<"Podaj x lewego dolnego naroznika: "; cin>>x;
    cout<<"Podaj y lewego dolnego naroznika: "; cin>>y;
    cout<<"Podaj szerokosc: "; cin>>szerokosc;
    cout<<"Podaj wysokosc: "; cin>>wysokosc;
    cout<<"Podaj nazwe prostokata: "; cin>>nazwa;

}

void Prostokat::sedzia(Punkt pkt1, Prostokat p1)
{
    if((pkt1.x>=p1.x)&&(pkt1.x<=p1.x+p1.szerokosc)&&(pkt1.y>=p1.y)&&(pkt1.y<=p1.y+p1.wysokosc)) cout<<"Punkt "<<pkt1.nazwa<<"  nalezy do prostokata: "<<p1.nazwa<<"!";
    else cout<<"Punkt "<<pkt1.nazwa<<" nie nalezy do prostokata: "<<p1.nazwa<<"!";
}
