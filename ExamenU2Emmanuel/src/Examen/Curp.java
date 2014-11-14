package Examen;

public class Curp {
    String leo, lee, lei, len,leg,lea,lem,led;
    protected char c2, c3,c1;
    public void leemos(String c, String u, String r, String p )
    {
    leo=c;
    lee= u;
    lei = r;
    len = p;
    }
    public void leem (String g, String a, String m, String d)
    {
    leg =g;
    lea= a;
    lem = m;
    led = d;
    }
    public String dos()
    {
        int po=1, ban=0;
         
    for(po=1;po<20;po++)
       {
         c1 = leo.charAt(po);
         if(c1=='a')
         {ban=1;}
         if(c1=='e')
         {ban=1;}
         if(c1=='i')
         {ban=1;}
         if(c1=='o')
         {ban=1;}
         if(c1=='u')
         {ban=1;}
         if(ban==0)
         {
         c1 = leo.charAt(po);
         po=20;
         } 
          ban=0;
       }
     return (String.valueOf(c1));
    }
    public String tres()
    {
        int po=1, ban=0;
         
    for(po=1;po<20;po++)
       {
         c3 = lei.charAt(po);
         if(c3=='a')
         {ban=1;}
         if(c3=='e')
         {ban=1;}
         if(c3=='i')
         {ban=1;}
         if(c3=='o')
         {ban=1;}
         if(c3=='u')
         {ban=1;}
         if(ban==0)
         {
         c3 = lei.charAt(po);
         po=20;
         } 
          ban=0;
       }
    return (String.valueOf(c3));
    }
    public String cuatro()
    {
        int po=1, ban=0;
    for(po=1;po<20;po++)
       {
         c2 = lee.charAt(po);
         if(c2=='a')
         {ban=1;}
         if(c2=='e')
         {ban=1;}
         if(c2=='i')
         {ban=1;}
         if(c2=='o')
         {ban=1;}
         if(c2=='u')
         {ban=1;}
         if(ban==0)
         {
         c2 = lee.charAt(po);
         po=20;
         } 
          ban=0;
         
       }
    return (String.valueOf(c2));
    }
    
    
    
    public String curp()
    {
       char  r = leo.charAt(0);
       char  u = leo.charAt(1);
       char  m = lee.charAt(0);
       char  n = lei.charAt(0);
       char  a = lea.charAt(2);
       char  a2 = lea.charAt(3);
       char  me = lem.charAt(1);
       char  me1 = lem.charAt(0);
       char  di = led.charAt(0);
       char  di1 = led.charAt(1);
       char  ent2 = len.charAt(1);
       char  g = leg.charAt(0);
       char  ent = len.charAt(0);
    
          
       
       String p = String.valueOf(r) + String.valueOf(u) + String.valueOf(m) + String.valueOf(n)
               + String.valueOf(a) + String.valueOf(a2) + String.valueOf(me1) + String.valueOf(me)
               + String.valueOf(di) + String.valueOf(di1) + String.valueOf(g) + String.valueOf(ent)
               + String.valueOf(ent2);
       return (p);
    }
    
    
    
}
