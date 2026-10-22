

from pathlib import Path;

file_path = Path("student.txt")

if file_path.is_file():
    print("This is a file")