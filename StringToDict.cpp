/*
Programmer: Edgard Luigi Sanchez
Program: StringToDict.cpp
Desc:   This program can be compiled as a library to be used to perform the following:
        Given a string "radar" we turn this string into a dictionary as such,
        
        {   a: [1,2],
            d: [2],
            r: [0,4] }

Date: Sunday, Sept 16, 2018
*/

#include "StringToDict.h"

namespace dictionary
{
    std::unordered_map<char, std::vector<int> > Convert(const char * c_ptr)
    {

        const char* ptr = c_ptr;
        int i = 0;
        std::unordered_map<char, std::vector<int> >::iterator finder;

        //place each character in its designated mapping
        std::unordered_map<char, std::vector<int> > letter_index_map;
        
        //returns empty container
        if(ptr == nullptr)
            return letter_index_map;
        
        
        while(*ptr != '\0')
        {
            //if letter has not been registered, then register else insert new index to its vector value
            finder = letter_index_map.find(*ptr); // O(1)
            
            std::vector<int> vec;
            vec.push_back(i);

            //if not in the end then the letter has been registered
            if(finder != letter_index_map.end())
                (finder->second).push_back(i);
            else //not registered
                letter_index_map.insert( make_pair(*ptr, vec) );
            i++; 
            ptr++;
        }
        return letter_index_map;
    }
}
