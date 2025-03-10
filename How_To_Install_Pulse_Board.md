# How to Install Cosmic LoRa Pulse Into Arduino IDE

## Cosmic Pulse V3

#### Boards Manager Installation

This installation method requires Arduino IDE version 1.8.0 or greater.
* Open the Arduino IDE.
* Open the **File > Preferences** menu item.
* Enter the following URL in **Additional Boards Manager URLs**:

    ```
    https://mcudude.github.io/MiniCore/package_MCUdude_MiniCore_index.json
    ```

* Open the **Tools > Board > Boards Manager...** menu item.
* Wait for the platform indexes to finish downloading.
* Scroll down until you see the **MiniCore** entry and click on it.
* Click **Install**.
* After installation is complete close the **Boards Manager** window.

#### Manual Installation

Click on the "Download ZIP" button in the upper right corner. Extract the ZIP file, and move the extracted folder to the location "**~/Documents/Arduino/hardware**". Create the "hardware" folder if it doesn't exist.
Open Arduino IDE, and a new category in the boards menu called "MiniCore" will show up.

#### Arduino CLI Installation

Run the following command in a terminal:

```
arduino-cli core install MiniCore:avr --additional-urls https://mcudude.github.io/MiniCore/package_MCUdude_MiniCore_index.json
```

## Cosmic Pulse V2 & V1

It has been defaulty installed in the Arduino IDE as Arduino AVR Boards