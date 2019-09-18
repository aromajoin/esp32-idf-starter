if(IDF_VERSION_MAJOR GREATER_EQUAL 4)
  idf_component_register(SRC_DIRS "."
    REQUIRES ""
    INCLUDE_DIRS "include"
    EMBED_FILES ""
    EMBED_TXTFILES "")
else()
  set(COMPONENT_REQUIRES "")
  set(COMPONENT_PRIV_REQUIRES "")
  set(COMPONENT_SRCDIRS ".")
  set(COMPONENT_ADD_INCLUDEDIRS "")
  register_component()
endif()
