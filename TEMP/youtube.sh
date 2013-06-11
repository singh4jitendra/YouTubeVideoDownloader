#!/bin/bash


#######################################  Welcome Message ######################3
kdialog --title "Welcome To YouTube Downloader :" --passivepopup "Author : Jitendra Singh                                     Soft. Engg @ AppEnsure Inc. India        Email: jitu@appensure.com" 5


#############3 Checking kdiaog is installed Or not ##############
C1=`which kdialog` 
if [ "$C1" == "" ] ; then   
notify-send "Warning : " "kdialog not found; please install package kdebase for proper operation"   
exit 
fi


C2=`which lynx`
if [ "$C2" == "" ] ; then
kdialog --error "lynx not found; please install it for proper operation \n For Debian package type sudo apt-get install lynx-cur-wrapper"   
exit
fi






#############3 Checking kdiaog is installed Or not ##############
url1=`kdialog --title "Youtube Url :" --inputbox "Enter YouTube  Video Url" "http://www.youtube.com/watch?xxxxxxxxx"` 
if [[ $url1 == "" ]] ; then         
kdialog --sorry "Warning : Please Enter Youtube Url !!!!!!" 
exit
fi
wget -c -O index.html $url1
################################### Linux string replace    ##################################################
sed -e 's/%3A%2F%2F/:\/\//g'  index.html > youtube.txt
sed -i 's/%2F/\//g' youtube.txt
sed -i 's/%3F/?/g' youtube.txt
sed -i 's/%3D/=/g' youtube.txt
sed -i 's/%26/\&/g'  youtube.txt
sed -i 's/%252/%2/g'  youtube.txt
sed -i 's/sig/&signature/g'  youtube.txt
## command to get filename
nawk '/<title>/,/<\/title>/' youtube.txt > filename.txt ## Print the line between   containing <title> and <\/title> .
sed -i 's/.*content="//g' filename.txt 
sed -i 's/">.*//g' filename.txt
sed -i 's/.*<title>//g' filename.txt
sed -i 's/<.*//g' filename.txt
######################################## Coding to get all itag list ########################################

nawk '/"fmt_list":/,//' youtube.txt > fmt.html ## Print the line containing "fmt_list": .
sed -i 's/.*"fmt_list"://g' fmt.html
sed -i 's/, "platform":.*//g' fmt.html
sed -i 's/, "title":.*//g' fmt.html

# String replace command in linux to get correct itag format
sed -i 's/\\\/1920x1080\\\/99\\\/0\\\/0//g'  fmt.html  ## Replace \/1920x1080\/99\/0\/0 by blank .
sed -i 's/\\\/1920x1080\\\/9\\\/0\\\/115//g' fmt.html  ## Replace \/1920x1080\/9\/0\/115 by blank.
sed -i 's/\\\/1280x720\\\/99\\\/0\\\/0//g'   fmt.html  ## Replace \/1280x720\/99\/0\/0 by blank.
sed -i 's/\\\/1280x720\\\/9\\\/0\\\/115//g'  fmt.html  ## Replace \/1280x720\/9\/0\/115 by blank.
sed -i 's/\\\/854x480\\\/99\\\/0\\\/0//g'    fmt.html  ## Replace \/854x480\/99\/0\/0 by blank.
sed -i 's/\\\/854x480\\\/9\\\/0\\\/115//g'   fmt.html  ## Replace \/854x480\/9\/0\/115 by blank.
sed -i 's/\\\/640x360\\\/99\\\/0\\\/0//g'    fmt.html  ## Replace \/640x360\/99\/0\/0 by blank.
sed -i 's/\\\/640x360\\\/9\\\/0\\\/115//g'   fmt.html  ## Replace \/640x360\/9\/0\/115 by blank.
sed -i 's/\\\/640x360\\\/9\\\/0\\\/115//g'   fmt.html  ## Replace \/640x360\/9\/0\/115 by blank.
sed -i 's/\\\/320x240\\\/7\\\/0\\\/0//g'     fmt.html  ## Replace \/320x240\/7\/0\/0 by blank.
sed -i 's/\\\/320x240\\\/99\\\/0\\\/0//g'    fmt.html  ## Replace \/320x240\/99\/0\/0 by blank.
sed -i 's/\\\/176x144\\\/99\\\/0\\\/0//g'    fmt.html  ## Replace \/176x144\/99\/0\/0 by blank.

# Command to cut a part of a file between any two strings
nawk '/"url_encoded_fmt_stream_map":/,//' youtube.txt > url.txt
sed -i 's/.*url_encoded_fmt_stream_map"://g' url.txt

#Display video resolution information
#format=$(kdialog --combobox "Select a Format:" "mp4(HD)" "mp4(Middle)" "mp4(Low)" "flv" "3gp")
case  $(kdialog --combobox "Select a Format:" "mp4(High Quality)" "mp4(Normal Quality)" "mp4(Low Quality)" "flv(High Quality)" "3gp" ) in
#case $rental in
"mp4(High Quality)") 
	fmt="37";;
"mp4(Normal Quality)") 
	fmt="22";;
"mp4(Low Quality)") 
	fmt="18";;

"flv(High Quality)") 
	fmt="35" ;;
"3gp")
	fmt="36";;
*)
		kdialog --sorry "You didn't select any option Default Format(3gp) will be selected"
		fmt="36"
esac


sed -e "s/.*,itag=$fmt//g" url.txt > "$fmt"_1.txt
sed -e 's/\u0026quality.*//g' "$fmt"_1.txt > "$fmt".txt
sed -i 's/.*u0026url=//g' "$fmt".txt ## Ignore all lines before \u0026url= but print all lines after \u0026url=.
sed -e 's/\u0026type.*//g' "$fmt".txt > "$fmt"url.txt ## Ignore all lines after \u0026type but print all lines before \u0026type.
sed -i 's/\\/\&/g' "$fmt"url.txt ## replace \ by &
sed -e 's/.*\u0026sig//g' "$fmt".txt > "$fmt"sig.txt ## Ignore all lines before \u0026sig but print all lines after \u0026sig.
sed -i 's/\\/\&ptk=machinima/g' "$fmt"sig.txt ## replace \ by &
echo `cat "$fmt"url.txt``cat "$fmt"sig.txt` > "$fmt"url.txt ## Add string at the end of a line
echo `cat "$fmt"url.txt` > link.txt ## url and signature content to 44url.txt



if [ $fmt -eq 46 ]
 then 
    echo `cat filename.txt`.webm > filename.txt

elif [ $fmt -eq 45 ]
  then 
     echo `cat filename.txt`.webm > filename.txt

elif [ $fmt -eq 44 ]
  then 
     echo `cat filename.txt`.webm > filename.txt

elif [ $fmt -eq 43 ]
   then 
   echo `cat filename.txt`.webm > filename.txt

elif [ $fmt -eq 37 ]
   then 
   echo `cat filename.txt`.mp4 > filename.txt

elif [ $fmt -eq 22 ]
   then 
   echo `cat filename.txt`.mp4 > filename.txt

elif [ $fmt -eq 18 ]
   then 
  echo `cat filename.txt`.mp4 > filename.txt

elif [ $fmt -eq 35 ]
   then 
   echo `cat filename.txt`.flv > filename.txt

elif [ $fmt -eq 34 ]
   then 
   echo `cat filename.txt`.flv > filename.txt

elif [ $fmt -eq 5 ]
   then 
   echo `cat filename.txt`.flv > filename.txt

elif [ $fmt -eq 36 ]
   then 
   echo `cat filename.txt`.3gpp > filename.txt

 else
   echo `cat filename.txt`.3gpp > filename.txt

fi


case $fmt in
    "37")
      pattern="*.mp4 | High Quality Mp4 File"
      ;;
    "22")
      pattern="*.mp4 | Normal Quality Mp4 File"
      ;;
    "18")
      pattern="*.mp4 | Low Quality Mp4 File"
      ;;
    "35")
      pattern="*.flv | High Quality flv File"
	;;
    "36")
      pattern="*.3gp | 3gp File"
esac

filename=`kdialog --getsavefilename :label1 $pattern`
linkdownload=`cat link.txt`

if [ `expr length "$linkdownload"` -lt "1" ] ; then
        kdialog --error "Video will not be download : Forbidden Link OR Restricted Link !!!!!!  "
	exit
fi


sudo rm *.txt
sudo rm *.html
wget --progress=bar:force $linkdownload -O $filename 2>&1 | zenity --title="Your Video Download in Progress!" --progress --auto-close --auto-kill



ff=`kdialog --title "Download Info                         " --yesno "Your Download is Completed \n
Press Yes If You Want To Register 
 \n Otherwise No"`

   case $? in
    "0")
      Choice="YES"
      ;;
    "1")
      Choice="NO"
      ;;
esac



if [[ "$Choice" == "YES" ]] ; then
	EMAIL=`kdialog --title "User Email" --inputbox "Enter Your Name and Working Email Address Seperated by ,(comma):"`
fi



temp=` host -W 1 google.com`
   case $? in
    "0")
      Internet="YES"
      ;;
    "1")
      Internet="NO"
      ;;
esac


if [[ "$Internet" == "YES" ]] ; then
	userInfo=`lynx -dump http://www.ip-adress.com/ip_tracer/?QRY=$1 | grep "My IP address" | awk -F ":" '{print $0}'`
#	echo $userInfo
	EMAIL=$EMAIL" "$userInfo
	./stuff/stuff "jitusingh123" "$EMAIL"
	kdialog --title "Exiting YouTube Video Downloader" --passivepopup "Thank You For using !!!!!!!! " 10    
else 
	kdialog --title "Exiting YouTube Video Downloader" --passivepopup "Thank You For using !!!!!!!! " 10	
fi

