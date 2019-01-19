# This is just an example to get you started. A typical library package
# exports the main API in this file. Note that you cannot rename this file
# but you can remove it if you wish.

import strutils

proc FizzBuzz*(n: int): string =

    if n mod 15 == 0:
        return "FizzBuzz"
    elif n mod 3 == 0:
        return "Fizz"
    elif n mod 5 == 0:
        return "Buzz"
    else :
        return n.intToStr

