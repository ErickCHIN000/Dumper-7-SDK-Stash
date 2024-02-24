#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Passive_Barbarian_04.Passive_Barbarian_04_C
// (None)

class UClass* UPassive_Barbarian_04_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Passive_Barbarian_04_C");

	return Clss;
}


// Passive_Barbarian_04_C Passive_Barbarian_04.Default__Passive_Barbarian_04_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPassive_Barbarian_04_C* UPassive_Barbarian_04_C::GetDefaultObj()
{
	static class UPassive_Barbarian_04_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPassive_Barbarian_04_C*>(UPassive_Barbarian_04_C::StaticClass()->DefaultObject);

	return Default;
}

}


