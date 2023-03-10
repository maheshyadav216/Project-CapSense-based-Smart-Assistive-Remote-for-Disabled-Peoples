-- ======================================================================
-- CE224821_PSoC4_Capsense_Touchpad_Gestures_CSD01.ctl generated from CE224821_PSoC4_Capsense_Touchpad_Gestures_CSD01
-- 02/18/2023 at 18:02
-- This file is auto generated. ANY EDITS YOU MAKE MAY BE LOST WHEN THIS FILE IS REGENERATED!!!
-- ======================================================================

-- TopDesign
-- =============================================================================
-- The following directives assign pins to the locations specific for the
-- PSoC 4100S device.
-- =============================================================================

-- === CapSense ===
attribute port_location of \CapSense:Cmod(0)\ : label is "PORT(4,1)";
attribute port_location of \CapSense:Sns(0)\ : label is "PORT(1,4)";
attribute port_location of \CapSense:Sns(1)\ : label is "PORT(1,3)";
attribute port_location of \CapSense:Sns(2)\ : label is "PORT(1,2)";
attribute port_location of \CapSense:Sns(3)\ : label is "PORT(1,1)";
attribute port_location of \CapSense:Sns(4)\ : label is "PORT(1,0)";
attribute port_location of \CapSense:Sns(5)\ : label is "PORT(1,5)";
attribute port_location of \CapSense:Sns(6)\ : label is "PORT(0,0)";
attribute port_location of \CapSense:Sns(7)\ : label is "PORT(0,6)";
attribute port_location of \CapSense:Sns(8)\ : label is "PORT(0,3)";
attribute port_location of \CapSense:Sns(9)\ : label is "PORT(2,3)";
attribute port_location of \CapSense:Sns(10)\ : label is "PORT(2,2)";
attribute port_location of \CapSense:Sns(11)\ : label is "PORT(2,1)";
attribute port_location of \CapSense:Sns(12)\ : label is "PORT(2,0)";
attribute port_location of \CapSense:Sns(13)\ : label is "PORT(1,7)";

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
