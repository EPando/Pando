/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package Unidad3;

import javax.microedition.midlet.*;
import javax.microedition.lcdui.*;
import org.netbeans.microedition.lcdui.SplashScreen;

/**
 * @author bLacko
 */
public class diseño extends MIDlet implements CommandListener {
    
    private boolean midletPaused = false;

//<editor-fold defaultstate="collapsed" desc=" Generated Fields ">//GEN-BEGIN:|fields|0|
private Form form;
private StringItem stringItem;
private TextField caja;
private StringItem letrero;
private SplashScreen letrero2;
private Command backCommand;
private Command okCommand;
private Image image1;
//</editor-fold>//GEN-END:|fields|0|
    /**
     * The diseño constructor.
     */
    public diseño() {
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
switchDisplayable (null, getLetrero2 ());//GEN-LINE:|3-startMIDlet|1|3-postAction
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
if (displayable == form) {//GEN-BEGIN:|7-commandAction|1|16-preAction
if (command == backCommand) {//GEN-END:|7-commandAction|1|16-preAction
 // write pre-action user code here
exitMIDlet ();//GEN-LINE:|7-commandAction|2|16-postAction
 // write post-action user code here
} else if (command == okCommand) {//GEN-LINE:|7-commandAction|3|30-preAction
 // write pre-action user code here
exitMIDlet ();//GEN-LINE:|7-commandAction|4|30-postAction
 // write post-action user code here
    String nombre;
    nombre= caja.getString();
    letrero2.setText(nombre);
}//GEN-BEGIN:|7-commandAction|5|22-preAction
} else if (displayable == letrero2) {
if (command == SplashScreen.DISMISS_COMMAND) {//GEN-END:|7-commandAction|5|22-preAction
 // write pre-action user code here
switchDisplayable (null, getForm ());//GEN-LINE:|7-commandAction|6|22-postAction
 // write post-action user code here
}//GEN-BEGIN:|7-commandAction|7|7-postCommandAction
}//GEN-END:|7-commandAction|7|7-postCommandAction
 // write post-action user code here
}//GEN-BEGIN:|7-commandAction|8|
//</editor-fold>//GEN-END:|7-commandAction|8|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: form ">//GEN-BEGIN:|14-getter|0|14-preInit
/**
 * Returns an initiliazed instance of form component.
 * @return the initialized component instance
 */
public Form getForm () {
if (form == null) {//GEN-END:|14-getter|0|14-preInit
 // write pre-init user code here
form = new Form ("Bienvenido", new Item[] { getStringItem (), getCaja (), getLetrero () });//GEN-BEGIN:|14-getter|1|14-postInit
form.addCommand (getBackCommand ());
form.addCommand (getOkCommand ());
form.setCommandListener (this);//GEN-END:|14-getter|1|14-postInit
 // write post-init user code here
}//GEN-BEGIN:|14-getter|2|
return form;
}
//</editor-fold>//GEN-END:|14-getter|2|



//<editor-fold defaultstate="collapsed" desc=" Generated Getter: backCommand ">//GEN-BEGIN:|15-getter|0|15-preInit
/**
 * Returns an initiliazed instance of backCommand component.
 * @return the initialized component instance
 */
public Command getBackCommand () {
if (backCommand == null) {//GEN-END:|15-getter|0|15-preInit
 // write pre-init user code here
backCommand = new Command ("Back", Command.BACK, 0);//GEN-LINE:|15-getter|1|15-postInit
 // write post-init user code here
}//GEN-BEGIN:|15-getter|2|
return backCommand;
}
//</editor-fold>//GEN-END:|15-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: letrero2 ">//GEN-BEGIN:|20-getter|0|20-preInit
/**
 * Returns an initiliazed instance of letrero2 component.
 * @return the initialized component instance
 */
public SplashScreen getLetrero2 () {
if (letrero2 == null) {//GEN-END:|20-getter|0|20-preInit
 // write pre-init user code here
letrero2 = new SplashScreen (getDisplay ());//GEN-BEGIN:|20-getter|1|20-postInit
letrero2.setTitle ("Bonita!");
letrero2.setCommandListener (this);
letrero2.setImage (getImage1 ());
letrero2.setTimeout (10000);//GEN-END:|20-getter|1|20-postInit
 // write post-init user code here
}//GEN-BEGIN:|20-getter|2|
return letrero2;
}
//</editor-fold>//GEN-END:|20-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: image1 ">//GEN-BEGIN:|23-getter|0|23-preInit
/**
 * Returns an initiliazed instance of image1 component.
 * @return the initialized component instance
 */
public Image getImage1 () {
if (image1 == null) {//GEN-END:|23-getter|0|23-preInit
 // write pre-init user code here
try {//GEN-BEGIN:|23-getter|1|23-@java.io.IOException
image1 = Image.createImage ("/Wallpapers Chicas Hermosas HD (24).jpg");
} catch (java.io.IOException e) {//GEN-END:|23-getter|1|23-@java.io.IOException
e.printStackTrace ();
}//GEN-LINE:|23-getter|2|23-postInit
 // write post-init user code here
}//GEN-BEGIN:|23-getter|3|
return image1;
}
//</editor-fold>//GEN-END:|23-getter|3|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: stringItem ">//GEN-BEGIN:|27-getter|0|27-preInit
/**
 * Returns an initiliazed instance of stringItem component.
 * @return the initialized component instance
 */
public StringItem getStringItem () {
if (stringItem == null) {//GEN-END:|27-getter|0|27-preInit
 // write pre-init user code here
stringItem = new StringItem ("Hola Mundo!", null);//GEN-LINE:|27-getter|1|27-postInit
 // write post-init user code here
}//GEN-BEGIN:|27-getter|2|
return stringItem;
}
//</editor-fold>//GEN-END:|27-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: caja ">//GEN-BEGIN:|28-getter|0|28-preInit
/**
 * Returns an initiliazed instance of caja component.
 * @return the initialized component instance
 */
public TextField getCaja () {
if (caja == null) {//GEN-END:|28-getter|0|28-preInit
 // write pre-init user code here
caja = new TextField ("Ingresa tu nombre", null, 32, TextField.ANY);//GEN-LINE:|28-getter|1|28-postInit
 // write post-init user code here
}//GEN-BEGIN:|28-getter|2|
return caja;
}
//</editor-fold>//GEN-END:|28-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: okCommand ">//GEN-BEGIN:|29-getter|0|29-preInit
/**
 * Returns an initiliazed instance of okCommand component.
 * @return the initialized component instance
 */
public Command getOkCommand () {
if (okCommand == null) {//GEN-END:|29-getter|0|29-preInit
 // write pre-init user code here
okCommand = new Command ("Ok", Command.OK, 0);//GEN-LINE:|29-getter|1|29-postInit
 // write post-init user code here
}//GEN-BEGIN:|29-getter|2|
return okCommand;
}
//</editor-fold>//GEN-END:|29-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: letrero ">//GEN-BEGIN:|31-getter|0|31-preInit
/**
 * Returns an initiliazed instance of letrero component.
 * @return the initialized component instance
 */
public StringItem getLetrero () {
if (letrero == null) {//GEN-END:|31-getter|0|31-preInit
 // write pre-init user code here
letrero = new StringItem ("stringItem1", null);//GEN-LINE:|31-getter|1|31-postInit
 // write post-init user code here
}//GEN-BEGIN:|31-getter|2|
return letrero;
}
//</editor-fold>//GEN-END:|31-getter|2|

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
