#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Bear_Corpse.BP_Bear_Corpse_C
// (Actor)

class UClass* ABP_Bear_Corpse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Bear_Corpse_C");

	return Clss;
}


// BP_Bear_Corpse_C BP_Bear_Corpse.Default__BP_Bear_Corpse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Bear_Corpse_C* ABP_Bear_Corpse_C::GetDefaultObj()
{
	static class ABP_Bear_Corpse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Bear_Corpse_C*>(ABP_Bear_Corpse_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Bear_Corpse.BP_Bear_Corpse_C.OnSkinnedStateUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Bear_Corpse_C::OnSkinnedStateUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Bear_Corpse_C", "OnSkinnedStateUpdated");



	UObject::ProcessEvent(Func, nullptr);

}

}


