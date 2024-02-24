#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_StandIn_BodyChangev1.Action_StandIn_BodyChangev1_C
// (None)

class UClass* UAction_StandIn_BodyChangev1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_StandIn_BodyChangev1_C");

	return Clss;
}


// Action_StandIn_BodyChangev1_C Action_StandIn_BodyChangev1.Default__Action_StandIn_BodyChangev1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_StandIn_BodyChangev1_C* UAction_StandIn_BodyChangev1_C::GetDefaultObj()
{
	static class UAction_StandIn_BodyChangev1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_StandIn_BodyChangev1_C*>(UAction_StandIn_BodyChangev1_C::StaticClass()->DefaultObject);

	return Default;
}

}


