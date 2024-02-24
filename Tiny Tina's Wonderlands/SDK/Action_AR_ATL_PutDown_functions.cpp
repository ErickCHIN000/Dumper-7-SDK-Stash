#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_AR_ATL_PutDown.Action_AR_ATL_PutDown_C
// (None)

class UClass* UAction_AR_ATL_PutDown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_AR_ATL_PutDown_C");

	return Clss;
}


// Action_AR_ATL_PutDown_C Action_AR_ATL_PutDown.Default__Action_AR_ATL_PutDown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_AR_ATL_PutDown_C* UAction_AR_ATL_PutDown_C::GetDefaultObj()
{
	static class UAction_AR_ATL_PutDown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_AR_ATL_PutDown_C*>(UAction_AR_ATL_PutDown_C::StaticClass()->DefaultObject);

	return Default;
}

}


