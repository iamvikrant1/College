#include<iostream>
using namespace std;
class weather
{
public:
  int i,l[4],h[4],r[4],s[4    ],t;
  char day[4];
  float avg_l=0,avg_h=0,avg_r=0,avg_s=0;
  weather()
  {
    for(i=1;i<5;i++)
    {
      cout<<"          Enter the report of day:-       "<<i<<endl;

      cin>>l[i]>>h[i]>>r[i]>>s[i];

    }
  }
void report();
void average();
float avg(int arr[]);

};

int main()
{
  weather w;

  while(1)
  {
    cout<<"            Weather report           "<<endl;

//  	cout<<"Enter new data :- 1"<<endl;
    cout<<"______________________________________________________________"<<endl;
  	cout<<"Show data :- 1"<<endl;
  	cout<<"Enter average :- 2"<<endl;

    cin>>w.t;

    switch(w.t)
    {
      case 1: w.report();
                break;

      case 2: w.average();
                break;
      default: cout<<"Sorry try again";
                break;
    }

  }
return 0;
}

void weather::report()
{
  for(i=1;i<5;i++)
  {
    cout<<l[i]<<h[i]<<r[i]<<s[i]<<endl;
  }
}

void weather::average()
{
  for(i=1;i<5;i++)
	{
		avg_l=avg_l+l[i];
		avg_h=avg_h+h[i];
		avg_r=avg_r+r[i];
		avg_s=avg_s+s[i];
	}
	avg_l=avg_l/5;avg_h=avg_h/5;avg_r=avg_r/5;avg_s=avg_s/5;

	cout<<"    Average of low temperature is:-"<<avg_l<<endl;
	cout<<"    Average of high temperature is:-"<<avg_h<<endl;
  cout<<"    Average of rain temperature is:-"<<avg_r<<endl;
  cout<<"    Average of snow temperature is:-"<<avg_s<<endl;

}

