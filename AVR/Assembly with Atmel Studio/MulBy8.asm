;
; MulBy4.asm
;
; Created: 7/11/2019 7:49:00 AM
; Author : Appa
;


.DEF PLB = R0              ;Product low-byte     
.DEF PHB = R1              ;Product high-byte
.DEF MCL = R16             ;multiplicand low-byte
.DEF MCH = R17             ;multiplicand high-byte 

        LDI MCL,LOW(84)    ;Load multiplicand into MCH:MCL
        LDI MCH,HIGH(84)   ;
MUL8:
        MOV PLB,MCL        ;Move MCL(R16) into PLB(R0)
        MOV PHB,MCH        ;Move MCH(R17) into PHB(R1)
        LSL PLB            ;Multiply by 2
        ROL PHB            ;Shift the Carry into PHB(R1)
        LSL PLB            ;Multiply by 2x2=4
        ROL PHB            ;Shift the Carry into PHB(R1)
                           ;Product 336 is now in PLB(R0) and PHB(R1)
