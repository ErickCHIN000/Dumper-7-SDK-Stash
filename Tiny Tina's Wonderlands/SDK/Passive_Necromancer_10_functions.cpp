#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Passive_Necromancer_10.Passive_Necromancer_10_C
// (None)

class UClass* UPassive_Necromancer_10_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Passive_Necromancer_10_C");

	return Clss;
}


// Passive_Necromancer_10_C Passive_Necromancer_10.Default__Passive_Necromancer_10_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPassive_Necromancer_10_C* UPassive_Necromancer_10_C::GetDefaultObj()
{
	static class UPassive_Necromancer_10_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPassive_Necromancer_10_C*>(UPassive_Necromancer_10_C::StaticClass()->DefaultObject);

	return Default;
}

}


