	configure_file(AM4CPPConfig.cmake.in AM4CPPConfig.cmake @ONLY)
	
	include(CMakePackageConfigHelpers)
	write_basic_package_version_file(
	    "${CMAKE_CURRENT_BINARY_DIR}/AM4CPPConfigVersion.cmake"
	    VERSION ${PROJECT_VERSION}
	    COMPATIBILITY SameMajorVersion) # TODO
	
	export(EXPORT AM4CPP
	    FILE "${CMAKE_CURRENT_BINARY_DIR}/AM4CPPTargets.cmake"
	    NAMESPACE AM4CPP::)
	
	install(EXPORT AM4CPP DESTINATION lib/cmake/AM4CPP
	    FILE AM4CPPTargets.cmake
	    NAMESPACE AM4CPP::)
	
	install(FILES
	    "${CMAKE_CURRENT_BINARY_DIR}/AM4CPPConfig.cmake"
	    "${CMAKE_CURRENT_BINARY_DIR}/AM4CPPConfigVersion.cmake"
	    DESTINATION lib/cmake/AM4CPP)
	