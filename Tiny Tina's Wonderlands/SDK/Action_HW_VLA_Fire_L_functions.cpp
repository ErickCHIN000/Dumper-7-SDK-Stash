#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_HW_VLA_Fire_L.Action_HW_VLA_Fire_L_C
// (None)

class UClass* UAction_HW_VLA_Fire_L_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_HW_VLA_Fire_L_C");

	return Clss;
}


// Action_HW_VLA_Fire_L_C Action_HW_VLA_Fire_L.Default__Action_HW_VLA_Fire_L_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_HW_VLA_Fire_L_C* UAction_HW_VLA_Fire_L_C::GetDefaultObj()
{
	static class UAction_HW_VLA_Fire_L_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_HW_VLA_Fire_L_C*>(UAction_HW_VLA_Fire_L_C::StaticClass()->DefaultObject);

	return Default;
}

}


