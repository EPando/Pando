/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package menu;

import javax.microedition.midlet.*;
import javax.microedition.lcdui.*;

/**
 * @author bLacko
 */
public class VisualMIDlet extends MIDlet {
    
    private boolean midletPaused = false;

//<editor-fold defaultstate="collapsed" desc=" Generated Fields ">//GEN-BEGIN:|fields|0|
private List list;
private Form form;
private TextField textField;
private TextField textField1;
private TextField textField2;
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
switchDisplayable (null, getList ());//GEN-LINE:|3-startMIDlet|1|3-postAction
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
if (displayable == list) {//GEN-BEGIN:|7-commandAction|1|16-preAction
if (command == List.SELECT_COMMAND) {//GEN-END:|7-commandAction|1|16-preAction
 // write pre-action user code here
listAction ();//GEN-LINE:|7-commandAction|2|16-postAction
 // write post-action user code here
}//GEN-BEGIN:|7-commandAction|3|7-postCommandAction
}//GEN-END:|7-commandAction|3|7-postCommandAction
 // write post-action user code here
}//GEN-BEGIN:|7-commandAction|4|
//</editor-fold>//GEN-END:|7-commandAction|4|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: list ">//GEN-BEGIN:|14-getter|0|14-preInit
/**
 * Returns an initiliazed instance of list component.
 * @return the initialized component instance
 */
public List getList () {
if (list == null) {//GEN-END:|14-getter|0|14-preInit
 // write pre-init user code here
list = new List ("Menu Principio", Choice.IMPLICIT);//GEN-BEGIN:|14-getter|1|14-postInit
list.append ("Suma", null);
list.append ("Resta", null);
list.append ("Multiplica", null);
list.append ("Divide", null);
list.append ("Exit", null);
list.setCommandListener (this);
list.setSelectedFlags (new boolean[] { false, false, false, false, false });//GEN-END:|14-getter|1|14-postInit
 // write post-init user code here
}//GEN-BEGIN:|14-getter|2|
return list;
}
//</editor-fold>//GEN-END:|14-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Method: listAction ">//GEN-BEGIN:|14-action|0|14-preAction
/**
 * Performs an action assigned to the selected list element in the list component.
 */
public void listAction () {//GEN-END:|14-action|0|14-preAction
 // enter pre-action user code here
String __selectedString = getList ().getString (getList ().getSelectedIndex ());//GEN-BEGIN:|14-action|1|18-preAction
if (__selectedString != null) {
if (__selectedString.equals ("Suma")) {//GEN-END:|14-action|1|18-preAction
 // write pre-action user code here
//GEN-LINE:|14-action|2|18-postAction
 // write post-action user code here
} else if (__selectedString.equals ("Resta")) {//GEN-LINE:|14-action|3|19-preAction
 // write pre-action user code here
//GEN-LINE:|14-action|4|19-postAction
 // write post-action user code here
} else if (__selectedString.equals ("Multiplica")) {//GEN-LINE:|14-action|5|20-preAction
 // write pre-action user code here
//GEN-LINE:|14-action|6|20-postAction
 // write post-action user code here
} else if (__selectedString.equals ("Divide")) {//GEN-LINE:|14-action|7|21-preAction
 // write pre-action user code here
//GEN-LINE:|14-action|8|21-postAction
 // write post-action user code here
} else if (__selectedString.equals ("Exit")) {//GEN-LINE:|14-action|9|22-preAction
 // write pre-action user code here
exitMIDlet ();//GEN-LINE:|14-action|10|22-postAction
 // write post-action user code here
}//GEN-BEGIN:|14-action|11|14-postAction
}//GEN-END:|14-action|11|14-postAction
 // enter post-action user code here
}//GEN-BEGIN:|14-action|12|
//</editor-fold>//GEN-END:|14-action|12|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: form ">//GEN-BEGIN:|26-getter|0|26-preInit
/**
 * Returns an initiliazed instance of form component.
 * @return the initialized component instance
 */
public Form getForm () {
if (form == null) {//GEN-END:|26-getter|0|26-preInit
 // write pre-init user code here
form = new Form ("form", new Item[] { getTextField (), getTextField1 (), getTextField2 () });//GEN-LINE:|26-getter|1|26-postInit
 // write post-init user code here
}//GEN-BEGIN:|26-getter|2|
return form;
}
//</editor-fold>//GEN-END:|26-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: textField ">//GEN-BEGIN:|29-getter|0|29-preInit
/**
 * Returns an initiliazed instance of textField component.
 * @return the initialized component instance
 */
public TextField getTextField () {
if (textField == null) {//GEN-END:|29-getter|0|29-preInit
 // write pre-init user code here
textField = new TextField ("Introduce el N\u00B0", null, 32, TextField.ANY);//GEN-LINE:|29-getter|1|29-postInit
 // write post-init user code here
}//GEN-BEGIN:|29-getter|2|
return textField;
}
//</editor-fold>//GEN-END:|29-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: textField1 ">//GEN-BEGIN:|30-getter|0|30-preInit
/**
 * Returns an initiliazed instance of textField1 component.
 * @return the initialized component instance
 */
public TextField getTextField1 () {
if (textField1 == null) {//GEN-END:|30-getter|0|30-preInit
 // write pre-init user code here
textField1 = new TextField ("Introduce Otro:", null, 32, TextField.ANY);//GEN-LINE:|30-getter|1|30-postInit
 // write post-init user code here
}//GEN-BEGIN:|30-getter|2|
return textField1;
}
//</editor-fold>//GEN-END:|30-getter|2|

//<editor-fold defaultstate="collapsed" desc=" Generated Getter: textField2 ">//GEN-BEGIN:|31-getter|0|31-preInit
/**
 * Returns an initiliazed instance of textField2 component.
 * @return the initialized component instance
 */
public TextField getTextField2 () {
if (textField2 == null) {//GEN-END:|31-getter|0|31-preInit
 // write pre-init user code here
textField2 = new TextField ("textField2", null, 32, TextField.ANY);//GEN-LINE:|31-getter|1|31-postInit
 // write post-init user code here
}//GEN-BEGIN:|31-getter|2|
return textField2;
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
