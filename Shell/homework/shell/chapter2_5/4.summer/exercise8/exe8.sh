#==========================================================================================================
#    8、在exercise8目录下写一个脚本，要实现以下目的：
#       a.)输出该脚本所在父Shell的进程号到该目录下result.txt
#       b.)追加输出该脚本子Shell进程号到该目录下result.txt
#       c.)在/proc下找出与父Shell及子Shell进程相关的目录下所有文件，将文件后缀名去掉后逐行追加输出到该目录下#       result.txt(要求：这些需要追加输出到result.txt的名称要求先在脚本中赋值给一个数组，然后通过数组循环再追加#       输出到result.txt)
#==========================================================================================================
echo "该脚本所在父Shell的进程号: $PPID" > result.txt
printf "\n" >> result.txt
echo "该脚本子Shell子进程号: $$" >> result.txt
printf "\n"  >> result.txt
printf "=========================================================================================" >> result.txt
printf "1).在/proc父进程目录下的文件去掉后缀名：\n" >> result.txt
a="/proc/$PPID/*"
echo ${a%.*}  >> result.txt
printf "\n" >> result.txt
printf "=========================================================================================" >> result.txt
printf "2).在/proc子进程目录下的文件去掉后缀名：\n" >> result.txt
b="/proc/$$/*"
echo ${b%.*}  >> result.txt
gedit  result.txt
exit 0
