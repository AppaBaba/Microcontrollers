;
; Atmega328pAblink.asm
;
; Created: 7/17/2019 10:34:19 AM
; Author : Appa
;


main:
  sbi 0x04, 5       ; PORTB5 output
MainLoop:            ; main loop begin
  sbi 0x05, 5       ; PORTB5 high
  call OneSecDelay  ; delay 1s
  cbi 0x05, 5       ; 5 PORTB5 low
  call OneSecDelay  ; delay 1s
  rjmp  MainLoop        ; main loop

OneSecDelay:        ; One Second delay subroutine
                    ; setup regs for counters
  ldi r18, 0xFF     ; 255
  ldi r24, 0xD3     ; 211
  ldi r25, 0x30     ; 48
TimerLoop:
  subi  r18, 0x01   ; 1
  sbci  r24, 0x00   ; 0
  sbci  r25, 0x00   ; 0
  brne  TimerLoop
  ret
