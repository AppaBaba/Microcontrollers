Micropython on Kano Pixel

A. Install esptool in python, I used python 3.9:

1. pip install esptool

B. Erase Kano Pixes flash:

1. esptool.py -p com6 erase_flash

C. Flash micropython newest stable version:

1. esptool.py -p com6 write_flash esp32micropython.bin