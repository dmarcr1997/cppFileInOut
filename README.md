# cppFileInOut
Exercise 1
1. Extend the code above to print the arrays x and y to a file called x_and_y.dat
so that the data file has the four elements of x on the top line, and the four elements
of y on the next line.
2. Extend the code so that the output stream is flushed immediately after each line
of the file is written.
3. Extend the code so that the precision is set to 10 significant figures, the output is
in scientific notation, and plus signs are shown for positive numbers.
4. Amend the program so that it does not automatically create a fresh file
x_and_y.dat every time it is run. Have the program first attempt to open
the file x_and_y.dat as an ifstream for reading. If the file can be successfully opened then, after closing the ifstream, warn the user. Have the program
prompt the user as to whether it should erase the existing file or append to the
existing file

Exercise 2
This question uses the data file x_and_y.dat that was written in the previous
exercise. The code below assumes that we know that the data file has 4 columns and
that we want to count the number of rows. 
Run the code above. This code does not give the correct answer. Why is this?
Does the code give the correct answer if the final newline character is removed from
the file x_and_y.dat? Modify the code so that it gives the correct answer.
[Hint: You might investigate the use of read_file.fail()which may be used to
probe whether the last read on the file stream was unsuccessful.]