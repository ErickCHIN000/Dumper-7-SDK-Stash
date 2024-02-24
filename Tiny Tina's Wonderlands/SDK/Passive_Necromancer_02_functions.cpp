#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Passive_Necromancer_02.Passive_Necromancer_02_C
// (None)

class UClass* UPassive_Necromancer_02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Passive_Necromancer_02_C");

	return Clss;
}


// Passive_Necromancer_02_C Passive_Necromancer_02.Default__Passive_Necromancer_02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPassive_Necromancer_02_C* UPassive_Necromancer_02_C::GetDefaultObj()
{
	static class UPassive_Necromancer_02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPassive_Necromancer_02_C*>(UPassive_Necromancer_02_C::StaticClass()->DefaultObject);

	return Default;
}

}


