#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionableBehaviour_FireArm_FireController_SemiAuto.BP_ActionableBehaviour_FireArm_FireController_SemiAuto_C
// (None)

class UClass* UBP_ActionableBehaviour_FireArm_FireController_SemiAuto_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionableBehaviour_FireArm_FireController_SemiAuto_C");

	return Clss;
}


// BP_ActionableBehaviour_FireArm_FireController_SemiAuto_C BP_ActionableBehaviour_FireArm_FireController_SemiAuto.Default__BP_ActionableBehaviour_FireArm_FireController_SemiAuto_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionableBehaviour_FireArm_FireController_SemiAuto_C* UBP_ActionableBehaviour_FireArm_FireController_SemiAuto_C::GetDefaultObj()
{
	static class UBP_ActionableBehaviour_FireArm_FireController_SemiAuto_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionableBehaviour_FireArm_FireController_SemiAuto_C*>(UBP_ActionableBehaviour_FireArm_FireController_SemiAuto_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionableBehaviour_FireArm_FireController_SemiAuto.BP_ActionableBehaviour_FireArm_FireController_SemiAuto_C.GetRefireRate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              RefireRate                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_FireArm_FireController_SemiAuto_C::GetRefireRate(float* RefireRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_FireArm_FireController_SemiAuto_C", "GetRefireRate");

	Params::UBP_ActionableBehaviour_FireArm_FireController_SemiAuto_C_GetRefireRate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (RefireRate != nullptr)
		*RefireRate = Parms.RefireRate;

}

}


