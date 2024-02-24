#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_AR_VLA_Bipod_Return.Action_AR_VLA_Bipod_Return_C
// (None)

class UClass* UAction_AR_VLA_Bipod_Return_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_AR_VLA_Bipod_Return_C");

	return Clss;
}


// Action_AR_VLA_Bipod_Return_C Action_AR_VLA_Bipod_Return.Default__Action_AR_VLA_Bipod_Return_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_AR_VLA_Bipod_Return_C* UAction_AR_VLA_Bipod_Return_C::GetDefaultObj()
{
	static class UAction_AR_VLA_Bipod_Return_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_AR_VLA_Bipod_Return_C*>(UAction_AR_VLA_Bipod_Return_C::StaticClass()->DefaultObject);

	return Default;
}

}


