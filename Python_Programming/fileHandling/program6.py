


#In real application, files might be missing, renamed or stored in a different directory.
# use the pathlib module

from pathlib import Path

file_path = Path("student.txt")

if file_path.exists():
    print("File exists")
else:
    print("File does not exits")