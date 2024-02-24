#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionableBehaviour_Deployable_LargeDeployable.BP_ActionableBehaviour_Deployable_LargeDeployable_C
// (None)

class UClass* UBP_ActionableBehaviour_Deployable_LargeDeployable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionableBehaviour_Deployable_LargeDeployable_C");

	return Clss;
}


// BP_ActionableBehaviour_Deployable_LargeDeployable_C BP_ActionableBehaviour_Deployable_LargeDeployable.Default__BP_ActionableBehaviour_Deployable_LargeDeployable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionableBehaviour_Deployable_LargeDeployable_C* UBP_ActionableBehaviour_Deployable_LargeDeployable_C::GetDefaultObj()
{
	static class UBP_ActionableBehaviour_Deployable_LargeDeployable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionableBehaviour_Deployable_LargeDeployable_C*>(UBP_ActionableBehaviour_Deployable_LargeDeployable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionableBehaviour_Deployable_LargeDeployable.BP_ActionableBehaviour_Deployable_LargeDeployable_C.OnDeploy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADeployable*                 SpawnedDeployable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Deployable_LargeDeployable_C::OnDeploy(class ADeployable* SpawnedDeployable, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Deployable_LargeDeployable_C", "OnDeploy");

	Params::UBP_ActionableBehaviour_Deployable_LargeDeployable_C_OnDeploy_Params Parms{};

	Parms.SpawnedDeployable = SpawnedDeployable;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


