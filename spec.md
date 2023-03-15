Basic overview

no commas for func args? Still need them for indexing things

parens for func application -- have to be parens if no commas

// for comments

## Forward declarations of static matricies
int   a@2,2 // a 2x2 int matrix
float b@,10 // a 1d columnar vector with 10 elements
float c@10  // a 1d vector with 10 elements
str   d@10  // 1d vector with 10 string elements
// TODO: work out typedefs

## String types
vectorized string ops

## Assignments
c[1 2]  = 1

## Functions
some_func(b c d) {
  b += 1
  c = b + c
  d = 1 / (c + b)

  return b c d
}

## Structs
// These would be nice I think

## Array ops
// note that colon implies whole dimension, assignment will need to be the same size
c[1 :]

// linalg ops? op overloading? how op overload w/o classes?
a@b
a*b
a^b
a&b
a$b
a#b
a!b

`read_csv`
`read_tsv`

a[bla] // named columns in a frame
a[`Bla .w ont workgf`] // unconventional names in a frame
