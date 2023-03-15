int wef@2,2 = ((1 2) (2 3))
wef = ((3 3) (3 3))

do_things(a) {
    a = ((2 2) (1 1))
    
    do_things_again(b) {
        b = ((0 0) (0 0))
    }
    do_things_again(a)
}
