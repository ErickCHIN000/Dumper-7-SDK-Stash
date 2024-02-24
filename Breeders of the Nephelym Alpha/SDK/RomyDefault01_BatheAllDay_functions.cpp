#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RomyDefault01_BatheAllDay.RomyDefault01_BatheAllDay_C
// (None)

class UClass* URomyDefault01_BatheAllDay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RomyDefault01_BatheAllDay_C");

	return Clss;
}


// RomyDefault01_BatheAllDay_C RomyDefault01_BatheAllDay.Default__RomyDefault01_BatheAllDay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URomyDefault01_BatheAllDay_C* URomyDefault01_BatheAllDay_C::GetDefaultObj()
{
	static class URomyDefault01_BatheAllDay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URomyDefault01_BatheAllDay_C*>(URomyDefault01_BatheAllDay_C::StaticClass()->DefaultObject);

	return Default;
}

}


