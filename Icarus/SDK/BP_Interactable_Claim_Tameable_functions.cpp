#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Interactable_Claim_Tameable.BP_Interactable_Claim_Tameable_C
// (None)

class UClass* UBP_Interactable_Claim_Tameable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Interactable_Claim_Tameable_C");

	return Clss;
}


// BP_Interactable_Claim_Tameable_C BP_Interactable_Claim_Tameable.Default__BP_Interactable_Claim_Tameable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Interactable_Claim_Tameable_C* UBP_Interactable_Claim_Tameable_C::GetDefaultObj()
{
	static class UBP_Interactable_Claim_Tameable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Interactable_Claim_Tameable_C*>(UBP_Interactable_Claim_Tameable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Interactable_Claim_Tameable.BP_Interactable_Claim_Tameable_C.CanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanInteract_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusMountCharacter*       K2Node_DynamicCast_AsIcarus_Mount_Character                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_PlayerCharacterID_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_Interactable_Claim_Tameable_C::CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, bool CallFunc_CanInteract_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusMountCharacter* K2Node_DynamicCast_AsIcarus_Mount_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_PlayerCharacterID_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Claim_Tameable_C", "CanInteract");

	Params::UBP_Interactable_Claim_Tameable_C_CanInteract_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.HitResult = HitResult;
	Parms.CallFunc_CanInteract_ReturnValue = CallFunc_CanInteract_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Mount_Character = K2Node_DynamicCast_AsIcarus_Mount_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_PlayerCharacterID_ReturnValue = CallFunc_IsValid_PlayerCharacterID_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Interactable_Claim_Tameable.BP_Interactable_Claim_Tameable_C.Interact
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_Interactable_Claim_Tameable_C::Interact(class AActor* Instigator, struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Claim_Tameable_C", "Interact");

	Params::UBP_Interactable_Claim_Tameable_C_Interact_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.HitResult = HitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Interactable_Claim_Tameable.BP_Interactable_Claim_Tameable_C.ExecuteUbergraph_BP_Interactable_Claim_Tameable
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Instigator                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitResult                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class ABP_Mount_Base_C*            K2Node_DynamicCast_AsBP_Mount_Base                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  K2Node_DynamicCast_AsCharacter                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_MountInterface_C*       K2Node_DynamicCast_AsUMG_Mount_Interface                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  K2Node_DynamicCast_AsCharacter_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerState*          K2Node_DynamicCast_AsIcarus_Player_State                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusMountCharacter*       K2Node_DynamicCast_AsIcarus_Mount_Character                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetMountOwner_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Interactable_Claim_Tameable_C::ExecuteUbergraph_BP_Interactable_Claim_Tameable(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* K2Node_Event_Instigator, const struct FHitResult& K2Node_Event_HitResult, class ABP_Mount_Base_C* K2Node_DynamicCast_AsBP_Mount_Base, bool K2Node_DynamicCast_bSuccess, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess_1, class AController* CallFunc_GetController_ReturnValue, class UUMG_MountInterface_C* K2Node_DynamicCast_AsUMG_Mount_Interface, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsLocallyControlled_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsServer_ReturnValue, class AIcarusPlayerState* K2Node_DynamicCast_AsIcarus_Player_State, bool K2Node_DynamicCast_bSuccess_4, class AActor* CallFunc_GetOwner_ReturnValue_1, class AIcarusMountCharacter* K2Node_DynamicCast_AsIcarus_Mount_Character, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_SetMountOwner_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Claim_Tameable_C", "ExecuteUbergraph_BP_Interactable_Claim_Tameable");

	Params::UBP_Interactable_Claim_Tameable_C_ExecuteUbergraph_BP_Interactable_Claim_Tameable_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_Event_Instigator = K2Node_Event_Instigator;
	Parms.K2Node_Event_HitResult = K2Node_Event_HitResult;
	Parms.K2Node_DynamicCast_AsBP_Mount_Base = K2Node_DynamicCast_AsBP_Mount_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsCharacter = K2Node_DynamicCast_AsCharacter;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_Mount_Interface = K2Node_DynamicCast_AsUMG_Mount_Interface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter_1 = K2Node_DynamicCast_AsCharacter_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_State = K2Node_DynamicCast_AsIcarus_Player_State;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsIcarus_Mount_Character = K2Node_DynamicCast_AsIcarus_Mount_Character;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_SetMountOwner_ReturnValue = CallFunc_SetMountOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


