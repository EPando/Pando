
#include<conio.h>
#include<iostream>
#include<string.h>
#include<stack>
using namespace std;
int main()
{
    stack<int>origen;
    stack<int>tempo;
    stack<int>auxiliar;
    stack<int>tempa;
    stack<int>destino;
    stack<int>tempd;
    int a, z, parnon, mov=1, movv, i, even=1, x, topa, topo, topd;    
    cout<<"\n\n";
    cout<<"         U N I V E R S I D A D    P O L I T E C N I C A   D E   D U R A N G O\n";
    cout<<"\n                      Alumno: Omar Andres Medina Avalos";
    cout<<"\n\n         Cuantas fichas o lo que sean tendran tus Torres de Hanoi: ";
    cin>>a;
    z=a;
    while(z>0)
    {
              origen.push(z);
              z=z-1;
    }
    
    system("cls");
    parnon=a%2;
    
    while(destino.size()!=a)
    {
		
                            movv=mov%2;
                            if(movv!=0)
                            {          if(parnon==0)
                                       {
                                        
                                            if(even==1)
                                            {
    											auxiliar.push(origen.top());
                                                origen.pop();
                                                even=even+1;
                                            }
    										else
    										{
    											if(even==2)
    												{
    													destino.push(auxiliar.top());
    													auxiliar.pop();
    													even=even+1;  
    											    }
        											else
        											{
        												origen.push(destino.top());
                                                    destino.pop();
                                                     even=1;
                                                
        											}
    										}
                                            
                                       
                                       }
                                       else
                                       {
                                        
                                        if(even==1)
                                        { 
											destino.push(origen.top());
                                            origen.pop();
                                            even=even+1;
                                        }  
										else
										{
											if(even==2)
                                              {
											    auxiliar.push(destino.top());
                                                destino.pop();
												even=even+1;  

                                              }
											else
											{
												origen.push(auxiliar.top());
                                               auxiliar.pop();
                                               even=1;
                                        
											}

										}
                                        
                                       	
                                       }
                            }
                            //Movimiento par
                            else
                            {
								if(origen.empty() != 1)
								{
                                if(origen.top()==1)
                                {
                                                   if(auxiliar.empty()==1)
                                                   {
                                                   auxiliar.push(destino.top());
                                                   destino.pop();
                                                   }
												   else
												   {
													if(destino.empty()==1)
														{
														 destino.push(auxiliar.top());
															auxiliar.pop();
														}
													else
													{
														
														if(auxiliar.top()<destino.top())
															{
															    destino.push(auxiliar.top());
                                                                auxiliar.pop();
															}
														else
															{
                                                                auxiliar.push(destino.top());
                                                                destino.pop();
															}
													}
												   }
                                                  
                                }
								}
								if(auxiliar.empty() != 1)
								{
                                if(auxiliar.top()==1)
                                {
                                                   if(origen.empty()==1)
                                                   {
                                                   origen.push(destino.top());
                                                   destino.pop();
                                                   }
												   else
												   {
													    if(destino.empty()==1)
															{
																destino.push(origen.top());
																origen.pop();
															}
														else
														{
															
															if(origen.top()<destino.top())
																{
																	destino.push(origen.top());
																	origen.pop();
																}
															else
															{
                                                                origen.push(destino.top());
                                                                destino.pop();
															}
														}
														}
                                }
								}
								if(destino.empty() != 1)
								{
                                if(destino.top()==1)
                                {
                                                   if(origen.empty()==1)
                                                   {
                                                   origen.push(auxiliar.top());
                                                   auxiliar.pop();
                                                   }
												   else
												   {
													   if(auxiliar.empty()==1)
														{
															auxiliar.push(origen.top());
															origen.pop();
														}
													   else
													   {
														   
															if(origen.top()<auxiliar.top())
															{
                                                                auxiliar.push(origen.top());
                                                                origen.pop();
															}
															else
															{
                                                                origen.push(auxiliar.top());
                                                                auxiliar.pop();
															}
													   }

												   }
                                                   
                                                   
										}
									}
								}
                             tempo=origen;
                             tempa=auxiliar;
                             tempd=destino;
                             cout<<"\n             T O R R E S    D E    H A N O I\n\n\n";
                             while (! tempo.empty() )
                             {
                                    cout<<"                     "<< tempo.top()<<"\n";
                                    tempo.pop();
                             }
							 cout<<"                ------------\n\n";
                             while (! tempa.empty() )
                             {
                                    cout<<"                     "<< tempa.top()<<"\n";
                                    tempa.pop();
                             }
							 cout<<"                ------------\n\n";
                             while (! tempd.empty() )
                             {
                                    cout<<"                     "<< tempd.top()<<"\n";
                                    tempd.pop();
                             }              
							 cout<<"                ------------\n\n";
      cout<<"\n\n       Iteracion ------ "<<mov<<" ------\n\n\n\n";                                          
                                        mov=mov+1;
										system("PAUSE");
										system("cls");
      }
	  cout<<"\n\nResuelto en "<<(mov-1)<<" movimientos\n\n";
	  system("PAUSE");
}

    
