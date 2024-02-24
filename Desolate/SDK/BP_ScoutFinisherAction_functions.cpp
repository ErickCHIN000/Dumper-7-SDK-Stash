#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ScoutFinisherAction.BP_ScoutFinisherAction_C
// (None)

class UClass* UBP_ScoutFinisherAction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ScoutFinisherAction_C");

	return Clss;
}


// BP_ScoutFinisherAction_C BP_ScoutFinisherAction.Default__BP_ScoutFinisherAction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ScoutFinisherAction_C* UBP_ScoutFinisherAction_C::GetDefaultObj()
{
	static class UBP_ScoutFinisherAction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ScoutFinisherAction_C*>(UBP_ScoutFinisherAction_C::StaticClass()->DefaultObject);

	return Default;
}

}


