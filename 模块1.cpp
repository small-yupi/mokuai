#include<iostream>
#include<windows.h>
#include<stdlib.h>
using namespace std;
int main(){
	int time; 
	while(1){
		system("cls");
		Sleep(100);
		cout<<"��";
		Sleep(100);
		cout<<"��";
		Sleep(100);
		cout<<"��";
		Sleep(100);
		cout<<".";
		Sleep(100);
		cout<<".";
		Sleep(100);
		cout<<".";
		Sleep(1000);
		time++;
		system("cls");
		cout<<"������";
		Sleep(100);
		cout<<".";
		Sleep(100);
		cout<<".";
		Sleep(100);
		cout<<".";
		Sleep(100);
		if(time == 3){
			system("cls");
			cout<<"����";
			Sleep(100);
			system("cls");
			cout<<"��";
			Sleep(100);
			system("cls");
			Sleep(200);
			cout<<"��";
			Sleep(100);
			cout<<"��";
			Sleep(100);
			cout<<"��";
			Sleep(100);
			cout<<"��";
			Sleep(100);
			cout<<"!";
			break;
		} 
	}
	return 0;
}
