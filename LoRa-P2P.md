# LoRa Point to Point

## Topology

![LoRa Point to Point](assets/point-to-point.png "LoRa Point-to-Point")

## Requirements

* 2x [Cosmic LoRa Pulse](https://www.tokopedia.com/cosmic-iot/lora-arduino-development-board-915-mhz-915mhz-antenna-lora-pulse-v1)
* 2x Micro USB Type B Cable
* [Arduino IDE](https://www.arduino.cc/en/software)

## Source Codes

* [Transmitter](examples/LoRa_P2P_Transmitter/LoRa_P2P_Transmitter.ino)
* [Receiver](examples/LoRa_P2P_Receiver/LoRa_P2P_Receiver.ino)

## Step by Step

1. Plug the Cosmic LoRa Pulse boards to your Laptop.
2. COM Port should be activated. (If not? Install [Pulse V3 serial driver](https://learn.sparkfun.com/tutorials/how-to-install-ch340-drivers/all) or [Pulse V2 V1 serial driver](https://www.dnatechindia.com/cp-2102-driver-download-installation.html)).
3. Pick the Board in Arduino IDE as [this steps](README.md#upload-and-examples).
4. Setup Transmitter
   * Load [Transmitter code](examples/LoRa_P2P_Transmitter/LoRa_P2P_Transmitter.ino) to Arduino IDE.
   * Click Verify then Click Upload to Board.
   * Open Serial Monitor of Arduino IDE. Set the Baud Rate as stated in Serial.begin of the transmitter code. Some debug info should be appeared stated it transmits some data.
5. Setup Receiver
   * Load [Receiver code](examples/LoRa_P2P_Receiver/LoRa_P2P_Receiver.ino) to Arduino IDE.
   * Click Verify then Click Upload to Board.
   * Open Serial Monitor of Arduino IDE. Set the Baud Rate as stated in Serial.begin of the receiver code. Some debug info should be appeared stated it recieves some data.
6. YEEAAYY Congrattzz!! You are sending LoRa Point-to-Point.
