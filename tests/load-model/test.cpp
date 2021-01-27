#include <ecorecpp.hpp>
#include <amalthea.hpp>
#include <amalthea/AmaltheaPackage.hpp>
#include <iostream>
#include <fstream>

int main(int argc, char* argv[]) {
		::ecore::EPackage_ptr _epkg = ::amalthea::AmaltheaPackage::_instance();

		::ecorecpp::MetaModelRepository::_instance()->load(_epkg);
		
		//std::cout << _epkg->getName() << std::endl;

		if (argc > 1) {
				::ecorecpp::parser::parser _parser;
				::ecore::EObject_ptr _eobj = _parser.load(argv[1]);

				assert(_eobj);
				std::ofstream outfile ("test.amxmi");
				::ecorecpp::serializer::serializer ser(outfile);
				ser.serialize(_eobj);
		}
}
