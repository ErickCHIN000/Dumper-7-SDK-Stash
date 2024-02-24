#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MainEnemy.BP_MainEnemy_C
// (Actor, Pawn)

class UClass* ABP_MainEnemy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MainEnemy_C");

	return Clss;
}


// BP_MainEnemy_C BP_MainEnemy.Default__BP_MainEnemy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MainEnemy_C* ABP_MainEnemy_C::GetDefaultObj()
{
	static class ABP_MainEnemy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MainEnemy_C*>(ABP_MainEnemy_C::StaticClass()->DefaultObject);

	return Default;
}

}


