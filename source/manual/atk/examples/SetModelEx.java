// this is the setModel of a the AttributeStateViewer

public void setModel(IAttribute m)
{
     model = m;
     setState(m.getState());

// this is where the viewer connects itself to the 
// model. After this the viewer will (hopefully) receive 
// events through its stateChanged() method

     m.addStateListener(this);
}

// Each time the model of this viewer decides it is time, it 
// calls the stateChange method of all its registered listeners
// with an AttributeStateEvent object which contains the 
// state of the attribute.

public void stateChange(AttributeStateEvent e)
{
     setState(e.getState());
}
