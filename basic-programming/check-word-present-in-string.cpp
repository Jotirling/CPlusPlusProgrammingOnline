#include <iostream>
using namespace std;

long findLength(const char *search_text)
{
    long size = 0;

    while (*search_text)
    {
        size += 1;
        search_text += 1;
    }
    return size;
}

int main()
{
    char text[] = "hello as   my \n name is asd there is some  other string behind it asdf";
    char search_text[] = "asdf";
    int pos_search = 0;

    for (int pos_text = 0; pos_text < findLength(text); ++pos_text)
    {
        if (text[pos_text] == search_text[pos_search])
        {

            ++pos_search;
            cout << pos_search << " - " << text[pos_text] << " ";
            if (pos_search == findLength(search_text))
            {
                // match
                cout << "\nmatch from " << pos_text - pos_search << " to " << pos_text << endl;
                return 0;
            }
        }
        else
        {
            if (pos_search)
                cout << endl;
            pos_search = 0;
        }
    }

    // no match
    printf("no match\n");
    return 0;
}