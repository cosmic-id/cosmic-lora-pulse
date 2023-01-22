#include <lorawan.h>

#define COSMIC_PULSE_NSS    10
#define COSMIC_PULSE_RESET  9
#define COSMIC_PULSE_DIO0   2
#define COSMIC_PULSE_DIO1   6

// ANTARES Credentials
// Activation Mode : ABP
const char *devAddr = "your-antares-device-address";
const char *nwkSKey = "your-antares-network-session-key";
const char *appSKey = "your-antares-application-session-key";

const unsigned long interval = 5000;    // 5 s interval to send message
unsigned long previousMillis = 0;  // will store last time message sent
unsigned int counter = 0;     // message counter

char myStr[50];
byte outStr[255];
byte recvStatus = 0;
int port, channel, freq;
bool newmessage = false;

// Declare the LoRa Chip Pin Interfacing
const sRFM_pins RFM_pins = {
  .CS = COSMIC_PULSE_NSS,
  .RST = COSMIC_PULSE_RESET,
  .DIO0 = COSMIC_PULSE_DIO0,
  .DIO1 = COSMIC_PULSE_DIO1,
};

void setup()
{
  // Initiate Serial Comm 
  // !! MUST BE AT 9600 !!
  Serial.begin(9600);

  // Initiate LoRa Chip
  if (!lora.init()) {
    Serial.println("RFM95 not detected");
    delay(500);
    return;
  }

  // Set LoRaWAN Class 
  // Option : CLASS_A or CLASS_C
  lora.setDeviceClass(CLASS_C);

  // Set Data Rate
  lora.setDataRate(SF12BW125);

  // Set FramePort Tx
  lora.setFramePortTx(5);

  // set channel to random
  lora.setChannel(MULTI);

  // Set TxPower to 15 dBi (max)
  lora.setTxPower(15);

  // Initiate the ABP Credential and DevAddress of LoRaWAN Service Provider (ANTARES)
  lora.setNwkSKey(nwkSKey);
  lora.setAppSKey(appSKey);
  lora.setDevAddr(devAddr);
}
 
void loop() {
  // Check Interval Overflow
  if (millis() - previousMillis > interval) {
    previousMillis = millis(); 

    // Consolidate Data to Array of Char (myStr)
    sprintf(myStr, "ANTARES Counter-%d", counter++);
    Serial.println(myStr);

    // Send data to the LoRaWAN Service Provider (ANTARES)
    lora.sendUplink(myStr, strlen(myStr), 0);  

    lora.update();
  }
}
