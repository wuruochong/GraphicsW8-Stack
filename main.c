#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"
#include "parser.h"
#include "stack.h"

int main(int argc, char **argv) {

  screen s;
  struct matrix * edges;
  // struct matrix * transform;
  struct stack * transform;

  edges = new_matrix(4, 4);
  // transform = new_matrix(4, 4);
  transform = new_stack();


  /* print_matrix( make_bezier() ); */
  /* printf("\n"); */
  /* print_matrix( make_hermite() ); */
  // printf("stack at start\n");
  // print_stack(transform);

  if ( argc == 2 )
    parse_file( argv[1], transform, edges, s );
  else
    parse_file( "stdin", transform, edges, s );


  free_matrix( edges );
  free_stack( transform );
}
