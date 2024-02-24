#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_HW_VLA_Fire_R.Action_HW_VLA_Fire_R_C
// (None)

class UClass* UAction_HW_VLA_Fire_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_HW_VLA_Fire_R_C");

	return Clss;
}


// Action_HW_VLA_Fire_R_C Action_HW_VLA_Fire_R.Default__Action_HW_VLA_Fire_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_HW_VLA_Fire_R_C* UAction_HW_VLA_Fire_R_C::GetDefaultObj()
{
	static class UAction_HW_VLA_Fire_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_HW_VLA_Fire_R_C*>(UAction_HW_VLA_Fire_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


