# Aurik Anjum - total 3 files o be checked
import csv
import pandas as pd

print("Opening the heart.csv file now:")
# Reading
with open('heart.csv', 'r') as csv_file:
    csv_reader = csv.reader(csv_file)
   
    df = pd.read_csv("heart.csv")
    sorted_df = df.sort_values(by=["age"])
    sorted_df.to_csv('sortByAge.csv', index=False)

    sorted_df = df.sort_values(by=["sex"])
    sorted_df.to_csv('sortBySex.csv', index=False)

    sorted_df = df.sort_values(by=["cp"])
    sorted_df.to_csv('sortByCp.csv', index=False)

    sorted_df = df.sort_values(by=["trtbps"])
    sorted_df.to_csv('sortByTrtbps.csv', index=False)

    sorted_df = df.sort_values(by=["chol"])
    sorted_df.to_csv('sortByChol.csv', index=False)

    sorted_df = df.sort_values(by=["fbs"])
    sorted_df.to_csv('sortByFbs.csv', index=False)

    sorted_df = df.sort_values(by=["restecg"])
    sorted_df.to_csv('sortByRestecg.csv', index=False)

    sorted_df = df.sort_values(by=["thalachh"])
    sorted_df.to_csv('sortByThalachh.csv', index=False)

    sorted_df = df.sort_values(by=["exng"])
    sorted_df.to_csv('sortByExng.csv', index=False)

    sorted_df = df.sort_values(by=["oldpeak"])
    sorted_df.to_csv('sortByOldpeak.csv', index=False)

    sorted_df = df.sort_values(by=["slp"])
    sorted_df.to_csv('sortBySlp.csv', index=False)

    sorted_df = df.sort_values(by=["caa"])
    sorted_df.to_csv('sortByCaa.csv', index=False)

    sorted_df = df.sort_values(by=["thall"])
    sorted_df.to_csv('sortByThall.csv', index=False)

    sorted_df = df.sort_values(by=["output"])
    sorted_df.to_csv('sortByOutput.csv', index=False)

print("Welcome to the portal. Please select your option.")
def searchByAge():
    age = input('Enter age please\n')
    csv_file = csv.reader(open('heart.csv', 'r'))

    for row in csv_file:
        if age == row[0]:
            print(row)


def searchBySex():
    sex = input('Enter your gender please\n')
    csv_file = csv.reader(open('heart.csv', 'r'))

    for row in csv_file:
        if sex == row[1]:
            print(row)


def searchByCp():
    cp = input('Enter Chest Pain type(CP) please\n')
    csv_file = csv.reader(open('heart.csv', 'r'))

    for row in csv_file:
        if cp == row[2]:
            print(row)


def searchByTrtbps():
    trtbps = input(' Resting blood pressure (in mm Hg)\n')
    csv_file = csv.reader(open('heart.csv', 'r'))

    for row in csv_file:
        if trtbps == row[2]:
            print(row)


def searchByChol():
    chol = input('Enter Cholestoral in mg/dl fetched via BMI sensor please\n')
    csv_file = csv.reader(open('heart.csv', 'r'))

    for row in csv_file:
        if chol == row[4]:
            print(row)


def searchByFbs():
    fbs = input(
        'Enter (fasting blood sugar > 120 mg/dl) (1 = true; 0 = false)\n')
    csv_file = csv.reader(open('heart.csv', 'r'))

    for row in csv_file:
        if fbs == row[5]:
            print(row)


def searchByRestecg():
    restecg = input(
        'Enter Resting Electrocardiographic Results(restecg) please\n')
    csv_file = csv.reader(open('heart.csv', 'r'))

    for row in csv_file:
        if restecg == row[6]:
            print(row)


def searchByThalachh():
    thalachh = input('Enter maximum heart rate achieved\n')
    csv_file = csv.reader(open('heart.csv', 'r'))

    for row in csv_file:
        if thalachh == row[2]:
            print(row)


def searchByExng():
    exng = input(' Resting exercise induced angina (1 = yes; 0 = no)\n')
    csv_file = csv.reader(open('heart.csv', 'r'))

    for row in csv_file:
        if exng == row[2]:
            print(row)


def searchByOldpeak():
    oldpeak = input('Enter Previous peak\n')
    csv_file = csv.reader(open('heart.csv', 'r'))

    for row in csv_file:
        if oldpeak == row[2]:
            print(row)


def searchBySlp():
    slp = input('Enter slope please\n')
    csv_file = csv.reader(open('heart.csv', 'r'))

    for row in csv_file:
        if slp == row[2]:
            print(row)


def searchByCaa():
    caa = input('Enter number of major vessels(0-3)\n')
    csv_file = csv.reader(open('heart.csv', 'r'))

    for row in csv_file:
        if caa == row[2]:
            print(row)


def searchByThall():
    thall = input('Enter thal rate\n')
    csv_file = csv.reader(open('heart.csv', 'r'))

    for row in csv_file:
        if thall == row[2]:
            print(row)


def searchByOutput():
    output = input('Enter target variable\n')
    csv_file = csv.reader(open('heart.csv', 'r'))

    for row in csv_file:
        if output == row[2]:
            print(row)


print("Enter 1 to search by Age of the person")
print("Enter 2 to search by Gender of the person")
print("Enter 3 to search by Chest Pain type chest pain type")
print("Enter 4 to search by Resting blood pressure (in mm Hg)")
print("Enter 5 to search by Cholestoral in mg/dl fetched via BMI sensor")
print("Enter 6 to search by fasting blood sugar")
print("Enter 7 to search by resting electrocardiographic results")
print("Enter 8 to search by maximum heart rate achieved")
print("Enter 9 to search by exercise induced angina (1 = yes; 0 = no)")
print("Enter 10 to search by Previous peak")
print("Enter 11 to search by Slp")
print("Enter 12 to search by Caa")
print("Enter 13 to search by Thall")
print("Enter 14 to search by Output")


src = int(input('Enter your choice here:'))

if src == 1:
    searchByAge()
elif src == 2:
    searchBySex()
elif src == 3:
    searchByCp()
elif src == 4:
    searchByTrtbps()
elif src == 5:
    searchByChol()
elif src == 6:
    searchByFbs()
elif src == 7:
    searchByRestecg()
elif src == 8:
    searchByThalachh()
elif src == 9:
    searchByExng()
elif src == 10:
    searchByOldpeak()
elif src == 11:
    searchBySlp()
elif src == 12:
    searchByCaa()
elif src == 13:
    searchByThall()
elif src == 14:
    searchByOutput()
else:
    print('Invalid input sorry')
