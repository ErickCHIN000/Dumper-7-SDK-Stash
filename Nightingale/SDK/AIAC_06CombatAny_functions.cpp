#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIAC_06CombatAny.AIAC_06CombatAny_C
// (None)

class UClass* UAIAC_06CombatAny_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAC_06CombatAny_C");

	return Clss;
}


// AIAC_06CombatAny_C AIAC_06CombatAny.Default__AIAC_06CombatAny_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAC_06CombatAny_C* UAIAC_06CombatAny_C::GetDefaultObj()
{
	static class UAIAC_06CombatAny_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAC_06CombatAny_C*>(UAIAC_06CombatAny_C::StaticClass()->DefaultObject);

	return Default;
}

}


