def display(string):
    m=''
    for i in range(0,len(string)):
        if string[i].isupper():
            m=m+string[i].lower()
        elif string[i].islower():
            m=m+string[i].upper()
        else:
            if i%2==0:
                m=m+string[i-1]
            else:
                m=m+'#'
    print(m)
display('Fun@Python3.0')