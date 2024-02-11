a := one two # A is set to the stirng "one two"
b := 'one two' # not recommended .b is set to the string "'one two'"

all:
	echo $(a)
	echo $(b)

files := file1 file2


hello:
	echo "Hello World" | lolcat
	echo "This line will print if the file hello does not exist" | lolcat

blah: blah.c
	cc blah.c -o blah

some_file: $(files)
	echo "Look at this variable : " $(files)
	touch some_file

file1:
	touch file1
file2:
	touch file2

clean:
	rm -f file1 file2 some_file
other_file:
	echo "This will always run and run first"

