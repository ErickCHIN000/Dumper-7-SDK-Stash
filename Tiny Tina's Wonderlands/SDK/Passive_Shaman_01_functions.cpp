#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Passive_Shaman_01.Passive_Shaman_01_C
// (None)

class UClass* UPassive_Shaman_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Passive_Shaman_01_C");

	return Clss;
}


// Passive_Shaman_01_C Passive_Shaman_01.Default__Passive_Shaman_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPassive_Shaman_01_C* UPassive_Shaman_01_C::GetDefaultObj()
{
	static class UPassive_Shaman_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPassive_Shaman_01_C*>(UPassive_Shaman_01_C::StaticClass()->DefaultObject);

	return Default;
}

}


