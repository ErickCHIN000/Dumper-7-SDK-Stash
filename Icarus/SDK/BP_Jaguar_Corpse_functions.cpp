#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Jaguar_Corpse.BP_Jaguar_Corpse_C
// (Actor)

class UClass* ABP_Jaguar_Corpse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Jaguar_Corpse_C");

	return Clss;
}


// BP_Jaguar_Corpse_C BP_Jaguar_Corpse.Default__BP_Jaguar_Corpse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Jaguar_Corpse_C* ABP_Jaguar_Corpse_C::GetDefaultObj()
{
	static class ABP_Jaguar_Corpse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Jaguar_Corpse_C*>(ABP_Jaguar_Corpse_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Jaguar_Corpse.BP_Jaguar_Corpse_C.OnSkinnedStateUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Jaguar_Corpse_C::OnSkinnedStateUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Jaguar_Corpse_C", "OnSkinnedStateUpdated");



	UObject::ProcessEvent(Func, nullptr);

}

}

