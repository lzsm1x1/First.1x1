#include<bits/stdc++.h>
using namespace std;
struct STU						//结构体定义 
{
	char name[20];
	int age;
	int id;
}stu[10];

bool cmp(STU a,STU b)			//调整排序方式 
{
	if(a.age!=b.age)
	{
		return a.age<b.age;
	}
	else
	{
		return a.id>b.id;
	}
}
int main(void)
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>stu[i].name>>stu[i].age>>stu[i].id;
	sort(stu,stu+n,cmp);
	for(int i=0;i<n;i++)
	cout<<stu[i].age<<" "<<stu[i].id<<" "<<stu[i].name<<endl;
	return 0;
} 
