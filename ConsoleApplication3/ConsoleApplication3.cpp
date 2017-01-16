// ConsoleApplication3.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>

//ACSO

using namespace std;
//int main()
//{
/*
//adunnare primele n numere
int n = 10;
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
	/*
	//scriere numar invers din char in int
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
	cout << n;*/

	// verificare nr prim
	/*unsigned a, i, x;
	cin >> a;
	if (a < 4)cout << "DA";
	else {
		for (i = 2; i <= a / 2; i++) {
			//	x = a%i;
			_asm {
				mov eax, a;
				mov edx, 0;
				div i;
				mov x, edx;
			}
			if (x == 0)break;
		}
		if (x == 0)cout << "NU" << '\n';
		else cout << "DA" << '\n';
	}

	*/
	
	// verificare nr prim ase
	
	/*_asm {
		mov ebx, a;
		shr ebx, 1;
		mov esi, 2;
	myloop:
		cmp esi, ebx;
		ja outside;
		mov eax, a;
		mov edx, 0;
		div esi;
		cmp edx, 0;
		je outside;
		inc esi;
		jmp myloop;
	outside:
		mov x, edx;
	}
	if (x == 0)cout << "NU" << '\n';
	else cout << "DA" << '\n';*/

	/*int x;
	void f()
	{
		x += 10;
	}*/
	/*void dif(int y, int z) {
		cout << (y - z);
	}*/
/*
	int main() {
		cin >> x;
		_asm {
			call f;
		}
		cout << x << '\n';
		int y;
		int z;

		cin >> y >> z;
		_asm {
			push  y;// push dword ptr 5
			push  z;
			call dif;
			add esp, 8;
		}
		cout << '\n';
		return 0;
	}




  //  return 0;
//}
*/
// normal factorial
/*
unsigned fact(unsigned n) {
	unsigned r = 1;
	unsigned i = 1;
	for (i = 2; i <= n; i++)r *= i;
	return r;
}*/
// asse factorial /*
/*unsigned fact2(unsigned n) {
	_asm {
		push ebx;
		mov eax, 1;
		mov ebx, 2;
	myloop:
		cmp ebx, n;
		ja outside;
		mul ebx;
			inc ebx;
			jmp myloop;
		outside:
			pop ebx;
	}
}
*/
// factorial recursive
/*unsigned fact_recursive(unsigned n) {
	if (n <= 1)return 1;
	return n*fact_recursive(n - 1);
}*/
/*unsigned fact_recursive_1(unsigned n) {
	_asm {
		cmp n, 1;
		ja somewhere;
		mov eax, 1;
		jmp finall;
	somewhere:
		mov eax, n;
		dec eax;
		push eax;
		call fact_recursive_1;
		add esp, 4;
		mul n;
		finall:

	}
}*/
// main factorial
/*int main() {
	int n;
	cin>> n;

	cout << fact(n);
	cout << '\t';
	cout << fact2(n);
	cout << '\n';
	cout << fact_recursive(n);
	cout << '\t';
	cout << fact_recursive_1(n);
	cout << '\n';
}
*/
/*void a21(unsigned n1, char t1[20]) {
	_asm {
		mov ecx, 0;
		mov esi, t1;// this is only for subprogram
		mov eax, n1;
	label:
		mov ebx, 10;
		mov edx, 0;
		div ebx;
		add dl, '0';
		//mov t1[ecx], dl; // normal program
		mov[esi + ecx], dl;// subprogram
		inc ecx;
		cmp eax, 0;
		ja label;
		//mov byte ptr t1[ecx], 0;// normal program 
		mov byte ptr[esi + ecx], 0;//subproram
	}
}
/*int main() {

	unsigned n = 1493, i;
	char t[20];
	i = 0;
	do {
		t[i] = n % 10 + '0';
		n /= 10;
		i++;
	} while (n > 0);
	t[i] = '\0';
	cout << t;
	unsigned n1 = 1493;
	char t1[20];

	a21(n1, t1);
	cout << '\t';
	cout << t1;

}*/
/*
struct s {
	char c;
	int i;
};

int main() {
	s a = { 'x',15 };
	cout << sizeof(a);
}

struct pt
{
	int x;
	int y;

};



void middle(pt*p1, pt*p2, pt*p3) {
	_asm {
		mov edx, p1;
		mov eax, [edx + 0];
		mov edx, p2;
		add eax, [edx + 0];
		mov edx, eax;
		
		mov eax, p3;
		sar edx, 1;
		mov[eax], edx;

		mov edx, p1;
		mov eax, [edx + 4];
		mov edx, p2;
		add eax, [edx + 4];
		mov edx, eax;

		mov eax, p3;
		sar edx, 1;
		mov[eax + 4], edx;

	}
}


// /2 shift right ;
int main() {
	pt p1, p2, p3;
	//p3.x = (p1.x + p2.x) / 2;
	//p3.y = (p1.y + p2.y) / 2;
	p1.x = 6;
	p2.x = 7;
	p1.y = 9;
	p2.y = 5;
	/*_asm {
		mov eax, dword ptr p1;
		add eax,dword ptr p2;
		sar eax, 1;
		mov dword ptr p3 , eax;

		/*mov eax, dword ptr p1;
		add eax,dword ptr  p2;
		sar eax, 1;
		mov dword ptr p3 , eax;
	};
	middle(&p1, &p2, &p3);
	cout << p3.x << endl;
	cout << p3.y << endl;
	pt t[50], p = { 0,0 };
/*	for (int i = 0; i < 50; i++) {
		p.x = t[i].x;
		p.y = t[i].y;
	}
	p.x /= 50;
	p.y /= 50;
	// the above function in _asm
	for (int i = 0; i < 50; i++) {
		t[i].x = i;
		t[i].y = i;
	}

	_asm {
		//i < -esi;
		//p.x < -edx;
		//p.y < -eax;
	
		mov edx, 0;
		mov ecx, 0;
		mov esi, 0;
	MyLoop:
		cmp esi, 50;
		jge Outside;
		add edx,dword ptr  t[esi * 8 + 0];
		add ecx,dword ptr  t[esi * 8 + 4];
		inc esi;
		jmp MyLoop;
	Outside:
		mov edi, 50;
		mov eax, edx;
		mov edx, 0;
		div edi;
		mov dword ptr p, eax;
		mov edx, 0;
		mov eax, ecx;
		div edi;
		mov dword ptr p + 4, eax;
	}

	cout << p.y << endl;
	cout << p.y << endl;

}

*/


int sum(int M[][3]) {
	int s = 0;
	_asm {
		//i<-ebx
		//j<-ecx
		//s<-esi
		mov ebx, 0;
		mov ecx, 0;
		mov esi, 0;
		// loop for i
		mov eax, 0;
		mov edx, 0;
	Loop_i:
		cmp ebx, 3;
		jge Out_of_loop;
		//loop for j
		mov ecx, 0;
	Loop_j:
		//mov eax, 0;
		cmp  ecx, 3;
		// go to increase i
		jge In_loop_i;
		// sum for matrix
		// add j
		mov eax, M;
		mov edx, [eax + ebx * 4];
		add esi, [edx + ecx * 4];
		//mov edx, 4;
		//mul edx;
		//j*3;

		//j*3+i

		//add esi, M[eax * 4];
		//add esi, 1;

		add ecx, 1;
		//increase j
		jmp Loop_j;

	In_loop_i:
		add ebx, 1;
		jmp Loop_i;



	Out_of_loop:
		mov s, esi;
	}
	cout << s;
}
//sum of val from a matrix
int main() {/*
	int i, j, s = 0;
	int M[3][3] = {  {3,4,5},{6,7,8},{1,2,9} };
	/*	for (i = 0; i < 3; i++)
			for (j = 0; j < 3; j++)//s += M[i][j];
				cin >> M[i][j];
	//cout << s;
	
	_asm {
		
		//i<-ebx
		//j<-ecx
		//s<-esi
		mov ebx, 0;
		mov ecx, 0;
		mov esi, 0;
		// loop for i
		mov eax, 0;
		mov edx, 0;
	Loop_i:
		cmp ebx, 3;
		jge Out_of_loop;
		//loop for j
		mov ecx, 0;
	Loop_j:
		//mov eax, 0;
		cmp  ecx, 3;
		// go to increase i
		jge In_loop_i;
		// sum for matrix
		// add j
		mov eax, ebx;
		mov edx, 3;
		mul edx;
		add eax, ecx;
		//mov edx, 4;
		//mul edx;
		//j*3;
		
		//j*3+i
		
		add esi, M[eax*4];
		//add esi, 1;

		add ecx, 1;
		//increase j
		jmp Loop_j;
		
	In_loop_i:
		add ebx, 1;
		jmp Loop_i;



	Out_of_loop:
		mov s, esi;
	}

	cout << endl;
	cout << s;*/
	int i, j, s;
	cout << endl;
	int **M_1;
	M_1 = new int *[3];
	for (i = 0; i < 3; i++)M_1[i] = new int[3];
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)//s += M[i][j];
			cin >> M_1[i][j];
	




	 s = 0;
	_asm {
		//i<-ebx
		//j<-ecx
		//s<-esi
		mov ebx, 0;
		mov ecx, 0;
		mov esi, 0;
		// loop for i
		mov eax, 0;
		mov edx, 0;
	Loop_i:
		cmp ebx, 3;
		jge Out_of_loop;
		//loop for j
		mov ecx, 0;
	Loop_j:
		//mov eax, 0;
		cmp  ecx, 3;
		// go to increase i
		jge In_loop_i;
		// sum for matrix
		// add j
		mov eax, M_1;
		mov edx, [eax + ebx * 4];
		add esi, [edx + ecx * 4];
		//mov edx, 4;
		//mul edx;
		//j*3;

		//j*3+i

		//add esi, M[eax * 4];
		//add esi, 1;

		add ecx, 1;
		//increase j
		jmp Loop_j;

	In_loop_i:
		add ebx, 1;
		jmp Loop_i;



	Out_of_loop:
		mov s, esi;
	}
	cout << s;

}