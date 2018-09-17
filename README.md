# string-to-index-dict 

This program is meant to be compiled as a library to be used to perform the following:
        Given a string "radar" we turn this string into a dictionary as such,
        
        {   a: [1,2],
            d: [2],
            r: [0,4] }
            
To find a letter in a string in constant time, we can use this hash table of letters and indices
