#!/bin/bash

curl "https://git.eclipse.org/r/plugins/gitiles/app4mc/org.eclipse.app4mc/+/refs/heads/master/plugins/org.eclipse.app4mc.amalthea.model/model-gen/ecore/amalthea.ecore?format=TEXT" | base64 --decode > amalthea.ecore

sed -i 's+ecore.ecore#//+http://www.eclipse.org/emf/2002/Ecore#//+g' amalthea.ecore
sed -i 's+name="model"+name="amalthea"+' amalthea.ecore

java -jar libs/emf4cpp/org.csu.emf4cpp.generator/org.csu.emf4cpp.generator_2.0.0.jar -e libs/emf4cpp -o src-gen amalthea.ecore
