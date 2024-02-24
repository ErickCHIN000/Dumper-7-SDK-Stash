#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionableBehaviour_Firearm_AmmoController_WithAbort.BP_ActionableBehaviour_Firearm_AmmoController_WithAbort_C
// (None)

class UClass* UBP_ActionableBehaviour_Firearm_AmmoController_WithAbort_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionableBehaviour_Firearm_AmmoController_WithAbort_C");

	return Clss;
}


// BP_ActionableBehaviour_Firearm_AmmoController_WithAbort_C BP_ActionableBehaviour_Firearm_AmmoController_WithAbort.Default__BP_ActionableBehaviour_Firearm_AmmoController_WithAbort_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionableBehaviour_Firearm_AmmoController_WithAbort_C* UBP_ActionableBehaviour_Firearm_AmmoController_WithAbort_C::GetDefaultObj()
{
	static class UBP_ActionableBehaviour_Firearm_AmmoController_WithAbort_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionableBehaviour_Firearm_AmmoController_WithAbort_C*>(UBP_ActionableBehaviour_Firearm_AmmoController_WithAbort_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionableBehaviour_Firearm_AmmoController_WithAbort.BP_ActionableBehaviour_Firearm_AmmoController_WithAbort_C.CanAbortReload
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               CanAbort                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AmmoController_WithAbort_C::CanAbortReload(bool* CanAbort)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_WithAbort_C", "CanAbortReload");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_WithAbort_C_CanAbortReload_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CanAbort != nullptr)
		*CanAbort = Parms.CanAbort;

}

}


