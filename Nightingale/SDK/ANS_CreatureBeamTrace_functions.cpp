#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ANS_CreatureBeamTrace.ANS_CreatureBeamTrace_C
// (None)

class UClass* UANS_CreatureBeamTrace_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANS_CreatureBeamTrace_C");

	return Clss;
}


// ANS_CreatureBeamTrace_C ANS_CreatureBeamTrace.Default__ANS_CreatureBeamTrace_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANS_CreatureBeamTrace_C* UANS_CreatureBeamTrace_C::GetDefaultObj()
{
	static class UANS_CreatureBeamTrace_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANS_CreatureBeamTrace_C*>(UANS_CreatureBeamTrace_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANS_CreatureBeamTrace.ANS_CreatureBeamTrace_C.ApplyTimedStatusEffects
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          Creature                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANS_CreatureBeamTrace_C::ApplyTimedStatusEffects(class UObject* Target, class ABP_CreatureBase_C* Creature, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANS_CreatureBeamTrace_C", "ApplyTimedStatusEffects");

	Params::UANS_CreatureBeamTrace_C_ApplyTimedStatusEffects_Params Parms{};

	Parms.Target = Target;
	Parms.Creature = Creature;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANS_CreatureBeamTrace.ANS_CreatureBeamTrace_C.RemoveAndApplyTimedStatusEffects
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStatusEffectAccessInterface>K2Node_DynamicCast_AsStatus_Effect_Access_Interface              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveStatusEffect_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStatusEffectAccessInterface>K2Node_DynamicCast_AsStatus_Effect_Access_Interface_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveStatusEffect_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANS_CreatureBeamTrace_C::RemoveAndApplyTimedStatusEffects(class UObject* Target, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IStatusEffectAccessInterface> K2Node_DynamicCast_AsStatus_Effect_Access_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_RemoveStatusEffect_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, TScriptInterface<class IStatusEffectAccessInterface> K2Node_DynamicCast_AsStatus_Effect_Access_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_RemoveStatusEffect_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANS_CreatureBeamTrace_C", "RemoveAndApplyTimedStatusEffects");

	Params::UANS_CreatureBeamTrace_C_RemoveAndApplyTimedStatusEffects_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsStatus_Effect_Access_Interface = K2Node_DynamicCast_AsStatus_Effect_Access_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_RemoveStatusEffect_ReturnValue = CallFunc_RemoveStatusEffect_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsStatus_Effect_Access_Interface_1 = K2Node_DynamicCast_AsStatus_Effect_Access_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_RemoveStatusEffect_ReturnValue_1 = CallFunc_RemoveStatusEffect_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANS_CreatureBeamTrace.ANS_CreatureBeamTrace_C.GetTraceRotation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_CreatureBase_C*          Creature                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rotation                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      LMesh                                                            (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          LCreature                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class FName                        LEnd                                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        LStart                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTraceData_Override_Data_Socket_Start                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Beam_Length                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Radius                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTraceData_Override_Data_Use_Target                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Tracking_Rate                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetTraceData_Override_Data_Attack_Tag                   (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetTraceData_Override_Data_Gameplay_Tags                (None)
// struct FS_CreatureKnockbackData    CallFunc_GetTraceData_Override_Data_Knockback_Data               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMesh_Mesh                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UANS_CreatureBeamTrace_C::GetTraceRotation(class ABP_CreatureBase_C* Creature, struct FRotator* Rotation, class USkeletalMeshComponent* LMesh, class ABP_CreatureBase_C* LCreature, class FName LEnd, class FName LStart, class FName CallFunc_GetTraceData_Override_Data_Socket_Start, double CallFunc_GetTraceData_Override_Data_Beam_Length, double CallFunc_GetTraceData_Override_Data_Radius, bool CallFunc_GetTraceData_Override_Data_Use_Target, double CallFunc_GetTraceData_Override_Data_Tracking_Rate, const struct FGameplayTag& CallFunc_GetTraceData_Override_Data_Attack_Tag, const struct FGameplayTagContainer& CallFunc_GetTraceData_Override_Data_Gameplay_Tags, const struct FS_CreatureKnockbackData& CallFunc_GetTraceData_Override_Data_Knockback_Data, const struct FRotator& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMesh_Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANS_CreatureBeamTrace_C", "GetTraceRotation");

	Params::UANS_CreatureBeamTrace_C_GetTraceRotation_Params Parms{};

	Parms.Creature = Creature;
	Parms.LMesh = LMesh;
	Parms.LCreature = LCreature;
	Parms.LEnd = LEnd;
	Parms.LStart = LStart;
	Parms.CallFunc_GetTraceData_Override_Data_Socket_Start = CallFunc_GetTraceData_Override_Data_Socket_Start;
	Parms.CallFunc_GetTraceData_Override_Data_Beam_Length = CallFunc_GetTraceData_Override_Data_Beam_Length;
	Parms.CallFunc_GetTraceData_Override_Data_Radius = CallFunc_GetTraceData_Override_Data_Radius;
	Parms.CallFunc_GetTraceData_Override_Data_Use_Target = CallFunc_GetTraceData_Override_Data_Use_Target;
	Parms.CallFunc_GetTraceData_Override_Data_Tracking_Rate = CallFunc_GetTraceData_Override_Data_Tracking_Rate;
	Parms.CallFunc_GetTraceData_Override_Data_Attack_Tag = CallFunc_GetTraceData_Override_Data_Attack_Tag;
	Parms.CallFunc_GetTraceData_Override_Data_Gameplay_Tags = CallFunc_GetTraceData_Override_Data_Gameplay_Tags;
	Parms.CallFunc_GetTraceData_Override_Data_Knockback_Data = CallFunc_GetTraceData_Override_Data_Knockback_Data;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_GetSkeletalMesh_Mesh = CallFunc_GetSkeletalMesh_Mesh;

	UObject::ProcessEvent(Func, &Parms);

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);

}


// Function ANS_CreatureBeamTrace.ANS_CreatureBeamTrace_C.Received_NotifyEnd
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          LCreature                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      LMesh                                                            (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSocketHitObjects           CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             CallFunc_Set_ToArray_Result                                      (ReferenceParm)
// class UObject*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          K2Node_DynamicCast_AsBP_Creature_Base                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UANS_CreatureBeamTrace_C::Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class ABP_CreatureBase_C* LCreature, class USkeletalMeshComponent* LMesh, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, const struct FSocketHitObjects& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<class UObject*>& CallFunc_Set_ToArray_Result, class UObject* CallFunc_Array_Get_Item, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Map_Remove_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Map_Remove_ReturnValue_2, bool CallFunc_Map_Remove_ReturnValue_3, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANS_CreatureBeamTrace_C", "Received_NotifyEnd");

	Params::UANS_CreatureBeamTrace_C_Received_NotifyEnd_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = EventReference;
	Parms.LCreature = LCreature;
	Parms.LMesh = LMesh;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Set_ToArray_Result = CallFunc_Set_ToArray_Result;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Map_Remove_ReturnValue_1 = CallFunc_Map_Remove_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Remove_ReturnValue_2 = CallFunc_Map_Remove_ReturnValue_2;
	Parms.CallFunc_Map_Remove_ReturnValue_3 = CallFunc_Map_Remove_ReturnValue_3;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Creature_Base = K2Node_DynamicCast_AsBP_Creature_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ANS_CreatureBeamTrace.ANS_CreatureBeamTrace_C.HandleHitActor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class ABP_CreatureBase_C*          Creature                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      HitCreature                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTagValueContainer          TagValueContainer                                                (Edit, BlueprintVisible, DisableEditOnInstance)
// class ABP_CreatureBase_C*          LCreature                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FHitResult>          K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromHitResults_ReturnValue             (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTraceData_Override_Data_Socket_Start                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Beam_Length                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Radius                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTraceData_Override_Data_Use_Target                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Tracking_Rate                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetTraceData_Override_Data_Attack_Tag                   (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetTraceData_Override_Data_Gameplay_Tags                (None)
// struct FS_CreatureKnockbackData    CallFunc_GetTraceData_Override_Data_Knockback_Data               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandleCallFunc_AbilityPayloadFromGameplayTagContainer_ReturnValue      (None)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              (None)
// int32                              CallFunc_SendGameplayEventToActor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANS_CreatureBeamTrace_C::HandleHitActor(struct FHitResult& HitResult, class ABP_CreatureBase_C* Creature, class AActor* HitCreature, const struct FTagValueContainer& TagValueContainer, class ABP_CreatureBase_C* LCreature, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FHitResult>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue_1, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromHitResults_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class FName CallFunc_GetTraceData_Override_Data_Socket_Start, double CallFunc_GetTraceData_Override_Data_Beam_Length, double CallFunc_GetTraceData_Override_Data_Radius, bool CallFunc_GetTraceData_Override_Data_Use_Target, double CallFunc_GetTraceData_Override_Data_Tracking_Rate, const struct FGameplayTag& CallFunc_GetTraceData_Override_Data_Attack_Tag, const struct FGameplayTagContainer& CallFunc_GetTraceData_Override_Data_Gameplay_Tags, const struct FS_CreatureKnockbackData& CallFunc_GetTraceData_Override_Data_Knockback_Data, const struct FGameplayAbilityPayloadHandle& CallFunc_AbilityPayloadFromGameplayTagContainer_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, int32 CallFunc_SendGameplayEventToActor_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANS_CreatureBeamTrace_C", "HandleHitActor");

	Params::UANS_CreatureBeamTrace_C_HandleHitActor_Params Parms{};

	Parms.HitResult = HitResult;
	Parms.Creature = Creature;
	Parms.HitCreature = HitCreature;
	Parms.TagValueContainer = TagValueContainer;
	Parms.LCreature = LCreature;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_AbilityTargetDataFromHitResults_ReturnValue = CallFunc_AbilityTargetDataFromHitResults_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetTraceData_Override_Data_Socket_Start = CallFunc_GetTraceData_Override_Data_Socket_Start;
	Parms.CallFunc_GetTraceData_Override_Data_Beam_Length = CallFunc_GetTraceData_Override_Data_Beam_Length;
	Parms.CallFunc_GetTraceData_Override_Data_Radius = CallFunc_GetTraceData_Override_Data_Radius;
	Parms.CallFunc_GetTraceData_Override_Data_Use_Target = CallFunc_GetTraceData_Override_Data_Use_Target;
	Parms.CallFunc_GetTraceData_Override_Data_Tracking_Rate = CallFunc_GetTraceData_Override_Data_Tracking_Rate;
	Parms.CallFunc_GetTraceData_Override_Data_Attack_Tag = CallFunc_GetTraceData_Override_Data_Attack_Tag;
	Parms.CallFunc_GetTraceData_Override_Data_Gameplay_Tags = CallFunc_GetTraceData_Override_Data_Gameplay_Tags;
	Parms.CallFunc_GetTraceData_Override_Data_Knockback_Data = CallFunc_GetTraceData_Override_Data_Knockback_Data;
	Parms.CallFunc_AbilityPayloadFromGameplayTagContainer_ReturnValue = CallFunc_AbilityPayloadFromGameplayTagContainer_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.CallFunc_SendGameplayEventToActor_ReturnValue = CallFunc_SendGameplayEventToActor_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANS_CreatureBeamTrace.ANS_CreatureBeamTrace_C.HandleHits
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ABP_CreatureBase_C*          Creature                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FHitResult>          Hits                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               NewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  LHitResult                                                       (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// TSet<class UObject*>               LHitObjects                                                      (Edit, BlueprintVisible)
// class UObject*                     LHitObject                                                       (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         LHitComponent                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      LHitActor                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          LCreature                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSocketHitObjects           K2Node_MakeStruct_SocketHitObjects                               (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANS_CreatureBeamTrace_C::HandleHits(class ABP_CreatureBase_C* Creature, TArray<struct FHitResult>& Hits, bool* NewParam, const struct FHitResult& LHitResult, TSet<class UObject*> LHitObjects, class UObject* LHitObject, class UPrimitiveComponent* LHitComponent, class AActor* LHitActor, class ABP_CreatureBase_C* LCreature, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FHitResult& CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsValid_ReturnValue_1, const struct FSocketHitObjects& K2Node_MakeStruct_SocketHitObjects, bool CallFunc_IsValid_ReturnValue_2, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANS_CreatureBeamTrace_C", "HandleHits");

	Params::UANS_CreatureBeamTrace_C_HandleHits_Params Parms{};

	Parms.Creature = Creature;
	Parms.Hits = Hits;
	Parms.LHitResult = LHitResult;
	Parms.LHitObjects = LHitObjects;
	Parms.LHitObject = LHitObject;
	Parms.LHitComponent = LHitComponent;
	Parms.LHitActor = LHitActor;
	Parms.LCreature = LCreature;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeStruct_SocketHitObjects = K2Node_MakeStruct_SocketHitObjects;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function ANS_CreatureBeamTrace.ANS_CreatureBeamTrace_C.GetTraceLocation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_CreatureBase_C*          Creature                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      LMesh                                                            (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          LCreature                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class FName                        LEnd                                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        LStart                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTraceData_Override_Data_Socket_Start                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Beam_Length                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Radius                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTraceData_Override_Data_Use_Target                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Tracking_Rate                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetTraceData_Override_Data_Attack_Tag                   (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetTraceData_Override_Data_Gameplay_Tags                (None)
// struct FS_CreatureKnockbackData    CallFunc_GetTraceData_Override_Data_Knockback_Data               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTraceData_Override_Data_Socket_Start_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Beam_Length_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Radius_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTraceData_Override_Data_Use_Target_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Tracking_Rate_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetTraceData_Override_Data_Attack_Tag_1                 (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetTraceData_Override_Data_Gameplay_Tags_1              (None)
// struct FS_CreatureKnockbackData    CallFunc_GetTraceData_Override_Data_Knockback_Data_1             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTraceData_Override_Data_Socket_Start_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Beam_Length_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Radius_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTraceData_Override_Data_Use_Target_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Tracking_Rate_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetTraceData_Override_Data_Attack_Tag_2                 (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetTraceData_Override_Data_Gameplay_Tags_2              (None)
// struct FS_CreatureKnockbackData    CallFunc_GetTraceData_Override_Data_Knockback_Data_2             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetSocketRotation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMesh_Mesh                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANS_CreatureBeamTrace_C::GetTraceLocation(class ABP_CreatureBase_C* Creature, struct FVector* Location, class USkeletalMeshComponent* LMesh, class ABP_CreatureBase_C* LCreature, class FName LEnd, class FName LStart, const struct FRotator& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FName CallFunc_GetTraceData_Override_Data_Socket_Start, double CallFunc_GetTraceData_Override_Data_Beam_Length, double CallFunc_GetTraceData_Override_Data_Radius, bool CallFunc_GetTraceData_Override_Data_Use_Target, double CallFunc_GetTraceData_Override_Data_Tracking_Rate, const struct FGameplayTag& CallFunc_GetTraceData_Override_Data_Attack_Tag, const struct FGameplayTagContainer& CallFunc_GetTraceData_Override_Data_Gameplay_Tags, const struct FS_CreatureKnockbackData& CallFunc_GetTraceData_Override_Data_Knockback_Data, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FRotator& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class FName CallFunc_GetTraceData_Override_Data_Socket_Start_1, double CallFunc_GetTraceData_Override_Data_Beam_Length_1, double CallFunc_GetTraceData_Override_Data_Radius_1, bool CallFunc_GetTraceData_Override_Data_Use_Target_1, double CallFunc_GetTraceData_Override_Data_Tracking_Rate_1, const struct FGameplayTag& CallFunc_GetTraceData_Override_Data_Attack_Tag_1, const struct FGameplayTagContainer& CallFunc_GetTraceData_Override_Data_Gameplay_Tags_1, const struct FS_CreatureKnockbackData& CallFunc_GetTraceData_Override_Data_Knockback_Data_1, double CallFunc_Divide_DoubleDouble_ReturnValue_1, class FName CallFunc_GetTraceData_Override_Data_Socket_Start_2, double CallFunc_GetTraceData_Override_Data_Beam_Length_2, double CallFunc_GetTraceData_Override_Data_Radius_2, bool CallFunc_GetTraceData_Override_Data_Use_Target_2, double CallFunc_GetTraceData_Override_Data_Tracking_Rate_2, const struct FGameplayTag& CallFunc_GetTraceData_Override_Data_Attack_Tag_2, const struct FGameplayTagContainer& CallFunc_GetTraceData_Override_Data_Gameplay_Tags_2, const struct FS_CreatureKnockbackData& CallFunc_GetTraceData_Override_Data_Knockback_Data_2, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMesh_Mesh, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANS_CreatureBeamTrace_C", "GetTraceLocation");

	Params::UANS_CreatureBeamTrace_C_GetTraceLocation_Params Parms{};

	Parms.Creature = Creature;
	Parms.LMesh = LMesh;
	Parms.LCreature = LCreature;
	Parms.LEnd = LEnd;
	Parms.LStart = LStart;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetTraceData_Override_Data_Socket_Start = CallFunc_GetTraceData_Override_Data_Socket_Start;
	Parms.CallFunc_GetTraceData_Override_Data_Beam_Length = CallFunc_GetTraceData_Override_Data_Beam_Length;
	Parms.CallFunc_GetTraceData_Override_Data_Radius = CallFunc_GetTraceData_Override_Data_Radius;
	Parms.CallFunc_GetTraceData_Override_Data_Use_Target = CallFunc_GetTraceData_Override_Data_Use_Target;
	Parms.CallFunc_GetTraceData_Override_Data_Tracking_Rate = CallFunc_GetTraceData_Override_Data_Tracking_Rate;
	Parms.CallFunc_GetTraceData_Override_Data_Attack_Tag = CallFunc_GetTraceData_Override_Data_Attack_Tag;
	Parms.CallFunc_GetTraceData_Override_Data_Gameplay_Tags = CallFunc_GetTraceData_Override_Data_Gameplay_Tags;
	Parms.CallFunc_GetTraceData_Override_Data_Knockback_Data = CallFunc_GetTraceData_Override_Data_Knockback_Data;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue = CallFunc_GreaterGreater_VectorRotator_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_GetTraceData_Override_Data_Socket_Start_1 = CallFunc_GetTraceData_Override_Data_Socket_Start_1;
	Parms.CallFunc_GetTraceData_Override_Data_Beam_Length_1 = CallFunc_GetTraceData_Override_Data_Beam_Length_1;
	Parms.CallFunc_GetTraceData_Override_Data_Radius_1 = CallFunc_GetTraceData_Override_Data_Radius_1;
	Parms.CallFunc_GetTraceData_Override_Data_Use_Target_1 = CallFunc_GetTraceData_Override_Data_Use_Target_1;
	Parms.CallFunc_GetTraceData_Override_Data_Tracking_Rate_1 = CallFunc_GetTraceData_Override_Data_Tracking_Rate_1;
	Parms.CallFunc_GetTraceData_Override_Data_Attack_Tag_1 = CallFunc_GetTraceData_Override_Data_Attack_Tag_1;
	Parms.CallFunc_GetTraceData_Override_Data_Gameplay_Tags_1 = CallFunc_GetTraceData_Override_Data_Gameplay_Tags_1;
	Parms.CallFunc_GetTraceData_Override_Data_Knockback_Data_1 = CallFunc_GetTraceData_Override_Data_Knockback_Data_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetTraceData_Override_Data_Socket_Start_2 = CallFunc_GetTraceData_Override_Data_Socket_Start_2;
	Parms.CallFunc_GetTraceData_Override_Data_Beam_Length_2 = CallFunc_GetTraceData_Override_Data_Beam_Length_2;
	Parms.CallFunc_GetTraceData_Override_Data_Radius_2 = CallFunc_GetTraceData_Override_Data_Radius_2;
	Parms.CallFunc_GetTraceData_Override_Data_Use_Target_2 = CallFunc_GetTraceData_Override_Data_Use_Target_2;
	Parms.CallFunc_GetTraceData_Override_Data_Tracking_Rate_2 = CallFunc_GetTraceData_Override_Data_Tracking_Rate_2;
	Parms.CallFunc_GetTraceData_Override_Data_Attack_Tag_2 = CallFunc_GetTraceData_Override_Data_Attack_Tag_2;
	Parms.CallFunc_GetTraceData_Override_Data_Gameplay_Tags_2 = CallFunc_GetTraceData_Override_Data_Gameplay_Tags_2;
	Parms.CallFunc_GetTraceData_Override_Data_Knockback_Data_2 = CallFunc_GetTraceData_Override_Data_Knockback_Data_2;
	Parms.CallFunc_GetSocketRotation_ReturnValue = CallFunc_GetSocketRotation_ReturnValue;
	Parms.CallFunc_GetSkeletalMesh_Mesh = CallFunc_GetSkeletalMesh_Mesh;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue_1 = CallFunc_GreaterGreater_VectorRotator_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_GetSocketLocation_ReturnValue_1 = CallFunc_GetSocketLocation_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

}


// Function ANS_CreatureBeamTrace.ANS_CreatureBeamTrace_C.GetSkeletalMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_CreatureBase_C*          Creature                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      Mesh                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             LItem                                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          LCreature                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetRootMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_EquippedItems_C>K2Node_DynamicCast_AsBPI_Equipped_Items                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetItem_Weapon                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UANS_CreatureBeamTrace_C::GetSkeletalMesh(class ABP_CreatureBase_C* Creature, class USkeletalMeshComponent** Mesh, class AEquippableItem* LItem, class ABP_CreatureBase_C* LCreature, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetRootMesh_ReturnValue, TScriptInterface<class IBPI_EquippedItems_C> K2Node_DynamicCast_AsBPI_Equipped_Items, bool K2Node_DynamicCast_bSuccess, class AEquippableItem* CallFunc_GetItem_Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANS_CreatureBeamTrace_C", "GetSkeletalMesh");

	Params::UANS_CreatureBeamTrace_C_GetSkeletalMesh_Params Parms{};

	Parms.Creature = Creature;
	Parms.LItem = LItem;
	Parms.LCreature = LCreature;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetRootMesh_ReturnValue = CallFunc_GetRootMesh_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Equipped_Items = K2Node_DynamicCast_AsBPI_Equipped_Items;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetItem_Weapon = CallFunc_GetItem_Weapon;

	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;

}


// Function ANS_CreatureBeamTrace.ANS_CreatureBeamTrace_C.GetTraceData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_CreatureBase_C*          Creature                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        Override_Data_Socket_Start                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Override_Data_Beam_Length                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Override_Data_Radius                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Override_Data_Use_Target                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Override_Data_Tracking_Rate                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Override_Data_Attack_Tag                                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       Override_Data_Gameplay_Tags                                      (Parm, OutParm)
// struct FS_CreatureKnockbackData    Override_Data_Knockback_Data                                     (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          LCreature                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_Override_Data_Beam_Length_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_Override_Data_Radius_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_Override_Data_Tracking_Rate_ImplicitCast   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANS_CreatureBeamTrace_C::GetTraceData(class ABP_CreatureBase_C* Creature, class FName* Override_Data_Socket_Start, double* Override_Data_Beam_Length, double* Override_Data_Radius, bool* Override_Data_Use_Target, double* Override_Data_Tracking_Rate, struct FGameplayTag* Override_Data_Attack_Tag, struct FGameplayTagContainer* Override_Data_Gameplay_Tags, struct FS_CreatureKnockbackData* Override_Data_Knockback_Data, class ABP_CreatureBase_C* LCreature, bool CallFunc_IsValid_ReturnValue, double K2Node_FunctionResult_Override_Data_Beam_Length_ImplicitCast, double K2Node_FunctionResult_Override_Data_Radius_ImplicitCast, double K2Node_FunctionResult_Override_Data_Tracking_Rate_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANS_CreatureBeamTrace_C", "GetTraceData");

	Params::UANS_CreatureBeamTrace_C_GetTraceData_Params Parms{};

	Parms.Creature = Creature;
	Parms.LCreature = LCreature;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_FunctionResult_Override_Data_Beam_Length_ImplicitCast = K2Node_FunctionResult_Override_Data_Beam_Length_ImplicitCast;
	Parms.K2Node_FunctionResult_Override_Data_Radius_ImplicitCast = K2Node_FunctionResult_Override_Data_Radius_ImplicitCast;
	Parms.K2Node_FunctionResult_Override_Data_Tracking_Rate_ImplicitCast = K2Node_FunctionResult_Override_Data_Tracking_Rate_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Override_Data_Socket_Start != nullptr)
		*Override_Data_Socket_Start = Parms.Override_Data_Socket_Start;

	if (Override_Data_Beam_Length != nullptr)
		*Override_Data_Beam_Length = Parms.Override_Data_Beam_Length;

	if (Override_Data_Radius != nullptr)
		*Override_Data_Radius = Parms.Override_Data_Radius;

	if (Override_Data_Use_Target != nullptr)
		*Override_Data_Use_Target = Parms.Override_Data_Use_Target;

	if (Override_Data_Tracking_Rate != nullptr)
		*Override_Data_Tracking_Rate = Parms.Override_Data_Tracking_Rate;

	if (Override_Data_Attack_Tag != nullptr)
		*Override_Data_Attack_Tag = std::move(Parms.Override_Data_Attack_Tag);

	if (Override_Data_Gameplay_Tags != nullptr)
		*Override_Data_Gameplay_Tags = std::move(Parms.Override_Data_Gameplay_Tags);

	if (Override_Data_Knockback_Data != nullptr)
		*Override_Data_Knockback_Data = std::move(Parms.Override_Data_Knockback_Data);

}


// Function ANS_CreatureBeamTrace.ANS_CreatureBeamTrace_C.Received_NotifyTick
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              FrameDeltaTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    LRotationCurrent                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    LRotationOld                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     LLocationOld                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     LLocationCurrent                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          LCreature                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      LMesh                                                            (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMesh_Mesh                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTraceData_Override_Data_Socket_Start                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Beam_Length                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Radius                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTraceData_Override_Data_Use_Target                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Tracking_Rate                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetTraceData_Override_Data_Attack_Tag                   (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetTraceData_Override_Data_Gameplay_Tags                (None)
// struct FS_CreatureKnockbackData    CallFunc_GetTraceData_Override_Data_Knockback_Data               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMesh_Mesh_1                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTraceData_Override_Data_Socket_Start_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Beam_Length_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Radius_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTraceData_Override_Data_Use_Target_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Tracking_Rate_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetTraceData_Override_Data_Attack_Tag_1                 (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetTraceData_Override_Data_Gameplay_Tags_1              (None)
// struct FS_CreatureKnockbackData    CallFunc_GetTraceData_Override_Data_Knockback_Data_1             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMesh_Mesh_2                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTraceData_Override_Data_Socket_Start_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Beam_Length_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Radius_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTraceData_Override_Data_Use_Target_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Tracking_Rate_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetTraceData_Override_Data_Attack_Tag_2                 (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetTraceData_Override_Data_Gameplay_Tags_2              (None)
// struct FS_CreatureKnockbackData    CallFunc_GetTraceData_Override_Data_Knockback_Data_2             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMesh_Mesh_3                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetTraceData_Override_Data_Socket_Start_3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Beam_Length_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Radius_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTraceData_Override_Data_Use_Target_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Tracking_Rate_3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetTraceData_Override_Data_Attack_Tag_3                 (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetTraceData_Override_Data_Gameplay_Tags_3              (None)
// struct FS_CreatureKnockbackData    CallFunc_GetTraceData_Override_Data_Knockback_Data_3             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMesh_Mesh_4                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTraceData_Override_Data_Socket_Start_4               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Beam_Length_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Radius_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTraceData_Override_Data_Use_Target_4                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Tracking_Rate_4              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetTraceData_Override_Data_Attack_Tag_4                 (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetTraceData_Override_Data_Gameplay_Tags_4              (None)
// struct FS_CreatureKnockbackData    CallFunc_GetTraceData_Override_Data_Knockback_Data_4             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTraceData_Override_Data_Socket_Start_5               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Beam_Length_5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Radius_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTraceData_Override_Data_Use_Target_5                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Tracking_Rate_5              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetTraceData_Override_Data_Attack_Tag_5                 (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetTraceData_Override_Data_Gameplay_Tags_5              (None)
// struct FS_CreatureKnockbackData    CallFunc_GetTraceData_Override_Data_Knockback_Data_5             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetTraceData_Override_Data_Socket_Start_6               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Beam_Length_6                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Radius_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTraceData_Override_Data_Use_Target_6                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Tracking_Rate_6              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetTraceData_Override_Data_Attack_Tag_6                 (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetTraceData_Override_Data_Gameplay_Tags_6              (None)
// struct FS_CreatureKnockbackData    CallFunc_GetTraceData_Override_Data_Knockback_Data_6             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_2                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTraceData_Override_Data_Socket_Start_7               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Beam_Length_7                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Radius_7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTraceData_Override_Data_Use_Target_7                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Tracking_Rate_7              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetTraceData_Override_Data_Attack_Tag_7                 (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetTraceData_Override_Data_Gameplay_Tags_7              (None)
// struct FS_CreatureKnockbackData    CallFunc_GetTraceData_Override_Data_Knockback_Data_7             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_RotatorRotator_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_EquippedItems_C>K2Node_DynamicCast_AsBPI_Equipped_Items                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetItem_Weapon                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTraceData_Override_Data_Socket_Start_8               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Beam_Length_8                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Radius_8                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTraceData_Override_Data_Use_Target_8                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Tracking_Rate_8              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetTraceData_Override_Data_Attack_Tag_8                 (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetTraceData_Override_Data_Gameplay_Tags_8              (None)
// struct FS_CreatureKnockbackData    CallFunc_GetTraceData_Override_Data_Knockback_Data_8             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FHitResult>          CallFunc_NWXLineTraceMulti_OutHits                               (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_NWXLineTraceMulti_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HandleHits_NewParam                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_EquippedItems_C>K2Node_DynamicCast_AsBPI_Equipped_Items_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetItem_Weapon_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTraceData_Override_Data_Socket_Start_9               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Beam_Length_9                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Radius_9                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTraceData_Override_Data_Use_Target_9                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Tracking_Rate_9              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetTraceData_Override_Data_Attack_Tag_9                 (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetTraceData_Override_Data_Gameplay_Tags_9              (None)
// struct FS_CreatureKnockbackData    CallFunc_GetTraceData_Override_Data_Knockback_Data_9             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetSocketRotation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_3                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FHitResult>          CallFunc_NWXLineTraceMulti_OutHits_1                             (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_NWXLineTraceMulti_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HandleHits_NewParam_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          K2Node_DynamicCast_AsBP_Creature_Base                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetTraceLocation_Location                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RInterpTo_InterpSpeed_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_EqualEqual_RotatorRotator_ErrorTolerance_ImplicitCast   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UANS_CreatureBeamTrace_C::Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, struct FAnimNotifyEventReference& EventReference, const struct FRotator& LRotationCurrent, const struct FRotator& LRotationOld, const struct FVector& LLocationOld, const struct FVector& LLocationCurrent, class ABP_CreatureBase_C* LCreature, class USkeletalMeshComponent* LMesh, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, class USkeletalMeshComponent* CallFunc_GetSkeletalMesh_Mesh, class FName CallFunc_GetTraceData_Override_Data_Socket_Start, double CallFunc_GetTraceData_Override_Data_Beam_Length, double CallFunc_GetTraceData_Override_Data_Radius, bool CallFunc_GetTraceData_Override_Data_Use_Target, double CallFunc_GetTraceData_Override_Data_Tracking_Rate, const struct FGameplayTag& CallFunc_GetTraceData_Override_Data_Attack_Tag, const struct FGameplayTagContainer& CallFunc_GetTraceData_Override_Data_Gameplay_Tags, const struct FS_CreatureKnockbackData& CallFunc_GetTraceData_Override_Data_Knockback_Data, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMesh_Mesh_1, class FName CallFunc_GetTraceData_Override_Data_Socket_Start_1, double CallFunc_GetTraceData_Override_Data_Beam_Length_1, double CallFunc_GetTraceData_Override_Data_Radius_1, bool CallFunc_GetTraceData_Override_Data_Use_Target_1, double CallFunc_GetTraceData_Override_Data_Tracking_Rate_1, const struct FGameplayTag& CallFunc_GetTraceData_Override_Data_Attack_Tag_1, const struct FGameplayTagContainer& CallFunc_GetTraceData_Override_Data_Gameplay_Tags_1, const struct FS_CreatureKnockbackData& CallFunc_GetTraceData_Override_Data_Knockback_Data_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetSkeletalMesh_Mesh_2, class FName CallFunc_GetTraceData_Override_Data_Socket_Start_2, double CallFunc_GetTraceData_Override_Data_Beam_Length_2, double CallFunc_GetTraceData_Override_Data_Radius_2, bool CallFunc_GetTraceData_Override_Data_Use_Target_2, double CallFunc_GetTraceData_Override_Data_Tracking_Rate_2, const struct FGameplayTag& CallFunc_GetTraceData_Override_Data_Attack_Tag_2, const struct FGameplayTagContainer& CallFunc_GetTraceData_Override_Data_Gameplay_Tags_2, const struct FS_CreatureKnockbackData& CallFunc_GetTraceData_Override_Data_Knockback_Data_2, class USkeletalMeshComponent* CallFunc_GetSkeletalMesh_Mesh_3, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_2, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, class FName CallFunc_GetTraceData_Override_Data_Socket_Start_3, double CallFunc_GetTraceData_Override_Data_Beam_Length_3, double CallFunc_GetTraceData_Override_Data_Radius_3, bool CallFunc_GetTraceData_Override_Data_Use_Target_3, double CallFunc_GetTraceData_Override_Data_Tracking_Rate_3, const struct FGameplayTag& CallFunc_GetTraceData_Override_Data_Attack_Tag_3, const struct FGameplayTagContainer& CallFunc_GetTraceData_Override_Data_Gameplay_Tags_3, const struct FS_CreatureKnockbackData& CallFunc_GetTraceData_Override_Data_Knockback_Data_3, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_3, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue_1, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetSkeletalMesh_Mesh_4, class FName CallFunc_GetTraceData_Override_Data_Socket_Start_4, double CallFunc_GetTraceData_Override_Data_Beam_Length_4, double CallFunc_GetTraceData_Override_Data_Radius_4, bool CallFunc_GetTraceData_Override_Data_Use_Target_4, double CallFunc_GetTraceData_Override_Data_Tracking_Rate_4, const struct FGameplayTag& CallFunc_GetTraceData_Override_Data_Attack_Tag_4, const struct FGameplayTagContainer& CallFunc_GetTraceData_Override_Data_Gameplay_Tags_4, const struct FS_CreatureKnockbackData& CallFunc_GetTraceData_Override_Data_Knockback_Data_4, class FName CallFunc_GetTraceData_Override_Data_Socket_Start_5, double CallFunc_GetTraceData_Override_Data_Beam_Length_5, double CallFunc_GetTraceData_Override_Data_Radius_5, bool CallFunc_GetTraceData_Override_Data_Use_Target_5, double CallFunc_GetTraceData_Override_Data_Tracking_Rate_5, const struct FGameplayTag& CallFunc_GetTraceData_Override_Data_Attack_Tag_5, const struct FGameplayTagContainer& CallFunc_GetTraceData_Override_Data_Gameplay_Tags_5, const struct FS_CreatureKnockbackData& CallFunc_GetTraceData_Override_Data_Knockback_Data_5, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_4, const struct FRotator& CallFunc_RInterpTo_ReturnValue, class FName CallFunc_GetTraceData_Override_Data_Socket_Start_6, double CallFunc_GetTraceData_Override_Data_Beam_Length_6, double CallFunc_GetTraceData_Override_Data_Radius_6, bool CallFunc_GetTraceData_Override_Data_Use_Target_6, double CallFunc_GetTraceData_Override_Data_Tracking_Rate_6, const struct FGameplayTag& CallFunc_GetTraceData_Override_Data_Attack_Tag_6, const struct FGameplayTagContainer& CallFunc_GetTraceData_Override_Data_Gameplay_Tags_6, const struct FS_CreatureKnockbackData& CallFunc_GetTraceData_Override_Data_Knockback_Data_6, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FLinearColor& Temp_struct_Variable_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue_2, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, class FName CallFunc_GetTraceData_Override_Data_Socket_Start_7, double CallFunc_GetTraceData_Override_Data_Beam_Length_7, double CallFunc_GetTraceData_Override_Data_Radius_7, bool CallFunc_GetTraceData_Override_Data_Use_Target_7, double CallFunc_GetTraceData_Override_Data_Tracking_Rate_7, const struct FGameplayTag& CallFunc_GetTraceData_Override_Data_Attack_Tag_7, const struct FGameplayTagContainer& CallFunc_GetTraceData_Override_Data_Gameplay_Tags_7, const struct FS_CreatureKnockbackData& CallFunc_GetTraceData_Override_Data_Knockback_Data_7, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, bool CallFunc_EqualEqual_RotatorRotator_ReturnValue, TScriptInterface<class IBPI_EquippedItems_C> K2Node_DynamicCast_AsBPI_Equipped_Items, bool K2Node_DynamicCast_bSuccess, class AEquippableItem* CallFunc_GetItem_Weapon, class FName CallFunc_GetTraceData_Override_Data_Socket_Start_8, double CallFunc_GetTraceData_Override_Data_Beam_Length_8, double CallFunc_GetTraceData_Override_Data_Radius_8, bool CallFunc_GetTraceData_Override_Data_Use_Target_8, double CallFunc_GetTraceData_Override_Data_Tracking_Rate_8, const struct FGameplayTag& CallFunc_GetTraceData_Override_Data_Attack_Tag_8, const struct FGameplayTagContainer& CallFunc_GetTraceData_Override_Data_Gameplay_Tags_8, const struct FS_CreatureKnockbackData& CallFunc_GetTraceData_Override_Data_Knockback_Data_8, TArray<class UObject*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, const struct FRotator& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<struct FHitResult>& CallFunc_NWXLineTraceMulti_OutHits, bool CallFunc_NWXLineTraceMulti_ReturnValue, bool CallFunc_HandleHits_NewParam, TScriptInterface<class IBPI_EquippedItems_C> K2Node_DynamicCast_AsBPI_Equipped_Items_1, bool K2Node_DynamicCast_bSuccess_1, class AEquippableItem* CallFunc_GetItem_Weapon_1, class FName CallFunc_GetTraceData_Override_Data_Socket_Start_9, double CallFunc_GetTraceData_Override_Data_Beam_Length_9, double CallFunc_GetTraceData_Override_Data_Radius_9, bool CallFunc_GetTraceData_Override_Data_Use_Target_9, double CallFunc_GetTraceData_Override_Data_Tracking_Rate_9, const struct FGameplayTag& CallFunc_GetTraceData_Override_Data_Attack_Tag_9, const struct FGameplayTagContainer& CallFunc_GetTraceData_Override_Data_Gameplay_Tags_9, const struct FS_CreatureKnockbackData& CallFunc_GetTraceData_Override_Data_Knockback_Data_9, TArray<class UObject*>& K2Node_MakeArray_Array_1, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue_1, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_4, const struct FLinearColor& Temp_struct_Variable_3, bool CallFunc_HasAuthority_ReturnValue, TArray<struct FHitResult>& CallFunc_NWXLineTraceMulti_OutHits_1, bool CallFunc_NWXLineTraceMulti_ReturnValue_1, bool CallFunc_HandleHits_NewParam_1, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_GetTraceLocation_Location, const struct FVector& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, float CallFunc_RInterpTo_InterpSpeed_ImplicitCast, float CallFunc_EqualEqual_RotatorRotator_ErrorTolerance_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANS_CreatureBeamTrace_C", "Received_NotifyTick");

	Params::UANS_CreatureBeamTrace_C_Received_NotifyTick_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.FrameDeltaTime = FrameDeltaTime;
	Parms.EventReference = EventReference;
	Parms.LRotationCurrent = LRotationCurrent;
	Parms.LRotationOld = LRotationOld;
	Parms.LLocationOld = LLocationOld;
	Parms.LLocationCurrent = LLocationCurrent;
	Parms.LCreature = LCreature;
	Parms.LMesh = LMesh;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_GetSkeletalMesh_Mesh = CallFunc_GetSkeletalMesh_Mesh;
	Parms.CallFunc_GetTraceData_Override_Data_Socket_Start = CallFunc_GetTraceData_Override_Data_Socket_Start;
	Parms.CallFunc_GetTraceData_Override_Data_Beam_Length = CallFunc_GetTraceData_Override_Data_Beam_Length;
	Parms.CallFunc_GetTraceData_Override_Data_Radius = CallFunc_GetTraceData_Override_Data_Radius;
	Parms.CallFunc_GetTraceData_Override_Data_Use_Target = CallFunc_GetTraceData_Override_Data_Use_Target;
	Parms.CallFunc_GetTraceData_Override_Data_Tracking_Rate = CallFunc_GetTraceData_Override_Data_Tracking_Rate;
	Parms.CallFunc_GetTraceData_Override_Data_Attack_Tag = CallFunc_GetTraceData_Override_Data_Attack_Tag;
	Parms.CallFunc_GetTraceData_Override_Data_Gameplay_Tags = CallFunc_GetTraceData_Override_Data_Gameplay_Tags;
	Parms.CallFunc_GetTraceData_Override_Data_Knockback_Data = CallFunc_GetTraceData_Override_Data_Knockback_Data;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_GetSkeletalMesh_Mesh_1 = CallFunc_GetSkeletalMesh_Mesh_1;
	Parms.CallFunc_GetTraceData_Override_Data_Socket_Start_1 = CallFunc_GetTraceData_Override_Data_Socket_Start_1;
	Parms.CallFunc_GetTraceData_Override_Data_Beam_Length_1 = CallFunc_GetTraceData_Override_Data_Beam_Length_1;
	Parms.CallFunc_GetTraceData_Override_Data_Radius_1 = CallFunc_GetTraceData_Override_Data_Radius_1;
	Parms.CallFunc_GetTraceData_Override_Data_Use_Target_1 = CallFunc_GetTraceData_Override_Data_Use_Target_1;
	Parms.CallFunc_GetTraceData_Override_Data_Tracking_Rate_1 = CallFunc_GetTraceData_Override_Data_Tracking_Rate_1;
	Parms.CallFunc_GetTraceData_Override_Data_Attack_Tag_1 = CallFunc_GetTraceData_Override_Data_Attack_Tag_1;
	Parms.CallFunc_GetTraceData_Override_Data_Gameplay_Tags_1 = CallFunc_GetTraceData_Override_Data_Gameplay_Tags_1;
	Parms.CallFunc_GetTraceData_Override_Data_Knockback_Data_1 = CallFunc_GetTraceData_Override_Data_Knockback_Data_1;
	Parms.CallFunc_GetSocketLocation_ReturnValue_1 = CallFunc_GetSocketLocation_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_GetSkeletalMesh_Mesh_2 = CallFunc_GetSkeletalMesh_Mesh_2;
	Parms.CallFunc_GetTraceData_Override_Data_Socket_Start_2 = CallFunc_GetTraceData_Override_Data_Socket_Start_2;
	Parms.CallFunc_GetTraceData_Override_Data_Beam_Length_2 = CallFunc_GetTraceData_Override_Data_Beam_Length_2;
	Parms.CallFunc_GetTraceData_Override_Data_Radius_2 = CallFunc_GetTraceData_Override_Data_Radius_2;
	Parms.CallFunc_GetTraceData_Override_Data_Use_Target_2 = CallFunc_GetTraceData_Override_Data_Use_Target_2;
	Parms.CallFunc_GetTraceData_Override_Data_Tracking_Rate_2 = CallFunc_GetTraceData_Override_Data_Tracking_Rate_2;
	Parms.CallFunc_GetTraceData_Override_Data_Attack_Tag_2 = CallFunc_GetTraceData_Override_Data_Attack_Tag_2;
	Parms.CallFunc_GetTraceData_Override_Data_Gameplay_Tags_2 = CallFunc_GetTraceData_Override_Data_Gameplay_Tags_2;
	Parms.CallFunc_GetTraceData_Override_Data_Knockback_Data_2 = CallFunc_GetTraceData_Override_Data_Knockback_Data_2;
	Parms.CallFunc_GetSkeletalMesh_Mesh_3 = CallFunc_GetSkeletalMesh_Mesh_3;
	Parms.CallFunc_GetSocketLocation_ReturnValue_2 = CallFunc_GetSocketLocation_ReturnValue_2;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_GetTraceData_Override_Data_Socket_Start_3 = CallFunc_GetTraceData_Override_Data_Socket_Start_3;
	Parms.CallFunc_GetTraceData_Override_Data_Beam_Length_3 = CallFunc_GetTraceData_Override_Data_Beam_Length_3;
	Parms.CallFunc_GetTraceData_Override_Data_Radius_3 = CallFunc_GetTraceData_Override_Data_Radius_3;
	Parms.CallFunc_GetTraceData_Override_Data_Use_Target_3 = CallFunc_GetTraceData_Override_Data_Use_Target_3;
	Parms.CallFunc_GetTraceData_Override_Data_Tracking_Rate_3 = CallFunc_GetTraceData_Override_Data_Tracking_Rate_3;
	Parms.CallFunc_GetTraceData_Override_Data_Attack_Tag_3 = CallFunc_GetTraceData_Override_Data_Attack_Tag_3;
	Parms.CallFunc_GetTraceData_Override_Data_Gameplay_Tags_3 = CallFunc_GetTraceData_Override_Data_Gameplay_Tags_3;
	Parms.CallFunc_GetTraceData_Override_Data_Knockback_Data_3 = CallFunc_GetTraceData_Override_Data_Knockback_Data_3;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_GetSocketLocation_ReturnValue_3 = CallFunc_GetSocketLocation_ReturnValue_3;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_FindLookAtRotation_ReturnValue_1 = CallFunc_FindLookAtRotation_ReturnValue_1;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_GetSkeletalMesh_Mesh_4 = CallFunc_GetSkeletalMesh_Mesh_4;
	Parms.CallFunc_GetTraceData_Override_Data_Socket_Start_4 = CallFunc_GetTraceData_Override_Data_Socket_Start_4;
	Parms.CallFunc_GetTraceData_Override_Data_Beam_Length_4 = CallFunc_GetTraceData_Override_Data_Beam_Length_4;
	Parms.CallFunc_GetTraceData_Override_Data_Radius_4 = CallFunc_GetTraceData_Override_Data_Radius_4;
	Parms.CallFunc_GetTraceData_Override_Data_Use_Target_4 = CallFunc_GetTraceData_Override_Data_Use_Target_4;
	Parms.CallFunc_GetTraceData_Override_Data_Tracking_Rate_4 = CallFunc_GetTraceData_Override_Data_Tracking_Rate_4;
	Parms.CallFunc_GetTraceData_Override_Data_Attack_Tag_4 = CallFunc_GetTraceData_Override_Data_Attack_Tag_4;
	Parms.CallFunc_GetTraceData_Override_Data_Gameplay_Tags_4 = CallFunc_GetTraceData_Override_Data_Gameplay_Tags_4;
	Parms.CallFunc_GetTraceData_Override_Data_Knockback_Data_4 = CallFunc_GetTraceData_Override_Data_Knockback_Data_4;
	Parms.CallFunc_GetTraceData_Override_Data_Socket_Start_5 = CallFunc_GetTraceData_Override_Data_Socket_Start_5;
	Parms.CallFunc_GetTraceData_Override_Data_Beam_Length_5 = CallFunc_GetTraceData_Override_Data_Beam_Length_5;
	Parms.CallFunc_GetTraceData_Override_Data_Radius_5 = CallFunc_GetTraceData_Override_Data_Radius_5;
	Parms.CallFunc_GetTraceData_Override_Data_Use_Target_5 = CallFunc_GetTraceData_Override_Data_Use_Target_5;
	Parms.CallFunc_GetTraceData_Override_Data_Tracking_Rate_5 = CallFunc_GetTraceData_Override_Data_Tracking_Rate_5;
	Parms.CallFunc_GetTraceData_Override_Data_Attack_Tag_5 = CallFunc_GetTraceData_Override_Data_Attack_Tag_5;
	Parms.CallFunc_GetTraceData_Override_Data_Gameplay_Tags_5 = CallFunc_GetTraceData_Override_Data_Gameplay_Tags_5;
	Parms.CallFunc_GetTraceData_Override_Data_Knockback_Data_5 = CallFunc_GetTraceData_Override_Data_Knockback_Data_5;
	Parms.CallFunc_GetSocketLocation_ReturnValue_4 = CallFunc_GetSocketLocation_ReturnValue_4;
	Parms.CallFunc_RInterpTo_ReturnValue = CallFunc_RInterpTo_ReturnValue;
	Parms.CallFunc_GetTraceData_Override_Data_Socket_Start_6 = CallFunc_GetTraceData_Override_Data_Socket_Start_6;
	Parms.CallFunc_GetTraceData_Override_Data_Beam_Length_6 = CallFunc_GetTraceData_Override_Data_Beam_Length_6;
	Parms.CallFunc_GetTraceData_Override_Data_Radius_6 = CallFunc_GetTraceData_Override_Data_Radius_6;
	Parms.CallFunc_GetTraceData_Override_Data_Use_Target_6 = CallFunc_GetTraceData_Override_Data_Use_Target_6;
	Parms.CallFunc_GetTraceData_Override_Data_Tracking_Rate_6 = CallFunc_GetTraceData_Override_Data_Tracking_Rate_6;
	Parms.CallFunc_GetTraceData_Override_Data_Attack_Tag_6 = CallFunc_GetTraceData_Override_Data_Attack_Tag_6;
	Parms.CallFunc_GetTraceData_Override_Data_Gameplay_Tags_6 = CallFunc_GetTraceData_Override_Data_Gameplay_Tags_6;
	Parms.CallFunc_GetTraceData_Override_Data_Knockback_Data_6 = CallFunc_GetTraceData_Override_Data_Knockback_Data_6;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_FindLookAtRotation_ReturnValue_2 = CallFunc_FindLookAtRotation_ReturnValue_2;
	Parms.CallFunc_BreakRotator_Roll_2 = CallFunc_BreakRotator_Roll_2;
	Parms.CallFunc_BreakRotator_Pitch_2 = CallFunc_BreakRotator_Pitch_2;
	Parms.CallFunc_BreakRotator_Yaw_2 = CallFunc_BreakRotator_Yaw_2;
	Parms.CallFunc_GetTraceData_Override_Data_Socket_Start_7 = CallFunc_GetTraceData_Override_Data_Socket_Start_7;
	Parms.CallFunc_GetTraceData_Override_Data_Beam_Length_7 = CallFunc_GetTraceData_Override_Data_Beam_Length_7;
	Parms.CallFunc_GetTraceData_Override_Data_Radius_7 = CallFunc_GetTraceData_Override_Data_Radius_7;
	Parms.CallFunc_GetTraceData_Override_Data_Use_Target_7 = CallFunc_GetTraceData_Override_Data_Use_Target_7;
	Parms.CallFunc_GetTraceData_Override_Data_Tracking_Rate_7 = CallFunc_GetTraceData_Override_Data_Tracking_Rate_7;
	Parms.CallFunc_GetTraceData_Override_Data_Attack_Tag_7 = CallFunc_GetTraceData_Override_Data_Attack_Tag_7;
	Parms.CallFunc_GetTraceData_Override_Data_Gameplay_Tags_7 = CallFunc_GetTraceData_Override_Data_Gameplay_Tags_7;
	Parms.CallFunc_GetTraceData_Override_Data_Knockback_Data_7 = CallFunc_GetTraceData_Override_Data_Knockback_Data_7;
	Parms.CallFunc_MakeRotator_ReturnValue_2 = CallFunc_MakeRotator_ReturnValue_2;
	Parms.CallFunc_EqualEqual_RotatorRotator_ReturnValue = CallFunc_EqualEqual_RotatorRotator_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Equipped_Items = K2Node_DynamicCast_AsBPI_Equipped_Items;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetItem_Weapon = CallFunc_GetItem_Weapon;
	Parms.CallFunc_GetTraceData_Override_Data_Socket_Start_8 = CallFunc_GetTraceData_Override_Data_Socket_Start_8;
	Parms.CallFunc_GetTraceData_Override_Data_Beam_Length_8 = CallFunc_GetTraceData_Override_Data_Beam_Length_8;
	Parms.CallFunc_GetTraceData_Override_Data_Radius_8 = CallFunc_GetTraceData_Override_Data_Radius_8;
	Parms.CallFunc_GetTraceData_Override_Data_Use_Target_8 = CallFunc_GetTraceData_Override_Data_Use_Target_8;
	Parms.CallFunc_GetTraceData_Override_Data_Tracking_Rate_8 = CallFunc_GetTraceData_Override_Data_Tracking_Rate_8;
	Parms.CallFunc_GetTraceData_Override_Data_Attack_Tag_8 = CallFunc_GetTraceData_Override_Data_Attack_Tag_8;
	Parms.CallFunc_GetTraceData_Override_Data_Gameplay_Tags_8 = CallFunc_GetTraceData_Override_Data_Gameplay_Tags_8;
	Parms.CallFunc_GetTraceData_Override_Data_Knockback_Data_8 = CallFunc_GetTraceData_Override_Data_Knockback_Data_8;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Conv_DoubleToVector_ReturnValue = CallFunc_Conv_DoubleToVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_3 = CallFunc_Add_VectorVector_ReturnValue_3;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_NWXLineTraceMulti_OutHits = CallFunc_NWXLineTraceMulti_OutHits;
	Parms.CallFunc_NWXLineTraceMulti_ReturnValue = CallFunc_NWXLineTraceMulti_ReturnValue;
	Parms.CallFunc_HandleHits_NewParam = CallFunc_HandleHits_NewParam;
	Parms.K2Node_DynamicCast_AsBPI_Equipped_Items_1 = K2Node_DynamicCast_AsBPI_Equipped_Items_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetItem_Weapon_1 = CallFunc_GetItem_Weapon_1;
	Parms.CallFunc_GetTraceData_Override_Data_Socket_Start_9 = CallFunc_GetTraceData_Override_Data_Socket_Start_9;
	Parms.CallFunc_GetTraceData_Override_Data_Beam_Length_9 = CallFunc_GetTraceData_Override_Data_Beam_Length_9;
	Parms.CallFunc_GetTraceData_Override_Data_Radius_9 = CallFunc_GetTraceData_Override_Data_Radius_9;
	Parms.CallFunc_GetTraceData_Override_Data_Use_Target_9 = CallFunc_GetTraceData_Override_Data_Use_Target_9;
	Parms.CallFunc_GetTraceData_Override_Data_Tracking_Rate_9 = CallFunc_GetTraceData_Override_Data_Tracking_Rate_9;
	Parms.CallFunc_GetTraceData_Override_Data_Attack_Tag_9 = CallFunc_GetTraceData_Override_Data_Attack_Tag_9;
	Parms.CallFunc_GetTraceData_Override_Data_Gameplay_Tags_9 = CallFunc_GetTraceData_Override_Data_Gameplay_Tags_9;
	Parms.CallFunc_GetTraceData_Override_Data_Knockback_Data_9 = CallFunc_GetTraceData_Override_Data_Knockback_Data_9;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Conv_DoubleToVector_ReturnValue_1 = CallFunc_Conv_DoubleToVector_ReturnValue_1;
	Parms.CallFunc_GetSocketRotation_ReturnValue = CallFunc_GetSocketRotation_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue_1 = CallFunc_GetForwardVector_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_1 = CallFunc_Multiply_VectorVector_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_4 = CallFunc_Add_VectorVector_ReturnValue_4;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_NWXLineTraceMulti_OutHits_1 = CallFunc_NWXLineTraceMulti_OutHits_1;
	Parms.CallFunc_NWXLineTraceMulti_ReturnValue_1 = CallFunc_NWXLineTraceMulti_ReturnValue_1;
	Parms.CallFunc_HandleHits_NewParam_1 = CallFunc_HandleHits_NewParam_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Creature_Base = K2Node_DynamicCast_AsBP_Creature_Base;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetTraceLocation_Location = CallFunc_GetTraceLocation_Location;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_RInterpTo_InterpSpeed_ImplicitCast = CallFunc_RInterpTo_InterpSpeed_ImplicitCast;
	Parms.CallFunc_EqualEqual_RotatorRotator_ErrorTolerance_ImplicitCast = CallFunc_EqualEqual_RotatorRotator_ErrorTolerance_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ANS_CreatureBeamTrace.ANS_CreatureBeamTrace_C.Received_NotifyBegin
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              TotalDuration                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          LCreature                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      LMesh                                                            (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetTraceRotation_Rotation                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetTraceLocation_Location                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          K2Node_DynamicCast_AsBP_Creature_Base                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_Guid_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UANS_CreatureBeamTrace_C::Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, struct FAnimNotifyEventReference& EventReference, class ABP_CreatureBase_C* LCreature, class USkeletalMeshComponent* LMesh, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_GetTraceRotation_Rotation, bool CallFunc_HasAuthority_ReturnValue, const struct FVector& CallFunc_GetTraceLocation_Location, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_IsValid_Guid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANS_CreatureBeamTrace_C", "Received_NotifyBegin");

	Params::UANS_CreatureBeamTrace_C_Received_NotifyBegin_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.TotalDuration = TotalDuration;
	Parms.EventReference = EventReference;
	Parms.LCreature = LCreature;
	Parms.LMesh = LMesh;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTraceRotation_Rotation = CallFunc_GetTraceRotation_Rotation;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetTraceLocation_Location = CallFunc_GetTraceLocation_Location;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetDisplayName_ReturnValue_1 = CallFunc_GetDisplayName_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_Creature_Base = K2Node_DynamicCast_AsBP_Creature_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_IsValid_Guid_ReturnValue = CallFunc_IsValid_Guid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


