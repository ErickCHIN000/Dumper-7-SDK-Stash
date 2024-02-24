#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_HW_VLA_PutDown.Action_HW_VLA_PutDown_C
// (None)

class UClass* UAction_HW_VLA_PutDown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_HW_VLA_PutDown_C");

	return Clss;
}


// Action_HW_VLA_PutDown_C Action_HW_VLA_PutDown.Default__Action_HW_VLA_PutDown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_HW_VLA_PutDown_C* UAction_HW_VLA_PutDown_C::GetDefaultObj()
{
	static class UAction_HW_VLA_PutDown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_HW_VLA_PutDown_C*>(UAction_HW_VLA_PutDown_C::StaticClass()->DefaultObject);

	return Default;
}

}


