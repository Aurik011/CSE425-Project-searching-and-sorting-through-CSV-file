start_time=`date +%s`
searchByAge()
{
    echo "Enter age please: "
    read age
    awk -v pattern="$age" -F',' '$1 == pattern'  heart.csv
}
searchBySex()
{
    echo "Enter gender please: "
    read sex
    awk -v pattern="$sex" -F',' '$2 == pattern' heart.csv
}
searchByCp()
{
    echo "Enter Chest Pain type(CP) please: "
    read cp
    awk -v pattern="$cp" -F',' '$3 == pattern' heart.csv
}
searchByTrtbps()
{
    echo "Enter Resting blood pressure(in mm Hg) please: "
    read trtbps
    awk -v pattern="$trtbps" -F',' '$4 == pattern' heart.csv
}
searchByChol()
{
    echo "Enter Cholestoral in mg/dl please: "
    read chol
    awk -v pattern="$chol" -F',' '$5 == pattern' heart.csv
}
searchByFbs()
{
    echo "Enter fasting blood sugar > 120 mg/dl please: "
    read fbs
    awk -v pattern="$fbs" -F',' '$6 == pattern' heart.csv
}
searchByRestecg()
{
    echo "Enter the account to search: "
    read restecg
    awk -v pattern="$restecg" -F',' '$7 == pattern' heart.csv
}
searchByThalachh()
{
    echo "Enter maximum heart rate please: "
    read thalachh
    awk -v pattern="$thalachh" -F',' '$8 == pattern' heart.csv
}
searchByExng()
{
    echo "Enter resting exercise induced angina please: "
    read exng
    awk -v pattern="$exng" -F',' '$9 == pattern' heart.csv
}
searchByOldpeak()
{
    echo "Enter previous peak please: "
    read oldpeak
    awk -v pattern="$oldpeak" -F',' '$10 == pattern' heart.csv
}
searchBySlp()
{
    echo "Enter slope please: "
    read slp
    awk -v pattern="$slp" -F',' '$11 == pattern' heart.csv
}
searchByCaa()
{
    echo "Enter number of major vessels(0-3) please: "
    read caa
    awk -v pattern="$caa" -F',' '$12 == pattern' heart.csv
}
searchByThall()
{
    echo "Enter thal rate please: "
    read thall
    awk -v pattern="$thall" -F',' '$13 == pattern' heart.csv
}
searchByOutput()
{
    echo "Enter target variable please: "
    read output
    awk -v pattern="$output" -F',' '$14 == pattern' heart.csv
}

sortByAge(){
    sort -t, -k1,1 -n heart.csv
}

sortBySex(){
    sort -t, -k2,2 -n heart.csv
}
sortByChestPain(){
    sort -t, -k3,3 -n heart.csv
}
sortByTrtbps(){
    sort -t, -k4,4 -n heart.csv
}
sortByChol(){
    sort -t, -k5,5 -n heart.csv
}
sortByFbs(){
    sort -t, -k6,6 -n heart.csv
}
sortByRestecg(){
    sort -t, -k7,7 -n heart.csv
}
sortBythalachh(){
    sort -t, -k8,8 -n heart.csv
}
sortByExng(){
    sort -t, -k9,9 -n heart.csv
}
sortByOldpeak(){
    sort -t, -k10,10 -n heart.csv
}
sortBySlp(){
    sort -t, -k11,11 -n heart.csv
}
sortByCaa(){
    sort -t, -k12,12 -n heart.csv
}
sortByThall(){
    sort -t, -k13,13 -n heart.csv
}
sortByOutput(){
    sort -t, -k14,14 -n heart.csv
}

echo "Enter 1 to search by age"
echo "Enter 2 to search by chest pain type(CP)"
echo "Enter 3 to search by Restecg"
echo "Enter 4 to search by Resting blood pressure (in mm Hg)"
echo "Enter 5 to search by Cholestoral in mg/dl fetched via BMI sensor"
echo "Enter 6 to search by fasting blood sugar"
echo "Enter 7 to search by resting electrocardiographic results"
echo "Enter 8 to search by maximum heart rate achieved"
echo "Enter 9 to search by exercise induced angina (1 = yes; 0 = no)"
echo "Enter 10 to search by Previous peak"
echo "Enter 11 to search by Slp"
echo "Enter 12 to search by Caa"
echo "Enter 13 to search by Thall"
echo "Enter 14 to search by Output"
echo "Enter 15 to sort by age"
echo "Enter 16 to sort by sex"
echo "Enter 17 to sort by cp"
echo "Enter 18 to sort by trtbps"
echo "Enter 19 to sort by chol"
echo "Enter 20 to sort by fbs"
echo "Enter 21 to sort by restecg"
echo "Enter 22 to sort by thalachh"
echo "Enter 23 to sort by exng"
echo "Enter 24 to sort by oldpeak"
echo "Enter 25 to sort by slp"
echo "Enter 26 to sort by caa"
echo "Enter 27 to sort by thall"
echo "Enter 28 to sort by output"
echo "Enter your choice here: "
read choose

if [ "$choose" -eq 1 ]; then
    searchByAge
elif [ "$choose" -eq 2 ]; then
    searchBySex
elif [ "$choose" -eq 3 ]; then
    searchByCp
elif [ "$choose" -eq 4 ]; then
    searchByTrtbps
elif [ "$choose" -eq 5 ]; then
    searchByChol
elif [ "$choose" -eq 6 ]; then
    searchByFbs        
elif [ "$choose" -eq 7 ]; then
    searchByRestecg
elif [ "$choose" -eq 8 ]; then
    searchByThalachh
elif [ "$choose" -eq 9 ]; then
    searchByExng
elif [ "$choose" -eq 10 ]; then
    searchByOldpeak
elif [ "$choose" -eq 11 ]; then
    searchBySlp
elif [ "$choose" -eq 12 ]; then
    searchByCaa
elif [ "$choose" -eq 13 ]; then
    searchByThall
elif [ "$choose" -eq 14 ]; then
    searchByOutput    
  
elif [ "$choose" -eq 15 ]; then
    sortByAge
elif [ "$choose" -eq 16 ]; then
    sortBySex
elif [ "$choose" -eq 17 ]; then
    sortByChestPain
elif [ "$choose" -eq 18 ]; then
    sortByTrtbps
elif [ "$choose" -eq 19 ]; then
    sortByChol
elif [ "$choose" -eq 20 ]; then
    sortByFbs
elif [ "$choose" -eq 21 ]; then
    sortByRestecg
elif [ "$choose" -eq 22 ]; then
    sortBythalachh
elif [ "$choose" -eq 23 ]; then
    sortByExng
elif [ "$choose" -eq 24 ]; then
    sortByOldpeak
elif [ "$choose" -eq 25 ]; then
    sortBySlp
elif [ "$choose" -eq 26 ]; then
    sortByCaa
elif [ "$choose" -eq 27 ]; then
    sortByThall
elif [ "$choose" -eq 28 ]; then
    sortByOutput
else
    echo "Invalid input sorry"
fi
end_time=`date +%s`
echo execution time was `expr $end_time - $start_time` s.
