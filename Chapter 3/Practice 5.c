/*
========================
   ASCII TABLE (0-127)
========================

Dec  Hex  Char   Description
--------------------------------
0    00   NUL    Null
1    01   SOH    Start of Heading
2    02   STX    Start of Text
3    03   ETX    End of Text
4    04   EOT    End of Transmission
5    05   ENQ    Enquiry
6    06   ACK    Acknowledge
7    07   BEL    Bell
8    08   BS     Backspace
9    09   TAB    Horizontal Tab
10   0A   LF     Line Feed
11   0B   VT     Vertical Tab
12   0C   FF     Form Feed
13   0D   CR     Carriage Return
14   0E   SO     Shift Out
15   0F   SI     Shift In
16   10   DLE    Data Link Escape
17   11   DC1    Device Control 1
18   12   DC2    Device Control 2
19   13   DC3    Device Control 3
20   14   DC4    Device Control 4
21   15   NAK    Negative Acknowledge
22   16   SYN    Synchronous Idle
23   17   ETB    End of Trans. Block
24   18   CAN    Cancel
25   19   EM     End of Medium
26   1A   SUB    Substitute
27   1B   ESC    Escape
28   1C   FS     File Separator
29   1D   GS     Group Separator
30   1E   RS     Record Separator
31   1F   US     Unit Separator
32   20   ' '    Space
33   21   !      Exclamation mark
34   22   "      Double quote
35   23   #      Hash
36   24   $      Dollar
37   25   %      Percent
38   26   &      Ampersand
39   27   '      Single quote
40   28   (      Left parenthesis
41   29   )      Right parenthesis
42   2A   *      Asterisk
43   2B   +      Plus
44   2C   ,      Comma
45   2D   -      Minus
46   2E   .      Period
47   2F   /      Slash
48   30   0      Digit 0
49   31   1      Digit 1
50   32   2      Digit 2
51   33   3      Digit 3
52   34   4      Digit 4
53   35   5      Digit 5
54   36   6      Digit 6
55   37   7      Digit 7
56   38   8      Digit 8
57   39   9      Digit 9
58   3A   :      Colon
59   3B   ;      Semicolon
60   3C   <      Less than
61   3D   =      Equal
62   3E   >      Greater than
63   3F   ?      Question mark
64   40   @      At sign
65   41   A      Uppercase A
66   42   B      Uppercase B
67   43   C      Uppercase C
68   44   D      Uppercase D
69   45   E      Uppercase E
70   46   F      Uppercase F
71   47   G      Uppercase G
72   48   H      Uppercase H
73   49   I      Uppercase I
74   4A   J      Uppercase J
75   4B   K      Uppercase K
76   4C   L      Uppercase L
77   4D   M      Uppercase M
78   4E   N      Uppercase N
79   4F   O      Uppercase O
80   50   P      Uppercase P
81   51   Q      Uppercase Q
82   52   R      Uppercase R
83   53   S      Uppercase S
84   54   T      Uppercase T
85   55   U      Uppercase U
86   56   V      Uppercase V
87   57   W      Uppercase W
88   58   X      Uppercase X
89   59   Y      Uppercase Y
90   5A   Z      Uppercase Z
91   5B   [      Left bracket
92   5C   \      Backslash
93   5D   ]      Right bracket
94   5E   ^      Caret
95   5F   _      Underscore
96   60   `      Grave accent
97   61   a      Lowercase a
98   62   b      Lowercase b
99   63   c      Lowercase c
100  64   d      Lowercase d
101  65   e      Lowercase e
102  66   f      Lowercase f
103  67   g      Lowercase g
104  68   h      Lowercase h
105  69   i      Lowercase i
106  6A   j      Lowercase j
107  6B   k      Lowercase k
108  6C   l      Lowercase l
109  6D   m      Lowercase m
110  6E   n      Lowercase n
111  6F   o      Lowercase o
112  70   p      Lowercase p
113  71   q      Lowercase q
114  72   r      Lowercase r
115  73   s      Lowercase s
116  74   t      Lowercase t
117  75   u      Lowercase u
118  76   v      Lowercase v
119  77   w      Lowercase w
120  78   x      Lowercase x
121  79   y      Lowercase y
122  7A   z      Lowercase z
123  7B   {      Left brace
124  7C   |      Vertical bar
125  7D   }      Right brace
126  7E   ~      Tilde
127  7F   DEL    Delete
--------------------------------
*/
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character :");
    scanf("%c", &ch);
    if (ch >= 65 && ch <= 90)
    {
        printf("The character is upper case");
    }
    else
    {
        printf("The character is lower case");
    }
    return 0;
}