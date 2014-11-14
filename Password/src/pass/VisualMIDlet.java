/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package pass;

import javax.microedition.midlet.*;
import javax.microedition.lcdui.*;
import org.netbeans.microedition.lcdui.LoginScreen;

/**
 * @author bLacko
 */
public class VisualMIDlet extends MIDlet implements CommandListener {
    
    private boolean midletPaused = false;

//<editor-fold defaultstate="collapsed" desc=" Generated Fields ">//GEN-BEGIN:|fields|0|
private LoginScreen loginScreen;
private Alert Concedido;
private Alert Sinacceso;
private Command exitCommand;
private Command backCommand;
private Command backCommand1;
private Image image2;
private Image image1;
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

//<editor-fold defaultstate="collapsed" desc=" Generated Method: method ">//GEN-BEGIN:|19-if|0|19-preIf
/**
 * Performs an action assigned to the method if-point.
 */
public void method () {//GEN-END:|19-if|0|19-preIf
 // enter pre-if user code here
if (loginScreen.getUsername().equals("Black") && loginScreen.getPassword().equals("aqilo")) {//GEN-LINE:|19-if|1|20-preAction
 // write pre-action user code here
switchDisplayable (null, getConcedido ());//GEN-LINE:|19-if|2|20-postAction
 // write post-action user code here
} else {//GEN-LINE:|19-if|3|21-preAction
 // write pre-action user code here
switchDisplayable (null, getSinacceso ());//GEN-LINE:|19-if|4|21-postAction
 // write post-action user code here
}//GEN-LINE:|19-if|5|19-postIf
 // enter post-if user code here
}//GEN-BEGIN:|19-if|6|
//</editor-fold>//GEN-END:|19-if|6|

//<editor-fold defaultstate="collapsed" desc=" Generated Method: commandAction for Displayables ">//GEN-BEGIN:|7-commandAction|0|7-preCommandAction
/**
 * Called by a system to indicated that a command has been invoked on a particular displayable.
 * @param command the Command that was invoked
 * @param displayable the Displayable where the command was invoked
 */
public void commandAction (Command command, Displayable displayable) {//GEN-END:|7-commandAction|0|7-preCommandAction
 // write pre-action user code here
if (displayable == Concedido) {//GEN-BEGIN:|7-commandAction|1|33-preAction
if (command == backCommand1) {//GEN-END:|7-commandAction|1|33-preAction
 // write pre-action user code here
exitMIDlet ();//GEN-LINE:|7-commandAction|2|33-postAction
 // write post-action user code here
}//GEN-BEGIN:|7-commandAction|3|30-preAction
} else if (displayable == Sinacceso) {
if (command == backCommand) {//GEN-END:|7-commandAction|3|30-preAction
 // write pre-action user code here
switchDisplayable (null, getLoginScreen ());//GEN-LINE:|7-commandAction|4|30-postAction
 // write post-action user code here
}//GEN-BEGIN:|7-commandAction|5|16-preAction
} else if (displayable == loginScreen) {
if (command == LoginScreen.LOGIN_COMMAND) {//GEN-END:|7-commandAction|5|16-preAction
 // write pre-action user code here
method ();//GEN-LINE:|7-commandAction|6|16-postAction
 // write post-action user code here
} else if (command == exitCommand) {//GEN-LINE:|7-commandAction|7|23-preAction
 // write pre-action user code here

exitMIDlet ();//GEN-LINE:|7-commandAction|8|23-postAction
 // write post-action user code here
}//GEN-BEGIN:|7-commandAction|9|7-postCommandAction
}//GEN-END:|7-commandAction|9|7-postCommandAction
 // write post-action user code here
}//GEN-BEGIN:|7-commandAction|10|
//</editor-fold>//GEN-END:|7-commandAction|10|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: loginScreen ">//GEN-BEGIN:|14-getter|0|14-preInit
/**
 * Returns an initiliazed instance of loginScreen component.
 * @return the initialized component instance
 */
public LoginScreen getLoginScreen () {
if (loginScreen == null) {//GEN-END:|14-getter|0|14-preInit
 // write pre-init user code here
loginScreen = new LoginScreen (getDisplay ());//GEN-BEGIN:|14-getter|1|14-postInit
loginScreen.setLabelTexts ("Username", "Password");
loginScreen.setTitle ("loginScreen");
loginScreen.addCommand (LoginScreen.LOGIN_COMMAND);
loginScreen.addCommand (getExitCommand ());
loginScreen.setCommandListener (this);
loginScreen.setBGColor (-3355444);
loginScreen.setFGColor (0);
loginScreen.setUseLoginButton (false);
loginScreen.setLoginButtonText ("Login");//GEN-END:|14-getter|1|14-postInit
 // write post-init user code here
}//GEN-BEGIN:|14-getter|2|
return loginScreen;
}
//</editor-fold>//GEN-END:|14-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: Concedido ">//GEN-BEGIN:|17-getter|0|17-preInit
/**
 * Returns an initiliazed instance of Concedido component.
 * @return the initialized component instance
 */
public Alert getConcedido () {
if (Concedido == null) {//GEN-END:|17-getter|0|17-preInit
 // write pre-init user code here
Concedido = new Alert ("dos", "Acceso Correcto", getImage1 (), null);//GEN-BEGIN:|17-getter|1|17-postInit
Concedido.addCommand (getBackCommand1 ());
Concedido.setCommandListener (this);
Concedido.setTimeout (Alert.FOREVER);//GEN-END:|17-getter|1|17-postInit
 // write post-init user code here
}//GEN-BEGIN:|17-getter|2|
return Concedido;
}
//</editor-fold>//GEN-END:|17-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: Sinacceso ">//GEN-BEGIN:|18-getter|0|18-preInit
/**
 * Returns an initiliazed instance of Sinacceso component.
 * @return the initialized component instance
 */
public Alert getSinacceso () {
if (Sinacceso == null) {//GEN-END:|18-getter|0|18-preInit
 // write pre-init user code here
Sinacceso = new Alert ("Uno", "Invalido. Vuelve a intentarlo", getImage2 (), null);//GEN-BEGIN:|18-getter|1|18-postInit
Sinacceso.addCommand (getBackCommand ());
Sinacceso.setCommandListener (this);
Sinacceso.setTimeout (Alert.FOREVER);//GEN-END:|18-getter|1|18-postInit
 // write post-init user code here
}//GEN-BEGIN:|18-getter|2|
return Sinacceso;
}
//</editor-fold>//GEN-END:|18-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: exitCommand ">//GEN-BEGIN:|22-getter|0|22-preInit
/**
 * Returns an initiliazed instance of exitCommand component.
 * @return the initialized component instance
 */
public Command getExitCommand () {
if (exitCommand == null) {//GEN-END:|22-getter|0|22-preInit
 // write pre-init user code here
exitCommand = new Command ("Exit", Command.EXIT, 0);//GEN-LINE:|22-getter|1|22-postInit
 // write post-init user code here
}//GEN-BEGIN:|22-getter|2|
return exitCommand;
}
//</editor-fold>//GEN-END:|22-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: backCommand ">//GEN-BEGIN:|29-getter|0|29-preInit
/**
 * Returns an initiliazed instance of backCommand component.
 * @return the initialized component instance
 */
public Command getBackCommand () {
if (backCommand == null) {//GEN-END:|29-getter|0|29-preInit
 // write pre-init user code here
backCommand = new Command ("Back", Command.BACK, 0);//GEN-LINE:|29-getter|1|29-postInit
 // write post-init user code here
}//GEN-BEGIN:|29-getter|2|
return backCommand;
}
//</editor-fold>//GEN-END:|29-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: backCommand1 ">//GEN-BEGIN:|32-getter|0|32-preInit
/**
 * Returns an initiliazed instance of backCommand1 component.
 * @return the initialized component instance
 */
public Command getBackCommand1 () {
if (backCommand1 == null) {//GEN-END:|32-getter|0|32-preInit
 // write pre-init user code here
backCommand1 = new Command ("Back", Command.BACK, 0);//GEN-LINE:|32-getter|1|32-postInit
 // write post-init user code here
}//GEN-BEGIN:|32-getter|2|
return backCommand1;
}
//</editor-fold>//GEN-END:|32-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: image2 ">//GEN-BEGIN:|35-getter|0|35-preInit
/**
 * Returns an initiliazed instance of image2 component.
 * @return the initialized component instance
 */
public Image getImage2 () {
if (image2 == null) {//GEN-END:|35-getter|0|35-preInit
 // write pre-init user code here
try {//GEN-BEGIN:|35-getter|1|35-@java.io.IOException
image2 = Image.createImage ("/album-x.jpg");
} catch (java.io.IOException e) {//GEN-END:|35-getter|1|35-@java.io.IOException
e.printStackTrace ();
}//GEN-LINE:|35-getter|2|35-postInit
 // write post-init user code here
}//GEN-BEGIN:|35-getter|3|
return image2;
}
//</editor-fold>//GEN-END:|35-getter|3|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: image1 ">//GEN-BEGIN:|36-getter|0|36-preInit
/**
 * Returns an initiliazed instance of image1 component.
 * @return the initialized component instance
 */
public Image getImage1 () {
if (image1 == null) {//GEN-END:|36-getter|0|36-preInit
 // write pre-init user code here
try {//GEN-BEGIN:|36-getter|1|36-@java.io.IOException
image1 = Image.createImage ("/\u00A1estoy bien!.png");
} catch (java.io.IOException e) {//GEN-END:|36-getter|1|36-@java.io.IOException
e.printStackTrace ();
}//GEN-LINE:|36-getter|2|36-postInit
 // write post-init user code here
}//GEN-BEGIN:|36-getter|3|
return image1;
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
