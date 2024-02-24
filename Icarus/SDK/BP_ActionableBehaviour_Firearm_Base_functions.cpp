#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C
// (None)

class UClass* UBP_ActionableBehaviour_Firearm_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionableBehaviour_Firearm_Base_C");

	return Clss;
}


// BP_ActionableBehaviour_Firearm_Base_C BP_ActionableBehaviour_Firearm_Base.Default__BP_ActionableBehaviour_Firearm_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionableBehaviour_Firearm_Base_C* UBP_ActionableBehaviour_Firearm_Base_C::GetDefaultObj()
{
	static class UBP_ActionableBehaviour_Firearm_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionableBehaviour_Firearm_Base_C*>(UBP_ActionableBehaviour_Firearm_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.GetTimeStamp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Timestamp                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetServerWorldTimeSeconds_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_Base_C::GetTimeStamp(float* Timestamp, class AGameStateBase* CallFunc_GetGameState_ReturnValue, float CallFunc_GetServerWorldTimeSeconds_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_Base_C", "GetTimeStamp");

	Params::UBP_ActionableBehaviour_Firearm_Base_C_GetTimeStamp_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_GetServerWorldTimeSeconds_ReturnValue = CallFunc_GetServerWorldTimeSeconds_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Timestamp != nullptr)
		*Timestamp = Parms.Timestamp;

}


// Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.GetAdjustedDurabilityDamage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DurabilityLost                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusStatContainer*        StatContainer                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RollChanceStat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusStatContainer*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBP_ActionableBehaviour_Firearm_Base_C::GetAdjustedDurabilityDamage(int32 DurabilityLost, class UIcarusStatContainer* StatContainer, int32 CallFunc_GetStat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_RollChanceStat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_FFloor_ReturnValue, class UIcarusStatContainer* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_Base_C", "GetAdjustedDurabilityDamage");

	Params::UBP_ActionableBehaviour_Firearm_Base_C_GetAdjustedDurabilityDamage_Params Parms{};

	Parms.DurabilityLost = DurabilityLost;
	Parms.StatContainer = StatContainer;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_RollChanceStat_ReturnValue = CallFunc_RollChanceStat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.SetupCosmeticController
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_FirearmCosmeticController_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_FirearmCosmeticController_C*CallFunc_AddComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_Base_C::SetupCosmeticController(class AActor* CallFunc_GetOwner_ReturnValue, class UBP_FirearmCosmeticController_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class UBP_FirearmCosmeticController_C* CallFunc_AddComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_Base_C", "SetupCosmeticController");

	Params::UBP_ActionableBehaviour_Firearm_Base_C_SetupCosmeticController_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_AddComponentByClass_ReturnValue = CallFunc_AddComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.StopAllAnimations
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      CallFunc_GetOwnerMeshComponent_AsSkeletal_Mesh_Component         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetOwnerMeshComponent_Valid                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetFirstPersonMesh_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_Base_C::StopAllAnimations(class USkeletalMeshComponent* CallFunc_GetOwnerMeshComponent_AsSkeletal_Mesh_Component, bool CallFunc_GetOwnerMeshComponent_Valid, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetFirstPersonMesh_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_Base_C", "StopAllAnimations");

	Params::UBP_ActionableBehaviour_Firearm_Base_C_StopAllAnimations_Params Parms{};

	Parms.CallFunc_GetOwnerMeshComponent_AsSkeletal_Mesh_Component = CallFunc_GetOwnerMeshComponent_AsSkeletal_Mesh_Component;
	Parms.CallFunc_GetOwnerMeshComponent_Valid = CallFunc_GetOwnerMeshComponent_Valid;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetAnimInstance_ReturnValue_1 = CallFunc_GetAnimInstance_ReturnValue_1;
	Parms.CallFunc_GetFirstPersonMesh_ReturnValue = CallFunc_GetFirstPersonMesh_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue_2 = CallFunc_GetAnimInstance_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.TickCameraEffects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_Base_C::TickCameraEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_Base_C", "TickCameraEffects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.RollBoolStat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStatsEnum                  Stat                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               RollResult                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetStat_Value                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_Base_C::RollBoolStat(const struct FStatsEnum& Stat, bool* RollResult, int32 CallFunc_GetStat_Value, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_Base_C", "RollBoolStat");

	Params::UBP_ActionableBehaviour_Firearm_Base_C_RollBoolStat_Params Parms{};

	Parms.Stat = Stat;
	Parms.CallFunc_GetStat_Value = CallFunc_GetStat_Value;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_RandomBoolWithWeight_ReturnValue = CallFunc_RandomBoolWithWeight_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RollResult != nullptr)
		*RollResult = Parms.RollResult;

}


// Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.DamageItemDurability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CalculatedDurabilityLoss                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAdjustedDurabilityDamage_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RollBoolStat_RollResult                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerFeedbackSubsystem*    CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusItem*                 CallFunc_GetFocusedItem_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDurableComponent*           CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PartiallyRepairItem_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DealSelfDamage_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_Base_C::DamageItemDurability(int32 Amount, int32 CalculatedDurabilityLoss, int32 CallFunc_GetAdjustedDurabilityDamage_ReturnValue, bool CallFunc_RollBoolStat_RollResult, class UPlayerFeedbackSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AIcarusItem* CallFunc_GetFocusedItem_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class EValid CallFunc_GetTrait_Paths, class UDurableComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_PartiallyRepairItem_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_DealSelfDamage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_Base_C", "DamageItemDurability");

	Params::UBP_ActionableBehaviour_Firearm_Base_C_DamageItemDurability_Params Parms{};

	Parms.Amount = Amount;
	Parms.CalculatedDurabilityLoss = CalculatedDurabilityLoss;
	Parms.CallFunc_GetAdjustedDurabilityDamage_ReturnValue = CallFunc_GetAdjustedDurabilityDamage_ReturnValue;
	Parms.CallFunc_RollBoolStat_RollResult = CallFunc_RollBoolStat_RollResult;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetFocusedItem_ReturnValue = CallFunc_GetFocusedItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_PartiallyRepairItem_ReturnValue = CallFunc_PartiallyRepairItem_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_DealSelfDamage_ReturnValue = CallFunc_DealSelfDamage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.GetOwnerMeshComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      AsSkeletal_Mesh_Component                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               Valid                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      K2Node_DynamicCast_AsSkeletal_Mesh_Component                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_Base_C::GetOwnerMeshComponent(class USkeletalMeshComponent** AsSkeletal_Mesh_Component, bool* Valid, bool CallFunc_IsValid_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_Base_C", "GetOwnerMeshComponent");

	Params::UBP_ActionableBehaviour_Firearm_Base_C_GetOwnerMeshComponent_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsSkeletal_Mesh_Component = K2Node_DynamicCast_AsSkeletal_Mesh_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsSkeletal_Mesh_Component != nullptr)
		*AsSkeletal_Mesh_Component = Parms.AsSkeletal_Mesh_Component;

	if (Valid != nullptr)
		*Valid = Parms.Valid;

}


// Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.PlayFirearmSound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFirearmSoundData           FirearmSoundData                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFMODEvent*                  K2Node_DynamicCast_AsFMODEvent                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C*CallFunc_GetAmmoController_AmmoController                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsReloading_Reloading                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C*CallFunc_GetAmmoController_AmmoController_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetOwnerMeshComponent_AsSkeletal_Mesh_Component         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetOwnerMeshComponent_Valid                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentAmmoCount_CurrentAmmoCount                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFMODValid              CallFunc_PlayEventAttached_IsValid                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODAudioComponent*         CallFunc_PlayEventAttached_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_ActionableBehaviour_FireArm_FireController_Base_C*CallFunc_GetFireController_FireController                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ActionableBehaviour_FireArm_FireController_Charge_C*K2Node_DynamicCast_AsBP_Actionable_Behaviour_Fire_Arm_Fire_Controller_Charge(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCurrentChargePower_ChargePower                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_Conv_BoolToByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_Base_C::PlayFirearmSound(struct FFirearmSoundData& FirearmSoundData, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UFMODEvent* K2Node_DynamicCast_AsFMODEvent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* CallFunc_GetAmmoController_AmmoController, bool CallFunc_IsReloading_Reloading, bool CallFunc_IsValid_ReturnValue_4, class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* CallFunc_GetAmmoController_AmmoController_1, class USkeletalMeshComponent* CallFunc_GetOwnerMeshComponent_AsSkeletal_Mesh_Component, bool CallFunc_GetOwnerMeshComponent_Valid, int32 CallFunc_GetCurrentAmmoCount_CurrentAmmoCount, enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Variable, class UBP_ActionableBehaviour_FireArm_FireController_Base_C* CallFunc_GetFireController_FireController, class UBP_ActionableBehaviour_FireArm_FireController_Charge_C* K2Node_DynamicCast_AsBP_Actionable_Behaviour_Fire_Arm_Fire_Controller_Charge, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Variable_1, float CallFunc_GetCurrentChargePower_ChargePower, bool K2Node_Select_Default, uint8 CallFunc_Conv_BoolToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_Base_C", "PlayFirearmSound");

	Params::UBP_ActionableBehaviour_Firearm_Base_C_PlayFirearmSound_Params Parms{};

	Parms.FirearmSoundData = FirearmSoundData;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFMODEvent = K2Node_DynamicCast_AsFMODEvent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetAmmoController_AmmoController = CallFunc_GetAmmoController_AmmoController;
	Parms.CallFunc_IsReloading_Reloading = CallFunc_IsReloading_Reloading;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetAmmoController_AmmoController_1 = CallFunc_GetAmmoController_AmmoController_1;
	Parms.CallFunc_GetOwnerMeshComponent_AsSkeletal_Mesh_Component = CallFunc_GetOwnerMeshComponent_AsSkeletal_Mesh_Component;
	Parms.CallFunc_GetOwnerMeshComponent_Valid = CallFunc_GetOwnerMeshComponent_Valid;
	Parms.CallFunc_GetCurrentAmmoCount_CurrentAmmoCount = CallFunc_GetCurrentAmmoCount_CurrentAmmoCount;
	Parms.CallFunc_PlayEventAttached_IsValid = CallFunc_PlayEventAttached_IsValid;
	Parms.CallFunc_PlayEventAttached_ReturnValue = CallFunc_PlayEventAttached_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetFireController_FireController = CallFunc_GetFireController_FireController;
	Parms.K2Node_DynamicCast_AsBP_Actionable_Behaviour_Fire_Arm_Fire_Controller_Charge = K2Node_DynamicCast_AsBP_Actionable_Behaviour_Fire_Arm_Fire_Controller_Charge;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetCurrentChargePower_ChargePower = CallFunc_GetCurrentChargePower_ChargePower;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_BoolToByte_ReturnValue = CallFunc_Conv_BoolToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.GetStat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FStatsEnum                  Stat                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               ErrorIfZero                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_StructToName_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_Base_C::GetStat(const struct FStatsEnum& Stat, bool ErrorIfZero, int32* Value, class FName CallFunc_StructToName_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetStat_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_Base_C", "GetStat");

	Params::UBP_ActionableBehaviour_Firearm_Base_C_GetStat_Params Parms{};

	Parms.Stat = Stat;
	Parms.ErrorIfZero = ErrorIfZero;
	Parms.CallFunc_StructToName_ReturnValue = CallFunc_StructToName_ReturnValue;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.GetAimController
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBP_ActionableBehaviour_Firearm_AimController_Base_C*AimController                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ActionableBehaviour_Firearm_AimController_Base_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_Base_C::GetAimController(class UBP_ActionableBehaviour_Firearm_AimController_Base_C** AimController, class UBP_ActionableBehaviour_Firearm_AimController_Base_C* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_Base_C", "GetAimController");

	Params::UBP_ActionableBehaviour_Firearm_Base_C_GetAimController_Params Parms{};

	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AimController != nullptr)
		*AimController = Parms.AimController;

}


// Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.GetFireController
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBP_ActionableBehaviour_FireArm_FireController_Base_C*FireController                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ActionableBehaviour_FireArm_FireController_Base_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_Base_C::GetFireController(class UBP_ActionableBehaviour_FireArm_FireController_Base_C** FireController, class UBP_ActionableBehaviour_FireArm_FireController_Base_C* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_Base_C", "GetFireController");

	Params::UBP_ActionableBehaviour_Firearm_Base_C_GetFireController_Params Parms{};

	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FireController != nullptr)
		*FireController = Parms.FireController;

}


// Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.GetAmmoController
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C*AmmoController                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_Base_C::GetAmmoController(class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C** AmmoController, class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_Base_C", "GetAmmoController");

	Params::UBP_ActionableBehaviour_Firearm_Base_C_GetAmmoController_Params Parms{};

	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AmmoController != nullptr)
		*AmmoController = Parms.AmmoController;

}


// Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.LocalOrServer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Local                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Server                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_Base_C::LocalOrServer(bool* Local, bool* Server, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_Base_C", "LocalOrServer");

	Params::UBP_ActionableBehaviour_Firearm_Base_C_LocalOrServer_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Local != nullptr)
		*Local = Parms.Local;

	if (Server != nullptr)
		*Server = Parms.Server;

}


// Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.SetupFirearmData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusItem*                 K2Node_DynamicCast_AsIcarus_Item                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFirearmData                CallFunc_GetFirearmData_FirearmData                              (None)
// enum class EDataValid              CallFunc_GetFirearmData_Paths                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_Base_C::SetupFirearmData(class AIcarusItem* K2Node_DynamicCast_AsIcarus_Item, bool K2Node_DynamicCast_bSuccess, const struct FFirearmData& CallFunc_GetFirearmData_FirearmData, enum class EDataValid CallFunc_GetFirearmData_Paths, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_Base_C", "SetupFirearmData");

	Params::UBP_ActionableBehaviour_Firearm_Base_C_SetupFirearmData_Params Parms{};

	Parms.K2Node_DynamicCast_AsIcarus_Item = K2Node_DynamicCast_AsIcarus_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetFirearmData_FirearmData = CallFunc_GetFirearmData_FirearmData;
	Parms.CallFunc_GetFirearmData_Paths = CallFunc_GetFirearmData_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.SetupPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_LocalOrServer_Local                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacterSurvival*K2Node_DynamicCast_AsIcarus_Player_Character_Survival            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_Base_C::SetupPlayer(bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_Base_C", "SetupPlayer");

	Params::UBP_ActionableBehaviour_Firearm_Base_C_SetupPlayer_Params Parms{};

	Parms.CallFunc_LocalOrServer_Local = CallFunc_LocalOrServer_Local;
	Parms.CallFunc_LocalOrServer_Server = CallFunc_LocalOrServer_Server;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character_Survival = K2Node_DynamicCast_AsIcarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.SetupOwner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusActor*                Owner                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_Base_C::SetupOwner(class AIcarusActor* Owner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_Base_C", "SetupOwner");

	Params::UBP_ActionableBehaviour_Firearm_Base_C_SetupOwner_Params Parms{};

	Parms.Owner = Owner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusActor*                ForOwner                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_Base_C::Setup(class AIcarusActor* ForOwner, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_Base_C", "Setup");

	Params::UBP_ActionableBehaviour_Firearm_Base_C_Setup_Params Parms{};

	Parms.ForOwner = ForOwner;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_Base_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.PreloadAssets
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_Base_C::PreloadAssets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_Base_C", "PreloadAssets");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_Base_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_Base_C", "ReceiveTick");

	Params::UBP_ActionableBehaviour_Firearm_Base_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.LateSetup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_Base_C::LateSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_Base_C", "LateSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_Base_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_Base_C", "ReceiveEndPlay");

	Params::UBP_ActionableBehaviour_Firearm_Base_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.OnStatContainerUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_Base_C::OnStatContainerUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_Base_C", "OnStatContainerUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.ExecuteUbergraph_BP_ActionableBehaviour_Firearm_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusItem*                 K2Node_DynamicCast_AsIcarus_Item                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LocalOrServer_Local                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_Base_C::ExecuteUbergraph_BP_ActionableBehaviour_Firearm_Base(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusItem* K2Node_DynamicCast_AsIcarus_Item, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaSeconds, bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server, enum class EEndPlayReason K2Node_Event_EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_Base_C", "ExecuteUbergraph_BP_ActionableBehaviour_Firearm_Base");

	Params::UBP_ActionableBehaviour_Firearm_Base_C_ExecuteUbergraph_BP_ActionableBehaviour_Firearm_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Item = K2Node_DynamicCast_AsIcarus_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_LocalOrServer_Local = CallFunc_LocalOrServer_Local;
	Parms.CallFunc_LocalOrServer_Server = CallFunc_LocalOrServer_Server;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}

}


