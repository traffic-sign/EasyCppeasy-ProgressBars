# EasyCppeasy-ProgressBars
Easy to use single header C++ library for displaying progress bars

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

## compatibility
I believe it should work for any OS, but please do correct me if I'm wrong.

## example code snippet
creates a ProgressBar object that has a length of 15 a height of 3 and a cap of 10. Then it sets the progress to 5 and displays the bar.  
    
    #include "ProgressBars.h"
    
    int main()
    {
        ProgressBar Bar(15, 3, 10);
    
        Bar.UpdateBarProgress(5);
        Bar.DisplayBar();
    
        //system("pause"); un-comment if on windows
    }
