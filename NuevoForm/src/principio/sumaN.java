/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package principio;

/**
 *
 * @author bLacko
 */
public class sumaN {
    int leo,lei;
    public void leemos(int n)
    {
    leo=n;     
    }
  public int bos(int m,int n2)
  {
  int j=1;
  for(j=1;j<=m;j++)
  {
  n2=n2+(j+leo); 
  }
  return n2;
  }    
}
