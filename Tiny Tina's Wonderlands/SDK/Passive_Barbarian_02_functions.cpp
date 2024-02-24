#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Passive_Barbarian_02.Passive_Barbarian_02_C
// (None)

class UClass* UPassive_Barbarian_02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Passive_Barbarian_02_C");

	return Clss;
}


// Passive_Barbarian_02_C Passive_Barbarian_02.Default__Passive_Barbarian_02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPassive_Barbarian_02_C* UPassive_Barbarian_02_C::GetDefaultObj()
{
	static class UPassive_Barbarian_02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPassive_Barbarian_02_C*>(UPassive_Barbarian_02_C::StaticClass()->DefaultObject);

	return Default;
}

}


