#include<iostream>
#include<string>
#include<time.h>
#include<stdlib.h>
#include<sstream>

using namespace std;

main()
{
	//baris 12-37: tabel substitusi
	string A[]={"ZI","AB","CC","DG","EU","FP","YH","RK"};
	string B[]={"DH","QA"};
	string C[]={"AC","DJ","FB"};
	string D[]={"ZA","IC","DE","GR"};
	string E[]={"AD","JF","BM","VE","NO","EE","NG","XW","PD","HK","QM","IZ"};
	string F[]={"AZ","CJ"};
	string G[]={"ZF","BE"};
	string H[]={"BC","CI","EZ","NF","FW","OH"};
	string I[]={"CB","GZ","PC","HL","HH","IU"};
	string J[]={"AE"};
	string K[]={"ZD"};
	string L[]={"BF","CG","EA","HD"};
	string M[]={"BB","KG"};
	string N[]={"AH","EQ","NI","FF","GJ"};
	string O[]={"ZZ","IE","RG","ED","PB","AI","JJ"};
	string P[]={"CH","IN"};
	string Q[]={"ID"};
	string R[]={"BI","CE","DZ","DK","GG","HZ"};
	string S[]={"AA","AR","CF","GO","HO","IO"};
	string T[]={"AG","BZ","CR","DC","MI","FI","GE","HN","IG"};
	string U[]={"ZH","FA","FC"};
	string V[]={"ST"};
	string W[]={"ES","HT"};
	string X[]={"BH"};
	string Y[]={"BA","EB"};
	string Z[]={"TB"};
	string plaintext1,plaintext2="",ciphertext="";
	cout<<"Input plaintext:(gunakan huruf besar) ";
	cin>>plaintext1;
	srand(time(NULL));
	//baris 43-97: proses enkripsi dari plaintext1 menjadi ciphertext
	for(int i=0;i<plaintext1.length();i++)
	{
		if (plaintext1[i]=='A')
			ciphertext+=A[rand()%8];
		if (plaintext1[i]=='B')
			ciphertext+=B[rand()%2];
		if (plaintext1[i]=='C')
			ciphertext+=C[rand()%3];
		if (plaintext1[i]=='D')
			ciphertext+=D[rand()%4];
		if (plaintext1[i]=='E')
			ciphertext+=E[rand()%12];
		if (plaintext1[i]=='F')
			ciphertext+=F[rand()%2];
		if (plaintext1[i]=='G')
			ciphertext+=G[rand()%2];
		if (plaintext1[i]=='H')
			ciphertext+=H[rand()%6];
		if (plaintext1[i]=='I')
			ciphertext+=I[rand()%6];
		if (plaintext1[i]=='J')
			ciphertext+=J[0];
		if (plaintext1[i]=='K')
			ciphertext+=K[0];
		if (plaintext1[i]=='L')
			ciphertext+=L[rand()%4];
		if (plaintext1[i]=='M')
			ciphertext+=M[rand()%2];
		if (plaintext1[i]=='N')
			ciphertext+=N[rand()%5];
		if (plaintext1[i]=='O')
			ciphertext+=O[rand()%7];
		if (plaintext1[i]=='P')
			ciphertext+=P[rand()%2];
		if (plaintext1[i]=='Q')
			ciphertext+=Q[0];
		if (plaintext1[i]=='R')
			ciphertext+=R[rand()%6];
		if (plaintext1[i]=='S')
			ciphertext+=S[rand()%6];
		if (plaintext1[i]=='T')
			ciphertext+=T[rand()%9];
		if (plaintext1[i]=='U')
			ciphertext+=U[rand()%3];
		if (plaintext1[i]=='V')
			ciphertext+=V[0];
		if (plaintext1[i]=='W')
			ciphertext+=W[rand()%2];
		if (plaintext1[i]=='X')
			ciphertext+=X[0];
		if (plaintext1[i]=='Y')
			ciphertext+=Y[rand()%2];
		if (plaintext1[i]=='Z')
			ciphertext+=Z[0];
	}
	cout<<"Hasil enkripsi: "<<ciphertext<<endl;
	//baris 100-150: proses dekripsi dari ciphertext menjadi plaintext2 untuk menunjukkan bahwa plaintext2 = plaintext1
	for(int j=0;j<ciphertext.length();j+=2)
	{
		string s(1,ciphertext[j]);
		string t(1,ciphertext[j+1]);
		for (int i=0;i<8;i++)
			if(s+t==A[i]) plaintext2+="A";
		for (int i=0;i<2;i++)
			if(s+t==B[i]) plaintext2+="B";
		for (int i=0;i<3;i++)
			if(s+t==C[i]) plaintext2+="C";
		for (int i=0;i<4;i++)
			if(s+t==D[i]) plaintext2+="D";
		for (int i=0;i<12;i++)
			if(s+t==E[i]) plaintext2+="E";
		for (int i=0;i<2;i++)
			if(s+t==F[i]) plaintext2+="F";
		for (int i=0;i<2;i++)
			if(s+t==G[i]) plaintext2+="G";
		for (int i=0;i<6;i++)
			if(s+t==H[i]) plaintext2+="H";
		for (int i=0;i<6;i++)
			if(s+t==I[i]) plaintext2+="I";
		if(s+t==J[0]) plaintext2+="J";
		if(s+t==K[0]) plaintext2+="K";
		for (int i=0;i<4;i++)
			if(s+t==L[i]) plaintext2+="L";
		for (int i=0;i<2;i++)
			if(s+t==M[i]) plaintext2+="M";
		for (int i=0;i<5;i++)
			if(s+t==N[i]) plaintext2+="N";
		for (int i=0;i<7;i++)
			if(s+t==O[i]) plaintext2+="O";
		for (int i=0;i<2;i++)
			if(s+t==P[i]) plaintext2+="P";
		if(s+t==Q[0]) plaintext2+="Q";
		for (int i=0;i<6;i++)
			if(s+t==R[i]) plaintext2+="R";
		for (int i=0;i<6;i++)
			if(s+t==S[i]) plaintext2+="S";
		for (int i=0;i<9;i++)
			if(s+t==T[i]) plaintext2+="T";
		for (int i=0;i<3;i++)
			if(s+t==U[i]) plaintext2+="U";
		if(s+t==V[0]) plaintext2+="V";
		for (int i=0;i<2;i++)
			if(s+t==W[i]) plaintext2+="W";
		if(s+t==X[0]) plaintext2+="X";
		for (int i=0;i<2;i++)
			if(s+t==Y[i]) plaintext2+="Y";
		if(s+t==Z[0]) plaintext2+="Z";
	}
	cout<<"Hasil dekripsi: "<<plaintext2;
}
