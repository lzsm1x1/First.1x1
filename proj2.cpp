#include<cstdio>
#include<iostream>				//��������� 
#include<string>				
#include<string.h>
using namespace std;
const int aa=1e1;				//�궨��const 
int main(void)
{
	char str[aa];
	string a="abcd";			//string���� ,�ɼӼ�(����strcat),�ɱȽϴ�С(����strcmp) 
	string b="bcdd";
	string c="a";
	string d;
	getline(cin,d);				//getline(cin,string��������),����ȡ" "��س�ֹͣ������ 
	cout<<d+c<<endl;
	cout<<"c��ĸ��a�У�"<<a.find("c")+1<<"��λ��"<<endl;
	
	int num1;					//sscanf(����,""ת������",&����),���������ݴ�����ת�� 
	char str1[aa]="123";
	sscanf(str1,"%d",&num1);
	cout<<num1<<endl;
	
	float num2=123.45;				//sprintf(����,"ת������",����),���������ݴ��ҵ���ת�� 
	char str2[aa];
	sprintf(str2,"%f",num2);
	cout<<str2<<endl; 
	
	int num3;
	char str3[aa]="55432";		//stoi(����) ������ת��Ϊint������� 
	num3=stoi(str3);
	cout<<num3<<endl;
	
	int num4=43214;				//to_string(����) ������ת��Ϊstring������� 
	string str4;
	str4=to_string(num4);
	cout<<num4<<endl;
	
	return 0;
}
