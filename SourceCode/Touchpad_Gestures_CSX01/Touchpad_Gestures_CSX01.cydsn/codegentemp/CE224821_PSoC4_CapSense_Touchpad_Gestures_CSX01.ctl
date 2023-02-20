-- ======================================================================
-- CE224821_PSoC4_CapSense_Touchpad_Gestures_CSX01.ctl generated from CE224821_PSoC4_CapSense_Touchpad_Gestures_CSX01
-- 02/18/2023 at 18:12
-- This file is auto generated. ANY EDITS YOU MAKE MAY BE LOST WHEN THIS FILE IS REGENERATED!!!
-- ======================================================================

-- TopDesign
-- =============================================================================
-- The following directives assign pins to the locations specific for the
-- PSoC 4100S device.
-- =============================================================================

-- === CapSense ===
attribute port_location of \CapSense:CintA(0)\ : label is "PORT(4,2)";
attribute port_location of \CapSense:CintB(0)\ : label is "PORT(4,3)";
attribute port_location of \CapSense:Rx(0)\ : label is "PORT(1,4)";
attribute port_location of \CapSense:Rx(1)\ : label is "PORT(1,3)";
attribute port_location of \CapSense:Rx(2)\ : label is "PORT(1,2)";
attribute port_location of \CapSense:Rx(3)\ : label is "PORT(1,1)";
attribute port_location of \CapSense:Rx(4)\ : label is "PORT(1,0)";
attribute port_location of \CapSense:Rx(5)\ : label is "PORT(1,5)";
attribute port_location of \CapSense:Rx(6)\ : label is "PORT(0,0)";
attribute port_location of \CapSense:Tx(0)\ : label is "PORT(0,6)";
attribute port_location of \CapSense:Tx(1)\ : label is "PORT(0,3)";
attribute port_location of \CapSense:Tx(2)\ : label is "PORT(2,3)";
attribute port_location of \CapSense:Tx(3)\ : label is "PORT(2,2)";
attribute port_location of \CapSense:Tx(4)\ : label is "PORT(2,1)";
attribute port_location of \CapSense:Tx(5)\ : label is "PORT(2,0)";
attribute port_location of \CapSense:Tx(6)\ : label is "PORT(1,7)";

-- === I2C ===
attribute port_location of \EZI2C:scl(0)\ : label is "PORT(3,0)";
attribute port_location of \EZI2C:sda(0)\ : label is "PORT(3,1)";

-- === LEDs ===
attribute port_location of Blue_LED(0) : label is "PORT(3,6)";
attribute port_location of Green_LED(0) : label is "PORT(2,6)";
attribute port_location of Red_LED(0) : label is "PORT(3,4)"; 
-- PSoC Clock Editor
-- Directives Editor
-- Analog Device Editor
