# EasyCppeasy-ProgressBars
Easy to use single header C++ library for displaying progress bars in the terminal

## Why use EasyCppeasy-ProgressBars over other libraries?
1. It's a single header library which means it is significantly easier to just drag and drop into any project.  
2. It's lightweight and easy to use.  
3. because it's so small, it's very easy to just go in and add any extra functionality you might need!

## How do I add it into a project?
Just toss it in with the rest of your files and you're good to go! Since it's a single header library it's extremely easy and quick to drop into any project.

## What can it do?
It allows you to create "ProgressBar" objects which are able to have any given length, height, and cap.

## How do they look?
Single line bars like the bar below (reminder: they can be any length this is just a demo):  
[######-------]  

Multi line bars look like the bar below (reminder: they can be of any length and height, this is just a demo):  
[######-------]  
|######-------|  
[######-------]  
  
You're also able to customize how your bar looks. You can customize the openings and endings. You can also change the char that represents the filled/unfilled parts of the bar  
so for example you could customize your bar to make it look like this.  
  
{@@@@@@~~~~~~}  
or  
|$$$$$$______}  
or any other style you might want!
## compatibility
I believe it should work for any OS, but please do correct me if I'm wrong.

## what functions/variables does it have?
The three main funtions that come with in the progressBar class are as follows:  
  
[bar].DisplayBar() displays the bar. (you must have clear lines equal to your bars height-1 above your bar. Because the bar will take those spaces and clear anything that was there)  
  
[bar].ClearBar() clears the bar from the terminal  
  
[Bar].UpdateBarProgress([float]) changes the bar's progress to whatever you input in the parentheses.  
  
there are also 6 style variables that come with the class they are as follows  
  
Bar.topBottomLineOpeningChar  by default this is set to '['  
Bar.topBottomLineClosingChar  by default this is set to ']'  
Bar.filledInBarChar  by default this is set to '#'  
Bar.unfilledInBarChar  by default this is set to '-'  
Bar.middleLineClosingChar  by default this is set to '|'  
Bar.middleLineOpeningChar  by default this is set to '|'  
  
all six of these can be customized however you like!  

## example code snippet
creates a ProgressBar object that has a length of 15 a height of 3 and a cap of 10.  
Then it sets the progress to 5 changes the filledInBarChar from '#' to '@' and then displays the bar.  
    
    #include "ProgressBars.h"
    
    int main()
    {
        ProgressBar Bar(15, 3, 10);
    
        Bar.UpdateBarProgress(5);
        Bar.filledInBarChar = '@';
        Bar.DisplayBar();
    
        //system("pause"); un-comment if on windows
    }
  
  
  
### the name
(Just incase you couldn't tell the name is word play on the phrase "easy peasy". I was just really proud of that name, but it's a bit hard to see at first so I thought I'd put some clarification here.)
