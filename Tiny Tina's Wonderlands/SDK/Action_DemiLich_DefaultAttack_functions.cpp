#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_DemiLich_DefaultAttack.Action_DemiLich_DefaultAttack_C
// (None)

class UClass* UAction_DemiLich_DefaultAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_DemiLich_DefaultAttack_C");

	return Clss;
}


// Action_DemiLich_DefaultAttack_C Action_DemiLich_DefaultAttack.Default__Action_DemiLich_DefaultAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_DemiLich_DefaultAttack_C* UAction_DemiLich_DefaultAttack_C::GetDefaultObj()
{
	static class UAction_DemiLich_DefaultAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_DemiLich_DefaultAttack_C*>(UAction_DemiLich_DefaultAttack_C::StaticClass()->DefaultObject);

	return Default;
}

}


