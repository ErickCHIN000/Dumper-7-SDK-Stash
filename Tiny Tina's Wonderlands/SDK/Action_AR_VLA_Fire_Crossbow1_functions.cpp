#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_AR_VLA_Fire_Crossbow1.Action_AR_VLA_Fire_Crossbow1_C
// (None)

class UClass* UAction_AR_VLA_Fire_Crossbow1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_AR_VLA_Fire_Crossbow1_C");

	return Clss;
}


// Action_AR_VLA_Fire_Crossbow1_C Action_AR_VLA_Fire_Crossbow1.Default__Action_AR_VLA_Fire_Crossbow1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_AR_VLA_Fire_Crossbow1_C* UAction_AR_VLA_Fire_Crossbow1_C::GetDefaultObj()
{
	static class UAction_AR_VLA_Fire_Crossbow1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_AR_VLA_Fire_Crossbow1_C*>(UAction_AR_VLA_Fire_Crossbow1_C::StaticClass()->DefaultObject);

	return Default;
}

}


