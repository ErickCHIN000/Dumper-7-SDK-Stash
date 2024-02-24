#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_AR_VLA_Bipod_Activate.Action_AR_VLA_Bipod_Activate_C
// (None)

class UClass* UAction_AR_VLA_Bipod_Activate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_AR_VLA_Bipod_Activate_C");

	return Clss;
}


// Action_AR_VLA_Bipod_Activate_C Action_AR_VLA_Bipod_Activate.Default__Action_AR_VLA_Bipod_Activate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_AR_VLA_Bipod_Activate_C* UAction_AR_VLA_Bipod_Activate_C::GetDefaultObj()
{
	static class UAction_AR_VLA_Bipod_Activate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_AR_VLA_Bipod_Activate_C*>(UAction_AR_VLA_Bipod_Activate_C::StaticClass()->DefaultObject);

	return Default;
}

}


