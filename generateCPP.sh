#!/bin/bash

curl "https://git.eclipse.org/r/plugins/gitiles/app4mc/org.eclipse.app4mc/+/refs/heads/master/plugins/org.eclipse.app4mc.amalthea.model/model-gen/ecore/amalthea.ecore?format=TEXT" | base64 --decode > AMALTHEA.ecore

sed -i 's+ecore.ecore#//+http://www.eclipse.org/emf/2002/Ecore#//+g' AMALTHEA.ecore
sed -i 's+name="model"+name="amalthea"+' AMALTHEA.ecore

if [ -d src-gen ]; then
  rm -rf src-gen/*
else
  mkdir src-gen
fi

java -jar generator/org.csu.emf4cpp.generator_2.0.0.jar -e libs/emf4cpp -o src-gen AMALTHEA.ecore

if [ -d builds ]; then
  rm -rf builds/*
else
  mkdir builds
fi

cd builds

cmake ../

cmake --build . -j16
