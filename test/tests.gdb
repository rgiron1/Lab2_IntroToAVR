# Test file for "Lab2_introToAVR"


# commands.gdb provides the following functions for ease:
#   test "<message>"
#       Where <message> is the message to print. Must call this at the beginning of every test
#       Example: test "PINA: 0x00 => expect PORTC: 0x01"
#   checkResult
#       Verify if the test passed or failed. Prints "passed." or "failed." accordingly, 
#       Must call this at the end of every test.
#   expectPORTx <val>
#       With x as the port (A,B,C,D)
#       The value the port is epected to have. If not it will print the erroneous actual value
#   setPINx <val>
#       With x as the port or pin (A,B,C,D)
#       The value to set the pin to (can be decimal or hexidecimal
#       Example: setPINA 0x01
#   printPORTx f OR printPINx f 
#       With x as the port or pin (A,B,C,D)
#       With f as a format option which can be: [d] decimal, [x] hexadecmial (default), [t] binary 
#       Example: printPORTC d
#   printDDRx
#       With x as the DDR (A,B,C,D)
#       Example: printDDRB

echo ======================================================\n
echo Running all tests..."\n\n

# Example test:
test "PINA: 0x2F PINB: 0x2F PINC: 0x2F => PORTD = 0x78"
# Set inputs
setPINA 0x2F
setPINB 0x2F
setPINC 0x2f
# Continue for several ticks
continue 5
# Set expect values
expectPORTC 0x78
# Check pass/fail
checkResult

# Add tests below
test "PINA: 0x02 => PORTC: 0x02"
setPINA 0x02
continue 5
expectPORTC 0x02
checkResult

test"PINA: 0x04 => PORTC: 0x01"
setPINA 0x04
continue 5
expectPORTC 0x01
checkResult

test"PINA: 0x08 => PORTC: 0x80"
setPINA 0x08
continue
expectPORTC 0x80
checkResult
# Report on how many tests passed/tests ran
set $passed=$tests-$failed
eval "shell echo Passed %d/%d tests.\n",$passed,$tests
echo ======================================================\n
