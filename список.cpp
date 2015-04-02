# spisok
#include <conio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

 
struct element 
{
 int a;
 element *Next; 
};
 
class List 
{
 element *Head;
 public:
  List() {Head=NULL;} 
 ~List(); 
 void Add(int a); 
 void Show(); 
};
 
List::~List() 
{
    while (Head!=NULL)  
     {    
        element *temp=Head->Next;
        delete Head; 
        Head=temp; /     }
}
 
void List::Add(int a)
{
 element *temp=new element; 
temp->a=a; 
temp->Next=Head; 
Head=temp; 
}
 
void List::Show() 
{
 element *temp=Head; 
 
 while (temp!=NULL) 
 {
  cout<<temp->a<<" "; 
  temp=temp->Next;
 }
}
 
void main()
{

  int N; 
  int a; 
  List lst; 
 
   cout<<"N = ";cin>>N;
 
for (int i=0;i<N;i++)
 {
  cout<<i+1<<". a="; cin>>a; 
  lst.Add(a); 
 }
 
lst.Show(); 
 getch();
}
