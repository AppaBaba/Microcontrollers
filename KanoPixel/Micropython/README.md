Kano Pixel with Micropython
1. Install esptool in python, I used python 3.9
> pip install esptool
2. Erase Kano Pixes flash
> esptool.py -p com6 erase_flash
3. Flash micropython newest stable version
> esptool.py -p com6 write_flash 0x1000 esp32micropython.bin

OR Make it easyer
1. Just use the Kano Pixel Flash Tool