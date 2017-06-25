a = raw_input()
p = list(a)

i=0
flag1 = 0
flag2 = 0
while(i<len(p)):
    c = 0
    if (p[i]=='1'):
        while(i<len(p) and p[i]!='0'):
            c=c+1
            i=i+1
    if(c>=7):
        
        flag1 = 1
        break
       
    else:
        i=i+1
            
i=0
while(i<len(p)):
    s = 0
    if (p[i]=='0'):
        while(i<len(p) and p[i]!='1'):
            s=s+1
            i=i+1
    if(s>=7):
        flag2 = 1
        break
        
    else:
        i=i+1

if(flag1==1 or flag2==1):
    print 'YES'
else:
    print 'NO'
            
