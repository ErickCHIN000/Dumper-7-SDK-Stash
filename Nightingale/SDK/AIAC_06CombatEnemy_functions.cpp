#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIAC_06CombatEnemy.AIAC_06CombatEnemy_C
// (None)

class UClass* UAIAC_06CombatEnemy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAC_06CombatEnemy_C");

	return Clss;
}


// AIAC_06CombatEnemy_C AIAC_06CombatEnemy.Default__AIAC_06CombatEnemy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAC_06CombatEnemy_C* UAIAC_06CombatEnemy_C::GetDefaultObj()
{
	static class UAIAC_06CombatEnemy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAC_06CombatEnemy_C*>(UAIAC_06CombatEnemy_C::StaticClass()->DefaultObject);

	return Default;
}

}


