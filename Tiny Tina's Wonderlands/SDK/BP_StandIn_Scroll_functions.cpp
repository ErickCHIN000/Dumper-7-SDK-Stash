#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StandIn_Scroll.BP_StandIn_Scroll_C
// (Actor)

class UClass* ABP_StandIn_Scroll_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StandIn_Scroll_C");

	return Clss;
}


// BP_StandIn_Scroll_C BP_StandIn_Scroll.Default__BP_StandIn_Scroll_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_StandIn_Scroll_C* ABP_StandIn_Scroll_C::GetDefaultObj()
{
	static class ABP_StandIn_Scroll_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_StandIn_Scroll_C*>(ABP_StandIn_Scroll_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StandIn_Scroll.BP_StandIn_Scroll_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StandIn_Scroll_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StandIn_Scroll_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


