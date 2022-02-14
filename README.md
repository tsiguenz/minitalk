A client sends a character string and the server displays it only with signals (SIGUSR1 & SIGUSR2)<BR>
Graded : 85/100<BR>
<BR>
Errors :
  <LI>Print (null) when pass ""<LI\>
  <LI>Leaks when malloc fail<LI\>
  <LI>Usleep too small with string of 10k caracter<LI\>
  <LI>All PID are accepted : -1 close all windows :(
