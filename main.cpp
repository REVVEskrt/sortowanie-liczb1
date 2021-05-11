#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int tab[5];
    int tab1 = 0;

    do
    {
        cout << "wprowadz liczbe: " << endl;
        cin >> tab[tab1];
        tab1++; 
    } while (tab1 < 5);
    
	cout<<"Przed sortowaniem: ";
	for(int i=0;i<5;i++)
    {
        cout<<tab[i]<<' ';
    }
	
	sort(tab, tab+5);
	
	cout<<"Elementy uporzadkowane:";
	for(int i=0;i<5;i++)cout<<tab[i]<<' ';
	return 0;
}