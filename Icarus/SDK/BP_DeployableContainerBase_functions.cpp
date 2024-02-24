#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DeployableContainerBase.BP_DeployableContainerBase_C
// (Actor)

class UClass* ABP_DeployableContainerBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DeployableContainerBase_C");

	return Clss;
}


// BP_DeployableContainerBase_C BP_DeployableContainerBase.Default__BP_DeployableContainerBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DeployableContainerBase_C* ABP_DeployableContainerBase_C::GetDefaultObj()
{
	static class ABP_DeployableContainerBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DeployableContainerBase_C*>(ABP_DeployableContainerBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DeployableContainerBase.BP_DeployableContainerBase_C.Deployable_Interact
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Interactor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerControllerSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DeployableContainerBase_C::Deployable_Interact(class AActor* Interactor, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeployableContainerBase_C", "Deployable_Interact");

	Params::ABP_DeployableContainerBase_C_Deployable_Interact_Params Parms{};

	Parms.Interactor = Interactor;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DeployableContainerBase.BP_DeployableContainerBase_C.OnBecomeInteractedWith
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DeployableContainerBase_C::OnBecomeInteractedWith()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeployableContainerBase_C", "OnBecomeInteractedWith");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DeployableContainerBase.BP_DeployableContainerBase_C.OnNoLongerInteractedWith
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DeployableContainerBase_C::OnNoLongerInteractedWith()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeployableContainerBase_C", "OnNoLongerInteractedWith");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DeployableContainerBase.BP_DeployableContainerBase_C.ExecuteUbergraph_BP_DeployableContainerBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeployableContainerBase_C::ExecuteUbergraph_BP_DeployableContainerBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeployableContainerBase_C", "ExecuteUbergraph_BP_DeployableContainerBase");

	Params::ABP_DeployableContainerBase_C_ExecuteUbergraph_BP_DeployableContainerBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


