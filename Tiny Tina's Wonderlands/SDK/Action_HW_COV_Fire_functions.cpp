#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_HW_COV_Fire.Action_HW_COV_Fire_C
// (None)

class UClass* UAction_HW_COV_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_HW_COV_Fire_C");

	return Clss;
}


// Action_HW_COV_Fire_C Action_HW_COV_Fire.Default__Action_HW_COV_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_HW_COV_Fire_C* UAction_HW_COV_Fire_C::GetDefaultObj()
{
	static class UAction_HW_COV_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_HW_COV_Fire_C*>(UAction_HW_COV_Fire_C::StaticClass()->DefaultObject);

	return Default;
}

}

