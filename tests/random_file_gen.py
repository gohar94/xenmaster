import hashlib
import sys
f = open('dump.txt','w')
x = 0
mult = int(sys.argv[1])
while (x != 100000000/4 * mult):
	some_thing  = hashlib.md5(str(x)).hexdigest()
	some_thing = some_thing +" " + str(x) + '\n'
	f.write(some_thing)
	x = x + 1
f.close()
