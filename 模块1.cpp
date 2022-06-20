// 内容加载模块(屎山代码...)
#include<iostream>
#include<windows.h>
#include<stdlib.h>
using namespace std;
int main(){
	int time; 
	while(1){
		system("cls");
		Sleep(100);
		cout<<"加";
		Sleep(100);
		cout<<"载";
		Sleep(100);
		cout<<"中";
		Sleep(100);
		cout<<".";
		Sleep(100);
		cout<<".";
		Sleep(100);
		cout<<"."<<endl;
		if(time == 0){
			cout<<"[           0%           ]";
		} else if(time == 1){
			cout<<"[|||||||||  39%          ]";
		} else if(time == 2){
			cout<<"[|||||||||||68%||        ]";
		} else{
			cout<<"[|||||||||||76%||||||    ]";
		}
		Sleep(1000);
		time++;
		system("cls");
		cout<<"加载中";
		Sleep(100);
		cout<<".";
		Sleep(100);
		cout<<".";
		Sleep(100);
		cout<<".";
		Sleep(100);
		if(time == 3){
			cout<<endl<<"[||||||||||100%||||||||||]";
			Sleep(2000);
			system("cls");
			Sleep(100);
			cout<<"加载";
			Sleep(100);
			system("cls");
			cout<<"加";
			Sleep(100);
			system("cls");
			Sleep(200);
			cout<<"加";
			Sleep(100);
			cout<<"载";
			Sleep(100);
			cout<<"成";
			Sleep(100);
			cout<<"功";
			Sleep(100);
			cout<<"!";
			break;
		} 
	}
	return 0;
}
