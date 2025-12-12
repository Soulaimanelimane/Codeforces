#include <iostream>
#include <string>
#include <cstring> 
#include <stdlib.h>


/* first part 
int main()
{
    std::string str;

    std::getline(std::cin , str, '\0');

    char *token = strtok((char *)str.c_str(), ",") ;

    size_t adds = 0;
    while (token)
    {
        int f = 0;
        int flag= 0;
        char *first = (char *)malloc(42);
        char *second =  (char *)malloc(42);
        if (second == NULL)
            return 120;
        if (strcmp(token , "\n") == 0)
            continue;
        while (token[f] != '-')
        {
                first[f] = token[f];
                f++;
        }
        first[f] = '\0';
        f++;
        strcpy(second, &token[f]);
        size_t fnbr = std::stoull(first); 
        size_t snbr = std::stoull(second);
        while (fnbr <= snbr)
        {
            std::string strnbr = std::to_string(fnbr);
            size_t len = strnbr.length();
            std::string first_p = strnbr.substr(0, ((len/2)));
            std::string sec_p = &strnbr[(len / 2)];
            if (first_p == sec_p)
            {

                adds += fnbr;
            }
            fnbr++;
        }
        token = strtok(NULL, ",");

    }
    std::cout << std::endl << adds << std::endl;
}
*/

int main()
{
    std::string str;

    std::getline(std::cin , str, '\0');

    char *token = strtok((char *)str.c_str(), ",") ;

    size_t adds = 0;
    while (token)
    {
        
        token = strtok(NULL, ",");
    }
    std::cout << std::endl << adds << std::endl;
}