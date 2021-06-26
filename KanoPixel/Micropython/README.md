Kano Pixel with Micropython

1. Install esptool in python, I used python 3.9:
a. pip install esptool
2. Erase Kano Pixes flash:
a. esptool.py -p com6 erase_flash
3. Flash micropython newest stable version:
a. esptool.py -p com6 write_flash esp32micropython.bin