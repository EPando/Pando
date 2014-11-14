/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package classfirst;

/**
 *
 * @author bLacko
 */
public class classexample {
    
    private int numeroCuenta;
    private String nombreCliente;
    private int deposito;
    private int saldo;
    
    public classexample (int numeroCuenta, String nombreCliente)
    {
       setNumeroCuenta (numeroCuenta);
       setNombreCliente (nombreCliente);
    }
    
    public classexample (int deposito, int saldo)
    {
    setDeposito(deposito);
    setSaldo(saldo);
    }
    
    public classexample (int numeroCuenta, String nombreCliente, int deposito, int saldo)
    {
    setNumeroCuenta(numeroCuenta);
    setNombreCliente(nombreCliente);
    setDeposito(deposito);
    setSaldo(saldo);  
    }
    
    public void setNumeroCuenta (int valor)
    {
    if (valor < 1000)
    {
    this.numeroCuenta = valor;
    }
    else
    {
    System.out.println("El numero de cuenta no existe");
    }
    }
    
    public void setNombreCliente (String  valor)
    {
    this.nombreCliente = valor;
    }
    
    public void setDeposito(int d)
    {
    this.deposito = d;
    }
     
    public void setSaldo(int s)
    {
    this.saldo = s;
    }
    
    public int getNumeroCuenta()
    {
    return this.numeroCuenta;
    }
    
    public String getNombreCliente()
    {
    return this.nombreCliente;
    }
    
    public int getDeposito()
    {
    return this.deposito;
    }
    
    public int getSaldo()
    {
    return this.saldo;
    }
    
    public static void main(String[] args)
    {
    classexample b1=new classexample(99,"David");
    classexample b2 = new classexample (100000, 150000);
    classexample b3 = new classexample (200,"Mariana", 450000, 800000);
    
    System.out.println(b1.getNumeroCuenta()+ " " + b1.getNombreCliente());
    System.out.println(b2.getDeposito() + " " + b2.getSaldo());
    System.out.println(b3.getNumeroCuenta() + " " + b3.getNombreCliente() + " " + b3.getDeposito() + " " + b3.getSaldo());
    } 
    
    
}
