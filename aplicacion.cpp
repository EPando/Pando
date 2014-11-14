#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    struct datos
    {
           string calle;
           string num;
           string col;
           int numper;
           int traba;
           int estu;
           int nini;
           string segu;
           };
         datos  matriz [1000][7];
         int resp1, fila=0,resp4,i,j,k,l,resp6,tt,te,tn;
         string resp2, mod, bucal,bunum,bucol,resp5, resp3,resp7,resp8;
         menup:
         cout<<"Que desea hacer?\n1.-Ingresar nuevos datos.\n2.-Modificar datos.\n3.-Mostrar datos.\n4.-Salir\n";
         cin>>resp1;
         system("cls");
         if (resp1==1)
         {
                      do 
                      {
                      cout<<"\nIngresar calle donde vive: \n";
                      cin>> matriz [fila][0].calle;
                      system("cls");
                      cout<<"\nIngresar el numero exterior: \n";
                      cin>> matriz [fila][1].num;
                      system("cls");
                      cout<<"\nIngresar la colonia: \n";
                      cin>> matriz [fila][2].col;
                      system("cls");
                      cout<<"\nIngresar el numero de personas que habitan en el hogar: \n";
                      cin>> matriz [fila][3].numper;
                      system("cls");
                      cout<<"\nIngresar el numero de personas que trabajan: \n";
                      cin>> matriz [fila][4].traba;
                      system("cls");
                      cout<<"\nIngresar el numero de personas que estudian: \n";
                      cin>> matriz [fila][5].estu;
                      system("cls");
                      cout<<"\nIngresar el numero de personas que no trabajan ni estudian: \n";
                      cin>> matriz [fila][6].nini;
                      system("cls");
                      cout<<"\nIngresar dependencia medica: \n";
                      cin>> matriz [fila][7].segu;
                      system("cls");
                      fila=fila+1;
                      cout<<"\nDeseas ingresar datos de otra persona? (si/no)\n ";
                      cin>>resp2;
                      system("cls");
                      }
                       while (resp2=="si");
                       goto menup;
         }
         if (resp1==2)
         {
                      do
                      {
                             cout<<"\nIngresar calle donde vive: \n";
                             cin>> bucal;
                             system("cls");
                             cout<<"\nIngresar el numero exterior: \n";
                             cin>> bunum;
                             system("cls");
                             cout<<"\nIngresar la colonia: \n";
                             cin>> bucol;
                             system("cls");
                             for (i=0;i<=1000;i++)
                             {
                                     if (bucal== matriz[i][0].calle && bunum== matriz[i][1].num && bucol==matriz[i][2].col)
                                     {
                                         do
                                         {
                                          cout<<"Que desea modificar?\n1.-Calle.\n2.-Numero de casa.\n3.-Colonia.\n4.-Habitantes del hogar.\n5.-Trabajadores\n6.-Estudiantes\n7.-Ninis\n8.=Dependencia medica";
                                          cin>>resp4;
                                          system("cls");
                                          if (resp4==1)
                                            {
                                             cout<<"\nIngresar calle donde vive: \n";
                                             cin>> matriz [i][0].calle;
                                             system("cls");
                                             }                                                      
                                           if (resp4==2)
                                             {
                                             cout<<"\nIngresar el numero exterior: \n";
                                             cin>> matriz [i][1].num;
                                             system("cls");
                                             }
                                           if (resp4==3)
                                             {
                                             cout<<"\nIngresar la colonia: \n";
                                             cin>> matriz [i][2].col;
                                             system("cls");
                                             }
                                           if (resp4==4)
                                             {
                                             cout<<"\nIngresar el numero de personas que habitan en el hogar: \n";
                                             cin>> matriz [i][3].numper;
                                             system("cls");
                                             }
                                           if (resp4==5)
                                             {
                                             cout<<"\nIngresar el numero de personas que trabajan: \n";
                                             cin>> matriz [i][4].traba;
                                             system("cls");
                                             }
                                           if (resp4==6)
                                             {
                                             cout<<"\nIngresar el numero de personas que estudian: \n";
                                             cin>> matriz [i][5].estu;
                                             system("cls");
                                             }
                                           if (resp4==7)
                                            {
                                            cout<<"\nIngresar el numero de personas que no trabajan ni estudian: \n";
                                            cin>> matriz [i][6].nini;
                                            system("cls");
                                            }
                                           if (resp4==8)
                                            {
                                            cout<<"\nIngresar dependencia medica: \n";
                                            cin>> matriz [i][7].segu;
                                            system("cls");
                                             }
                                    cout<<"\nDesea modificar algun otro dato? (si/no) \n";
                                    cin>>resp5;
                                    system("cls");
                                    }
                                    while (resp5=="si"); 
                                    system("cls");
                                    }
                          }
                          cout<<"\nModificar datos de alguien mas?: ";
                          cin>>resp3; 
                          system("cls");
                      }
                      while (resp3=="si");
                      goto menup;
                      system("cls");
         }
         if (resp1==3)
         {
                      do
                      {
                       cout<<"\nQue desea consultar?\n1.-Datos de una persona.\n2.-Total de personas que trabajan.\n3.-Total de personas que estudian.\n4.-Total de ninis.\n";
                       cin>>resp6;
                       system("cls"); 
                       if (resp6==1)
                        {
                         do
                         {
                          cout<<"\nIngresar calle donde vive: \n";
                          cin>> bucal;
                          system("cls");
                          cout<<"\nIngresar el numero exterior: \n";
                          cin>> bunum;
                          system("cls");
                          cout<<"\nIngresar la colonia: \n";
                          cin>> bucol;
                          system("cls");
                          for (i=0;i<=1000;i++)
                           {
                           if (bucal== matriz[i][0].calle && bunum== matriz[i][1].num && bucol==matriz[i][2].col)
                           {
                           cout<<"Domicilio: "<<matriz [i][0].calle<<" #"<<matriz [i][1].num<<"colonia: "<<matriz [i][2].col<<"\n";
                           cout<<"Habitan: "<<matriz [i][3].numper<<" personas \n"<<"de las cuales: "<<matriz [i][4].traba<<"trabajan, \n"<<matriz [i][5].estu<<" estudian y "<<matriz [i][6].nini<<" nigunda de las dos.";
                           cout<<"estan aseguradas por: "<<matriz [i][7].segu;
                           }
                         }
                          cout<<"\nDesea consultar datos de alguien mas?";
                          cin>>resp7; 
                          system("cls");
                          while (resp7=="si");
                                    system("cls");
                          }    
                          if (resp6==2)
                           {
                            for (j=0;j<=1000;j++)
                            {
                             tt= tt+ matriz[j][4].traba;
                            }
                          cout<<"\nEl total de personas que trabajan son: "<<tt;
                         }
                          if (resp6==3)
                          {
                           for (k=0;k<=1000;k++)
                          {
                          te=te+matriz[k][5].estu;
                          }
                         cout<<"\nEl total de personas que estudian son: "<<te;
                          } 
                            if (resp6==4)                                      
                            {
                                   for (l=0;l<=1000;l++)
                                   {
                                       tn=tn+matriz[l][6].nini;
                                   }
                                   cout<<"\nEl total de las personas que no trabajan ni estudian es: "<<tn;
                            }
                      
                      cout<<"\nConsultar algo mas? ";
                      cin>>resp8;
                      system("cls");
                      }
                      while(resp8=="si");
                      goto menup;
         }
}
