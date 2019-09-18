#
# "main" pseudo-component makefile.
#
# (Uses default behaviour of compiling all source files in directory, adding 'include' to include path.)
#
# Main component makefile.
#
COMPONENT_REQUIRES := nvs_flash
COMPONENT_ADD_INCLUDEDIRS := include
COMPONENT_EMBED_FILES := ""
COMPONENT_EMBED_TXTFILES := ""
COMPONENT_SRC := "main.c"