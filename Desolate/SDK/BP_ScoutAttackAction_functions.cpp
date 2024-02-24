#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ScoutAttackAction.BP_ScoutAttackAction_C
// (None)

class UClass* UBP_ScoutAttackAction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ScoutAttackAction_C");

	return Clss;
}


// BP_ScoutAttackAction_C BP_ScoutAttackAction.Default__BP_ScoutAttackAction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ScoutAttackAction_C* UBP_ScoutAttackAction_C::GetDefaultObj()
{
	static class UBP_ScoutAttackAction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ScoutAttackAction_C*>(UBP_ScoutAttackAction_C::StaticClass()->DefaultObject);

	return Default;
}

}


