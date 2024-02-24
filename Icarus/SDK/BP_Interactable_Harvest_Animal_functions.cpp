#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Interactable_Harvest_Animal.BP_Interactable_Harvest_Animal_C
// (None)

class UClass* UBP_Interactable_Harvest_Animal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Interactable_Harvest_Animal_C");

	return Clss;
}


// BP_Interactable_Harvest_Animal_C BP_Interactable_Harvest_Animal.Default__BP_Interactable_Harvest_Animal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Interactable_Harvest_Animal_C* UBP_Interactable_Harvest_Animal_C::GetDefaultObj()
{
	static class UBP_Interactable_Harvest_Animal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Interactable_Harvest_Animal_C*>(UBP_Interactable_Harvest_Animal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Interactable_Harvest_Animal.BP_Interactable_Harvest_Animal_C.GrantBestiaryProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBestiaryPointsRowHandle    Points                                                           (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FBestiaryPointsRowHandle    CallFunc_MakeLiteralBestiaryPoints_ReturnValue                   (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAISetup                    CallFunc_GetAISetupStruct_AISetup                                (None)
// enum class EValid                  CallFunc_GetAISetupStruct_Paths                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerControllerSurvival*K2Node_DynamicCast_AsIcarus_Player_Controller_Survival           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBestiaryManagerComponent*   CallFunc_GetBestiaryManagerComponent_ReturnValue                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Interactable_Harvest_Animal_C::GrantBestiaryProgress(const struct FBestiaryPointsRowHandle& Points, const struct FBestiaryPointsRowHandle& CallFunc_MakeLiteralBestiaryPoints_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FAISetup& CallFunc_GetAISetupStruct_AISetup, enum class EValid CallFunc_GetAISetupStruct_Paths, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsRowHandleValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess, class UBestiaryManagerComponent* CallFunc_GetBestiaryManagerComponent_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Harvest_Animal_C", "GrantBestiaryProgress");

	Params::UBP_Interactable_Harvest_Animal_C_GrantBestiaryProgress_Params Parms{};

	Parms.Points = Points;
	Parms.CallFunc_MakeLiteralBestiaryPoints_ReturnValue = CallFunc_MakeLiteralBestiaryPoints_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAISetupStruct_AISetup = CallFunc_GetAISetupStruct_AISetup;
	Parms.CallFunc_GetAISetupStruct_Paths = CallFunc_GetAISetupStruct_Paths;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Controller_Survival = K2Node_DynamicCast_AsIcarus_Player_Controller_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBestiaryManagerComponent_ReturnValue = CallFunc_GetBestiaryManagerComponent_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Interactable_Harvest_Animal.BP_Interactable_Harvest_Animal_C.ProcessDurability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CalculateDurabilityDamage_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DealSelfDamage_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Interactable_Harvest_Animal_C::ProcessDurability(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_CalculateDurabilityDamage_ReturnValue, bool CallFunc_DealSelfDamage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Harvest_Animal_C", "ProcessDurability");

	Params::UBP_Interactable_Harvest_Animal_C_ProcessDurability_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_CalculateDurabilityDamage_ReturnValue = CallFunc_CalculateDurabilityDamage_ReturnValue;
	Parms.CallFunc_DealSelfDamage_ReturnValue = CallFunc_DealSelfDamage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Interactable_Harvest_Animal.BP_Interactable_Harvest_Animal_C.CalculateDurabilityDamage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BaseWearAmount                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBP_Interactable_Harvest_Animal_C::CalculateDurabilityDamage(int32 BaseWearAmount, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetStat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FCeil_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Harvest_Animal_C", "CalculateDurabilityDamage");

	Params::UBP_Interactable_Harvest_Animal_C_CalculateDurabilityDamage_Params Parms{};

	Parms.BaseWearAmount = BaseWearAmount;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_FCeil_ReturnValue = CallFunc_FCeil_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Interactable_Harvest_Animal.BP_Interactable_Harvest_Animal_C.GetHarvestSpeedModifier
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBP_Interactable_Harvest_Animal_C::GetHarvestSpeedModifier(bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetStat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Harvest_Animal_C", "GetHarvestSpeedModifier");

	Params::UBP_Interactable_Harvest_Animal_C_GetHarvestSpeedModifier_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Interactable_Harvest_Animal.BP_Interactable_Harvest_Animal_C.OnRep_HarvestingPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetHarvestSpeedModifier_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHighlightableComponent*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UBP_Interactable_Harvest_Animal_C::OnRep_HarvestingPlayer(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetHarvestSpeedModifier_ReturnValue, class UHighlightableComponent* CallFunc_GetComponentByClass_ReturnValue, class UInteractableComponent* CallFunc_GetComponentByClass_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Harvest_Animal_C", "OnRep_HarvestingPlayer");

	Params::UBP_Interactable_Harvest_Animal_C_OnRep_HarvestingPlayer_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetHarvestSpeedModifier_ReturnValue = CallFunc_GetHarvestSpeedModifier_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Interactable_Harvest_Animal.BP_Interactable_Harvest_Animal_C.OnRep_IsHarvested
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Interactable_Harvest_Animal_C::OnRep_IsHarvested()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Harvest_Animal_C", "OnRep_IsHarvested");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Interactable_Harvest_Animal.BP_Interactable_Harvest_Animal_C.CanInteract
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerCharacterSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusItem*                 K2Node_DynamicCast_AsIcarus_Item                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDurableComponent*           CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetStat_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FValidInteractQueriesRowHandleCallFunc_GetObjectInteraction_RowHandle                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetObjectInteraction_bValidInteract                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GOAP_Corpse_C*           K2Node_DynamicCast_AsBP_GOAP_Corpse                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_Interactable_Harvest_Animal_C::CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusItem* K2Node_DynamicCast_AsIcarus_Item, bool K2Node_DynamicCast_bSuccess_1, enum class EValid CallFunc_GetTrait_Paths, class UDurableComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetStat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_GetStat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FValidInteractQueriesRowHandle& CallFunc_GetObjectInteraction_RowHandle, bool CallFunc_GetObjectInteraction_bValidInteract, bool CallFunc_BooleanAND_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_2, class ABP_GOAP_Corpse_C* K2Node_DynamicCast_AsBP_GOAP_Corpse, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Harvest_Animal_C", "CanInteract");

	Params::UBP_Interactable_Harvest_Animal_C_CanInteract_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.HitResult = HitResult;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Item = K2Node_DynamicCast_AsIcarus_Item;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_GetStat_ReturnValue_1 = CallFunc_GetStat_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_GetObjectInteraction_RowHandle = CallFunc_GetObjectInteraction_RowHandle;
	Parms.CallFunc_GetObjectInteraction_bValidInteract = CallFunc_GetObjectInteraction_bValidInteract;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_GOAP_Corpse = K2Node_DynamicCast_AsBP_GOAP_Corpse;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Interactable_Harvest_Animal.BP_Interactable_Harvest_Animal_C.Interact
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_Interactable_Harvest_Animal_C::Interact(class AActor* Instigator, struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Harvest_Animal_C", "Interact");

	Params::UBP_Interactable_Harvest_Animal_C_Interact_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.HitResult = HitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Interactable_Harvest_Animal.BP_Interactable_Harvest_Animal_C.OnInteractionAborted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Interactable_Harvest_Animal_C::OnInteractionAborted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Harvest_Animal_C", "OnInteractionAborted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Interactable_Harvest_Animal.BP_Interactable_Harvest_Animal_C.OnSkinningComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Interactable_Harvest_Animal_C::OnSkinningComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Harvest_Animal_C", "OnSkinningComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Interactable_Harvest_Animal.BP_Interactable_Harvest_Animal_C.EndHarvestMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_IcarusPlayerCharacterSurvival_C*Harvester                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Interactable_Harvest_Animal_C::EndHarvestMontage(class ABP_IcarusPlayerCharacterSurvival_C* Harvester)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Harvest_Animal_C", "EndHarvestMontage");

	Params::UBP_Interactable_Harvest_Animal_C_EndHarvestMontage_Params Parms{};

	Parms.Harvester = Harvester;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Interactable_Harvest_Animal.BP_Interactable_Harvest_Animal_C.ExecuteUbergraph_BP_Interactable_Harvest_Animal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_Instigator                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitResult                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerControllerSurvival*K2Node_DynamicCast_AsIcarus_Player_Controller_Survival           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GOAP_Corpse_C*           K2Node_DynamicCast_AsBP_GOAP_Corpse                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerCharacterSurvival_C*K2Node_CustomEvent_Harvester                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPlayLength_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHarvestSpeedModifier_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStat_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCreatureSubsystem*          CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAISetupEnum                CallFunc_IntToStruct_ReturnValue                                 (HasGetValueTypeHash)
// struct FAISetupRowHandle           CallFunc_StructToRowHandle_ReturnValue                           (NoDestructor, HasGetValueTypeHash)
// struct FAISetup                    CallFunc_GetAISetupStruct_AISetup                                (None)
// enum class EValid                  CallFunc_GetAISetupStruct_Paths                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAICreatureType             CallFunc_GetAICreatureTypeStruct_AICreatureType                  (None)
// enum class EValid                  CallFunc_GetAICreatureTypeStruct_Paths                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GrantExperienceToActor_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Interactable_Harvest_Animal_C::ExecuteUbergraph_BP_Interactable_Harvest_Animal(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, class AActor* K2Node_Event_Instigator, const struct FHitResult& K2Node_Event_HitResult, class AController* CallFunc_GetController_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_GOAP_Corpse_C* K2Node_DynamicCast_AsBP_GOAP_Corpse, bool K2Node_DynamicCast_bSuccess_2, bool Temp_bool_IsClosed_Variable, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_CustomEvent_Harvester, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1, class UInventory* CallFunc_GetInventory_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_GetStat_ReturnValue, float CallFunc_GetPlayLength_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetHarvestSpeedModifier_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_GetStat_ReturnValue_1, class UCreatureSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, const struct FAISetupEnum& CallFunc_IntToStruct_ReturnValue, const struct FAISetupRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FAISetup& CallFunc_GetAISetupStruct_AISetup, enum class EValid CallFunc_GetAISetupStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FAICreatureType& CallFunc_GetAICreatureTypeStruct_AICreatureType, enum class EValid CallFunc_GetAICreatureTypeStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_GrantExperienceToActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Harvest_Animal_C", "ExecuteUbergraph_BP_Interactable_Harvest_Animal");

	Params::UBP_Interactable_Harvest_Animal_C_ExecuteUbergraph_BP_Interactable_Harvest_Animal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_Event_Instigator = K2Node_Event_Instigator;
	Parms.K2Node_Event_HitResult = K2Node_Event_HitResult;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Controller_Survival = K2Node_DynamicCast_AsIcarus_Player_Controller_Survival;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_GOAP_Corpse = K2Node_DynamicCast_AsBP_GOAP_Corpse;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CustomEvent_Harvester = K2Node_CustomEvent_Harvester;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_GetPlayLength_ReturnValue = CallFunc_GetPlayLength_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetHarvestSpeedModifier_ReturnValue = CallFunc_GetHarvestSpeedModifier_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetStat_ReturnValue_1 = CallFunc_GetStat_ReturnValue_1;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_IntToStruct_ReturnValue = CallFunc_IntToStruct_ReturnValue;
	Parms.CallFunc_StructToRowHandle_ReturnValue = CallFunc_StructToRowHandle_ReturnValue;
	Parms.CallFunc_GetAISetupStruct_AISetup = CallFunc_GetAISetupStruct_AISetup;
	Parms.CallFunc_GetAISetupStruct_Paths = CallFunc_GetAISetupStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetAICreatureTypeStruct_AICreatureType = CallFunc_GetAICreatureTypeStruct_AICreatureType;
	Parms.CallFunc_GetAICreatureTypeStruct_Paths = CallFunc_GetAICreatureTypeStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GrantExperienceToActor_ReturnValue = CallFunc_GrantExperienceToActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


