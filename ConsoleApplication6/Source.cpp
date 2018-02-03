#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;


//int IsLeapYear(int Y);
//
//void main()
//{
//
//}
//
//int IsLeapYear(int Y)
//{
//	if((Y%4==0&&Y%400)||(Y%100!=0)
//
//}
//void PrevDate(int D, int M, int Y)
//{
//	if (D == 1)
//	{
//		if (M == 1)
//		{
//			Y = Y - 1;
//			M = 12;
//			D = MonthDays(M, Y);
//		}
//		else if (M == 3)
//		{
//			M = M - 1;
//			D = MonthDays(M, Y);
//		}
//		else
//		{
//			D = D - 1;
//		}
//	}
//	else
//	{
//		D = D - 1;
//	}
//
//	cout << "Predydushii den' " << D << "." << M << "." << Y << endl;
//}

//

//void chline(char *ch, int *i, int *j);
//
//void main()
//{
//	int i, j;
//	char ch;
//	cout << "Vvedite i, j i simvol ch: " << endl;
//	cin >> i;
//	cin >> j;
//	cin >> ch;
//	chline(&ch, &i, &j);
//}
//
//void chline(char *ch, int *i, int *j)
//{
//	int ii, jj;
//	for (ii = 0; ii < *i; ii++)
//	{
//		for (jj = 0; jj < *j; jj++)
//		{
//			cout << *ch;
//		}
//		cout << endl;
//	}
//	
//}

//double larger_of(double *x, double *y);
//
//void main()
//{
//	srand(time(NULL));
//	int x, y;
//	cout << "Chisla x i y:" << endl;
//	x = 1 + rand() % 10;
//	y = 1 + rand() % 10;
//	cout << x << " " << y << endl;
//	larger_of(&x, &y);
//	cout << x << " " << y << endl;
//
//
//}
//
//int larger_of(int *x, int *y)
//{
//
//}

//void chart();
//void main()
//{
//
//}
//void chart() {
//	char ch ='t';
//	while (ch != '\0') {
//		cin >> ch;
//		cout << ch << " (" << int(ch) << ")" << endl;
//	}
//}

//void IncTime(int *H, int *M, int *S, int *T);
//
//void main()
//{
//	int H = 10;
//	int M = 58;
//	int S = 38;
//	int T = 120;
//	IncTime(&H, &M, &S, &T);
//	cout << H << "." << M << "." << S << endl;
//}
//
//void IncTime(int *H, int *M, int *S, int *T)
//{
//	int m, s, h, mh;
//	*T = *T + *S;
//	m = *T / 60;
//	*S = *T % 60;
//	
//	if ((m+*M)>=60){
//		h = (m + *M) / 60;
//		*H = *H + h;
//		*M = (m + *M) % 60;
//	}
//	else {
//		*M = m + *M;
//	}
//	
//}

//void Election() {
//	int mass[30][30];
//	int ZA = 0;
//	int kand = 0;
//	int max = 0;
//
//	for (int i = 0; i < 30; i++) {
//		for (int j = 0; j < 30; j++) {
//			mass[i][j] = 1 + rand() % 3;
//			if (mass[j][j] == 1) {
//				ZA++;
//			}
//		}
//		cout << "Kandidat " << i << " ZA = " << ZA << endl;
//		if (ZA > max) {
//			max = ZA;
//			kand = i;
//		}
//		ZA = 0;
//	}
//	cout << "Pobedil kandidat ¹" << kand << "nabrav " << max << " golosov." << endl;
//}

int f(int m1, int m2, int m3);

void main()
{
	int m1, m2, m3;
	cout << "vvedite chisla m1, m2, m3" << endl;
	cin >> m1;
	cin >> m2;
	cin >> m3;
	cout << "S ravno: " << f(m1, m2, m3) << endl;
}

int f(int m1, int m2, int m3)
{
	int S;
	
	
	if (m1 < 1000 && m2 < 1000) {
		S = m1 + m2;
	}
	else if (m1 < 1000 && m3 < 1000) {
		S = m1 + m3;
	}
	else if (m2 < 1000 && m3 < 1000) {
		S = m2 + m3;
	}
	else if (m1 < 1000 || m2 < 1000 || m3 < 1000) {
		if (m1 < 1000)
			S = m1;
		else if (m2 < 1000)
			S = m2;
		else 
			S = m3;
	}
	else {
		S = 0;
	}
	return S;
}