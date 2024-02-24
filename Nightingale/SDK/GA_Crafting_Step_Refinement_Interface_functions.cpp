#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Crafting_Step_Refinement_Interface.GA_Crafting_Step_Refinement_Interface_C
// (None)

class UClass* UGA_Crafting_Step_Refinement_Interface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Crafting_Step_Refinement_Interface_C");

	return Clss;
}


// GA_Crafting_Step_Refinement_Interface_C GA_Crafting_Step_Refinement_Interface.Default__GA_Crafting_Step_Refinement_Interface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Crafting_Step_Refinement_Interface_C* UGA_Crafting_Step_Refinement_Interface_C::GetDefaultObj()
{
	static class UGA_Crafting_Step_Refinement_Interface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Crafting_Step_Refinement_Interface_C*>(UGA_Crafting_Step_Refinement_Interface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Crafting_Step_Refinement_Interface.GA_Crafting_Step_Refinement_Interface_C.FinalizeInitialization
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_CraftInProgress CurrentCraftData_Old                                             (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FJsonStruct                 CallFunc_CreateJsonStruct_ReturnValue                            (None)
// struct FDynamicTypedStructs        CallFunc_UpdateDynamicStructs_DynamicStructOut                   (None)
// struct FJsonStruct                 CallFunc_CreateJsonStruct_ReturnValue_1                          (None)
// struct FS_Crafting_Step_RefinementTimerCallFunc_GetStructByType_OutStruct                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetStructByType_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDynamicTypedStructs        CallFunc_UpdateDynamicStructs_DynamicStructOut_1                 (None)
// bool                               CallFunc_FindCraftForID_BP_Success                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindCraftForID_BP_CraftInProgressIndex                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_CraftInProgress CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)

void UGA_Crafting_Step_Refinement_Interface_C::FinalizeInitialization(bool* Success, const struct FS_Crafting_CraftInProgress& CurrentCraftData_Old, const struct FJsonStruct& CallFunc_CreateJsonStruct_ReturnValue, const struct FDynamicTypedStructs& CallFunc_UpdateDynamicStructs_DynamicStructOut, const struct FJsonStruct& CallFunc_CreateJsonStruct_ReturnValue_1, const struct FS_Crafting_Step_RefinementTimer& CallFunc_GetStructByType_OutStruct, bool CallFunc_GetStructByType_ReturnValue, const struct FDynamicTypedStructs& CallFunc_UpdateDynamicStructs_DynamicStructOut_1, bool CallFunc_FindCraftForID_BP_Success, int32 CallFunc_FindCraftForID_BP_CraftInProgressIndex, const struct FS_Crafting_CraftInProgress& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Refinement_Interface_C", "FinalizeInitialization");

	Params::UGA_Crafting_Step_Refinement_Interface_C_FinalizeInitialization_Params Parms{};

	Parms.CurrentCraftData_Old = CurrentCraftData_Old;
	Parms.CallFunc_CreateJsonStruct_ReturnValue = CallFunc_CreateJsonStruct_ReturnValue;
	Parms.CallFunc_UpdateDynamicStructs_DynamicStructOut = CallFunc_UpdateDynamicStructs_DynamicStructOut;
	Parms.CallFunc_CreateJsonStruct_ReturnValue_1 = CallFunc_CreateJsonStruct_ReturnValue_1;
	Parms.CallFunc_GetStructByType_OutStruct = CallFunc_GetStructByType_OutStruct;
	Parms.CallFunc_GetStructByType_ReturnValue = CallFunc_GetStructByType_ReturnValue;
	Parms.CallFunc_UpdateDynamicStructs_DynamicStructOut_1 = CallFunc_UpdateDynamicStructs_DynamicStructOut_1;
	Parms.CallFunc_FindCraftForID_BP_Success = CallFunc_FindCraftForID_BP_Success;
	Parms.CallFunc_FindCraftForID_BP_CraftInProgressIndex = CallFunc_FindCraftForID_BP_CraftInProgressIndex;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function GA_Crafting_Step_Refinement_Interface.GA_Crafting_Step_Refinement_Interface_C.InitializeAbilityFromEvent
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     Abs                                                              (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               bInitialization                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_CraftInProgress CurrentCraftData                                                 (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               IsSuccess                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InitializeAbilityFromEvent_Success                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectQuery        K2Node_MakeStruct_GameplayEffectQuery                            (None)
// TArray<struct FActiveGameplayEffectHandle>CallFunc_GetActiveEffects_ReturnValue                            (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Refinement_Interface_C::InitializeAbilityFromEvent(const struct FGameplayEventData& EventData, bool* Success, class UAbilitySystemComponent* Abs, bool bInitialization, const struct FS_Crafting_CraftInProgress& CurrentCraftData, bool IsSuccess, bool CallFunc_InitializeAbilityFromEvent_Success, bool CallFunc_IsValid_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FGameplayEffectQuery& K2Node_MakeStruct_GameplayEffectQuery, TArray<struct FActiveGameplayEffectHandle>& CallFunc_GetActiveEffects_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Refinement_Interface_C", "InitializeAbilityFromEvent");

	Params::UGA_Crafting_Step_Refinement_Interface_C_InitializeAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;
	Parms.Abs = Abs;
	Parms.bInitialization = bInitialization;
	Parms.CurrentCraftData = CurrentCraftData;
	Parms.IsSuccess = IsSuccess;
	Parms.CallFunc_InitializeAbilityFromEvent_Success = CallFunc_InitializeAbilityFromEvent_Success;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEffectQuery = K2Node_MakeStruct_GameplayEffectQuery;
	Parms.CallFunc_GetActiveEffects_ReturnValue = CallFunc_GetActiveEffects_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function GA_Crafting_Step_Refinement_Interface.GA_Crafting_Step_Refinement_Interface_C.Cancelled_148FFCCD49E86DC83A1E628A9CF33FF9
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleData                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Crafting_Step_Refinement_Interface_C::Cancelled_148FFCCD49E86DC83A1E628A9CF33FF9(struct FGameplayAbilityTargetDataHandle& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Refinement_Interface_C", "Cancelled_148FFCCD49E86DC83A1E628A9CF33FF9");

	Params::UGA_Crafting_Step_Refinement_Interface_C_Cancelled_148FFCCD49E86DC83A1E628A9CF33FF9_Params Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Crafting_Step_Refinement_Interface.GA_Crafting_Step_Refinement_Interface_C.ValidData_148FFCCD49E86DC83A1E628A9CF33FF9
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleData                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Crafting_Step_Refinement_Interface_C::ValidData_148FFCCD49E86DC83A1E628A9CF33FF9(struct FGameplayAbilityTargetDataHandle& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Refinement_Interface_C", "ValidData_148FFCCD49E86DC83A1E628A9CF33FF9");

	Params::UGA_Crafting_Step_Refinement_Interface_C_ValidData_148FFCCD49E86DC83A1E628A9CF33FF9_Params Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Crafting_Step_Refinement_Interface.GA_Crafting_Step_Refinement_Interface_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Crafting_Step_Refinement_Interface_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Refinement_Interface_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_Crafting_Step_Refinement_Interface_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Crafting_Step_Refinement_Interface.GA_Crafting_Step_Refinement_Interface_C.ExecuteUbergraph_GA_Crafting_Step_Refinement_Interface
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetingLocationInfoCallFunc_MakeTargetLocationInfoFromOwnerActor_ReturnValue        (ContainsInstancedReference)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_NWXWaitTargetData*CallFunc_NWXWaitTargetData_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayAbilityTargetActor* CallFunc_BeginSpawningActor_SpawnedActor                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BeginSpawningActor_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_Data_1                                        (ConstParm)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_Data                                          (ConstParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTemp_struct_Variable_1                                           (None)
// struct FHitResult                  CallFunc_GetHitResultFromTargetData_ReturnValue                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
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
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinalizeInitialization_Success                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Refinement_Interface_C::ExecuteUbergraph_GA_Crafting_Step_Refinement_Interface(int32 EntryPoint, const struct FGameplayAbilityTargetingLocationInfo& CallFunc_MakeTargetLocationInfoFromOwnerActor_ReturnValue, class FName Temp_name_Variable, const struct FGameplayTag& Temp_struct_Variable, class UAbilityTask_NWXWaitTargetData* CallFunc_NWXWaitTargetData_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class AGameplayAbilityTargetActor* CallFunc_BeginSpawningActor_SpawnedActor, bool CallFunc_BeginSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_Data_1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_Data, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_1, const struct FHitResult& CallFunc_GetHitResultFromTargetData_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_FinalizeInitialization_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Refinement_Interface_C", "ExecuteUbergraph_GA_Crafting_Step_Refinement_Interface");

	Params::UGA_Crafting_Step_Refinement_Interface_C_ExecuteUbergraph_GA_Crafting_Step_Refinement_Interface_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeTargetLocationInfoFromOwnerActor_ReturnValue = CallFunc_MakeTargetLocationInfoFromOwnerActor_ReturnValue;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_NWXWaitTargetData_ReturnValue = CallFunc_NWXWaitTargetData_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BeginSpawningActor_SpawnedActor = CallFunc_BeginSpawningActor_SpawnedActor;
	Parms.CallFunc_BeginSpawningActor_ReturnValue = CallFunc_BeginSpawningActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_Data_1 = K2Node_CustomEvent_Data_1;
	Parms.K2Node_CustomEvent_Data = K2Node_CustomEvent_Data;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_GetHitResultFromTargetData_ReturnValue = CallFunc_GetHitResultFromTargetData_ReturnValue;
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
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_FinalizeInitialization_Success = CallFunc_FinalizeInitialization_Success;

	UObject::ProcessEvent(Func, &Parms);

}

}


