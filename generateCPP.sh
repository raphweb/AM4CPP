#!/bin/bash

curl "https://git.eclipse.org/r/plugins/gitiles/app4mc/org.eclipse.app4mc/+/refs/heads/master/plugins/org.eclipse.app4mc.amalthea.model/model-gen/ecore/amalthea.ecore?format=TEXT" | base64 --decode > am4cpp.ecore

sed -i 's+ecore.ecore#//+http://www.eclipse.org/emf/2002/Ecore#//+g' am4cpp.ecore
sed -i 's+name="model"+name="amalthea"+' am4cpp.ecore

if [ -d src-gen ]; then
  rm -rf src-gen/*
else
  mkdir src-gen
fi

libs/emf4cpp/org.csu.emf4cpp.generator/emf4cpp.generator.sh -e libs/emf4cpp -o src-gen am4cpp.ecore
