#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int answer = rand()%100+1;
	int user_answer;
	while(1==1)
	{
		cout<<"Please enter your number:"<<endl;
		cin >> user_answer;
		if (user_answer >answer)
		{
			cout<<"Your answer is too big"<<endl;
		}
		else if(user_answer <answer)
		{
			cout<<"Your answer is too small"<<endl;
		}
		else
		{
			cout<<"Bingo!"<<endl;
			break;
		}
	}
}
