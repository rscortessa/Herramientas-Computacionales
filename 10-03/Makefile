all:datos.pdf

updown.x : updown.cpp
	g++ updown.cpp -o updown.x
datos.txt: updown.x
	./updown.x 10 > datos.txt
datos.pdf: updown.gp datos.txt
	gnuplot updown.gp
clean:
	rm -f datos.txt updwon.x
