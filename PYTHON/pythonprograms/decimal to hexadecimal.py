# def main():
#     decToHex(int(input("Enter decimal value: ")))
# def decToHex(dec_value):
#     while dec_value > 0:
#         hex_value=dec_value%16
#         dec_value=dec_value//16
#         print(getHexChar(hex_value),end="")
# def getHexChar(dec_digit):
#     if dec_digit < 10:
#         return dec_digit
#     if dec_digit == 10:
#         return "A"
#     if dec_digit == 11:
#         return "B"
#     if dec_digit == 12:
#         return "C"
#     if dec_digit == 13:
#         return "D"
#     if dec_digit == 14:
#         return "E"
#     if dec_digit == 15:
#         return "F"
# main() 

def hexadecimalToDecimal(hexval):
	length = len(hexval)
	base = 1
	dec_val = 0
	for i in range(length - 1, -1, -1):
		if hexval[i] >= '0' and hexval[i] <= '9':
			dec_val += (ord(hexval[i]) - 48) * base
			base = base * 16
		elif hexval[i] >= 'A' and hexval[i] <= 'F':
			dec_val += (ord(hexval[i]) - 55) * base
			base = base * 16
	return dec_val
if __name__ == '__main__':
	hexnum = '9E'
	print(hexadecimalToDecimal(hexnum)) 