/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package principio;

import javax.microedition.midlet.*;
import javax.microedition.lcdui.*;
import org.netbeans.microedition.lcdui.TableItem;

/**
 * @author bLacko
 */
public class VisualMIDlet extends MIDlet implements CommandListener {
    
    final int tan = 3;
    
    String nomb[]= new String [tan];
    String apel[]= new String [tan];
    String carr[]= new String [tan];
    String sexo[]= new String [tan];
    String esta[]= new String [tan];
    String fec[]= new String [tan];
    int totalRegistros = 0;    
    
    private boolean midletPaused = false;

//<editor-fold defaultstate="collapsed" desc=" Generated Fields ">//GEN-BEGIN:|fields|0|
private List menu;
private Form Agrega;
private TextField cajan;
private DateField cajaf;
private TextField cajap;
private ChoiceGroup cajasx;
private ChoiceGroup cajaca;
private Alert Error;
private Alert listo;
private Form Consultar;
private TextField busca;
private TextField reg;
private StringItem apel2;
private StringItem sx;
private StringItem car;
private StringItem nac;
private Form form;
private TextField cja;
private TextField cjn;
private DateField cjnac;
private ChoiceGroup cjg;
private ChoiceGroup cjc;
private TextField reg1;
private TextField cajn;
private Form form1;
private TextField res;
private TextField bor;
private Command backCommand;
private Command guardar;
private Command backCommand1;
private Command okCommand;
private Command buscar;
private Command backCommand2;
private Command backCommand3;
private Command Modifica;
private Command Buscar1;
private Command okCommand1;
private Command Borrar;
private Command backCommand4;
private Command object;
private Ticker ticker;
//</editor-fold>//GEN-END:|fields|0|
    /**
     * The VisualMIDlet constructor.
     */
    public VisualMIDlet() {
    }

//<editor-fold defaultstate="collapsed" desc=" Generated Methods ">//GEN-BEGIN:|methods|0|
//</editor-fold>//GEN-END:|methods|0|
//<editor-fold defaultstate="collapsed" desc=" Generated Method: initialize ">//GEN-BEGIN:|0-initialize|0|0-preInitialize
/**
 * Initializes the application.
 * It is called only once when the MIDlet is started. The method is called before the <code>startMIDlet</code> method.
 */
private void initialize () {//GEN-END:|0-initialize|0|0-preInitialize
        // write pre-initialize user code here
//GEN-LINE:|0-initialize|1|0-postInitialize
        // write post-initialize user code here
}//GEN-BEGIN:|0-initialize|2|
//</editor-fold>//GEN-END:|0-initialize|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Method: startMIDlet ">//GEN-BEGIN:|3-startMIDlet|0|3-preAction
/**
 * Performs an action assigned to the Mobile Device - MIDlet Started point.
 */
public void startMIDlet () {//GEN-END:|3-startMIDlet|0|3-preAction
        // write pre-action user code here
switchDisplayable (null, getMenu ());//GEN-LINE:|3-startMIDlet|1|3-postAction
        // write post-action user code here
}//GEN-BEGIN:|3-startMIDlet|2|
//</editor-fold>//GEN-END:|3-startMIDlet|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Method: resumeMIDlet ">//GEN-BEGIN:|4-resumeMIDlet|0|4-preAction
/**
 * Performs an action assigned to the Mobile Device - MIDlet Resumed point.
 */
public void resumeMIDlet () {//GEN-END:|4-resumeMIDlet|0|4-preAction
        // write pre-action user code here
//GEN-LINE:|4-resumeMIDlet|1|4-postAction
        // write post-action user code here
}//GEN-BEGIN:|4-resumeMIDlet|2|
//</editor-fold>//GEN-END:|4-resumeMIDlet|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Method: switchDisplayable ">//GEN-BEGIN:|5-switchDisplayable|0|5-preSwitch
/**
 * Switches a current displayable in a display. The <code>display</code> instance is taken from <code>getDisplay</code> method. This method is used by all actions in the design for switching displayable.
 * @param alert the Alert which is temporarily set to the display; if <code>null</code>, then <code>nextDisplayable</code> is set immediately
 * @param nextDisplayable the Displayable to be set
 */
public void switchDisplayable (Alert alert, Displayable nextDisplayable) {//GEN-END:|5-switchDisplayable|0|5-preSwitch
        // write pre-switch user code here
Display display = getDisplay ();//GEN-BEGIN:|5-switchDisplayable|1|5-postSwitch
if (alert == null) {
display.setCurrent (nextDisplayable);
} else {
display.setCurrent (alert, nextDisplayable);
}//GEN-END:|5-switchDisplayable|1|5-postSwitch
        // write post-switch user code here
}//GEN-BEGIN:|5-switchDisplayable|2|
//</editor-fold>//GEN-END:|5-switchDisplayable|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Method: commandAction for Displayables ">//GEN-BEGIN:|7-commandAction|0|7-preCommandAction
/**
 * Called by a system to indicated that a command has been invoked on a particular displayable.
 * @param command the Command that was invoked
 * @param displayable the Displayable where the command was invoked
 */
public void commandAction (Command command, Displayable displayable) {//GEN-END:|7-commandAction|0|7-preCommandAction
 // write pre-action user code here
if (displayable == Agrega) {//GEN-BEGIN:|7-commandAction|1|28-preAction
if (command == backCommand) {//GEN-END:|7-commandAction|1|28-preAction
 // write pre-action user code here
switchDisplayable (null, getMenu ());//GEN-LINE:|7-commandAction|2|28-postAction
 // write post-action user code here
} else if (command == guardar) {//GEN-LINE:|7-commandAction|3|47-preAction
 // write pre-action user code here
    nomb[totalRegistros]=cajan.getString();
    apel[totalRegistros]=cajap.getString();
    fec[totalRegistros]=cajaf.getDate().toString();
    sexo[totalRegistros]=cajasx.getString(cajasx.getSelectedIndex()).toString().toLowerCase();
    carr[totalRegistros]=cajaca.getString(cajaca.getSelectedIndex()).toString().toUpperCase();
    totalRegistros++;
    
    
switchDisplayable (getListo (), getMenu ());//GEN-LINE:|7-commandAction|4|47-postAction
 // write post-action user code here
}//GEN-BEGIN:|7-commandAction|5|66-preAction
} else if (displayable == Consultar) {
if (command == backCommand2) {//GEN-END:|7-commandAction|5|66-preAction
 // write pre-action user code here
switchDisplayable (null, getMenu ());//GEN-LINE:|7-commandAction|6|66-postAction
 // write post-action user code here
} else if (command == buscar) {//GEN-LINE:|7-commandAction|7|72-preAction
 // write pre-action user code here
    boolean si = false;
    int posicion=0;
    for(int y = 0; y< totalRegistros;y++)
    {if (busca.getString().equals(nomb[y]))
        {
        si = true;
        posicion = y;
        break;}}
    if (si==true)
    {
    reg.setString("Aqui esta!");
    apel2.setText(apel[posicion]);
    nac.setText(fec[posicion]);
    car.setText(carr[posicion]);
    sx.setText(sexo[posicion]);
    }
    else
    {
    reg.setString("Aqui no esta!");
    }
//GEN-LINE:|7-commandAction|8|72-postAction
 // write post-action user code here
}//GEN-BEGIN:|7-commandAction|9|58-preAction
} else if (displayable == Error) {
if (command == backCommand1) {//GEN-END:|7-commandAction|9|58-preAction
 // write pre-action user code here
switchDisplayable (null, getMenu ());//GEN-LINE:|7-commandAction|10|58-postAction
 // write post-action user code here
}//GEN-BEGIN:|7-commandAction|11|84-preAction
} else if (displayable == form) {
if (command == Modifica) {//GEN-END:|7-commandAction|11|84-preAction
 // write pre-action user code here
    boolean si = false;
    int posicion=0;
    for(int y = 0; y< totalRegistros;y++)
    {if (cjn.getString().equals(nomb[y]))
        {
        si = true;
        posicion = y;
        break;
        }
    }
    reg1.setString("Ingresa los nuevos datos");
    if (si==true)
    {
    
    nomb[posicion]=cajn.getString(); 
    apel[posicion]=cja.getString();
    fec[posicion]=cjnac.getDate().toString();
    sexo[posicion]=cjg.getString(cjg.getSelectedIndex()).toString().toLowerCase();
    carr[posicion]=cjc.getString(cjc.getSelectedIndex()).toString().toUpperCase();
    }
    else
    {
    reg1.setString("Ese nombre no ese encuentra!");
    }
    
switchDisplayable (null, getMenu ());//GEN-LINE:|7-commandAction|12|84-postAction
 // write post-action user code here
} else if (command == backCommand3) {//GEN-LINE:|7-commandAction|13|82-preAction
 // write pre-action user code here
switchDisplayable (null, getMenu ());//GEN-LINE:|7-commandAction|14|82-postAction
 // write post-action user code here
}//GEN-BEGIN:|7-commandAction|15|126-preAction
} else if (displayable == form1) {
if (command == Borrar) {//GEN-END:|7-commandAction|15|126-preAction
 // write pre-action user code here
//GEN-LINE:|7-commandAction|16|126-postAction
 // write post-action user code here
    boolean si = false;
    int posicion=0;
    for(int y = 0; y< totalRegistros;y++)
    {if (bor.getString().equals(nomb[y]))
        {
        si = true;
        posicion = y;
        break;
        }
    }
    if (si==true)
    {
    nomb[posicion]=""; 
    apel[posicion]="";
    fec[posicion]="";
    sexo[posicion]="";
    carr[posicion]="";
    res.setString("Eliminado");
    }
    else
    {
    res.setString("Aqui no esta!");
    }
    
} else if (command == backCommand4) {//GEN-LINE:|7-commandAction|17|123-preAction
 // write pre-action user code here
switchDisplayable (null, getMenu ());//GEN-LINE:|7-commandAction|18|123-postAction
 // write post-action user code here
}//GEN-BEGIN:|7-commandAction|19|16-preAction
} else if (displayable == menu) {
if (command == List.SELECT_COMMAND) {//GEN-END:|7-commandAction|19|16-preAction
 // write pre-action user code here
menuAction ();//GEN-LINE:|7-commandAction|20|16-postAction
 // write post-action user code here
}//GEN-BEGIN:|7-commandAction|21|7-postCommandAction
}//GEN-END:|7-commandAction|21|7-postCommandAction
 // write post-action user code here
}//GEN-BEGIN:|7-commandAction|22|
//</editor-fold>//GEN-END:|7-commandAction|22|




//<editor-fold defaultstate="collapsed" desc=" Generated Getter: menu ">//GEN-BEGIN:|14-getter|0|14-preInit
/**
 * Returns an initiliazed instance of menu component.
 * @return the initialized component instance
 */
public List getMenu () {
if (menu == null) {//GEN-END:|14-getter|0|14-preInit
 // write pre-init user code here
menu = new List ("list", Choice.IMPLICIT);//GEN-BEGIN:|14-getter|1|14-postInit
menu.append ("Agregar", null);
menu.append ("Consultar", null);
menu.append ("Modificar", null);
menu.append ("Borrar", null);
menu.append ("Salir", null);
menu.setCommandListener (this);
menu.setSelectedFlags (new boolean[] { false, false, false, false, false });//GEN-END:|14-getter|1|14-postInit
 // write post-init user code here
}//GEN-BEGIN:|14-getter|2|
return menu;
}
//</editor-fold>//GEN-END:|14-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Method: menuAction ">//GEN-BEGIN:|14-action|0|14-preAction
/**
 * Performs an action assigned to the selected list element in the menu component.
 */
public void menuAction () {//GEN-END:|14-action|0|14-preAction
 // enter pre-action user code here
String __selectedString = getMenu ().getString (getMenu ().getSelectedIndex ());//GEN-BEGIN:|14-action|1|18-preAction
if (__selectedString != null) {
if (__selectedString.equals ("Agregar")) {//GEN-END:|14-action|1|18-preAction
 // write pre-action user code here
method ();//GEN-LINE:|14-action|2|18-postAction
 // write post-action user code here
} else if (__selectedString.equals ("Consultar")) {//GEN-LINE:|14-action|3|19-preAction
 // write pre-action user code here
switchDisplayable (null, getConsultar ());//GEN-LINE:|14-action|4|19-postAction
 // write post-action user code here
} else if (__selectedString.equals ("Modificar")) {//GEN-LINE:|14-action|5|20-preAction
 // write pre-action user code here
switchDisplayable (null, getForm ());//GEN-LINE:|14-action|6|20-postAction
 // write post-action user code here
} else if (__selectedString.equals ("Borrar")) {//GEN-LINE:|14-action|7|21-preAction
 // write pre-action user code here
switchDisplayable (null, getForm1 ());//GEN-LINE:|14-action|8|21-postAction
 // write post-action user code here
} else if (__selectedString.equals ("Salir")) {//GEN-LINE:|14-action|9|22-preAction
 // write pre-action user code here
exitMIDlet ();//GEN-LINE:|14-action|10|22-postAction
 // write post-action user code here
}//GEN-BEGIN:|14-action|11|14-postAction
}//GEN-END:|14-action|11|14-postAction
 // enter post-action user code here
}//GEN-BEGIN:|14-action|12|
//</editor-fold>//GEN-END:|14-action|12|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: Agrega ">//GEN-BEGIN:|23-getter|0|23-preInit
/**
 * Returns an initiliazed instance of Agrega component.
 * @return the initialized component instance
 */
public Form getAgrega () {
if (Agrega == null) {//GEN-END:|23-getter|0|23-preInit
 // write pre-init user code here
Agrega = new Form ("Nuevo Contacto", new Item[] { getCajan (), getCajap (), getCajaf (), getCajasx (), getCajaca () });//GEN-BEGIN:|23-getter|1|23-postInit
Agrega.setTicker (getTicker ());
Agrega.addCommand (getBackCommand ());
Agrega.addCommand (getGuardar ());
Agrega.setCommandListener (this);//GEN-END:|23-getter|1|23-postInit
 // write post-init user code here
}//GEN-BEGIN:|23-getter|2|
return Agrega;
}
//</editor-fold>//GEN-END:|23-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: cajan ">//GEN-BEGIN:|29-getter|0|29-preInit
/**
 * Returns an initiliazed instance of cajan component.
 * @return the initialized component instance
 */
public TextField getCajan () {
if (cajan == null) {//GEN-END:|29-getter|0|29-preInit
 // write pre-init user code here
cajan = new TextField ("Nombre", null, 32, TextField.ANY);//GEN-LINE:|29-getter|1|29-postInit
 // write post-init user code here
}//GEN-BEGIN:|29-getter|2|
return cajan;
}
//</editor-fold>//GEN-END:|29-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: cajap ">//GEN-BEGIN:|30-getter|0|30-preInit
/**
 * Returns an initiliazed instance of cajap component.
 * @return the initialized component instance
 */
public TextField getCajap () {
if (cajap == null) {//GEN-END:|30-getter|0|30-preInit
 // write pre-init user code here
cajap = new TextField ("Apellido", null, 32, TextField.ANY);//GEN-LINE:|30-getter|1|30-postInit
 // write post-init user code here
}//GEN-BEGIN:|30-getter|2|
return cajap;
}
//</editor-fold>//GEN-END:|30-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: cajaf ">//GEN-BEGIN:|31-getter|0|31-preInit
/**
 * Returns an initiliazed instance of cajaf component.
 * @return the initialized component instance
 */
public DateField getCajaf () {
if (cajaf == null) {//GEN-END:|31-getter|0|31-preInit
 // write pre-init user code here
cajaf = new DateField ("Fecha de nacimiento", DateField.DATE_TIME);//GEN-BEGIN:|31-getter|1|31-postInit
cajaf.setDate (new java.util.Date (System.currentTimeMillis ()));//GEN-END:|31-getter|1|31-postInit
 // write post-init user code here
}//GEN-BEGIN:|31-getter|2|
return cajaf;
}
//</editor-fold>//GEN-END:|31-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: cajasx ">//GEN-BEGIN:|32-getter|0|32-preInit
/**
 * Returns an initiliazed instance of cajasx component.
 * @return the initialized component instance
 */
public ChoiceGroup getCajasx () {
if (cajasx == null) {//GEN-END:|32-getter|0|32-preInit
 // write pre-init user code here
cajasx = new ChoiceGroup ("Sexo", Choice.EXCLUSIVE);//GEN-BEGIN:|32-getter|1|32-postInit
cajasx.append ("Hombre", null);
cajasx.append ("Mujer", null);
cajasx.setSelectedFlags (new boolean[] { false, false });//GEN-END:|32-getter|1|32-postInit
 // write post-init user code here
}//GEN-BEGIN:|32-getter|2|
return cajasx;
}
//</editor-fold>//GEN-END:|32-getter|2|



//<editor-fold defaultstate="collapsed" desc=" Generated Getter: cajaca ">//GEN-BEGIN:|39-getter|0|39-preInit
/**
 * Returns an initiliazed instance of cajaca component.
 * @return the initialized component instance
 */
public ChoiceGroup getCajaca () {
if (cajaca == null) {//GEN-END:|39-getter|0|39-preInit
 // write pre-init user code here
cajaca = new ChoiceGroup ("Carrera", Choice.POPUP);//GEN-BEGIN:|39-getter|1|39-postInit
cajaca.append ("IT", null);
cajaca.append ("ITMI", null);
cajaca.append ("ITA", null);
cajaca.append ("Software", null);
cajaca.append ("PYMES", null);
cajaca.setSelectedFlags (new boolean[] { false, false, false, false, false });//GEN-END:|39-getter|1|39-postInit
 // write post-init user code here
}//GEN-BEGIN:|39-getter|2|
return cajaca;
}
//</editor-fold>//GEN-END:|39-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: backCommand ">//GEN-BEGIN:|27-getter|0|27-preInit
/**
 * Returns an initiliazed instance of backCommand component.
 * @return the initialized component instance
 */
public Command getBackCommand () {
if (backCommand == null) {//GEN-END:|27-getter|0|27-preInit
 // write pre-init user code here
backCommand = new Command ("Back", Command.BACK, 0);//GEN-LINE:|27-getter|1|27-postInit
 // write post-init user code here
}//GEN-BEGIN:|27-getter|2|
return backCommand;
}
//</editor-fold>//GEN-END:|27-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: guardar ">//GEN-BEGIN:|46-getter|0|46-preInit
/**
 * Returns an initiliazed instance of guardar component.
 * @return the initialized component instance
 */
public Command getGuardar () {
if (guardar == null) {//GEN-END:|46-getter|0|46-preInit
 // write pre-init user code here
guardar = new Command ("Guardar", Command.ITEM, 0);//GEN-LINE:|46-getter|1|46-postInit
 // write post-init user code here
}//GEN-BEGIN:|46-getter|2|
return guardar;
}
//</editor-fold>//GEN-END:|46-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: ticker ">//GEN-BEGIN:|45-getter|0|45-preInit
/**
 * Returns an initiliazed instance of ticker component.
 * @return the initialized component instance
 */
public Ticker getTicker () {
if (ticker == null) {//GEN-END:|45-getter|0|45-preInit
 // write pre-init user code here
ticker = new Ticker ("Nuevo...Nuevo...Nuevo");//GEN-LINE:|45-getter|1|45-postInit
 // write post-init user code here
}//GEN-BEGIN:|45-getter|2|
return ticker;
}
//</editor-fold>//GEN-END:|45-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Method: method ">//GEN-BEGIN:|49-if|0|49-preIf
/**
 * Performs an action assigned to the method if-point.
 */
public void method () {//GEN-END:|49-if|0|49-preIf
 // enter pre-if user code here
if (totalRegistros < 3) {//GEN-LINE:|49-if|1|50-preAction
 // write pre-action user code here
switchDisplayable (null, getAgrega ());//GEN-LINE:|49-if|2|50-postAction
 // write post-action user code here
} else {//GEN-LINE:|49-if|3|51-preAction
 // write pre-action user code here
switchDisplayable (null, getError ());//GEN-LINE:|49-if|4|51-postAction
 // write post-action user code here
}//GEN-LINE:|49-if|5|49-postIf
 // enter post-if user code here
}//GEN-BEGIN:|49-if|6|
//</editor-fold>//GEN-END:|49-if|6|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: Error ">//GEN-BEGIN:|53-getter|0|53-preInit
/**
 * Returns an initiliazed instance of Error component.
 * @return the initialized component instance
 */
public Alert getError () {
if (Error == null) {//GEN-END:|53-getter|0|53-preInit
 // write pre-init user code here
Error = new Alert ("alert", "Memoria Llena! solo 3 registros", null, null);//GEN-BEGIN:|53-getter|1|53-postInit
Error.addCommand (getBackCommand1 ());
Error.setCommandListener (this);
Error.setTimeout (Alert.FOREVER);//GEN-END:|53-getter|1|53-postInit
 // write post-init user code here
}//GEN-BEGIN:|53-getter|2|
return Error;
}
//</editor-fold>//GEN-END:|53-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: backCommand1 ">//GEN-BEGIN:|57-getter|0|57-preInit
/**
 * Returns an initiliazed instance of backCommand1 component.
 * @return the initialized component instance
 */
public Command getBackCommand1 () {
if (backCommand1 == null) {//GEN-END:|57-getter|0|57-preInit
 // write pre-init user code here
backCommand1 = new Command ("Back", Command.BACK, 0);//GEN-LINE:|57-getter|1|57-postInit
 // write post-init user code here
}//GEN-BEGIN:|57-getter|2|
return backCommand1;
}
//</editor-fold>//GEN-END:|57-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: listo ">//GEN-BEGIN:|60-getter|0|60-preInit
/**
 * Returns an initiliazed instance of listo component.
 * @return the initialized component instance
 */
public Alert getListo () {
if (listo == null) {//GEN-END:|60-getter|0|60-preInit
 // write pre-init user code here
listo = new Alert ("alert", "Registro Guardado", null, null);//GEN-BEGIN:|60-getter|1|60-postInit
listo.setTimeout (Alert.FOREVER);//GEN-END:|60-getter|1|60-postInit
 // write post-init user code here
}//GEN-BEGIN:|60-getter|2|
return listo;
}
//</editor-fold>//GEN-END:|60-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: okCommand ">//GEN-BEGIN:|61-getter|0|61-preInit
/**
 * Returns an initiliazed instance of okCommand component.
 * @return the initialized component instance
 */
public Command getOkCommand () {
if (okCommand == null) {//GEN-END:|61-getter|0|61-preInit
 // write pre-init user code here
okCommand = new Command ("Ok", Command.OK, 0);//GEN-LINE:|61-getter|1|61-postInit
 // write post-init user code here
}//GEN-BEGIN:|61-getter|2|
return okCommand;
}
//</editor-fold>//GEN-END:|61-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: Consultar ">//GEN-BEGIN:|64-getter|0|64-preInit
/**
 * Returns an initiliazed instance of Consultar component.
 * @return the initialized component instance
 */
public Form getConsultar () {
if (Consultar == null) {//GEN-END:|64-getter|0|64-preInit
 // write pre-init user code here
Consultar = new Form ("Consulta", new Item[] { getBusca (), getReg (), getApel2 (), getNac (), getCar (), getSx () });//GEN-BEGIN:|64-getter|1|64-postInit
Consultar.addCommand (getBackCommand2 ());
Consultar.addCommand (getBuscar ());
Consultar.setCommandListener (this);//GEN-END:|64-getter|1|64-postInit
 // write post-init user code here
}//GEN-BEGIN:|64-getter|2|
return Consultar;
}
//</editor-fold>//GEN-END:|64-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: busca ">//GEN-BEGIN:|69-getter|0|69-preInit
/**
 * Returns an initiliazed instance of busca component.
 * @return the initialized component instance
 */
public TextField getBusca () {
if (busca == null) {//GEN-END:|69-getter|0|69-preInit
 // write pre-init user code here
busca = new TextField ("Nombre a Buscar", null, 32, TextField.ANY);//GEN-LINE:|69-getter|1|69-postInit
 // write post-init user code here
}//GEN-BEGIN:|69-getter|2|
return busca;
}
//</editor-fold>//GEN-END:|69-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: reg ">//GEN-BEGIN:|70-getter|0|70-preInit
/**
 * Returns an initiliazed instance of reg component.
 * @return the initialized component instance
 */
public TextField getReg () {
if (reg == null) {//GEN-END:|70-getter|0|70-preInit
 // write pre-init user code here
reg = new TextField ("Registro", null, 32, TextField.ANY);//GEN-LINE:|70-getter|1|70-postInit
 // write post-init user code here
}//GEN-BEGIN:|70-getter|2|
return reg;
}
//</editor-fold>//GEN-END:|70-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: backCommand2 ">//GEN-BEGIN:|65-getter|0|65-preInit
/**
 * Returns an initiliazed instance of backCommand2 component.
 * @return the initialized component instance
 */
public Command getBackCommand2 () {
if (backCommand2 == null) {//GEN-END:|65-getter|0|65-preInit
 // write pre-init user code here
backCommand2 = new Command ("Back", Command.BACK, 0);//GEN-LINE:|65-getter|1|65-postInit
 // write post-init user code here
}//GEN-BEGIN:|65-getter|2|
return backCommand2;
}
//</editor-fold>//GEN-END:|65-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: buscar ">//GEN-BEGIN:|71-getter|0|71-preInit
/**
 * Returns an initiliazed instance of buscar component.
 * @return the initialized component instance
 */
public Command getBuscar () {
if (buscar == null) {//GEN-END:|71-getter|0|71-preInit
 // write pre-init user code here
buscar = new Command ("buscar", Command.ITEM, 0);//GEN-LINE:|71-getter|1|71-postInit
 // write post-init user code here
}//GEN-BEGIN:|71-getter|2|
return buscar;
}
//</editor-fold>//GEN-END:|71-getter|2|











//<editor-fold defaultstate="collapsed" desc=" Generated Getter: form ">//GEN-BEGIN:|80-getter|0|80-preInit
/**
 * Returns an initiliazed instance of form component.
 * @return the initialized component instance
 */
public Form getForm () {
if (form == null) {//GEN-END:|80-getter|0|80-preInit
 // write pre-init user code here
form = new Form ("form", new Item[] { getCjn (), getReg1 (), getCajn (), getCja (), getCjnac (), getCjg (), getCjc () });//GEN-BEGIN:|80-getter|1|80-postInit
form.addCommand (getBackCommand3 ());
form.addCommand (getModifica ());
form.setCommandListener (this);//GEN-END:|80-getter|1|80-postInit
 // write post-init user code here
}//GEN-BEGIN:|80-getter|2|
return form;
}
//</editor-fold>//GEN-END:|80-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: backCommand3 ">//GEN-BEGIN:|81-getter|0|81-preInit
/**
 * Returns an initiliazed instance of backCommand3 component.
 * @return the initialized component instance
 */
public Command getBackCommand3 () {
if (backCommand3 == null) {//GEN-END:|81-getter|0|81-preInit
 // write pre-init user code here
backCommand3 = new Command ("Back", Command.BACK, 0);//GEN-LINE:|81-getter|1|81-postInit
 // write post-init user code here
}//GEN-BEGIN:|81-getter|2|
return backCommand3;
}
//</editor-fold>//GEN-END:|81-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: Modifica ">//GEN-BEGIN:|83-getter|0|83-preInit
/**
 * Returns an initiliazed instance of Modifica component.
 * @return the initialized component instance
 */
public Command getModifica () {
if (Modifica == null) {//GEN-END:|83-getter|0|83-preInit
 // write pre-init user code here
Modifica = new Command ("Modifica", Command.ITEM, 0);//GEN-LINE:|83-getter|1|83-postInit
 // write post-init user code here
}//GEN-BEGIN:|83-getter|2|
return Modifica;
}
//</editor-fold>//GEN-END:|83-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: cjn ">//GEN-BEGIN:|86-getter|0|86-preInit
/**
 * Returns an initiliazed instance of cjn component.
 * @return the initialized component instance
 */
public TextField getCjn () {
if (cjn == null) {//GEN-END:|86-getter|0|86-preInit
 // write pre-init user code here
cjn = new TextField ("Nombre a modificar", null, 32, TextField.ANY);//GEN-LINE:|86-getter|1|86-postInit
 // write post-init user code here
}//GEN-BEGIN:|86-getter|2|
return cjn;
}
//</editor-fold>//GEN-END:|86-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: cja ">//GEN-BEGIN:|87-getter|0|87-preInit
/**
 * Returns an initiliazed instance of cja component.
 * @return the initialized component instance
 */
public TextField getCja () {
if (cja == null) {//GEN-END:|87-getter|0|87-preInit
 // write pre-init user code here
cja = new TextField ("Apellido Nuevo", null, 32, TextField.ANY);//GEN-LINE:|87-getter|1|87-postInit
 // write post-init user code here
}//GEN-BEGIN:|87-getter|2|
return cja;
}
//</editor-fold>//GEN-END:|87-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: cjnac ">//GEN-BEGIN:|89-getter|0|89-preInit
/**
 * Returns an initiliazed instance of cjnac component.
 * @return the initialized component instance
 */
public DateField getCjnac () {
if (cjnac == null) {//GEN-END:|89-getter|0|89-preInit
 // write pre-init user code here
cjnac = new DateField ("Nacimiento", DateField.DATE_TIME);//GEN-BEGIN:|89-getter|1|89-postInit
cjnac.setDate (new java.util.Date (System.currentTimeMillis ()));//GEN-END:|89-getter|1|89-postInit
 // write post-init user code here
}//GEN-BEGIN:|89-getter|2|
return cjnac;
}
//</editor-fold>//GEN-END:|89-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: cjg ">//GEN-BEGIN:|90-getter|0|90-preInit
/**
 * Returns an initiliazed instance of cjg component.
 * @return the initialized component instance
 */
public ChoiceGroup getCjg () {
if (cjg == null) {//GEN-END:|90-getter|0|90-preInit
 // write pre-init user code here
cjg = new ChoiceGroup ("Sexo", Choice.EXCLUSIVE);//GEN-BEGIN:|90-getter|1|90-postInit
cjg.append ("Hombre", null);
cjg.append ("Mujer", null);
cjg.setSelectedFlags (new boolean[] { false, false });//GEN-END:|90-getter|1|90-postInit
 // write post-init user code here
}//GEN-BEGIN:|90-getter|2|
return cjg;
}
//</editor-fold>//GEN-END:|90-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: cjc ">//GEN-BEGIN:|97-getter|0|97-preInit
/**
 * Returns an initiliazed instance of cjc component.
 * @return the initialized component instance
 */
public ChoiceGroup getCjc () {
if (cjc == null) {//GEN-END:|97-getter|0|97-preInit
 // write pre-init user code here
cjc = new ChoiceGroup ("Carrera", Choice.POPUP);//GEN-BEGIN:|97-getter|1|97-postInit
cjc.append ("Telematica", null);
cjc.append ("ITMI", null);
cjc.append ("ITA", null);
cjc.append ("Mineria", null);
cjc.append ("PYMES", null);
cjc.setSelectedFlags (new boolean[] { false, false, false, false, false });//GEN-END:|97-getter|1|97-postInit
 // write post-init user code here
}//GEN-BEGIN:|97-getter|2|
return cjc;
}
//</editor-fold>//GEN-END:|97-getter|2|



//<editor-fold defaultstate="collapsed" desc=" Generated Getter: okCommand1 ">//GEN-BEGIN:|106-getter|0|106-preInit
/**
 * Returns an initiliazed instance of okCommand1 component.
 * @return the initialized component instance
 */
public Command getOkCommand1 () {
if (okCommand1 == null) {//GEN-END:|106-getter|0|106-preInit
 // write pre-init user code here
okCommand1 = new Command ("Ok", Command.OK, 0);//GEN-LINE:|106-getter|1|106-postInit
 // write post-init user code here
}//GEN-BEGIN:|106-getter|2|
return okCommand1;
}
//</editor-fold>//GEN-END:|106-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: Buscar1 ">//GEN-BEGIN:|108-getter|0|108-preInit
/**
 * Returns an initiliazed instance of Buscar1 component.
 * @return the initialized component instance
 */
public Command getBuscar1 () {
if (Buscar1 == null) {//GEN-END:|108-getter|0|108-preInit
 // write pre-init user code here
Buscar1 = new Command ("Item", Command.ITEM, 0);//GEN-LINE:|108-getter|1|108-postInit
 // write post-init user code here
}//GEN-BEGIN:|108-getter|2|
return Buscar1;
}
//</editor-fold>//GEN-END:|108-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: apel2 ">//GEN-BEGIN:|111-getter|0|111-preInit
/**
 * Returns an initiliazed instance of apel2 component.
 * @return the initialized component instance
 */
public StringItem getApel2 () {
if (apel2 == null) {//GEN-END:|111-getter|0|111-preInit
 // write pre-init user code here
apel2 = new StringItem ("Apellido", null);//GEN-LINE:|111-getter|1|111-postInit
 // write post-init user code here
}//GEN-BEGIN:|111-getter|2|
return apel2;
}
//</editor-fold>//GEN-END:|111-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: nac ">//GEN-BEGIN:|112-getter|0|112-preInit
/**
 * Returns an initiliazed instance of nac component.
 * @return the initialized component instance
 */
public StringItem getNac () {
if (nac == null) {//GEN-END:|112-getter|0|112-preInit
 // write pre-init user code here
nac = new StringItem ("Nacimiento", null);//GEN-LINE:|112-getter|1|112-postInit
 // write post-init user code here
}//GEN-BEGIN:|112-getter|2|
return nac;
}
//</editor-fold>//GEN-END:|112-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: car ">//GEN-BEGIN:|113-getter|0|113-preInit
/**
 * Returns an initiliazed instance of car component.
 * @return the initialized component instance
 */
public StringItem getCar () {
if (car == null) {//GEN-END:|113-getter|0|113-preInit
 // write pre-init user code here
car = new StringItem ("Carrera", null);//GEN-LINE:|113-getter|1|113-postInit
 // write post-init user code here
}//GEN-BEGIN:|113-getter|2|
return car;
}
//</editor-fold>//GEN-END:|113-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: sx ">//GEN-BEGIN:|114-getter|0|114-preInit
/**
 * Returns an initiliazed instance of sx component.
 * @return the initialized component instance
 */
public StringItem getSx () {
if (sx == null) {//GEN-END:|114-getter|0|114-preInit
 // write pre-init user code here
sx = new StringItem ("Sexo", null);//GEN-LINE:|114-getter|1|114-postInit
 // write post-init user code here
}//GEN-BEGIN:|114-getter|2|
return sx;
}
//</editor-fold>//GEN-END:|114-getter|2|







//<editor-fold defaultstate="collapsed" desc=" Generated Getter: cajn ">//GEN-BEGIN:|120-getter|0|120-preInit
/**
 * Returns an initiliazed instance of cajn component.
 * @return the initialized component instance
 */
public TextField getCajn () {
if (cajn == null) {//GEN-END:|120-getter|0|120-preInit
 // write pre-init user code here
cajn = new TextField ("Nombre nuevo", null, 32, TextField.ANY);//GEN-LINE:|120-getter|1|120-postInit
 // write post-init user code here
}//GEN-BEGIN:|120-getter|2|
return cajn;
}
//</editor-fold>//GEN-END:|120-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: form1 ">//GEN-BEGIN:|121-getter|0|121-preInit
/**
 * Returns an initiliazed instance of form1 component.
 * @return the initialized component instance
 */
public Form getForm1 () {
if (form1 == null) {//GEN-END:|121-getter|0|121-preInit
 // write pre-init user code here
form1 = new Form ("form1", new Item[] { getBor (), getRes () });//GEN-BEGIN:|121-getter|1|121-postInit
form1.addCommand (getBackCommand4 ());
form1.addCommand (getBorrar ());
form1.setCommandListener (this);//GEN-END:|121-getter|1|121-postInit
 // write post-init user code here
}//GEN-BEGIN:|121-getter|2|
return form1;
}
//</editor-fold>//GEN-END:|121-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: backCommand4 ">//GEN-BEGIN:|122-getter|0|122-preInit
/**
 * Returns an initiliazed instance of backCommand4 component.
 * @return the initialized component instance
 */
public Command getBackCommand4 () {
if (backCommand4 == null) {//GEN-END:|122-getter|0|122-preInit
 // write pre-init user code here
backCommand4 = new Command ("Back", Command.BACK, 0);//GEN-LINE:|122-getter|1|122-postInit
 // write post-init user code here
}//GEN-BEGIN:|122-getter|2|
return backCommand4;
}
//</editor-fold>//GEN-END:|122-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: Borrar ">//GEN-BEGIN:|125-getter|0|125-preInit
/**
 * Returns an initiliazed instance of Borrar component.
 * @return the initialized component instance
 */
public Command getBorrar () {
if (Borrar == null) {//GEN-END:|125-getter|0|125-preInit
 // write pre-init user code here
Borrar = new Command ("Borrar", Command.ITEM, 0);//GEN-LINE:|125-getter|1|125-postInit
 // write post-init user code here
}//GEN-BEGIN:|125-getter|2|
return Borrar;
}
//</editor-fold>//GEN-END:|125-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: reg1 ">//GEN-BEGIN:|127-getter|0|127-preInit
/**
 * Returns an initiliazed instance of reg1 component.
 * @return the initialized component instance
 */
public TextField getReg1 () {
if (reg1 == null) {//GEN-END:|127-getter|0|127-preInit
 // write pre-init user code here
reg1 = new TextField ("Chequeo", null, 32, TextField.ANY);//GEN-LINE:|127-getter|1|127-postInit
 // write post-init user code here
}//GEN-BEGIN:|127-getter|2|
return reg1;
}
//</editor-fold>//GEN-END:|127-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: object ">//GEN-BEGIN:|131-getter|0|131-preInit
/**
 * Returns an initiliazed instance of object component.
 * @return the initialized component instance
 */
public Command getObject () {
if (object == null) {//GEN-END:|131-getter|0|131-preInit
 // write pre-init user code here
object = new Command ("Item", Command.ITEM, 0);//GEN-LINE:|131-getter|1|131-postInit
 // write post-init user code here
}//GEN-BEGIN:|131-getter|2|
return object;
}
//</editor-fold>//GEN-END:|131-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: res ">//GEN-BEGIN:|133-getter|0|133-preInit
/**
 * Returns an initiliazed instance of res component.
 * @return the initialized component instance
 */
public TextField getRes () {
if (res == null) {//GEN-END:|133-getter|0|133-preInit
 // write pre-init user code here
res = new TextField ("Resultado:", null, 32, TextField.ANY);//GEN-LINE:|133-getter|1|133-postInit
 // write post-init user code here
}//GEN-BEGIN:|133-getter|2|
return res;
}
//</editor-fold>//GEN-END:|133-getter|2|



//<editor-fold defaultstate="collapsed" desc=" Generated Getter: bor ">//GEN-BEGIN:|135-getter|0|135-preInit
/**
 * Returns an initiliazed instance of bor component.
 * @return the initialized component instance
 */
public TextField getBor () {
if (bor == null) {//GEN-END:|135-getter|0|135-preInit
 // write pre-init user code here
bor = new TextField ("Contacto a Eliminar", null, 32, TextField.ANY);//GEN-LINE:|135-getter|1|135-postInit
 // write post-init user code here
}//GEN-BEGIN:|135-getter|2|
return bor;
}
//</editor-fold>//GEN-END:|135-getter|2|

    /**
     * Returns a display instance.
     * @return the display instance.
     */
    public Display getDisplay() {
        return Display.getDisplay(this);
    }

    /**
     * Exits MIDlet.
     */
    public void exitMIDlet() {
        switchDisplayable(null, null);
        destroyApp(true);
        notifyDestroyed();
    }

    /**
     * Called when MIDlet is started.
     * Checks whether the MIDlet have been already started and initialize/starts or resumes the MIDlet.
     */
    public void startApp() {
        if (midletPaused) {
            resumeMIDlet();
        } else {
            initialize();
            startMIDlet();
        }
        midletPaused = false;
    }

    /**
     * Called when MIDlet is paused.
     */
    public void pauseApp() {
        midletPaused = true;
    }

    /**
     * Called to signal the MIDlet to terminate.
     * @param unconditional if true, then the MIDlet has to be unconditionally terminated and all resources has to be released.
     */
    public void destroyApp(boolean unconditional) {
    }
}
