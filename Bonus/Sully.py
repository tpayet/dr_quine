import os
i=5
s="import os{:s}i={:d}{:s}s={:s}f=open(({:s}Sully_{:s}+str(i)+{:s}.py{:s}), 'w'){:s}f.write(s.format(chr(10), i-1, chr(10), chr(34)+s+chr(34)+chr(10), chr(34), chr(34), chr(34), chr(34), chr(10), chr(10), chr(10), chr(10), chr(10)+'    ', chr(10))){:s}f.close{:s}f.flush(){:s}if i>0:{:s}os.system('python3 Sully_'+str(i)+'.py'){:s}"
f=open(("Sully_"+str(i)+".py"), 'w')
f.write(s.format(chr(10), i-1, chr(10), chr(34)+s+chr(34)+chr(10), chr(34), chr(34), chr(34), chr(34), chr(10), chr(10), chr(10), chr(10), chr(10)+'    ', chr(10)))
f.close
f.flush()
if i>0:
    os.system('python3 Sully_'+str(i)+'.py')
