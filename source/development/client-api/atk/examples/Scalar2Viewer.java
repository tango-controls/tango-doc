import fr.esrf.tangoatk.core.INumberScalar;
import fr.esrf.tangaotk.core.AttributeList;
import fr.esrf.tangaotk.widget.attribute.NumberScalarViewer;

...
    
// The attribute (and command) list has the feature of returning the last
// attribute that was added to it. Just remember that it is returned as an
// IEntity object, so you need to cast it into a more specific object, like
// INumberScalar, which is the interface which defines a numberic scalar

INumberScalar attribute = (INumberScalar)attributes.add("eas/test-api/1/Att_eas");

// We create a new NumberScalarViewer, since we already knew that we were
// playing with numeric scalars this time.

NumberScalarViewer nsv = new NumberScalarViewer();

// Pay close attention to this line!! This is how it's done! This is how it's
// always done! The setModel method of any viewer takes care of connecting
// the viewer to the attribute (model) it's in charge of displaying.

nsv.setModel(attribute);
