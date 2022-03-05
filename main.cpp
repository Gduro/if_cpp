#include <iostream>

using namespace std;

int main()
{
    int wybor;
	int liczba_pierwsza;
	int liczba_druga;
	cout<<"1. dodawanie 2. odejmowanie"<<endl;
	cout<<"jakie dzialanie chcesz wykonac: ";
	cin>>wybor;
	cin>>liczba_pierwsza;
	cin>>liczba_druga;
	if(wybor == 1)//warunek dodawania jeśli wybór wynosi 1 to przekierowywuje do tego warunku i wykonuje się kod sumujacy i wypisujacy to czyli potocznie mówiąc dodawanie ;)
	{
		cout<<liczba_pierwsza+liczba_druga;
	}
	//warunek dodawania jeśli wybór wynosi 2 przenosi do tego warunku i wykonuje się kod odejmowania i wypisuje to 
/*  else if(warunek)
	{
		kod do  odejmowania
	}*/
	// możesz tutaj dorobić więcej takich warunków np mnożenie(np. a*b) czy też dzielenie(np a/b)
	// !PAMIĘTAJ! - przy robieniu warunków dodawaj else if
	//pod koniec napisz też zwykłego else gdzie będzie napisane ZŁY WYBÓR
	return 0;
}