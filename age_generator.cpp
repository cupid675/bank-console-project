#include<iostream>
#include<math.h>
#include<ctime>
time_t theTime=time(NULL);
struct tm *atime=localtime(&theTime);
using namespace std;
int age_in_years(int y,int m,int d)
{
    int c_year= atime->tm_year+1900;
    int c_month=atime->tm_mon+1;
    int c_day=atime->tm_mday;

    if(c_day==d&&c_month==m)
        return c_year-y;
    else
    return c_year-y-1;

}
int age_in_month(int m){
int c_month=atime->tm_mon+1;
      if(m==c_month){
        return 0;
      }
     return c_month;

}
int age_in_days(int d,int m)
{
    int c_month=atime->tm_mon+1;
 int c_day=atime->tm_mday;
 if(c_month==m&&c_day<d)
    return  d-c_day;

    if(c_month==m&&c_day>d)
    return  (c_day-d);

 if(c_month==m&&c_day==d)
        return 0;

 else return c_day;
}
int main()
{
    int birth_year,birth_month,birth_day;
    cout<<"Eneter your Bithday day: ";
    cin>>birth_day;
    cout<<"Enter Your Birth Month: ";
    cin>>birth_month;
    cout<<"Enter Your birth Year:  ";
    cin>>birth_year;

    cout<<"\n "<<age_in_years(birth_year,birth_month,birth_day)<<" Years "<<age_in_month(birth_month)<<" Months ";
    cout<<age_in_days(birth_day,birth_month)<<" Days";
    if(age_in_month(birth_month)==0&&age_in_days(birth_day,birth_month)==0){
        cout<<"\n\n\n\t\t\tHappy Birthday.......";
    }


}

~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
age_generator.cpp[+] [unix] (05:29 01/01/1970)                                                    1,1 All
-- INSERT --

