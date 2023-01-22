# Cosmic LoRa Pulse

## Pendahuluan

Cosmic LoRa Pulse adalah Development Board Entry-Level dengan form factor terkecil dari Cosmic.id yang memudahkan kamu dalam pengembangan aplikasi IoT. Cosmic LoRa Pulse memiliki form factor atau dimensi terkecil dari line-up produk development board cosmic, sehingga kamu bisa menyisipkan alat ini di tempat-tempat sempit. Cosmic LoRa Ray dibekali dengan mikrokontroller hemat daya Pro Mini 3.3V 8Mhz seperti [Cosmic LoRa Ray](https://github.com/farizalemuda/cosmic-lora-ray). Tegangan kerja 3.3V memungkinkan perangkat ini disupply dari solar panel ataupun rechargeable LiPo battery. Dev Board ini telah dibekali dengan modul komunikasi LoRa berbasis Chip RFM95W yang bekerja di Frekuensi 915. Namun kamu ga usah khawatir karena chip ini bisa diconfig pada range 902-928MHz. Dev Board ini juga sudah dilengkapi dengan on-board charger LiPo via USB.

> "Pulse" memiliki arti denyut yang berasal dari "ujung" alam semesta. Seluruh product line Cosmic berbasis nama-nama yang ada di alam semesta.

[Documentation in English](https://github.com/farizalemuda/cosmic-lora-pulse)

## Spesifikasi Teknis

Sedang dikerjakan

## Dokumentasi

### Tata Letak Pin

> Klik gambar untuk gambar yang lebih detail

[![Cosmic LoRa Pulse Pinout](assets/pin-diagram.webp)](assets/pin-diagram.jpg "Cosmic LoRa Pulse Pinout")

### Interkoneksi Board dan LoRa(WAN) Chip

| Cosmic LoRa Pulse | RFM95W |  
|-------------------|------- |
| D11               | MOSI   |
| D12               | MISO   |
| D13               | SCK    |
| D10               | NSS    |
| D9                | RST    |
| D2                | DIO0   |
| D6                | DIO1   |

### Examples

#### LoRa Point-to-Point

* [Receiver](examples/LoRa_P2P_Receiver/LoRa_P2P_Receiver.ino)
* [Transmitter](examples/LoRa_P2P_Transmitter/LoRa_P2P_Transmitter.ino)

#### LoRaWAN

* [ANTARES](examples/LoRaWAN_ANTARES/LoRaWAN_ANTARES.ino)

## Regulasi

[Peraturan Direktorat Jendral (Dirjen) Sumber Daya Dan Perangkat Pos Dan Informatika (SDPPI) No. 3 Tahun 2019](https://web.kominfo.go.id/sites/default/files/users/3997/PERDIRJEN%20SDPPI%20NO%203%20TAHUN%202019%20LPWA.pdf) telah mengatur terkait Frekuensi LoRa di Indonesia pada rentang frekuensi 920-923MHz.

## FAQ

Sedang dikerjakan
