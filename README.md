# ProTest — A free powerful program for educational tests
## Overview
**ProTest** is a revolution in a world of testing systems. Testing become easier than ever before. 

Make your life easier. Install it now for free _(under GPLv2 copyleft)_

## Brief usage description
### General info:
Program runs in two modes: teacher's mode and student's mode. First, you have to authorize in our system. Then, mode will be selected automatically.

### Teacher's mode allows you to:
* Add/Edit/Delete questions
* Show/Edit students info
  
### Student's mode allows you to:
* Pass the training
* Pass the testing on the topic
* Pass the final test
    
### Notes:
* Our system uses «SQLite» as a database system
* You can find all necessary documentation in `doc` folder
* Contact anton2920@gmail.com if any issue occurs
* Enjoy! :)

## Installation guide
### General stuff
Perform: 
```bash
sh ./autogen.sh
./configure
make
sudo make install
```
After that, run `ldconfig(8)`.  Do `sudo ldconfig`, there's no harm in it.

## Licence
It distributes only under GPLv2 licence. Go to https://www.gnu.org/licenses/ for more information

## Copyright 
© 2019 Tushino Software LLC
