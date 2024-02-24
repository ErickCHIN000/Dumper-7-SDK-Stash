#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Water.Water_C
// (Actor)

class UClass* AWater_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Water_C");

	return Clss;
}


// Water_C Water.Default__Water_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWater_C* AWater_C::GetDefaultObj()
{
	static class AWater_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWater_C*>(AWater_C::StaticClass()->DefaultObject);

	return Default;
}

}


