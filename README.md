POST
====

This is a small program for DOS that takes a 4 digit hexadecimal
number on the command line, splits it into two 2-digit numbers, and
outputs each in turn to port 0x80 to display on a POST diagnostic
card.

It is written in Borland C++.

One small caveat with these cards: it's impossible to display numbers
where the first and second pairs of numbers are the same (for example
4242 or 6969) since it relies on a change of number to detect if a
new POST status has been sent.
