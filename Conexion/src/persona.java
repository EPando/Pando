
import java.sql.*;

/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author bLacko
 */
public class persona {
    
     conect con;
     public persona()
     {
     con = new conect();
     }
     
     
    /*añade un nuevo registro*/
     public void Nuevapersona(String name, String ap, String am, String mail)
     {
     try {
     PreparedStatement pstm = con.getConnection().prepareStatement("Insert into personas(Nombre, ApePaterno, ApeMaterno, Mail)"+"values (?,?,?,?)");
     pstm.setString(1, name);
     pstm.setString(2, ap);
     pstm.setString(3, am);
     pstm.setString(4, mail);
     pstm.execute();
     pstm.close();
     }
     catch(SQLException e){
     System.out.println(e);
     }
     }
     
     
    /*obtenemos todos los datos de la tabla*/
     public Object [][] getDatos(){
     int registros = 0;
     //obtenemos la cantidad de registros existentes esn la tabla
     try
     {
      PreparedStatement pstm = con.getConnection().prepareStatement("SELECT count(1) as total from personas ");
      ResultSet res = pstm.executeQuery();
      res.next();
      registros = res.getInt("total");
      res.close();
     }
     catch (SQLException e)
     {
     System.out.println(e);
     }
     
     Object[][] data = new String[registros][5];
     //realizamos la consulta sql y llenamos los datos en object
    try
    {
     PreparedStatement pstm = con.getConnection().prepareStatement("SELECT *from personas ORDER BY ID");
     ResultSet res= pstm.executeQuery();
     int i = 0;
     while (res.next())
     {
     String estCodigo = res.getString("ID");
     String estNombre = res.getString("Nombre");
     String estpaterno = res.getString("ApePaterno");
     String estmaterno = res.getString("ApeMaterno");
     String estmail = res.getString("Mail");
     data[i][0] = estCodigo;
     data[i][1] = estNombre;
     data[i][2] = estpaterno;
     data[i][3] = estmaterno;
     data[i][4] = estmail;
     i++;
     }
     res.close();
     }
     catch (SQLException e)
     {
     System.out.println(e);
     }
    return data;
     }
     
     
     
    public void updatePersona(String id, String name, String paterno, String materno, String mail)
    {
    try 
    {
    PreparedStatement pstm = con.getConnection().prepareStatement("update personas" + " set Nombre = ? ," + " ApePaterno = ? ,"
     +" ApeMaterno = ? ," + "Mail = ? " + "where ID = ?");
    pstm.setString(1, name);
    pstm.setString(2, paterno);
    pstm.setString(3, materno);
    pstm.setString(4, mail);
    pstm.setString(5, String.valueOf(id));
    pstm.execute();
    pstm.close();
    }
    catch(SQLException e)
    {
    System.out.println(e);
    }
    }
    
    
    public void deletePersona(String cod)
    {
    try
    {
    PreparedStatement pstm = con.getConnection().prepareStatement("delete from personas where ID = ?");
    pstm.setString(1, cod);
    pstm.execute();
    pstm.close();
    }
    catch(SQLException e)
    {
    System.out.println(e);
    }
    }
}
