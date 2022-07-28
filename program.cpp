#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <iterator>
#include<algorithm>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main() {
ifstream csv("heart.csv");
if(!csv.is_open())
std::cout << "There is an error cant open file" << '\n';

string age;
string sex;
string cp;
string trtbps;
string chol;
string fbs;
string restecg;
string thalachh;
string exng;
string oldpeak;
string slp;
string caa;
string thall;
string output;

vector<string> row;
string row_data;

string ageinput;
string sexinput;
string cpinput;
string trtbpsinput;
string cholinput;
string fbsinput;
string restecginput;
string thalachhinput;
string exnginput;
string oldpeakinput;
string slpinput;
string caainput;
string thallinput;
string outputinput;
string choice;
cout<<"1:Enter age\n";
cout<<"2:Enter sex\n";
cout<<"3:Enter cp\n";
cout<<"4:Enter trtbps\n";
cout<<"5:Enter chol\n";
cout<<"6:Enter fbs\n";
cout<<"7:Enter restecg\n";
cout<<"8:Enter thalachh\n";
cout<<"9:Enter exng\n";
cout<<"10:Enter oldpeak\n";
cout<<"11:Enter slp\n";
cout<<"12:Enter caa\n";
cout<<"13:Enter thall\n";
cout<<"14: Enter output\n";


cout<<"Choose  0 to sort data in ascending order\n";

cin>> choice;

if (choice == "1"){
cout<<"Enter age\n";
cin>> ageinput;

while(csv.good()){
getline(csv,age,',') ;
getline(csv,sex,',') ;
getline(csv,cp,',') ;
getline(csv,trtbps,',');
getline(csv,chol,',');
    getline(csv,fbs,',');
getline(csv,restecg,',');
getline(csv,thalachh,',') ;
getline(csv,exng,',');
getline(csv,oldpeak,',') ;
getline(csv,slp,',') ;
getline(csv,caa,',') ;
getline(csv,thall,',');
getline(csv,output,'\n');

if (ageinput == age)
{
std::cout<<age<<" "<<sex<<" "<<cp<<" "<<trtbps<< " " <<chol<<" "<<fbs<< " " <<restecg<< " " <<thalachh<< " "<<exng<< " " <<oldpeak<< " " <<slp<<" " <<caa<< " " <<thall<< " "<<output<< "\n";

        }
        }

  csv.close();
}


if (choice == "2"){
    cout<<"Enter sex\n";
    cin>> sexinput;

while(csv.good()){
getline(csv,age,',');
getline(csv,sex,',');
getline(csv,cp,',');
getline(csv,trtbps,',');
getline(csv,chol,',');
getline(csv,fbs,',');
getline(csv,restecg,',');
getline(csv,thalachh,',');
getline(csv,exng,',');
getline(csv,oldpeak,',');
getline(csv,slp,',');
getline(csv,caa,',');
getline(csv,thall,',');
getline(csv,output,'\n');

    if (sexinput == sex)
        {
std::cout<<age<<" "<<sex<<" "<<cp<<" "<<trtbps<< " " <<chol<<" "<<fbs<< " " <<restecg<< " " <<thalachh<< " "<<exng<< " " <<oldpeak<< " " <<slp<<" " <<caa<< " " <<thall<< " "<<output<< "\n";

        }
        }


  csv.close();
}

if (choice == "3"){

     cout<<"Enter cp\n";
    cin>> cpinput;

while(csv.good()){
getline(csv,age,',');
getline(csv,sex,',');
getline(csv,cp,',');
getline(csv,trtbps,',');
getline(csv,chol,',');
getline(csv,fbs,',');
getline(csv,restecg,',');
getline(csv,thalachh,',');
getline(csv,exng,',');
getline(csv,oldpeak,',');
getline(csv,slp,',');
getline(csv,caa,',');
getline(csv,thall,',');
getline(csv,output,'\n');

    if (cpinput == cp)
        {
 std::cout<<age<<" "<<sex<<" "<<cp<<" "<<trtbps<< " " <<chol<<" "<<fbs<< " " <<restecg<< " " <<thalachh<< " "<<exng<< " " <<oldpeak<< " " <<slp<<" " <<caa<< " " <<thall<< " "<<output<< "\n";
}
}
csv.close();
}
if (choice == "4"){
    cout<<"Enter trtbps\n";
    cin>> trtbpsinput;

    while(csv.good()){
    getline(csv,age,',');
    getline(csv,sex,',');
    getline(csv,cp,',');
    getline(csv,trtbps,',');
    getline(csv,chol,',');
    getline(csv,fbs,',');
    getline(csv,restecg,',');
    getline(csv,thalachh,',');
    getline(csv,exng,',');
    getline(csv,oldpeak,',');
    getline(csv,slp,',');
    getline(csv,caa,',');
    getline(csv,thall,',');
    getline(csv,output,'\n');

if (trtbpsinput == trtbps)
        {
std::cout<<age<<" "<<sex<<" "<<cp<<" "<<trtbps<< " " <<chol<<" "<<fbs<< " " <<restecg<< " " <<thalachh<< " "<<exng<< " " <<oldpeak<< " " <<slp<<" " <<caa<< " " <<thall<< " "<<output<< "\n";
}
        }
csv.close();
}
if (choice == "5"){
cout<<"Enter chol\n";
cin>> cholinput;

     while(csv.good()){
    getline(csv,age,',');
    getline(csv,sex,',');
    getline(csv,cp,',');
    getline(csv,trtbps,',');
    getline(csv,chol,',');
    getline(csv,fbs,',');
    getline(csv,restecg,',');
    getline(csv,thalachh,',');
    getline(csv,exng,',');
    getline(csv,oldpeak,',');
    getline(csv,slp,',');
    getline(csv,caa,',');
    getline(csv,thall,',');
    getline(csv,output,'\n');

    if (cholinput == chol)
        {
std::cout<<age<<" "<<sex<<" "<<cp<<" "<<trtbps<< " " <<chol<<" "<<fbs<< " " <<restecg<< " " <<thalachh<< " "<<exng<< " " <<oldpeak<< " " <<slp<<" " <<caa<< " " <<thall<< " "<<output<< "\n";
}
}csv.close();
}

 if (choice == "6"){
cout<<"Enter fbs\n";
cin>> fbsinput;

   while(csv.good()){
getline(csv,age,',');
getline(csv,sex,',');
getline(csv,cp,',');
getline(csv,trtbps,',');
getline(csv,chol,',');
getline(csv,fbs,',');
getline(csv,restecg,',');
getline(csv,thalachh,',');
getline(csv,exng,',');
getline(csv,oldpeak,',');
getline(csv,slp,',');
getline(csv,caa,',');
getline(csv,thall,',');
getline(csv,output,'\n');

if (fbsinput == fbs)
{std::cout<<age<<" "<<sex<<" "<<cp<<" "<<trtbps<< " " <<chol<<" "<<fbs<< " " <<restecg<< " " <<thalachh<< " "<<exng<< " " <<oldpeak<< " " <<slp<<" " <<caa<< " " <<thall<< " "<<output<< "\n";
}
}
csv.close();
}

if (choice == "7"){
cout<<"Enter restecg\n";
cin>> restecginput;

while(csv.good()){
getline(csv,age,',');
getline(csv,sex,',');
getline(csv,cp,',');
getline(csv,trtbps,',');
getline(csv,chol,',');
getline(csv,fbs,',');
getline(csv,restecg,',');
getline(csv,thalachh,',');
getline(csv,exng,',');
getline(csv,oldpeak,',');
getline(csv,slp,',');
getline(csv,caa,',');
getline(csv,thall,',');
getline(csv,output,'\n');

    if (restecginput == restecg)
{
std::cout<<age<<" "<<sex<<" "<<cp<<" "<<trtbps<< " " <<chol<<" "<<fbs<< " " <<restecg<< " " <<thalachh<< " "<<exng<< " " <<oldpeak<< " " <<slp<<" " <<caa<< " " <<thall<< " "<<output<< "\n";
}
  }
  csv.close();
  }
      if (choice == "8"){
    cout<<"Enter thalachh\n";
      cin>> thalachhinput ;

    while(csv.good()) {
getline(csv,age,',');
getline(csv,sex,',');
getline(csv,cp,',');
getline(csv,trtbps,',');
getline(csv,chol,',');
getline(csv,fbs,',');
getline(csv,restecg,',');
getline(csv,thalachh,',');
getline(csv,exng,',');
getline(csv,oldpeak,',');
getline(csv,slp,',');
getline(csv,caa,',');
getline(csv,thall,',');
getline(csv,output,'\n');

    if (thalachhinput == thalachh)
    {
    std::cout<<age<<" "<<sex<<" "<<cp<<" "<<trtbps<< " " <<chol<<" "<<fbs<< " " <<restecg<< " " <<thalachh<< " "<<exng<< " " <<oldpeak<< " " <<slp<<" " <<caa<< " " <<thall<< " "<<output<< "\n";

    }
  }

csv.close();

}

if (choice == "9"){
    cout<<"Enter exng\n";
    cin>> exnginput;



    while(csv.good()){
    getline(csv,age,',');
    getline(csv,sex,',');
    getline(csv,cp,',');
    getline(csv,trtbps,',');
    getline(csv,chol,',');
    getline(csv,fbs,',');
    getline(csv,restecg,',');
    getline(csv,thalachh,',');
    getline(csv,exng,',');
    getline(csv,oldpeak,',');
    getline(csv,slp,',');
    getline(csv,caa,',');
    getline(csv,thall,',');
    getline(csv,output,'\n');

    if (exnginput == exng)
 {
std::cout<<age<<" "<<sex<<" "<<cp<<" "<<trtbps<< " " <<chol<<" "<<fbs<< " " <<restecg<< " " <<thalachh<< " "<<exng<< " " <<oldpeak<< " " <<slp<<" " <<caa<< " " <<thall<< " "<<output<< "\n";
 }
 }

      csv.close();

}

    if (choice == "10"){
    cout<<"Enter oldpeak\n";
    cin>> oldpeakinput;

    while(csv.good()){
    getline(csv,age,',');
    getline(csv,sex,',');
    getline(csv,cp,',');
    getline(csv,trtbps,',');
    getline(csv,chol,',');
    getline(csv,fbs,',');
    getline(csv,restecg,',');
    getline(csv,thalachh,',');
    getline(csv,exng,',');
    getline(csv,oldpeak,',');
    getline(csv,slp,',');
    getline(csv,caa,',');
    getline(csv,thall,',');
    getline(csv,output,'\n');

     if (oldpeakinput == oldpeak)
{
std::cout<<age<<" "<<sex<<" "<<cp<<" "<<trtbps<< " " <<chol<<" "<<fbs<< " " <<restecg<< " " <<thalachh<< " "<<exng<< " " <<oldpeak<< " " <<slp<<" " <<caa<< " " <<thall<< " "<<output<< "\n";
}
}
csv.close();
}
if (choice == "11"){
    cout<<"Enter slp\n";
    cin>> slpinput;

        while(csv.good()){
        getline(csv,age,',');
        getline(csv,sex,',');
        getline(csv,cp,',');
        getline(csv,trtbps,',');
        getline(csv,chol,',');
        getline(csv,fbs,',');
        getline(csv,restecg,',');
        getline(csv,thalachh,',');
        getline(csv,exng,',');
        getline(csv,oldpeak,',');
        getline(csv,slp,',');
        getline(csv,caa,',');
        getline(csv,thall,',');
        getline(csv,output,'\n');

if (slpinput == slp)
{
std::cout<<age<<" "<<sex<<" "<<cp<<" "<<trtbps<< " " <<chol<<" "<<fbs<< " " <<restecg<< " " <<thalachh<< " "<<exng<< " " <<oldpeak<< " " <<slp<<" " <<caa<< " " <<thall<< " "<<output<< "\n";

    }
  }

csv.close();

}


if (choice == "12"){
cout<<"Enter caa\n";
cin>> caainput;

     while(csv.good()){
    getline(csv,age,',');
    getline(csv,sex,',');
    getline(csv,cp,',');
    getline(csv,trtbps,',');
    getline(csv,chol,',');
    getline(csv,fbs,',');
    getline(csv,restecg,',');
    getline(csv,thalachh,',');
    getline(csv,exng,',');
    getline(csv,oldpeak,',');
    getline(csv,slp,',');
    getline(csv,caa,',');
    getline(csv,thall,',');
    getline(csv,output,'\n');

if (caainput == caa)
        {
        std::cout<<age<<" "<<sex<<" "<<cp<<" "<<trtbps<< " " <<chol<<" "<<fbs<< " " <<restecg<< " " <<thalachh<< " "<<exng<< " " <<oldpeak<< " " <<slp<<" " <<caa<< " " <<thall<< " "<<output<< "\n";

        }
        }

      csv.close();

       }


      if (choice == "13"){
      cout<<"Enter thall\n";
       cin>> thallinput;

            while(csv.good()){
            getline(csv,age,',');
            getline(csv,sex,',');
            getline(csv,cp,',');
            getline(csv,trtbps,',');
            getline(csv,chol,',');
            getline(csv,fbs,',');
            getline(csv,restecg,',');
            getline(csv,thalachh,',');
            getline(csv,exng,',');
            getline(csv,oldpeak,',');
            getline(csv,slp,',');
            getline(csv,caa,',');
            getline(csv,thall,',');
            getline(csv,output,'\n');

if (thallinput == thall)
{
std::cout<<age<<" "<<sex<<" "<<cp<<" "<<trtbps<< " " <<chol<<" "<<fbs<< " " <<restecg<< " " <<thalachh<< " "<<exng<< " " <<oldpeak<< " " <<slp<<" " <<caa<< " " <<thall<< " "<<output<< "\n";

    }
  }
csv.close();
}
if (choice == "14"){
cout<<"Enter output\n";
cin>> outputinput;

  while(csv.good()){
    getline(csv,age,',');
    getline(csv,sex,',');
    getline(csv,cp,',');
    getline(csv,trtbps,',');
    getline(csv,chol,',');
    getline(csv,fbs,',');
    getline(csv,restecg,',');
    getline(csv,thalachh,',');
    getline(csv,exng,',');
    getline(csv,oldpeak,',');
    getline(csv,slp,',');
    getline(csv,caa,',');
    getline(csv,thall,',');
    getline(csv,output,'\n');

    if (outputinput == output)
        {
        std::cout<<age<<" "<<sex<<" "<<cp<<" "<<trtbps<< " " <<chol<<" "<<fbs<< " " <<restecg<< " " <<thalachh<< " "<<exng<< " " <<oldpeak<< " " <<slp<<" " <<caa<< " " <<thall<< " "<<output<< "\n";

    }
  }

csv.close();

}

if(choice == "0")
{
while(getline(csv,row_data))
{
row.push_back(row_data);
}
sort(row.begin(), row.end());
for(size_t i=0;i<row.size();i++)
cout << row[i] << '\n';
      }
    high_resolution_clock::time_point t0 = high_resolution_clock::now();

    high_resolution_clock::time_point t1 = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>( t1 - t0 ).count();

    cout << duration;
    return 0;
}


