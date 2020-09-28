# MY BLOG

## SEP 27
* How are programs scored in competitive programming ? - Using Testcase - So our code has to be correct and efficient
* Algorithms and Data Structures help to get efficient solutions to the given problems
* Default Language - CPP - It contains the stl library which has most of the commonly used data structures and algorithms implemented. And most of the competitive programming languages have compilers to support CPP. 
* Don't stick to a language. Learn 2-3 languages. There may be some cases (very rare) where coding in one language might be easier than your default language. (Python is good in these cases)
* Have a default template. This helps to code faster and you need waste time to code the same repetitive part again and again. You can just copy paste it.

### CPP
* cin and cout deal with standard I/O streams.
* "\n" doesnot flush the output to streams ( the outputs maintain a buffer, they flush this only when it the buffer if full ). But if you use "endl" this flushes the output everytime. And this is a costly operation. So when you are submitting the code a platform it is better to replace "endl" with "\n" unless it is a interactive problem. 
* But when you are debugging your code always use "endl"(instead of "\n"). If you donot use it, we may not see the debugging statements though the code reaches that point before a seg fault. This is because of the fact that when you use "\n" all your output is stored in the buffer. This is buffer is printed to the screen either when the program exits normally or buffer is full. But when there is a seg fault, the program is stopped abnormally. So the output is not printed to the screen.
* Use getline to take input of a string which contains spaces
* long and int - 32 bit integers. Use long long or long long int to get 64 bit integers
* Modular Arthimatic
	* while using subtractions add m and take modular. This is because modular negitive number is negitive. => ((a - b) % m) != ((a - b + m) % m)
	* (a/b)%m = (a * (b ^ (m - 2))) % m. Here m is prime number.
* Doubles - these can have rounding errors, due to the way they are stored. So comparing floats use (abs(a - b) < 1e-9).
* Use macros (#define) to shorten your codes.

### OTHER
* Sets, Logarithms, Logical Operators, Functions

## SEP 28
* Time complexity of algorithms is measured with input size as the parameter. This is because normal time in seconds depedns on a lot of factors such as Speed of your computer, compilers efficiency, etc. Using input size as the parameter helps us to identify the complexity of the algorithm even before implementing it.
* Generally for a CPP code, 1s translates to 10^7 operations ( sometimes even 10^8 ).
* We can represent the efficiency of a an algorithm using the asymptotic notation ( parameter size of input ). This is only an estimate of the efficiency. We remove the constants in this notation. Sometimes even the constants can play a huge role.
* This kind of analysis of algorithms using input size as parameter is called asymptotic analysis.
* The time complexity of a recursive function is basically the O(no of function calls * time complexity of each function).

