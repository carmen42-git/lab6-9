#include <iostream>
#include <cstring>
using namespace std;

class Student
{ private:
    char nume[51],prenume[51];
    int note[5];
  public:
      Student(char *nume, char prenume[])
      {
          strcpy(this->nume, nume);
          strcpy(this->prenume, prenume);
          cout<<"Notele studentului "<<nume<<" "<<prenume<<" sunt: ";
         for ( int i=0;i<5;i++)
         cin>>this->note[i];
      }
     void write()
     {
         cout<<nume<<" "<<prenume<<" ";
         for ( int i=0; i<5; i++)
            cout<<note[i]<<" ";
         cout<<endl;
     }

};
class Group : public Student
{
private:
    int noGroup;
public:
    Group(int noGroup, char *nume, char *prenume): Student(nume, prenume)
    {
        this->noGroup=noGroup;

        }
     void write(){
     cout<<noGroup<<" ";
     Student::write();
     }

};
int main()
{
    Group s1(4,"Ionescu","Andrei");
    Group s2(2,"Georgescu","Alex");
    s1.write();
    s2.write();

}


