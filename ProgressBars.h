#ifndef _PROGRESSBAR_
#define _PROGRESSBAR_

class ProgressBar
{
    private:
    //variables
    float cap = 10;
    float progress = 0;

    int length = 15; //default length
    int height = 1;  //default height


    public:
    
    // style/customization
    char topBottomLineOpeningChar = '[';
    char topBottomLineClosingChar = ']';
    char middleLineOpeningChar = '|';
    char middleLineClosingChar = '|';

    char filledInBarChar = '#';
    char unfilledInBarChar = '-';

    //constructors
    ProgressBar() {}
    ProgressBar(float capCON) : cap(capCON) {}

    ProgressBar(int lengthCON, int heightCON) : length(lengthCON), height(heightCON) {}
    ProgressBar(int lengthCON, int heightCON, int capCON) : length(lengthCON), height(heightCON), cap(capCON) {}

    //functions
    inline void DisplayBar();
    inline void ClearBar();

    inline void UpdateBarProgress(float progress);

};


#include <iostream>

inline void ProgressBar::DisplayBar()
{

    if (progress <= cap)
    {
        for (int i = 0; i < height; i++)
        {
            std::cout << "\033[A"; //ANSI code to make the terminal cursor move up one space
        }
        for (int i = 0; i < height; i++)
        {
            if (i == 0 || i == height-1)
            {
                std::cout << "\r" << topBottomLineOpeningChar; // \r just brings the terminal cursor back to the start of the line, and thus writes over the old bar.
                float progressPerTick = cap/length;
                int BarLength = progress/progressPerTick;
                for (int i = 0; i < BarLength; i++)
                {
                    std::cout << filledInBarChar;
                }
                for (int i = 0; i < length-BarLength; i++)
                {
                    std::cout << unfilledInBarChar;
                }
                std::cout << topBottomLineClosingChar;
            }
            else
            {                
                std::cout << "\r" << middleLineOpeningChar; // \r just brings the terminal cursor back to the start of the line, and thus writes over the old bar.
                float progressPerTick = cap/length;
                int BarLength = progress/progressPerTick;
                for (int i = 0; i < BarLength; i++)
                {
                    std::cout << filledInBarChar;
                }
                for (int i = 0; i < length-BarLength; i++)
                {
                    std::cout << unfilledInBarChar;
                }
                std::cout << middleLineClosingChar;
            }
            std::cout << '\n';
        }
    }    
}

inline void ProgressBar::ClearBar()
{
    for (int i = 0; i < height /*the +2 include the brackets around the bar*/; i++)
    {
        std::cout << "\033[A";//ASNI code to make the terminal cursor move up one space
        std::cout << '\r'; //moves the cursor to the back of the line
        for (int ii = 0; ii < length+2 /*the +2 include the brackets around the bar*/; ii++)
        {
            std::cout << ' ';
        }
    }
    std::cout << "\r";
}

inline void ProgressBar::UpdateBarProgress(float NewProgress)
{
    if (NewProgress < cap)
    {
        progress = NewProgress;
    }
    else
    {
        progress = cap;
    }
}

#endif
