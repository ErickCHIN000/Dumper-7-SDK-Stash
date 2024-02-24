#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GbxJira.GbxJiraSettings
// (None)

class UClass* UGbxJiraSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxJiraSettings");

	return Clss;
}


// GbxJiraSettings GbxJira.Default__GbxJiraSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxJiraSettings* UGbxJiraSettings::GetDefaultObj()
{
	static class UGbxJiraSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxJiraSettings*>(UGbxJiraSettings::StaticClass()->DefaultObject);

	return Default;
}

}


