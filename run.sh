#!/bin/bash

# Check if a filename was provided
if [ "$#" -ne 1 ]; then
    echo "Usage: $0 <source-file>"
    exit 1
fi

# Get the source file name
SOURCE_FILE="$1"

# Extract the base name (without extension) for the executable
BASE_NAME=$(basename "$SOURCE_FILE" .c)

# Compile the source file
gcc -o "$BASE_NAME" "$SOURCE_FILE"

# Check if the compilation was successful
if [ $? -ne 0 ]; then
    echo "Compilation failed!"
    exit 1
fi

# Run the executable
./"$BASE_NAME"

# Remove the executable
rm -f "$BASE_NAME"
