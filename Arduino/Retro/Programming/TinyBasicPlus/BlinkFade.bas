10 FOR G = 1 TO 10
15 DWRITE 2, HIGH
20 DELAY 250
25 DWRITE 2, LOW
30 DELAY 250
40 NEXT G
45 FOR N = 0 TO 10
50 FOR R = 0 TO 255
55 AWRITE 2, R
60 DELAY 5
65 NEXT R
70 FOR R = 255 TO 0 -1
75 AWRITE 3, R
80 DELAY 5
85 NEXT R
90 NEXT N