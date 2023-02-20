# THIS FILE IS AUTOMATICALLY GENERATED
# Project: C:\Users\inspiron\Documents\PSoC Creator\Projects\CE224821_PSoC4_Capsense_Touchpad_Gestures_CSD01\CE224821_PSoC4_Capsense_Touchpad_Gestures_CSD01.cydsn\CE224821_PSoC4_Capsense_Touchpad_Gestures_CSD01.cyprj
# Date: Sat, 18 Feb 2023 12:32:20 GMT
#set_units -time ns
create_clock -name {CapSense_ModClk(FFB)} -period 5312.5 -waveform {0 2656.25} [list [get_pins {ClockBlock/ff_div_3}]]
create_clock -name {EZI2C_SCBCLK(FFB)} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/ff_div_0}]]
create_clock -name {Clock_1(FFB)} -period 83.333333333333329 -waveform {0 41.6666666666667} [list [get_pins {ClockBlock/ff_div_4}] [get_pins {ClockBlock/ff_div_5}]]
create_clock -name {CyILO} -period 25000 -waveform {0 12500} [list [get_pins {ClockBlock/ilo}]]
create_clock -name {CyLFClk} -period 25000 -waveform {0 12500} [list [get_pins {ClockBlock/lfclk}]]
create_clock -name {CyIMO} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyHFClk} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/hfclk}]]
create_clock -name {CySysClk} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/sysclk}]]
create_generated_clock -name {CapSense_ModClk} -source [get_pins {ClockBlock/hfclk}] -edges {1 255 511} [list]
create_generated_clock -name {EZI2C_SCBCLK} -source [get_pins {ClockBlock/hfclk}] -edges {1 3 5} [list]
create_generated_clock -name {Clock_1} -source [get_pins {ClockBlock/hfclk}] -edges {1 5 9} [list]


# Component constraints for C:\Users\inspiron\Documents\PSoC Creator\Projects\CE224821_PSoC4_Capsense_Touchpad_Gestures_CSD01\CE224821_PSoC4_Capsense_Touchpad_Gestures_CSD01.cydsn\TopDesign\TopDesign.cysch
# Project: C:\Users\inspiron\Documents\PSoC Creator\Projects\CE224821_PSoC4_Capsense_Touchpad_Gestures_CSD01\CE224821_PSoC4_Capsense_Touchpad_Gestures_CSD01.cydsn\CE224821_PSoC4_Capsense_Touchpad_Gestures_CSD01.cyprj
# Date: Sat, 18 Feb 2023 12:32:18 GMT