# GAME OF LIFE

The mathematician John Conway invented the “Game of life”. Though not a “game” in any traditional sense, it provides interesting behavior that is specified with only a few rules. This assignment requires you to write a program in which you have to specify an initial configuration. The program follows the rules of LIFE to show the continuing behavior of the configuration.


LIFE is an organism that lives in a discrete, two-dimensional world. While this world is actually unlimited we don’t have that luxury, so we restrict the array to 80 characters wide by 22 character positions high.


This world is an array with each cell capable of holding one LIFE cell. Generations mark the passing of time. Each generation brings birth and deaths to the LIFE community. The births and deaths follow this set of rules:
 - We define each cell to have eight *neighbor* cells. The neighbors of a cell are the cells directly above, below, to the right, to the left, diagonally above to the right and left and diagonally below to the right and left.
 - If an occupied cell has zero or one neighbors it dies of *loneliness*. If an occupied cell has more than three neighbors, it dies of *over crowding*.
 - If an empty cell has exactly three occupied neighbor cells, there is a *birth* of a new cell to replace the empty cell.
 - Births and deaths are instantaneous and occur at the changes of a generation. A cell dying for whatever reason may help cause birth but a new born cell cannot resurrect a cell that is dying nor will a cell’s death prevent the death of another, say, by reducing local population.

 **Hint:** create a two-dimensional char array of 80 columns and 22 rows which contains an initial configuration. Write a function which takes as parameter this array and scans it and modifies the cells according to LIFE rules. Then use a display function that takes as parameter this array and displays on the screen. You might need to have delays in printing and changing configurations or you can do it on some key press.