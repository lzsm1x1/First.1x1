#include<cstdio>
#include<iostream>				//输入输出流 
#include<string>				
#include<string.h>
using namespace std;
const int aa=1e1;				//宏定义const 
int main(void)
{
	char str[aa];
	string a="abcd";			//string类型 ,可加减(类似strcat),可比较大小(类似strcmp) 
	string b="bcdd";
	string c="a";
	string d;
	getline(cin,d);				//getline(cin,string类型数据),不读取" "或回车停止的输入 
	cout<<d+c<<endl;
	cout<<"c字母在a中："<<a.find("c")+1<<"个位置"<<endl;
	
	int num1;					//sscanf(数组,""转化类型",&数字),括号内内容从左到右转化 
	char str1[aa]="123";
	sscanf(str1,"%d",&num1);
	cout<<num1<<endl;
	
	float num2=123.45;				//sprintf(数组,"转化类型",数字),括号内内容从右到左转化 
	char str2[aa];
	sprintf(str2,"%f",num2);
	cout<<str2<<endl; 
	
	int num3;
	char str3[aa]="55432";		//stoi(数组) 将数组转化为int类型输出 
	num3=stoi(str3);
	cout<<num3<<endl;
	
	int num4=43214;				//to_string(数字) 将数字转化为string类型输出 
	string str4;
	str4=to_string(num4);
	cout<<num4<<endl;
	
	return 0;
}
