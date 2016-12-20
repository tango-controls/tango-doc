import javax.swing.JTable;
import fr.esrf.tangoatk.core.INumberSpectrum;
import fr.esrf.tangaotk.core.AttributeList;
import fr.esrf.tangaotk.widget.attribute.NumberImageJTableAdapter;

// get the attribute, this time a INumberSpectrum

INumberSpectrum attribute = (INumberSpectrum)attributes.add("eas/test-api/1/Double_spec_attr");

// Create the adapter. Note that a numeric spectrum is a special case of a
// numeric image, so we can use the NumberImageJTableAdapter.

NumberImageJTableAdapter adapter = new NumberImageJTableAdapter();

// Create the table which we'll be using as a viewer.

JTable table = new JTable();

// Connect the lot.

adapter.setViewer(table);
adapter.setModel(attribute);
