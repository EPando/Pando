/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package principal;

import javax.microedition.midlet.*;
import javax.microedition.lcdui.*;
import org.netbeans.microedition.lcdui.WaitScreen;
import org.netbeans.microedition.lcdui.wma.SMSComposer;
import org.netbeans.microedition.util.SimpleCancellableTask;

/**
 * @author bLacko
 */
public class VisualMIDlet extends MIDlet implements CommandListener {
    
    private boolean midletPaused = false;

//<editor-fold defaultstate="collapsed" desc=" Generated Fields ">//GEN-BEGIN:|fields|0|
private SMSComposer smsComposer;
private WaitScreen waitScreen;
private Alert Exito;
private Alert SinExito;
private Command exitCommand;
private SimpleCancellableTask task;
private Image image1;
private Image image2;
private Image image3;
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
switchDisplayable (null, getSmsComposer ());//GEN-LINE:|3-startMIDlet|1|3-postAction
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
if (displayable == smsComposer) {//GEN-BEGIN:|7-commandAction|1|16-preAction
if (command == SMSComposer.SEND_COMMAND) {//GEN-END:|7-commandAction|1|16-preAction
 // write pre-action user code here
switchDisplayable (null, getWaitScreen ());//GEN-LINE:|7-commandAction|2|16-postAction
 // write post-action user code here
} else if (command == exitCommand) {//GEN-LINE:|7-commandAction|3|26-preAction
 // write pre-action user code here
exitMIDlet ();//GEN-LINE:|7-commandAction|4|26-postAction
 // write post-action user code here
}//GEN-BEGIN:|7-commandAction|5|21-preAction
} else if (displayable == waitScreen) {
if (command == WaitScreen.FAILURE_COMMAND) {//GEN-END:|7-commandAction|5|21-preAction
 // write pre-action user code here
switchDisplayable (getSinExito (), getSmsComposer ());//GEN-LINE:|7-commandAction|6|21-postAction
 // write post-action user code here
} else if (command == WaitScreen.SUCCESS_COMMAND) {//GEN-LINE:|7-commandAction|7|20-preAction
 // write pre-action user code here
switchDisplayable (getExito (), getSmsComposer ());//GEN-LINE:|7-commandAction|8|20-postAction
 // write post-action user code here
}//GEN-BEGIN:|7-commandAction|9|7-postCommandAction
}//GEN-END:|7-commandAction|9|7-postCommandAction
 // write post-action user code here
}//GEN-BEGIN:|7-commandAction|10|
//</editor-fold>//GEN-END:|7-commandAction|10|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: smsComposer ">//GEN-BEGIN:|14-getter|0|14-preInit
/**
 * Returns an initiliazed instance of smsComposer component.
 * @return the initialized component instance
 */
public SMSComposer getSmsComposer () {
if (smsComposer == null) {//GEN-END:|14-getter|0|14-preInit
 // write pre-init user code here
smsComposer = new SMSComposer (getDisplay ());//GEN-BEGIN:|14-getter|1|14-postInit
smsComposer.setTitle ("smsComposer");
smsComposer.addCommand (SMSComposer.SEND_COMMAND);
smsComposer.addCommand (getExitCommand ());
smsComposer.setCommandListener (this);
smsComposer.setBGColor (-3355444);
smsComposer.setFGColor (-16777216);
smsComposer.setMessage ("");
smsComposer.setPhoneNumberLabel ("Numero de telefono");
smsComposer.setMessageLabel ("Aqui el mensaje");//GEN-END:|14-getter|1|14-postInit
 // write post-init user code here
}//GEN-BEGIN:|14-getter|2|
return smsComposer;
}
//</editor-fold>//GEN-END:|14-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: waitScreen ">//GEN-BEGIN:|17-getter|0|17-preInit
/**
 * Returns an initiliazed instance of waitScreen component.
 * @return the initialized component instance
 */
public WaitScreen getWaitScreen () {
if (waitScreen == null) {//GEN-END:|17-getter|0|17-preInit
 // write pre-init user code here
waitScreen = new WaitScreen (getDisplay ());//GEN-BEGIN:|17-getter|1|17-postInit
waitScreen.setTitle ("waitScreen");
waitScreen.setCommandListener (this);
waitScreen.setImage (getImage3 ());
waitScreen.setText ("Espera un momento!");
waitScreen.setTask (getTask ());//GEN-END:|17-getter|1|17-postInit
 // write post-init user code here
}//GEN-BEGIN:|17-getter|2|
return waitScreen;
}
//</editor-fold>//GEN-END:|17-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: Exito ">//GEN-BEGIN:|23-getter|0|23-preInit
/**
 * Returns an initiliazed instance of Exito component.
 * @return the initialized component instance
 */
public Alert getExito () {
if (Exito == null) {//GEN-END:|23-getter|0|23-preInit
 // write pre-init user code here
Exito = new Alert ("alert", "Mensaje Enviado!", getImage1 (), null);//GEN-BEGIN:|23-getter|1|23-postInit
Exito.setTimeout (Alert.FOREVER);//GEN-END:|23-getter|1|23-postInit
 // write post-init user code here
}//GEN-BEGIN:|23-getter|2|
return Exito;
}
//</editor-fold>//GEN-END:|23-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: SinExito ">//GEN-BEGIN:|24-getter|0|24-preInit
/**
 * Returns an initiliazed instance of SinExito component.
 * @return the initialized component instance
 */
public Alert getSinExito () {
if (SinExito == null) {//GEN-END:|24-getter|0|24-preInit
 // write pre-init user code here
SinExito = new Alert ("alert1", "El mensaje no ha sido enviado!", getImage2 (), null);//GEN-BEGIN:|24-getter|1|24-postInit
SinExito.setTimeout (Alert.FOREVER);//GEN-END:|24-getter|1|24-postInit
 // write post-init user code here
}//GEN-BEGIN:|24-getter|2|
return SinExito;
}
//</editor-fold>//GEN-END:|24-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: exitCommand ">//GEN-BEGIN:|25-getter|0|25-preInit
/**
 * Returns an initiliazed instance of exitCommand component.
 * @return the initialized component instance
 */
public Command getExitCommand () {
if (exitCommand == null) {//GEN-END:|25-getter|0|25-preInit
 // write pre-init user code here
exitCommand = new Command ("Exit", Command.EXIT, 0);//GEN-LINE:|25-getter|1|25-postInit
 // write post-init user code here
}//GEN-BEGIN:|25-getter|2|
return exitCommand;
}
//</editor-fold>//GEN-END:|25-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: task ">//GEN-BEGIN:|22-getter|0|22-preInit
/**
 * Returns an initiliazed instance of task component.
 * @return the initialized component instance
 */
public SimpleCancellableTask getTask () {
if (task == null) {//GEN-END:|22-getter|0|22-preInit
 // write pre-init user code here
task = new SimpleCancellableTask ();//GEN-BEGIN:|22-getter|1|22-execute
task.setExecutable (new org.netbeans.microedition.util.Executable() {
public void execute () throws Exception {//GEN-END:|22-getter|1|22-execute
// write task-execution user code here
    smsComposer.sendSMS();
}//GEN-BEGIN:|22-getter|2|22-postInit
});//GEN-END:|22-getter|2|22-postInit
 // write post-init user code here
}//GEN-BEGIN:|22-getter|3|
return task;
}
//</editor-fold>//GEN-END:|22-getter|3|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: image1 ">//GEN-BEGIN:|34-getter|0|34-preInit
/**
 * Returns an initiliazed instance of image1 component.
 * @return the initialized component instance
 */
public Image getImage1 () {
if (image1 == null) {//GEN-END:|34-getter|0|34-preInit
 // write pre-init user code here
try {//GEN-BEGIN:|34-getter|1|34-@java.io.IOException
image1 = Image.createImage ("/exito.jpg");
} catch (java.io.IOException e) {//GEN-END:|34-getter|1|34-@java.io.IOException
e.printStackTrace ();
}//GEN-LINE:|34-getter|2|34-postInit
 // write post-init user code here
}//GEN-BEGIN:|34-getter|3|
return image1;
}
//</editor-fold>//GEN-END:|34-getter|3|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: image2 ">//GEN-BEGIN:|35-getter|0|35-preInit
/**
 * Returns an initiliazed instance of image2 component.
 * @return the initialized component instance
 */
public Image getImage2 () {
if (image2 == null) {//GEN-END:|35-getter|0|35-preInit
 // write pre-init user code here
try {//GEN-BEGIN:|35-getter|1|35-@java.io.IOException
image2 = Image.createImage ("/Fallo-de-seguridad-puso-al-descubierto-fotos-intimas-del-fundador-de-Facebook_thumb.jpg");
} catch (java.io.IOException e) {//GEN-END:|35-getter|1|35-@java.io.IOException
e.printStackTrace ();
}//GEN-LINE:|35-getter|2|35-postInit
 // write post-init user code here
}//GEN-BEGIN:|35-getter|3|
return image2;
}
//</editor-fold>//GEN-END:|35-getter|3|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: image3 ">//GEN-BEGIN:|36-getter|0|36-preInit
/**
 * Returns an initiliazed instance of image3 component.
 * @return the initialized component instance
 */
public Image getImage3 () {
if (image3 == null) {//GEN-END:|36-getter|0|36-preInit
 // write pre-init user code here
try {//GEN-BEGIN:|36-getter|1|36-@java.io.IOException
image3 = Image.createImage ("/1049-Un-momento-por-favor-en-japones-260x300.jpg");
} catch (java.io.IOException e) {//GEN-END:|36-getter|1|36-@java.io.IOException
e.printStackTrace ();
}//GEN-LINE:|36-getter|2|36-postInit
 // write post-init user code here
}//GEN-BEGIN:|36-getter|3|
return image3;
}
//</editor-fold>//GEN-END:|36-getter|3|

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
