#include "dna.h"
#include<iostream>
#include<string>

using std::string;  using std::cout;

/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const string&dna)
{
    double gc_count =0.0;


    for (int i=0; i < dna.length();i++)
    {
        if(dna[i] == 'C' || dna[i] == 'G')
        {
            gc_count++;
        }
        
    }

return gc_count/dna.length();
}

/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string dna)
{
    string rev_dna = "";
    for(int i= dna.length() - 1; i >= 0; i--)
    {
        rev_dna += dna[i];
    }
    return rev_dna;
}



/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
string get_dna_complement(string dna)
{
    string reverse_dna = get_reverse_string(dna);
    for(int i=0; i< reverse_dna.length(); i++)
    {
        if(reverse_dna[i] == 'A')
        {
            reverse_dna[i] = 'T';
        }
        else if(reverse_dna[i] == 'T')
        {
            reverse_dna[i] = 'A';
        }
         else if(reverse_dna[i] == 'C')
        {
            reverse_dna[i] = 'G';
        }
         else if(reverse_dna[i] == 'G')
        {
            reverse_dna[i] = 'C';
        }
    }
    return reverse_dna;
}
