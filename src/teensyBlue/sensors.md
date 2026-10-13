## Sensor suite for Blue Teensy 4.1

[FigJam](https://www.figma.com/board/tIFPh19PvOQLEmvQKjVEdm/DAQ-Overview?node-id=0-1&t=JV66XFQa9SnZM5Ev-1)

### Built in:
- SD card reader
- Real Time Clock

### Within Enclosure:
- Start/Stop pushbutton switch
  - Analog
  - Pin: (positive logic)
  
    - >BUTTON_START_STOP
- Status LED(s)
- > LED_STATUS
- GPS (lowest priority)
  - UART
  - Connects to antenna outside
- Logic shifters for suspention pots
- Current converter for brake pressure

### Outside Enclosure:
From highest to lowest priority:
- Left/Right front suspention potentiometers (with logic shifters)
  - Analog
  - Pins:
    - > SUSPOT_LF, SUSPOT_RF
- Strain gauges
  - Analog
  - Pins: 
    - > STRAIN_1, STRAIN_2, ...
- Accelerator potentiometer
  - Analog
  - Pin:
    - > ACCELPOT
- Front/Rear brake pressure sensors (with current converter)
  - Analog
  - Pins:
    - >BPS_F, BPS_R
- Steering potentiometer
  - Analog
  - Pins:
    - > STEERPOT
