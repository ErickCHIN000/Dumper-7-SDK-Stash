#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ScoutParryAction.BP_ScoutParryAction_C
// (None)

class UClass* UBP_ScoutParryAction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ScoutParryAction_C");

	return Clss;
}


// BP_ScoutParryAction_C BP_ScoutParryAction.Default__BP_ScoutParryAction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ScoutParryAction_C* UBP_ScoutParryAction_C::GetDefaultObj()
{
	static class UBP_ScoutParryAction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ScoutParryAction_C*>(UBP_ScoutParryAction_C::StaticClass()->DefaultObject);

	return Default;
}

}


