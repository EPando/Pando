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
string res;
int t,tor, it;
int nfic=0, cm=1, fi=0, nomires=0, mira=0, ban=1;
string ahora;
int main()
{
cout<<"\n\n\n    Bienvenido a las torres de Hanoi recuerda la regla, un disco mayor no ";
cout<<"\n    puede ir encima de un disco menor!\n ";
cout<<"\n    Teclea SI para continuar ";
cin>>res;
while(res=="si"||res=="SI")
{
while(!ori.empty())
{
ori.pop();
}
while(!aux.empty())
{
aux.pop();
}
while(!des.empty())
{
des.pop();
}
it=0;
system("cls");
cout<<"\n\n\n    Introduce tus fichas: ";
cin>>nfic;
fi=nfic;
cout<<"\n\n";
while(fi>0)
{
ori.push(fi);
fi=fi-1;
}
orc=ori;
while(!orc.empty())
{
cout<<"\n    "<<orc.top();
orc.pop();

}
cout<<"\n  _____  ";
cout<<"\n\n  ";
system("Pause");
system("cls");
while( des.size() < nfic)
{//whilefirst
cout<<"\n\n  Cual torre quieres mover? 1,2,3  ";
cin>>tor;
if(tor==1)//iftor1
{
if(ori.empty()==1)
{
cout<<"\n   No puedes mover aqui! ";
cout<<"\n\n  ";
system("pause");
system("cls");
}
else
{
cout<<"\n\n\n   Bien a que torre la quieres mover? 2 o 3 ";
cin>>t;
cout<<"\n\n  ";
if(t==2)
{
it=it+1;
aux.push(ori.top());
ori.pop();
}
else
{
    it=it+1;
    des.push(ori.top());
    ori.pop();  
}
}
}//iftor1
else//1else
{
if(tor==2)//iftor2
{
if(aux.empty()==1)
{
cout<<"\n   No puedes mover aqui! ";
cout<<"\n\n  ";
system("pause");
system("cls");
}
else
{ 
cout<<"\n\n\n   Bien a que torre la quieres mover? 1 o 3 ";
cin>>t;
cout<<"\n\n  ";
if(t==1)
{
it=it+1;
ori.push(aux.top());
aux.pop();
}
else
{
    it=it+1;
    des.push(aux.top());
    aux.pop(); 
}
}
}//iftor2
else //2else
{
 if(tor==3)//iftor3
{
if(des.empty()==1)
{
cout<<"\n   No puedes mover aqui! ";
cout<<"\n\n  ";
system("pause");
system("cls");
}
else
{
cout<<"\n\n\n   Bien a que torre la quieres mover? 1 o 2 ";
cin>>t;
cout<<"\n\n  ";
if(t==1)
{
        it=it+1;
ori.push(des.top());
des.pop();
}
else
{
it=it+1;
    aux.push(des.top());
    des.pop();
}
}
}//iftor3
}//2else
}//else1
system("cls");
orc=ori;
auc=aux;
deco=des;
while(!orc.empty())                             
{
cout<<"\n    "<<orc.top();
orc.pop();
}
cout<<"\n  _____  Origin";
while(!auc.empty())                             
{
cout<<"\n    "<<auc.top();
auc.pop();
}
cout<<"\n  _____  Auxiliry";
while(!deco.empty())                             
{
cout<<"\n    "<<deco.top();
deco.pop();
}
cout<<"\n  _____ Destiny ";
}//whilefirst

system("cls");
cout<<"\n\n  Has terminado con "<<it<<" Iteraciones. Quieres jugar de nuevo?  ";
cin>>res;
cout<<"\n\n  ";
system("pause");
}//whilesecond

}
