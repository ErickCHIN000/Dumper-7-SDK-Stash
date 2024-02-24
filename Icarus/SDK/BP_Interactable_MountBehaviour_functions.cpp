#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Interactable_MountBehaviour.BP_Interactable_MountBehaviour_C
// (None)

class UClass* UBP_Interactable_MountBehaviour_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Interactable_MountBehaviour_C");

	return Clss;
}


// BP_Interactable_MountBehaviour_C BP_Interactable_MountBehaviour.Default__BP_Interactable_MountBehaviour_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Interactable_MountBehaviour_C* UBP_Interactable_MountBehaviour_C::GetDefaultObj()
{
	static class UBP_Interactable_MountBehaviour_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Interactable_MountBehaviour_C*>(UBP_Interactable_MountBehaviour_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Interactable_MountBehaviour.BP_Interactable_MountBehaviour_C.CanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacter*      K2Node_DynamicCast_AsIcarus_Player_Character                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerState*          CallFunc_GetIcarusPlayerState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Mount_Base_C*            K2Node_DynamicCast_AsBP_Mount_Base                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMountOwner_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_Interactable_MountBehaviour_C::CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, class ABP_Mount_Base_C* K2Node_DynamicCast_AsBP_Mount_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsMountOwner_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_MountBehaviour_C", "CanInteract");

	Params::UBP_Interactable_MountBehaviour_C_CanInteract_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.HitResult = HitResult;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character = K2Node_DynamicCast_AsIcarus_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerState_ReturnValue = CallFunc_GetIcarusPlayerState_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Mount_Base = K2Node_DynamicCast_AsBP_Mount_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsMountOwner_ReturnValue = CallFunc_IsMountOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Interactable_MountBehaviour.BP_Interactable_MountBehaviour_C.Interact
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_Interactable_MountBehaviour_C::Interact(class AActor* Instigator, struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_MountBehaviour_C", "Interact");

	Params::UBP_Interactable_MountBehaviour_C_Interact_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.HitResult = HitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Interactable_MountBehaviour.BP_Interactable_MountBehaviour_C.ExecuteUbergraph_BP_Interactable_MountBehaviour
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Mount_Base_C*            K2Node_DynamicCast_AsBP_Mount_Base                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_Instigator                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitResult                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Interactable_MountBehaviour_C::ExecuteUbergraph_BP_Interactable_MountBehaviour(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Mount_Base_C* K2Node_DynamicCast_AsBP_Mount_Base, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_Instigator, const struct FHitResult& K2Node_Event_HitResult, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_MountBehaviour_C", "ExecuteUbergraph_BP_Interactable_MountBehaviour");

	Params::UBP_Interactable_MountBehaviour_C_ExecuteUbergraph_BP_Interactable_MountBehaviour_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Mount_Base = K2Node_DynamicCast_AsBP_Mount_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_Instigator = K2Node_Event_Instigator;
	Parms.K2Node_Event_HitResult = K2Node_Event_HitResult;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


