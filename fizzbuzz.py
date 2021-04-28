multiples = (3,5)   #list of multiples to check through
output = ("Fizz","Buzz")    #words that will be added; correlates with multiples list
endNum = 100        #the end of the range
for i in range(1,endNum + 1):   #goes from range 1 to endNum; +1 added since endpoint is excluded
    notDivis = True #checks divisibility
    for m in range(len(multiples)): #for each number in the multiples list
        if i % multiples[m] == 0:   #if i divided into the multiple evenly, then print the word that
            print(output[m],end="") #correlates with the multiple (ex: 3 correlates to 'Fizz')
            notDivis = False        #if any of the multiples work, set notDivisible to false
    if notDivis:    #if the number did not divide evenly into any of the multiples, print the number
        print(i,end="")
    print() #new line
        
