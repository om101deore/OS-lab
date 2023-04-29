#!/bin/bash

echo "1. Create Addressbook"
echo "2. View Addressbook"
echo "3. Insert Record"
echo "4. Delete Record"
echo "5. Modify Record"
echo "6. Exit"
echo "Select action you want to perform:"
read opt

# variables
FILE=book.txt


case "$opt" in
    # Creating Addressbook
    1)
        
        RUN=1

        while [[ RUN -ne 0 ]]; do
            echo "Enter Name to be inserted:"
            read NAME
            echo "Enter Number to be inserted:"
            read NUMBER
            
            echo "$NAME          $NUMBER" >> $FILE;

            echo "Do u want to keep inserting?"
            echo "0: no, 1: yes"
            read RUN

        done
        
    ;;
    
    # View Addressbook
    2) 
        if [[ -f "$FILE"  ]]; then
            echo ""
            echo "*************** Addressbook ***************"
            cat "$FILE"
            
        else
            echo "$FILE doesn't exist"
        fi
    ;;

    # Insert Record
    3)
        echo "Enter Name to be inserted:"
        read NAME
        echo "Enter Number to be inserted:"
        read NUMBER
        
        echo "$NAME          $NUMBER" >> $FILE;

    ;;

    # Delete Record
    4) 
        echo "Enter Name to be Deleted:"
        read NAME

        # outputs everything but line with $NAME
        grep -vi "$NAME" "$FILE" > temp.txt;
        rm $FILE
        mv temp.txt book.txt
    ;;
        
    # Modify
    5)
    echo "Enter Name to be Modified:"
    read NAME

    echo "Enter new Name:"
    read NEW_NAME

    echo "Enter new number:"
    read NEW_NUMBER

    sed -i "s/^.*$NAME.*$/$NEW_NAME           $NEW_NUMBER/" $FILE
    ;;
        
    *) 
        echo "Byee"
    ;;
esac

