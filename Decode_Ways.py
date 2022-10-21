 def numDecodings(self, s: str) -> int:       

        h= { len(s) : 1}

        print(h,"1st")

        

        for i in range(len(s)-1, -1, -1):

            if s[i] == "0":

                h[i] = 0

                print(h,"2nd")

            else:

                h[i] = h[i+1]

                print(h,"3rd")

                

            if ( i+1<len(s) and 

                 (s[i] == "1" or

                  s[i] == "2" and 

                  s[i+1] in "0123456")

               ) :

                h[i] += h[i+2]

                print(h,"4th")

        return h[0]

    

    
