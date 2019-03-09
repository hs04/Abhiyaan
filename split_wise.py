print("Welcome to our fake SPLITWIZE!!~~")

print("How many participants?")
n = int(input())

direct = {}
name = []
owe = []
debt = []
print("Enter the details of participants : ")
for i in range(n):
      ii = str(i+1)
      nam = input("Name of member "+ii+" : ")
      name.append(nam)
      print("How much does "+nam+" owe others?")
      oo = int(input())
      debt.append(oo)
      print("How much do others owe "+nam+"?")
      ooo = int(input())
      owe.append(oo)
      tot = ooo-oo
      direct[nam]=tot

pos = {}
neg = {}
bal = 0

for (i,j) in direct.items():
      bal = bal + j
      if j>0:
           pos[i] = j
      else:
            neg[i] = j

flag = 1
if bal!=0:
      print("Please note that total balance should be zero!!")
      flag=0
      
for (i,j) in pos.items():
      cont = 1
      while(cont==1 and flag==1):
            for (x,y) in neg.items():
                  tr = min(j,-y)
                  j = j - tr
                  y = y + tr
                  print(x+" should give "+i+" " +str(tr)+" rupees.")
                  if(j==0):
                        cont = 0
            



print(pos)
print(neg)


           





           
