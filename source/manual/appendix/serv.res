#---------------------------------------------------------
# SERVER TimeoutTest/manu, TimeoutTest device declaration
#---------------------------------------------------------

TimeoutTest/manu/DEVICE/TimeoutTest: "et/to/01",\ 
                                     "et/to/02",\ 
                                     "et/to/03"


# --- et/to/01 properties

et/to/01->StringProp: Property
et/to/01->ArrayProp: 1,\ 
                     2,\ 
                     3
et/to/01->attr_min_poll_period: TheAttr,\ 
                                1000
et/to/01->AnotherStringProp: "A long string"
et/to/01->ArrayStringProp: "the first prop",\ 
                           "the second prop"

# --- et/to/01 attribute properties

et/to/01/TheAttr->display_unit: 1.0
et/to/01/TheAttr->event_period: 1000
et/to/01/TheAttr->format: %4d
et/to/01/TheAttr->min_alarm: -2.0
et/to/01/TheAttr->min_value: -5.0
et/to/01/TheAttr->standard_unit: 1.0
et/to/01/TheAttr->__value: 111
et/to/01/BooAttr->event_period: 1000
et/to/01/TestAttr->display_unit: 1.0
et/to/01/TestAttr->event_period: 1000
et/to/01/TestAttr->format: %4d
et/to/01/TestAttr->standard_unit: 1.0
et/to/01/DbAttr->abs_change: 1.1
et/to/01/DbAttr->event_period: 1000
