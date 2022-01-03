#!/bin/bash

NON_OPT="/home/rushhub/ugrc/x10/x10.dist/bin/x10c++"
# NON_OPT="/home/rushhub/ugrc/ae-atOpt-pact2018/AE/Manual/x10-base/x10.dist/bin/x10c++"
OPT="/home/rushhub/ugrc/ae-atOpt-pact2018/AE/Manual/x10-atOpt/x10.dist/bin/x10c++"

EXAMPLES_FOLDER=$PWD
allFiles=""
flagFiles=0
inputPath=""
onlyOPT=0

while [[ $# -gt 0 ]];
do

    key="$1"
    case $key in

    -h|--help) 
        echo "Use the following flags:"
        echo -e " -h or --help \t Help document for the flags"
        echo -e " -e \t\t set the path for examples folder"
        echo -e " -i \t\t Builds only the given files. Write all the files name in a space-separated form of string"
        echo -e " -o \t\t only opt code to be run"
        exit 1
        ;;
    -i) 
        shift
        flagFiles=1
        inputPath="$1"
        
        shift
        ;;
    -e) 
        shift
        path=$1
        EXAMPLES_FOLDER="${PWD}/${path}"
        shift
        ;;
    -o) onlyOPT=1
        shift
        ;;
    *) 
        echo "INCORRECT ARGUMENT"
        exit 1
    esac

done

# echo $EXAMPLES_FOLDER


if [[ $flagFiles -eq 0 ]]; then
    for fileName in ${EXAMPLES_FOLDER}/*.x10;
    do
        allFiles="$allFiles $fileName"
    done
else
    for fileName in $inputPath;
    do
        allFiles="$allFiles ${EXAMPLES_FOLDER}/$fileName"
    done
fi

echo $allFiles

# echo $(ls $EXAMPLES_FOLDER)

if [[ $onlyOPT -eq 0 ]]; then
    echo "Running non opt version"
    cd ${PWD}/nonOpt
    for str in $allFiles; do
        $NON_OPT -x10rt sockets $str
    done
    cd ..
fi

echo "Running opt version"
cd ${PWD}/opt
for str in $allFiles; do
    $OPT -x10rt sockets $str
done
cd ..

