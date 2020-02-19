;
; MulCom.asm
;
; Multiplication Command
;
; Created: 7/11/2019 6:21:40 AM
; Author : Appa
;


.DEF PLB = R0            ;Product low-byte  
.DEF PHB = R1            ;Product high-byte
.DEF MC  = R16           ;Multiplicand
.DEF ML  = R18           ;Multiplier

     LDI MC,84           ;Load multiplicand into MC(R16)
     LDI ML,5            ;Load multiplier into ML(R18)
     MUL MC,ML           ;Multiply contents of MC and ML
                         ;Product 420 is now in PLB(R0) and PHB(R1)
