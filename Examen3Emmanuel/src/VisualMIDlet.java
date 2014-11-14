/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

import javax.microedition.midlet.*;
import javax.microedition.lcdui.*;
import org.netbeans.microedition.lcdui.LoginScreen;
import org.netbeans.microedition.lcdui.SplashScreen;
import org.netbeans.microedition.lcdui.WaitScreen;
import org.netbeans.microedition.lcdui.wma.SMSComposer;
import org.netbeans.microedition.util.SimpleCancellableTask;

/**
 * @author bLacko
 */
public class VisualMIDlet extends MIDlet implements CommandListener {
    
    private boolean midletPaused = false;

//<editor-fold defaultstate="collapsed" desc=" Generated Fields ">//GEN-BEGIN:|fields|0|
private List list;
private SMSComposer smsComposer;
private LoginScreen loginScreen;
private Alert Sinacceso;
private WaitScreen waitScreen;
private Alert Enviado;
private Alert Verficar;
private SMSComposer smsComposer1;
private SMSComposer smsComposer2;
private SMSComposer smsComposer3;
private SMSComposer smsComposer4;
private Command GoodBye;
private Command okCommand;
private Command exitCommand;
private Command exitCommand1;
private Command backCommand;
private Command backCommand1;
private Command backCommand2;
private Image image;
private SimpleCancellableTask task;
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
switchDisplayable (null, getLoginScreen ());//GEN-LINE:|3-startMIDlet|1|3-postAction
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

//<editor-fold defaultstate="collapsed" desc=" Generated Method: method ">//GEN-BEGIN:|30-if|0|30-preIf
/**
 * Performs an action assigned to the method if-point.
 */
public void method () {//GEN-END:|30-if|0|30-preIf
 // enter pre-if user code here
if (loginScreen.getUsername().equals("Black") && loginScreen.getPassword().equals("aqilo")) {//GEN-LINE:|30-if|1|31-preAction
 // write pre-action user code here
switchDisplayable (null, getList ());//GEN-LINE:|30-if|2|31-postAction
 // write post-action user code here
} else {//GEN-LINE:|30-if|3|32-preAction
 // write pre-action user code here
switchDisplayable (null, getSinacceso ());//GEN-LINE:|30-if|4|32-postAction
 // write post-action user code here
}//GEN-LINE:|30-if|5|30-postIf
 // enter post-if user code here
}//GEN-BEGIN:|30-if|6|
//</editor-fold>//GEN-END:|30-if|6|

//<editor-fold defaultstate="collapsed" desc=" Generated Method: commandAction for Displayables ">//GEN-BEGIN:|7-commandAction|0|7-preCommandAction
/**
 * Called by a system to indicated that a command has been invoked on a particular displayable.
 * @param command the Command that was invoked
 * @param displayable the Displayable where the command was invoked
 */
public void commandAction (Command command, Displayable displayable) {//GEN-END:|7-commandAction|0|7-preCommandAction
 // write pre-action user code here
if (displayable == Sinacceso) {//GEN-BEGIN:|7-commandAction|1|57-preAction
if (command == backCommand) {//GEN-END:|7-commandAction|1|57-preAction
 // write pre-action user code here
switchDisplayable (null, getLoginScreen ());//GEN-LINE:|7-commandAction|2|57-postAction
 // write post-action user code here
}//GEN-BEGIN:|7-commandAction|3|26-preAction
} else if (displayable == list) {
if (command == GoodBye) {//GEN-END:|7-commandAction|3|26-preAction
 // write pre-action user code here
exitMIDlet ();//GEN-LINE:|7-commandAction|4|26-postAction
 // write post-action user code here
} else if (command == List.SELECT_COMMAND) {//GEN-LINE:|7-commandAction|5|19-preAction
 // write pre-action user code here
listAction ();//GEN-LINE:|7-commandAction|6|19-postAction
 // write post-action user code here
}//GEN-BEGIN:|7-commandAction|7|50-preAction
} else if (displayable == loginScreen) {
if (command == LoginScreen.LOGIN_COMMAND) {//GEN-END:|7-commandAction|7|50-preAction
 // write pre-action user code here
method ();//GEN-LINE:|7-commandAction|8|50-postAction
 // write post-action user code here
} else if (command == exitCommand1) {//GEN-LINE:|7-commandAction|9|52-preAction
 // write pre-action user code here
//GEN-LINE:|7-commandAction|10|52-postAction
 // write post-action user code here
}//GEN-BEGIN:|7-commandAction|11|48-preAction
} else if (displayable == smsComposer) {
if (command == SMSComposer.SEND_COMMAND) {//GEN-END:|7-commandAction|11|48-preAction
 // write pre-action user code here
switchDisplayable (null, getWaitScreen ());//GEN-LINE:|7-commandAction|12|48-postAction
 // write post-action user code here
} else if (command == backCommand1) {//GEN-LINE:|7-commandAction|13|62-preAction
 // write pre-action user code here
switchDisplayable (null, getList ());//GEN-LINE:|7-commandAction|14|62-postAction
 // write post-action user code here
}//GEN-BEGIN:|7-commandAction|15|76-preAction
} else if (displayable == smsComposer1) {
if (command == SMSComposer.SEND_COMMAND) {//GEN-END:|7-commandAction|15|76-preAction
 // write pre-action user code here
switchDisplayable (null, getWaitScreen ());//GEN-LINE:|7-commandAction|16|76-postAction
 // write post-action user code here
} else if (command == backCommand2) {//GEN-LINE:|7-commandAction|17|78-preAction
 // write pre-action user code here
switchDisplayable (null, getList ());//GEN-LINE:|7-commandAction|18|78-postAction
 // write post-action user code here
}//GEN-BEGIN:|7-commandAction|19|84-preAction
} else if (displayable == smsComposer2) {
if (command == SMSComposer.SEND_COMMAND) {//GEN-END:|7-commandAction|19|84-preAction
 // write pre-action user code here
switchDisplayable (null, getWaitScreen ());//GEN-LINE:|7-commandAction|20|84-postAction
 // write post-action user code here
} else if (command == backCommand) {//GEN-LINE:|7-commandAction|21|85-preAction
 // write pre-action user code here
switchDisplayable (null, getList ());//GEN-LINE:|7-commandAction|22|85-postAction
 // write post-action user code here
}//GEN-BEGIN:|7-commandAction|23|89-preAction
} else if (displayable == smsComposer3) {
if (command == SMSComposer.SEND_COMMAND) {//GEN-END:|7-commandAction|23|89-preAction
 // write pre-action user code here
//GEN-LINE:|7-commandAction|24|89-postAction
 // write post-action user code here
} else if (command == backCommand) {//GEN-LINE:|7-commandAction|25|91-preAction
 // write pre-action user code here
switchDisplayable (null, getList ());//GEN-LINE:|7-commandAction|26|91-postAction
 // write post-action user code here
}//GEN-BEGIN:|7-commandAction|27|94-preAction
} else if (displayable == smsComposer4) {
if (command == SMSComposer.SEND_COMMAND) {//GEN-END:|7-commandAction|27|94-preAction
 // write pre-action user code here
//GEN-LINE:|7-commandAction|28|94-postAction
 // write post-action user code here
} else if (command == backCommand) {//GEN-LINE:|7-commandAction|29|96-preAction
 // write pre-action user code here
switchDisplayable (null, getList ());//GEN-LINE:|7-commandAction|30|96-postAction
 // write post-action user code here
}//GEN-BEGIN:|7-commandAction|31|67-preAction
} else if (displayable == waitScreen) {
if (command == WaitScreen.FAILURE_COMMAND) {//GEN-END:|7-commandAction|31|67-preAction
 // write pre-action user code here
switchDisplayable (getVerficar (), getList ());//GEN-LINE:|7-commandAction|32|67-postAction
 // write post-action user code here
} else if (command == WaitScreen.SUCCESS_COMMAND) {//GEN-LINE:|7-commandAction|33|66-preAction
 // write pre-action user code here
switchDisplayable (getEnviado (), getList ());//GEN-LINE:|7-commandAction|34|66-postAction
 // write post-action user code here
}//GEN-BEGIN:|7-commandAction|35|7-postCommandAction
}//GEN-END:|7-commandAction|35|7-postCommandAction
 // write post-action user code here
}//GEN-BEGIN:|7-commandAction|36|
//</editor-fold>//GEN-END:|7-commandAction|36|




//<editor-fold defaultstate="collapsed" desc=" Generated Getter: list ">//GEN-BEGIN:|17-getter|0|17-preInit
/**
 * Returns an initiliazed instance of list component.
 * @return the initialized component instance
 */
public List getList () {
if (list == null) {//GEN-END:|17-getter|0|17-preInit
 // write pre-init user code here
list = new List ("list", Choice.IMPLICIT);//GEN-BEGIN:|17-getter|1|17-postInit
list.append ("Encender Luz", null);
list.append ("Apagar Luz", null);
list.append ("Open Window", null);
list.append ("Close Window", null);
list.addCommand (getGoodBye ());
list.setCommandListener (this);
list.setSelectedFlags (new boolean[] { false, false, false, false });//GEN-END:|17-getter|1|17-postInit
 // write post-init user code here
}//GEN-BEGIN:|17-getter|2|
return list;
}
//</editor-fold>//GEN-END:|17-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Method: listAction ">//GEN-BEGIN:|17-action|0|17-preAction
/**
 * Performs an action assigned to the selected list element in the list component.
 */
public void listAction () {//GEN-END:|17-action|0|17-preAction
 // enter pre-action user code here
String __selectedString = getList ().getString (getList ().getSelectedIndex ());//GEN-BEGIN:|17-action|1|21-preAction
if (__selectedString != null) {
if (__selectedString.equals ("Encender Luz")) {//GEN-END:|17-action|1|21-preAction
 // write pre-action user code here
switchDisplayable (null, getSmsComposer ());//GEN-LINE:|17-action|2|21-postAction
 // write post-action user code here
} else if (__selectedString.equals ("Apagar Luz")) {//GEN-LINE:|17-action|3|22-preAction
 // write pre-action user code here
switchDisplayable (null, getSmsComposer1 ());//GEN-LINE:|17-action|4|22-postAction
 // write post-action user code here
} else if (__selectedString.equals ("Open Window")) {//GEN-LINE:|17-action|5|23-preAction
 // write pre-action user code here
switchDisplayable (null, getSmsComposer3 ());//GEN-LINE:|17-action|6|23-postAction
 // write post-action user code here
} else if (__selectedString.equals ("Close Window")) {//GEN-LINE:|17-action|7|24-preAction
 // write pre-action user code here
switchDisplayable (null, getSmsComposer4 ());//GEN-LINE:|17-action|8|24-postAction
 // write post-action user code here
}//GEN-BEGIN:|17-action|9|17-postAction
}//GEN-END:|17-action|9|17-postAction
 // enter post-action user code here
}//GEN-BEGIN:|17-action|10|
//</editor-fold>//GEN-END:|17-action|10|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: GoodBye ">//GEN-BEGIN:|25-getter|0|25-preInit
/**
 * Returns an initiliazed instance of GoodBye component.
 * @return the initialized component instance
 */
public Command getGoodBye () {
if (GoodBye == null) {//GEN-END:|25-getter|0|25-preInit
 // write pre-init user code here
GoodBye = new Command ("Exit", Command.EXIT, 0);//GEN-LINE:|25-getter|1|25-postInit
 // write post-init user code here
}//GEN-BEGIN:|25-getter|2|
return GoodBye;
}
//</editor-fold>//GEN-END:|25-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: okCommand ">//GEN-BEGIN:|28-getter|0|28-preInit
/**
 * Returns an initiliazed instance of okCommand component.
 * @return the initialized component instance
 */
public Command getOkCommand () {
if (okCommand == null) {//GEN-END:|28-getter|0|28-preInit
 // write pre-init user code here
okCommand = new Command ("Ok", Command.OK, 0);//GEN-LINE:|28-getter|1|28-postInit
 // write post-init user code here
}//GEN-BEGIN:|28-getter|2|
return okCommand;
}
//</editor-fold>//GEN-END:|28-getter|2|



//<editor-fold defaultstate="collapsed" desc=" Generated Getter: smsComposer ">//GEN-BEGIN:|46-getter|0|46-preInit
/**
 * Returns an initiliazed instance of smsComposer component.
 * @return the initialized component instance
 */
public SMSComposer getSmsComposer () {
if (smsComposer == null) {//GEN-END:|46-getter|0|46-preInit
 // write pre-init user code here
smsComposer = new SMSComposer (getDisplay ());//GEN-BEGIN:|46-getter|1|46-postInit
smsComposer.setTitle ("smsComposer");
smsComposer.addCommand (SMSComposer.SEND_COMMAND);
smsComposer.addCommand (getBackCommand1 ());
smsComposer.setCommandListener (this);
smsComposer.setBGColor (-3355444);
smsComposer.setFGColor (-16777216);
smsComposer.setPhoneNumber ("6181845601");
smsComposer.setMessage ("0001");
smsComposer.setPhoneNumberLabel ("Celular");
smsComposer.setMessageLabel ("Mensaje");//GEN-END:|46-getter|1|46-postInit
 // write post-init user code here
}//GEN-BEGIN:|46-getter|2|
return smsComposer;
}
//</editor-fold>//GEN-END:|46-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: exitCommand ">//GEN-BEGIN:|41-getter|0|41-preInit
/**
 * Returns an initiliazed instance of exitCommand component.
 * @return the initialized component instance
 */
public Command getExitCommand () {
if (exitCommand == null) {//GEN-END:|41-getter|0|41-preInit
 // write pre-init user code here
exitCommand = new Command ("Exit", Command.EXIT, 0);//GEN-LINE:|41-getter|1|41-postInit
 // write post-init user code here
}//GEN-BEGIN:|41-getter|2|
return exitCommand;
}
//</editor-fold>//GEN-END:|41-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: image ">//GEN-BEGIN:|38-getter|0|38-preInit
/**
 * Returns an initiliazed instance of image component.
 * @return the initialized component instance
 */
public Image getImage () {
if (image == null) {//GEN-END:|38-getter|0|38-preInit
 // write pre-init user code here
try {//GEN-BEGIN:|38-getter|1|38-@java.io.IOException
image = Image.createImage ("/5f084_falso.jpg");
} catch (java.io.IOException e) {//GEN-END:|38-getter|1|38-@java.io.IOException
e.printStackTrace ();
}//GEN-LINE:|38-getter|2|38-postInit
 // write post-init user code here
}//GEN-BEGIN:|38-getter|3|
return image;
}
//</editor-fold>//GEN-END:|38-getter|3|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: loginScreen ">//GEN-BEGIN:|49-getter|0|49-preInit
/**
 * Returns an initiliazed instance of loginScreen component.
 * @return the initialized component instance
 */
public LoginScreen getLoginScreen () {
if (loginScreen == null) {//GEN-END:|49-getter|0|49-preInit
 // write pre-init user code here
loginScreen = new LoginScreen (getDisplay ());//GEN-BEGIN:|49-getter|1|49-postInit
loginScreen.setLabelTexts ("Username", "Password");
loginScreen.setTitle ("loginScreen");
loginScreen.addCommand (LoginScreen.LOGIN_COMMAND);
loginScreen.addCommand (getExitCommand1 ());
loginScreen.setCommandListener (this);
loginScreen.setBGColor (-3355444);
loginScreen.setFGColor (0);
loginScreen.setUseLoginButton (false);
loginScreen.setLoginButtonText ("Login");//GEN-END:|49-getter|1|49-postInit
 // write post-init user code here
}//GEN-BEGIN:|49-getter|2|
return loginScreen;
}
//</editor-fold>//GEN-END:|49-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: Sinacceso ">//GEN-BEGIN:|55-getter|0|55-preInit
/**
 * Returns an initiliazed instance of Sinacceso component.
 * @return the initialized component instance
 */
public Alert getSinacceso () {
if (Sinacceso == null) {//GEN-END:|55-getter|0|55-preInit
 // write pre-init user code here
Sinacceso = new Alert ("alert", null, getImage (), null);//GEN-BEGIN:|55-getter|1|55-postInit
Sinacceso.addCommand (getBackCommand ());
Sinacceso.setCommandListener (this);
Sinacceso.setTimeout (Alert.FOREVER);//GEN-END:|55-getter|1|55-postInit
 // write post-init user code here
}//GEN-BEGIN:|55-getter|2|
return Sinacceso;
}
//</editor-fold>//GEN-END:|55-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: exitCommand1 ">//GEN-BEGIN:|51-getter|0|51-preInit
/**
 * Returns an initiliazed instance of exitCommand1 component.
 * @return the initialized component instance
 */
public Command getExitCommand1 () {
if (exitCommand1 == null) {//GEN-END:|51-getter|0|51-preInit
 // write pre-init user code here
exitCommand1 = new Command ("Exit", Command.EXIT, 0);//GEN-LINE:|51-getter|1|51-postInit
 // write post-init user code here
}//GEN-BEGIN:|51-getter|2|
return exitCommand1;
}
//</editor-fold>//GEN-END:|51-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: backCommand ">//GEN-BEGIN:|56-getter|0|56-preInit
/**
 * Returns an initiliazed instance of backCommand component.
 * @return the initialized component instance
 */
public Command getBackCommand () {
if (backCommand == null) {//GEN-END:|56-getter|0|56-preInit
 // write pre-init user code here
backCommand = new Command ("Back", Command.BACK, 0);//GEN-LINE:|56-getter|1|56-postInit
 // write post-init user code here
}//GEN-BEGIN:|56-getter|2|
return backCommand;
}
//</editor-fold>//GEN-END:|56-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: waitScreen ">//GEN-BEGIN:|63-getter|0|63-preInit
/**
 * Returns an initiliazed instance of waitScreen component.
 * @return the initialized component instance
 */
public WaitScreen getWaitScreen () {
if (waitScreen == null) {//GEN-END:|63-getter|0|63-preInit
 // write pre-init user code here
waitScreen = new WaitScreen (getDisplay ());//GEN-BEGIN:|63-getter|1|63-postInit
waitScreen.setTitle ("waitScreen");
waitScreen.setCommandListener (this);
waitScreen.setText ("Espera un Momento");
waitScreen.setTask (getTask ());//GEN-END:|63-getter|1|63-postInit
 // write post-init user code here
}//GEN-BEGIN:|63-getter|2|
return waitScreen;
}
//</editor-fold>//GEN-END:|63-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: Enviado ">//GEN-BEGIN:|69-getter|0|69-preInit
/**
 * Returns an initiliazed instance of Enviado component.
 * @return the initialized component instance
 */
public Alert getEnviado () {
if (Enviado == null) {//GEN-END:|69-getter|0|69-preInit
 // write pre-init user code here
Enviado = new Alert ("alert");//GEN-BEGIN:|69-getter|1|69-postInit
Enviado.setTimeout (Alert.FOREVER);//GEN-END:|69-getter|1|69-postInit
 // write post-init user code here
}//GEN-BEGIN:|69-getter|2|
return Enviado;
}
//</editor-fold>//GEN-END:|69-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: Verficar ">//GEN-BEGIN:|72-getter|0|72-preInit
/**
 * Returns an initiliazed instance of Verficar component.
 * @return the initialized component instance
 */
public Alert getVerficar () {
if (Verficar == null) {//GEN-END:|72-getter|0|72-preInit
 // write pre-init user code here
Verficar = new Alert ("alert", "Verificar Num Cel o si cuenta con saldo.", null, null);//GEN-BEGIN:|72-getter|1|72-postInit
Verficar.setTimeout (Alert.FOREVER);//GEN-END:|72-getter|1|72-postInit
 // write post-init user code here
}//GEN-BEGIN:|72-getter|2|
return Verficar;
}
//</editor-fold>//GEN-END:|72-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: backCommand1 ">//GEN-BEGIN:|61-getter|0|61-preInit
/**
 * Returns an initiliazed instance of backCommand1 component.
 * @return the initialized component instance
 */
public Command getBackCommand1 () {
if (backCommand1 == null) {//GEN-END:|61-getter|0|61-preInit
 // write pre-init user code here
backCommand1 = new Command ("Back", Command.BACK, 0);//GEN-LINE:|61-getter|1|61-postInit
 // write post-init user code here
}//GEN-BEGIN:|61-getter|2|
return backCommand1;
}
//</editor-fold>//GEN-END:|61-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: task ">//GEN-BEGIN:|68-getter|0|68-preInit
/**
 * Returns an initiliazed instance of task component.
 * @return the initialized component instance
 */
public SimpleCancellableTask getTask () {
if (task == null) {//GEN-END:|68-getter|0|68-preInit
 // write pre-init user code here
task = new SimpleCancellableTask ();//GEN-BEGIN:|68-getter|1|68-execute
task.setExecutable (new org.netbeans.microedition.util.Executable() {
public void execute () throws Exception {//GEN-END:|68-getter|1|68-execute
// write task-execution user code here
}//GEN-BEGIN:|68-getter|2|68-postInit
});//GEN-END:|68-getter|2|68-postInit
 // write post-init user code here
}//GEN-BEGIN:|68-getter|3|
return task;
}
//</editor-fold>//GEN-END:|68-getter|3|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: smsComposer1 ">//GEN-BEGIN:|75-getter|0|75-preInit
/**
 * Returns an initiliazed instance of smsComposer1 component.
 * @return the initialized component instance
 */
public SMSComposer getSmsComposer1 () {
if (smsComposer1 == null) {//GEN-END:|75-getter|0|75-preInit
 // write pre-init user code here
smsComposer1 = new SMSComposer (getDisplay ());//GEN-BEGIN:|75-getter|1|75-postInit
smsComposer1.setTitle ("smsComposer1");
smsComposer1.addCommand (SMSComposer.SEND_COMMAND);
smsComposer1.addCommand (getBackCommand2 ());
smsComposer1.setCommandListener (this);
smsComposer1.setBGColor (-3355444);
smsComposer1.setFGColor (-16777216);
smsComposer1.setPhoneNumber ("6181845601");
smsComposer1.setMessage ("0010\n");
smsComposer1.setPhoneNumberLabel ("Celular");
smsComposer1.setMessageLabel ("Mensaje");//GEN-END:|75-getter|1|75-postInit
 // write post-init user code here
}//GEN-BEGIN:|75-getter|2|
return smsComposer1;
}
//</editor-fold>//GEN-END:|75-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: smsComposer2 ">//GEN-BEGIN:|83-getter|0|83-preInit
/**
 * Returns an initiliazed instance of smsComposer2 component.
 * @return the initialized component instance
 */
public SMSComposer getSmsComposer2 () {
if (smsComposer2 == null) {//GEN-END:|83-getter|0|83-preInit
 // write pre-init user code here
smsComposer2 = new SMSComposer (getDisplay ());//GEN-BEGIN:|83-getter|1|83-postInit
smsComposer2.setTitle ("smsComposer2");
smsComposer2.addCommand (SMSComposer.SEND_COMMAND);
smsComposer2.addCommand (getBackCommand ());
smsComposer2.setCommandListener (this);
smsComposer2.setBGColor (-3355444);
smsComposer2.setFGColor (-16777216);
smsComposer2.setPhoneNumber ("6181845601");
smsComposer2.setMessage ("0011\n");
smsComposer2.setPhoneNumberLabel ("Celular");
smsComposer2.setMessageLabel ("Mensaje");//GEN-END:|83-getter|1|83-postInit
 // write post-init user code here
}//GEN-BEGIN:|83-getter|2|
return smsComposer2;
}
//</editor-fold>//GEN-END:|83-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: smsComposer3 ">//GEN-BEGIN:|88-getter|0|88-preInit
/**
 * Returns an initiliazed instance of smsComposer3 component.
 * @return the initialized component instance
 */
public SMSComposer getSmsComposer3 () {
if (smsComposer3 == null) {//GEN-END:|88-getter|0|88-preInit
 // write pre-init user code here
smsComposer3 = new SMSComposer (getDisplay ());//GEN-BEGIN:|88-getter|1|88-postInit
smsComposer3.setTitle ("smsComposer3");
smsComposer3.addCommand (SMSComposer.SEND_COMMAND);
smsComposer3.addCommand (getBackCommand ());
smsComposer3.setCommandListener (this);
smsComposer3.setBGColor (-3355444);
smsComposer3.setFGColor (-16777216);
smsComposer3.setMessage ("0100");
smsComposer3.setPhoneNumberLabel ("Celular");
smsComposer3.setMessageLabel ("Mensaje");//GEN-END:|88-getter|1|88-postInit
 // write post-init user code here
}//GEN-BEGIN:|88-getter|2|
return smsComposer3;
}
//</editor-fold>//GEN-END:|88-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: smsComposer4 ">//GEN-BEGIN:|93-getter|0|93-preInit
/**
 * Returns an initiliazed instance of smsComposer4 component.
 * @return the initialized component instance
 */
public SMSComposer getSmsComposer4 () {
if (smsComposer4 == null) {//GEN-END:|93-getter|0|93-preInit
 // write pre-init user code here
smsComposer4 = new SMSComposer (getDisplay ());//GEN-BEGIN:|93-getter|1|93-postInit
smsComposer4.setTitle ("smsComposer4");
smsComposer4.addCommand (SMSComposer.SEND_COMMAND);
smsComposer4.addCommand (getBackCommand ());
smsComposer4.setCommandListener (this);
smsComposer4.setBGColor (-3355444);
smsComposer4.setFGColor (-16777216);
smsComposer4.setPhoneNumber ("6181845601");
smsComposer4.setMessage ("1000");
smsComposer4.setPhoneNumberLabel ("Celular");
smsComposer4.setMessageLabel ("Mensaje");//GEN-END:|93-getter|1|93-postInit
 // write post-init user code here
}//GEN-BEGIN:|93-getter|2|
return smsComposer4;
}
//</editor-fold>//GEN-END:|93-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: backCommand2 ">//GEN-BEGIN:|77-getter|0|77-preInit
/**
 * Returns an initiliazed instance of backCommand2 component.
 * @return the initialized component instance
 */
public Command getBackCommand2 () {
if (backCommand2 == null) {//GEN-END:|77-getter|0|77-preInit
 // write pre-init user code here
backCommand2 = new Command ("Back", Command.BACK, 0);//GEN-LINE:|77-getter|1|77-postInit
 // write post-init user code here
}//GEN-BEGIN:|77-getter|2|
return backCommand2;
}
//</editor-fold>//GEN-END:|77-getter|2|

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
