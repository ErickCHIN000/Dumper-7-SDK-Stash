#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PatrolPath.BP_PatrolPath_C
// (Actor)

class UClass* ABP_PatrolPath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PatrolPath_C");

	return Clss;
}


// BP_PatrolPath_C BP_PatrolPath.Default__BP_PatrolPath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PatrolPath_C* ABP_PatrolPath_C::GetDefaultObj()
{
	static class ABP_PatrolPath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PatrolPath_C*>(ABP_PatrolPath_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PatrolPath.BP_PatrolPath_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PatrolPath_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PatrolPath_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


