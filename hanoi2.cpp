#include<iostream>
#include<conio.h>
#include<stack>
#include<string>
using namespace std;
stack <int> ori;
stack <int> aux;
stack <int> des;
stack <int> orc;
stack <int> auc;
stack <int> deco;
int nfic=0, cm=1, fi=0, nomires=0, mira=0, ban=1;
string ahora;
int main()
{
    system("color 5");
cout<<"\n   U N i V E R S i D A D   P O L i T E C N i C A    D E    D U R A N G O   ";
cout<<"\n\n                 Programacion y Estructura de Datos.             ";    
cout<<"\n                       Emmanuel Vazquez Pando. ";
cout<<"\n                          Torres de Hanoi. ";      
cout<<"\n\n\n   Hola, introduce tus fichas: ";
cin>>nfic;
fi=nfic;
cout<<"\n\n";
while(fi>0)
{
ori.push(fi);
fi=fi-1;
}
nomires=nfic%2;
system("Pause");
 
         
while( des.size() < nfic)
{ //start
mira= cm%2;
if(mira != 0)
 {//movnopar
  if(nomires == 0)
  {//fichaspar movnopar
   if(ban==1)
   {
     aux.push(ori.top());
     ori.pop();
     ban= ban+1; 
   }
  else
   {//l
    if(ban==2)
    {
    des.push(aux.top());
    aux.pop();
    ban=ban+1;
    }
    else
    {
     ori.push(des.top());
     des.pop();
     ban=1;
    }
   }//l                  
  }//fichaspar movnopar
else 
 {//fichasimpar movnopar
 if(ban==1)
  {
     des.push(ori.top());
     ori.pop(); 
     ban=ban+1;
  } 
  else
  {//k
   if(ban==2)
   {
   aux.push(des.top());
   des.pop();
   ban=ban+1;
   }
   else
   {
    ori.push(aux.top());
    aux.pop();
    ban=1;
   }
  }//k
 } //fichasimpar movnopar   
}//movnopar
//-----------------------------------------------------------------------------------
else//movsipar
{//winnie
if(ori.empty() != 1)//ori
 {
  if(ori.top()==1)
  {//j
   if(aux.empty()==1)
   {
   aux.push(des.top());
   des.pop();
   }
  else
  {//i
   if(des.empty()==1)
   {
   des.push(aux.top());
   aux.pop();
   }
   else
   {//h
    if(aux.top() < des.top())
    {
    des.push(aux.top());
    aux.pop();
    }
    else
    {
     aux.push(des.top());
     des.pop();
    }
   }//h   
  }//i
 }//j
 }//ori
//---------------------------------------------
 if(aux.empty() != 1)//aux
 {
  if(aux.top()==1)
  {//g
   if(ori.empty()== 1)
   {
   ori.push(des.top());
   des.pop();
   }
   else
   {//f
     if(des.empty() == 1)
     {
     des.push(ori.top());
     ori.pop();
     }
     else
     {//e
      if(ori.top() < des.top())
      {
      des.push(ori.top());
      ori.pop();
      }
      else
      {
      ori.push(des.top());
      des.pop();
      }
     }//e    
   }//f
  }//g
 }//aux
//-----------------------------------------------------------
  if(des.empty() != 1)//des
  {
   if(des.top()==1)//2d
   {
    if(ori.empty() == 1)
    {
    ori.push(aux.top());
    aux.pop();
    }
   else
   {//d
    if(aux.empty() == 1)
    {
    aux.push(ori.top());
    ori.pop();
    }
    else
    {//c
     if(ori.top() < aux.top())
     {
     aux.push(ori.top());
     ori.pop();
     }
     else
     {
     ori.push(aux.top());
     aux.pop(); 
     }
    }//c
   }//d
   }//2d            
  }//des
}//winnie

cout<<"\n Iteracion "<<cm;
cout<<"\n++++++++++++++++++++++++++++ ";
orc=ori;
auc=aux;
deco=des;
while(!orc.empty())
{
cout<<"\n      "<<orc.top();
orc.pop();
}                 
cout<<"\n   Origin";
cout<<"\n   _______";
cout<<"\n"; 
while(!auc.empty())
{
cout<<"\n      "<<auc.top();
auc.pop();
}
cout<<"\n  Auxiliary ";
cout<<"\n  _________";
cout<<"\n";
while(!deco.empty())
{
cout<<"\n      "<<deco.top();
deco.pop();
}
cout<<"\n  Destiny ";
cout<<"\n  _________";
cout<<"\n";
cm=cm+1;
}//end
cout<<"\n\n                       Gracias por jugar a las Torres de Hanoi!";
cout<<"\n\n";
system("pause");
cout<<"\n";
}


