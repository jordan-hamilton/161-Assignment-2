Assignment-2

or all programming projects in this course you can assume that the user (the person using your program) will not try to do so in a way that violates the specifications.  For example, if the specifications indicate that the program should expect an int, then you don't have to worry about getting something else, like a double or bool.  Some specifications are implicit rather than explicit.  For example in Project 2.a the description doesn't tell you which numeric type to use, but you can infer it from the given example.  There are several numeric types available, but for the programming projects you should stick with int for integers and double for floating-point numbers.

Remember to not use any material we haven't covered yet (as stated in the syllabus).

Project 2.a

Write a program that asks the user for five numbers and then prints out the average of those numbers.  When you run your program, it should match the following format:

    Please enter five numbers.
    5.1
    6.0
    123.8
    -19.0
    The average of those numbers is:
    22.7

The file must be named: average.cpp.  To compile it into an executable file named "average", enter "g++ average.cpp -o average".  "g++" is the name of the compiler, "average.cpp" is the name of your program, "-o average" says that you want the executable file to be named "average" (you do not have to match the name of your .cpp file).  If you don't use the -o option, then the executable file will be named "a.out".
