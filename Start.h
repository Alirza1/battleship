#pragma once
#include<iostream>
#include"Functions.h"
using namespace std;

void Start() {
	srand(time(0));
	while (true)
	{
		ShowMenu();
		int select = 0;
		cin >> select;
		system("cls");
		if (select == 1) {
			GAME();
		}
		else if (select == 2) {
			ShowRules();
		}
		else if (select == 0) {
			break;
		}
	}
}