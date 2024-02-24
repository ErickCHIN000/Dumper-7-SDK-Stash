#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Bifrost.BifrostSettings
// (None)

class UClass* UBifrostSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BifrostSettings");

	return Clss;
}


// BifrostSettings Bifrost.Default__BifrostSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UBifrostSettings* UBifrostSettings::GetDefaultObj()
{
	static class UBifrostSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UBifrostSettings*>(UBifrostSettings::StaticClass()->DefaultObject);

	return Default;
}

}


