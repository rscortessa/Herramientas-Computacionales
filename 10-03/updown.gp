set log y
set xlabel "N"; set ylabel "Delta"
set term pdf
set out "datos.pdf"
plot "datos.txt" u 1:2