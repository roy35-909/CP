#include<iostream>
using namespace std;
main(){
double a;
cin >> a;
int taka_in_note = a;
long long int main_notes = a;
int taka_100 = taka_in_note/100;
taka_in_note = taka_in_note%100;
int taka_50 = taka_in_note/50;
taka_in_note = taka_in_note%50;
int taka_20 = taka_in_note/20;
taka_in_note = taka_in_note%20;
int taka_10 = taka_in_note/10;
taka_in_note = taka_in_note%10;
int taka_5 = taka_in_note/5;
taka_in_note = taka_in_note%5;
int taka_2 = taka_in_note/2;
taka_in_note = taka_in_note%2;
int coin_1 = taka_in_note/1;
taka_in_note = taka_in_note%1;

double coin = a-main_notes;

int coin_05 = coin / 0.50;
coin = coin- coin_05*0.5;

int coin_025 = coin / 0.25;
coin = coin- coin_025*0.25;

int coin_010 = coin / 0.10;
coin = coin- coin_010*0.10;

int coin_005 = coin / 0.05;
coin = coin- coin_005*0.05;

int coin_001 = coin / 0.01;
coin = coin- coin_001*0.01;

cout<<"NOTAS:"<<endl;
cout << taka_100<<" nota(s) de R$ 100.00"<<endl;

cout << taka_50<<" nota(s) de R$ 50.00"<<endl;

cout << taka_20<<" nota(s) de R$ 20.00"<<endl;

cout << taka_10<<" nota(s) de R$ 10.00"<<endl;

cout << taka_5<<" nota(s) de R$ 5.00"<<endl;

cout << taka_2<<" nota(s) de R$ 2.00"<<endl;

cout<<"MOEDAS:"<<endl;

cout << coin_1<<" moeda(s) de R$ 1.00"<<endl;

cout << coin_05<<" moeda(s) de R$ 0.50"<<endl;

cout << coin_025<<" moeda(s) de R$ 0.25"<<endl;

cout << coin_010<<" moeda(s) de R$ 0.10"<<endl;

cout << coin_005<<" moeda(s) de R$ 0.05"<<endl;

cout << coin_001<<" moeda(s) de R$ 0.01"<<endl;


}
