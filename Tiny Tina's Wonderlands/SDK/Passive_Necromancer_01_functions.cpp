#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Passive_Necromancer_01.Passive_Necromancer_01_C
// (None)

class UClass* UPassive_Necromancer_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Passive_Necromancer_01_C");

	return Clss;
}


// Passive_Necromancer_01_C Passive_Necromancer_01.Default__Passive_Necromancer_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPassive_Necromancer_01_C* UPassive_Necromancer_01_C::GetDefaultObj()
{
	static class UPassive_Necromancer_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPassive_Necromancer_01_C*>(UPassive_Necromancer_01_C::StaticClass()->DefaultObject);

	return Default;
}

}


