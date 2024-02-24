#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_NavLerpDefault.Action_NavLerpDefault_C
// (None)

class UClass* UAction_NavLerpDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_NavLerpDefault_C");

	return Clss;
}


// Action_NavLerpDefault_C Action_NavLerpDefault.Default__Action_NavLerpDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_NavLerpDefault_C* UAction_NavLerpDefault_C::GetDefaultObj()
{
	static class UAction_NavLerpDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_NavLerpDefault_C*>(UAction_NavLerpDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


