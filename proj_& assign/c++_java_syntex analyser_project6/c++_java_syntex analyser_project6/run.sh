# dialog --title "Input- Enter file to check" --backtitle "Welcome to identifier" --inputbox "Enter the file name" 8 60 2>out
# inp=`cat out`
inp=`zenity --entry --text="ENTER THE FILENAME"`
sh build.sh
if [ "$inp" != "" ]
then
	./a.out $inp < $inp
else
	echo "Usage: $0 [filename]"
fi
