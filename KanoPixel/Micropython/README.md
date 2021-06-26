Micropython on Kano Pixel

Install esptool in python, I used python 3.9:
 
 pip install esptool

Erase Kano Pixes flash:
  
  esptool.py -p com6 erase_flash

Flash micropython newest stable version:
  
  esptool.py -p com6 write_flash esp32micropython.bin