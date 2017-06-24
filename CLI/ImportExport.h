#ifndef _ImportExport_h
#define _ImportExport_h

// Import/Export stuff for DLLs
# if defined(IN_CLI)
#  define TTPanelledSCP_IMPORTEXPORT __declspec(dllexport)
# else
#  define TTPanelledSCP_IMPORTEXPORT __declspec(dllimport)
# endif


#endif
