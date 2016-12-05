// ConsoleApplication3.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>

//ACSO

using namespace std;
int main()
{
/*nt n = 10;
	int i;
	int s = 0;
	for (i = 1; i <= n; i++) {
		_asm {
			mov eax, i;
			add s, eax;
		}
	}
	cout << s;
	cout << '\n';*/
	char t[] = "7145";
	char c;
	unsigned n = 0, i;
	for (i = 0; t[i] != 0; i++) 
		c = t[i];
		_asm {
			mov eax, 10;
			mul n;
			mov n, eax;
			sub c, '0';
			mov  eax, 0;
			mov al, c;
			add n, eax;
		}
	}
	cout << n;




    return 0;
}

