#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_AR_VLA_FireUnderbarrel.Action_AR_VLA_FireUnderbarrel_C
// (None)

class UClass* UAction_AR_VLA_FireUnderbarrel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_AR_VLA_FireUnderbarrel_C");

	return Clss;
}


// Action_AR_VLA_FireUnderbarrel_C Action_AR_VLA_FireUnderbarrel.Default__Action_AR_VLA_FireUnderbarrel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_AR_VLA_FireUnderbarrel_C* UAction_AR_VLA_FireUnderbarrel_C::GetDefaultObj()
{
	static class UAction_AR_VLA_FireUnderbarrel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_AR_VLA_FireUnderbarrel_C*>(UAction_AR_VLA_FireUnderbarrel_C::StaticClass()->DefaultObject);

	return Default;
}

}


