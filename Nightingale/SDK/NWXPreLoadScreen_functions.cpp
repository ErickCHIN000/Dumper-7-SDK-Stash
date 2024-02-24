#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class NWXPreLoadScreen.NWXPreLoadScreenSettings
// (None)

class UClass* UNWXPreLoadScreenSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NWXPreLoadScreenSettings");

	return Clss;
}


// NWXPreLoadScreenSettings NWXPreLoadScreen.Default__NWXPreLoadScreenSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UNWXPreLoadScreenSettings* UNWXPreLoadScreenSettings::GetDefaultObj()
{
	static class UNWXPreLoadScreenSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UNWXPreLoadScreenSettings*>(UNWXPreLoadScreenSettings::StaticClass()->DefaultObject);

	return Default;
}

}


