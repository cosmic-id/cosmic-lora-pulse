# LoRaWAN ANTARES

## Topology

On-going

## Requirements

* 1x [Cosmic LoRa Pulse](https://www.tokopedia.com/cosmic-iot/lora-arduino-development-board-915-mhz-915mhz-antenna-lora-pulse-v1)
* 1x Micro USB Type B Cable
* [Arduino IDE](https://www.arduino.cc/en/software)

## Prerequisite

* [Install CH340 Driver](https://sparks.gogo.co.nz/ch340.html)
* Install ANTARES Library
  1. [Download Library](https://antares.id/assets/files/LoRaWAN-Arduino-Library.zip)
  2. Import library : Sketch &#8594; Include Library &#8594; Add .ZIP Library...
  3. Load your downloaded library. Confirm.
* Having an [ANTARES account](https://console.antares.id/register)
* Check [Coverage of ANTARES](https://www.telkomiot.com/coverage) in your testing location

## Source Codes

[LoRaWAN ANTARES](examples/LoRaWAN_ANTARES/LoRaWAN_ANTARES.ino)

## Step by Step

1. Plug the Cosmic LoRa Ray boards to your Laptop.
2. COM Port should be activated. (If not activated? [Install CH340 driver](https://sparks.gogo.co.nz/ch340.html)).
3. Setup in Arduino IDE :
   * Pick the appropriate board : Tools &#8594; Board &#8594; Arduino Pro or Pro Mini
   * Pick the appropriate processor : Tools &#8594; Board &#8594; ATMega 328P (3.3V 8 MHz)
4. Add a device and set lora for it in your ANTARES account.
5. Load [LoRaWAN ANTARES code](examples/LoRaWAN_ANTARES/LoRaWAN_ANTARES.ino) to Arduino IDE.
6. Modify the code using your access key & registered device address.
7. Click Verify then Click Upload to Board. (Error compile? [Install ANTARES Library](#prerequisite))
8. Open Serial Monitor of Arduino IDE. Set the Baud Rate as stated in Serial.begin of the LoRaWAN ANTARES code. Some debug info should be appeared stated it transmits some data to ANTARES.
9. Check your ANTARES Console. Some data must be shown. YEEAAYY Congrattzz!! You are sending LoRaWAN to ANTARES.
