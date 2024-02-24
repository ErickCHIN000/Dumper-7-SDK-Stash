#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_HW_VLA_Fire_Underbarrel.Action_HW_VLA_Fire_Underbarrel_C
// (None)

class UClass* UAction_HW_VLA_Fire_Underbarrel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_HW_VLA_Fire_Underbarrel_C");

	return Clss;
}


// Action_HW_VLA_Fire_Underbarrel_C Action_HW_VLA_Fire_Underbarrel.Default__Action_HW_VLA_Fire_Underbarrel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_HW_VLA_Fire_Underbarrel_C* UAction_HW_VLA_Fire_Underbarrel_C::GetDefaultObj()
{
	static class UAction_HW_VLA_Fire_Underbarrel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_HW_VLA_Fire_Underbarrel_C*>(UAction_HW_VLA_Fire_Underbarrel_C::StaticClass()->DefaultObject);

	return Default;
}

}


