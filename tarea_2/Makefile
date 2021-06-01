all:computing_pi_parallel.x
n:=1
step:=1
var= 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
first := $(shell mpirun -np 1 --oversubscribe ./a.out 2000000000 1)
a.out:computing_pi_parallel.cpp 
	mpic++ $< -o a.out
f.txt:a.out
	for i in $(var) ; do \
		mpirun -np $$i --oversubscribe ./a.out 2000000000 $(first) >>f.txt ; \
	done 
clean:
	rm *.x *.txt
