#include<iostream>
#include<string.h>
using namespace std;
char str1[100], str2[200], word[100], ans;
int n, flag, chooser;
// Lab 3 by Smith Ramoy
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
int choose(int chooser);
char retry(char ans);

void problem1() {
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nSTRING COMPARE\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cin.ignore();
	cout<<"Enter a first word (str1): ";
	gets(str1);
	cout<<"Enter second word  (str2): ";
	gets(str2);
	if(strcmp(str1,str2)==0) cout<<"equal =)\n";
	else if(strcmp(str1,str2)>0) cout<<"positive \n";
	else if(strcmp(str1,str2)<0) cout<<"negative \n";
}

void problem2() {
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nSTRING COPY\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cin.ignore();
	cout<<"Enter a first word (str1): ";
	cin >> str1;
	cout<<"Enter second word  (str2): ";
	cin >> str2;
	cout<<"New string value for str1: "<<strcpy(str1, str2);
}

void problem3() {
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nSTRING CONCATENATION\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cin.ignore();
	cout<<"Enter a first word (str1): ";
	gets(str1);
	cout<<"Enter second word  (str2): ";
	gets(str2);
	cout<<"New string value for str1: "<<strcat(str1, str2);
}

void problem4() {
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nPALINDROME\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cin.ignore();
	cout<<"Enter a word: ";
	gets(word);
	n=strlen(word);
	for(int i=0;i<n;i++) {
		if(word[i]!=word[n-(i+1)]) flag=0;
		else flag=1;
    }
    if (flag==1) cout<<"The word "<<word<<" is a palindrome.";
    else if (flag==0) cout<<"The word "<<word<<" is NOT a palindrome.";
}

void problem5() {
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nCAPITALIZATION\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cin.ignore();
	cout<<"Enter a word: ";
	gets(word);
	strlwr(word);
	word[0]-=32;
	for(int i=0;i<strlen(word);i++) {
		if(word[i]==32) word[i+1]-=32;
	}
	cout<<word<<endl;
}

void problem6() {
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nREVERSE VERTICAL ORDER\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~s\n";
	cin.ignore();
	cout<<"Enter a phrase: ";
	gets(word);
	n=strlen(word);
	for(int i=n;i>=0;i--) {
		if (word[i]==32) {
			int j=i+1;
			while(word[j]!=32&&j<n) {
				cout<<word[j];
				j++;
			}
			cout<<endl;
		}
	}
	int k=0;
	while(word[k]!=32) {
		cout<<word[k];
		k++;
	}
}

int choose(int chooser) {
	cout<<"Choose a number to solve [1-6]: ";
	cin>>chooser;
	switch(chooser) {
		case 1:
			problem1();
			retry(ans);
			break;
		case 2:
			problem2();
			retry(ans);
			break;
		case 3:
			problem3();
			retry(ans);
			break;
		case 4:
			problem4();
			retry(ans);
			break;
		case 5:
			problem5();
			retry(ans);
			break;
		case 6:
			problem6();
			retry(ans);
			break;
		default:
			break;
	}
	return chooser;
}

char retry(char ans) {
	cout<<"\n\nSolve another problem?[y/n] ";
	cin>>ans;
	if (ans=='y') {
		system("cls");
		choose(chooser);
	}
	else if (ans=='n') {
		cout<<"Ciao!\n";
	}
	else {
		retry(ans);
	}
	return ans;
}

main() {
	choose(chooser);
}
