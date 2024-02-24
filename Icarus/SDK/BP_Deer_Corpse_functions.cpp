#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Deer_Corpse.BP_Deer_Corpse_C
// (Actor)

class UClass* ABP_Deer_Corpse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Deer_Corpse_C");

	return Clss;
}


// BP_Deer_Corpse_C BP_Deer_Corpse.Default__BP_Deer_Corpse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Deer_Corpse_C* ABP_Deer_Corpse_C::GetDefaultObj()
{
	static class ABP_Deer_Corpse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Deer_Corpse_C*>(ABP_Deer_Corpse_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Deer_Corpse.BP_Deer_Corpse_C.OnSkinnedStateUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Deer_Corpse_C::OnSkinnedStateUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deer_Corpse_C", "OnSkinnedStateUpdated");



	UObject::ProcessEvent(Func, nullptr);

}

}


