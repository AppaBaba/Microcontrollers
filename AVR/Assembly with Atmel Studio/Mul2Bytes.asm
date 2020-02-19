;
; Mul2Bytes.asm
;
; Created: 7/10/2019 11:36:11 PM
; Author : Appa
;

.DEF  PLB = R0           ;Product low-byte     
.DEF  PHB = R1           ;Procuct high-byte
.DEF  MC  = R16          ;Multiplicand
.DEF  ML  = R18          ;Multiplier
.DEF  CT  = R20          ;Counter

        LDI MC,84        ;Load multiplicand into MCand(R16)
        LDI ML,5         ;Load multiplier into MLier(R18)
MUL8x8:
        LDI CT,8         ;Load Count(R20) with 8
        CLR PHB          ;Clear high-byte of PHB(R1)
        MOV PLB,ML       ;Move MLier into low-byte of PLB(R0)
        LSR PLB          ;Shift low-bit of multiplier into Carry
LOOP:   BRCC SKIP        ;If carry is zero then skip addition 
        ADD PHB,MC       ;Add MCand to PHB(R1)
SKIP:   ROR PHB          ;Shift low-bit of high-byte 
        ROR PLB          ;of answer into low-byte
        DEC CT           ;Decrement Count(R20)
        BRNE LOOP        ;Check if done all eight bits
                         ;Product 420 left in PLB(R0) and PHB(R1)
