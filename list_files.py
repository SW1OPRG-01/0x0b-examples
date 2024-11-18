import os

def list_files(directory, extension=""):
    """
    List all files in the given directory with the specified extension.
    """
    return [
        f for f in os.listdir(directory)
        if os.path.isfile(os.path.join(directory, f)) and f.endswith(extension)
    ]

def main():
    # Specify the directory and file extension
    directory = "./"  # Root directory of the workspace
    extension = ""    # Leave empty to list all files, or use ".exe", ".sh", etc.
    
    files = list_files(directory, extension)
    if not files:
        print("No files found.")
        return

    # Display files and prompt for selection
    print("Select a file to run:")
    for idx, file in enumerate(files, 1):
        print(f"{idx}: {file}")

    try:
        choice = int(input("\nEnter the number of the file: ")) - 1
        if 0 <= choice < len(files):
            selected_file = os.path.abspath(os.path.join(directory, files[choice]))
            with open("selected_file.txt", "w") as f:
                f.write(selected_file)
            print(f"Selected file: {selected_file}")
        else:
            print("Invalid choice.")
    except ValueError:
        print("Please enter a valid number.")

if __name__ == "__main__":
    main()
