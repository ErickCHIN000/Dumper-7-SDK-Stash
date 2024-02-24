#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Passive_Rogue_07.Passive_Rogue_07_C
// (None)

class UClass* UPassive_Rogue_07_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Passive_Rogue_07_C");

	return Clss;
}


// Passive_Rogue_07_C Passive_Rogue_07.Default__Passive_Rogue_07_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPassive_Rogue_07_C* UPassive_Rogue_07_C::GetDefaultObj()
{
	static class UPassive_Rogue_07_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPassive_Rogue_07_C*>(UPassive_Rogue_07_C::StaticClass()->DefaultObject);

	return Default;
}

}


