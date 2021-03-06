/*
 BEXSLT.h
 BaseElements Plug-In
 
 Copyright 2010-2018 Goya. All rights reserved.
 For conditions of distribution and use please see the copyright notice in BEPlugin.cpp
 
 http://www.goya.com.au/baseelements/plugin
 
 */


#if !defined(BEXSLT_H)
	#define BEXSLT_H


#include "BEPluginUtilities.h"

#include <boost/filesystem/path.hpp>

#include <libxml/xpathInternals.h>


void InitialiseLibXSLT ( void );
void CleanupLibXSLT ( void );

const std::string ApplyXSLTInMemory ( const std::string& xml, const std::string& xslt, const boost::filesystem::path csv_path = "", const boost::filesystem::path xml_path = "" );
const std::string ApplyXPathExpression ( const std::string& xml, const std::string& xpath, const std::string& ns_list, const xmlXPathObjectType xpath_object_type = XPATH_STRING );

#endif // BEXSLT_H
