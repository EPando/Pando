#include <iostream>     
#include <conio.h>
#include <cstring>
#include <stdio.h>

using namespace std;

int a, b, i=1, x, y, s, ban;

int main()

{
    cout<<"\n\n";
    cout<<"  CONJUNTO A \n";
    cout<<"\n";
    cout<<"  NUMERO DE ELEMENTOS: ";
    cin>>a;
    cout<<"\n";
    int A[a];
    
    for (i=1;i<=a;i++)
    {
        cout<<"\t"<<"VALOR "<<i<<": ";
        cin>>A[i];
        }
    
    cout<<"\n\n";
    cout<<"  CONJUNTO B \n";
    cout<<"\n";
    cout<<"  NUMERO DE ELEMENTOS: ";
    cin>>b;
    cout<<"\n";
    int B[b];
    
    for (i=1;i<=b;i++)
    {
        cout<<"\t"<<"VALOR "<<i<<": ";
        cin>>B[i];
        }
    system("cls");
    
    cout<<"\n\n";
    cout<<"       I N T E R S E C C I O N   \n";
   
    cout<<"\n";
    int c[100];
    
    for (x=1;x<=a;x++)
   {
        for (y=1;y<=b;y++)
        {
            if (A[x]==B[y])
            
            {               
                    
                    c[x]=A[x];
                    cout<<"\t\t"<<c[x]<<"\n";
            
                       
                       
                    }
                    }
                    }
          
     cout<<"\n\n";
     cout<<"       U N I O N   \n";
     cout<<"\n";
    int xx=0;
    int unio[100], d[50];
     for (x=1;x<=a;x++)
   {
                           if(A[x]==unio[x])
                           {
                                            ban=1;
                                            }
                                            if(ban==0)
                                            {
                                                      unio[x]=A[x];
                                                      xx=xx+1;
                                                      }
                                                      ban=0;
                                                      }
                                                                                
        for (y=1;y<=b;y++)
        {
            
                           if(B[y]==unio[xx])
                           {
                                            ban=1;
                                            }
                                            
                                            if(ban==0)
                                            {
                                                      unio[xx]=B[y];
                                                      cout<<"\t\t"<<unio[xx]<<"\n";
                                                      xx=xx+1;
                                                      }
                                                      }                                        
                                     
        

      getch();
}
    
    
    
    
    
    
    
