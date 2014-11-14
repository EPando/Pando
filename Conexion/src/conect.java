
import java.sql.*;

/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author bLacko
 */
public class conect {
    
    static String bd="prueba";
    static String login="root";
    static String password="";
    static String url="jdbc:mysql://localhost/"+bd;
    
    Connection conn = null;
    
    /*constructor de DbConnection*/
    
    public conect()
    {
     try 
     {
     //obtenemos el driver de para mysql
         Class.forName("com.mysql.jdbc.Driver");
         //obtenemos la conexion
         conn= DriverManager.getConnection(url, login, password);
         if(conn!=null)
         {
         System.out.println("Conexion a base de datos "+bd+".listo");
         }
     }
         catch( SQLException e){
         System.out.println(e);
         }
         catch (ClassNotFoundException e)
         {
         System.out.println(e);
         }
    }
    /*nos deja regresar a la conexion*/
     public Connection getConnection()
     {
     return conn;     
     }
     public void desconectar()
     {
     conn=null;
     System.out.println("La conexion a la base de datos "+bd+" a terminado.");
     }
    }
    
