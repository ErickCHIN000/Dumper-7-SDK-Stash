#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionableBehaviour_Pyromancy_Flame.BP_ActionableBehaviour_Pyromancy_Flame_C
// (None)

class UClass* UBP_ActionableBehaviour_Pyromancy_Flame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionableBehaviour_Pyromancy_Flame_C");

	return Clss;
}


// BP_ActionableBehaviour_Pyromancy_Flame_C BP_ActionableBehaviour_Pyromancy_Flame.Default__BP_ActionableBehaviour_Pyromancy_Flame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionableBehaviour_Pyromancy_Flame_C* UBP_ActionableBehaviour_Pyromancy_Flame_C::GetDefaultObj()
{
	static class UBP_ActionableBehaviour_Pyromancy_Flame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionableBehaviour_Pyromancy_Flame_C*>(UBP_ActionableBehaviour_Pyromancy_Flame_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionableBehaviour_Pyromancy_Flame.BP_ActionableBehaviour_Pyromancy_Flame_C.TryExtinguish
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFlammableTargetExtinguish  CallFunc_MakeFlammableTargetExtinguishFromHitResult_ReturnValue  (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UFlammableInstance*          CallFunc_TryExtinguishFlammableTarget_OutFlammableInstance       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFireExtinguishResult   CallFunc_TryExtinguishFlammableTarget_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Pyromancy_Flame_C::TryExtinguish(bool CallFunc_IsServer_ReturnValue, const struct FFlammableTargetExtinguish& CallFunc_MakeFlammableTargetExtinguishFromHitResult_ReturnValue, class UFlammableInstance* CallFunc_TryExtinguishFlammableTarget_OutFlammableInstance, enum class EFireExtinguishResult CallFunc_TryExtinguishFlammableTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Pyromancy_Flame_C", "TryExtinguish");

	Params::UBP_ActionableBehaviour_Pyromancy_Flame_C_TryExtinguish_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_MakeFlammableTargetExtinguishFromHitResult_ReturnValue = CallFunc_MakeFlammableTargetExtinguishFromHitResult_ReturnValue;
	Parms.CallFunc_TryExtinguishFlammableTarget_OutFlammableInstance = CallFunc_TryExtinguishFlammableTarget_OutFlammableInstance;
	Parms.CallFunc_TryExtinguishFlammableTarget_ReturnValue = CallFunc_TryExtinguishFlammableTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Pyromancy_Flame.BP_ActionableBehaviour_Pyromancy_Flame_C.TryIgnite
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFlammableTargetIgnite      CallFunc_MakeFlammableTargetIgniteFromHitResult_ReturnValue      (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UFlammableInstance*          CallFunc_TryIgniteFlammableTarget_OutInstance                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryIgniteFlammableTarget_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Pyromancy_Flame_C::TryIgnite(bool CallFunc_IsServer_ReturnValue, const struct FFlammableTargetIgnite& CallFunc_MakeFlammableTargetIgniteFromHitResult_ReturnValue, class UFlammableInstance* CallFunc_TryIgniteFlammableTarget_OutInstance, bool CallFunc_TryIgniteFlammableTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Pyromancy_Flame_C", "TryIgnite");

	Params::UBP_ActionableBehaviour_Pyromancy_Flame_C_TryIgnite_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_MakeFlammableTargetIgniteFromHitResult_ReturnValue = CallFunc_MakeFlammableTargetIgniteFromHitResult_ReturnValue;
	Parms.CallFunc_TryIgniteFlammableTarget_OutInstance = CallFunc_TryIgniteFlammableTarget_OutInstance;
	Parms.CallFunc_TryIgniteFlammableTarget_ReturnValue = CallFunc_TryIgniteFlammableTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Pyromancy_Flame.BP_ActionableBehaviour_Pyromancy_Flame_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OwningActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Pyromancy_Flame_C::Setup(class AActor* OwningActor, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Pyromancy_Flame_C", "Setup");

	Params::UBP_ActionableBehaviour_Pyromancy_Flame_C_Setup_Params Parms{};

	Parms.OwningActor = OwningActor;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Pyromancy_Flame.BP_ActionableBehaviour_Pyromancy_Flame_C.OnLoaded_2B8B2B624CE5F97DAE6892B7A4207761
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Pyromancy_Flame_C::OnLoaded_2B8B2B624CE5F97DAE6892B7A4207761(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Pyromancy_Flame_C", "OnLoaded_2B8B2B624CE5F97DAE6892B7A4207761");

	Params::UBP_ActionableBehaviour_Pyromancy_Flame_C_OnLoaded_2B8B2B624CE5F97DAE6892B7A4207761_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Pyromancy_Flame.BP_ActionableBehaviour_Pyromancy_Flame_C.PerformAction
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      InvokingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableEventType    OnActionType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableTrigger      ActionTrigger                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Pyromancy_Flame_C::PerformAction(class AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Pyromancy_Flame_C", "PerformAction");

	Params::UBP_ActionableBehaviour_Pyromancy_Flame_C_PerformAction_Params Parms{};

	Parms.InvokingActor = InvokingActor;
	Parms.OnActionType = OnActionType;
	Parms.ActionTrigger = ActionTrigger;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Pyromancy_Flame.BP_ActionableBehaviour_Pyromancy_Flame_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Pyromancy_Flame_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Pyromancy_Flame_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Pyromancy_Flame.BP_ActionableBehaviour_Pyromancy_Flame_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Pyromancy_Flame_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Pyromancy_Flame_C", "ReceiveTick");

	Params::UBP_ActionableBehaviour_Pyromancy_Flame_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Pyromancy_Flame.BP_ActionableBehaviour_Pyromancy_Flame_C.ExecuteUbergraph_BP_ActionableBehaviour_Pyromancy_Flame
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Completed_async_loads_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Cached_array_length_Variable                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFlammableTargetIgnite      CallFunc_MakeFlammableTargetIgniteFromHitResult_ReturnValue      (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FFlammableTarget            CallFunc_FlammableTargetIgniteToFlammableTarget_ReturnValue      (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFlammableInstance*          CallFunc_GetFlammableInstanceFromTarget_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              Temp_string_Variable                                             (ReferenceParm)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_InvokingActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableEventType    K2Node_Event_OnActionType                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableTrigger      K2Node_Event_ActionTrigger                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerCharacterSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerCharacterSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival_1       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerCharacterSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival_2       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusActor*                K2Node_DynamicCast_AsIcarus_Actor                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FActionData                 CallFunc_GetActionData_OutData                                   (None)
// bool                               CallFunc_GetActionData_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              Temp_object_Variable_1                                           (ConstParm, ReferenceParm)
// struct FActionData                 CallFunc_GetActionData_OutData_1                                 (None)
// bool                               CallFunc_GetActionData_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_DynamicCast_AsAnim_Montage                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSoftObjectPtr<class UObject>>K2Node_MakeArray_Array                                           (ReferenceParm)
// class UAnimMontage*                K2Node_DynamicCast_AsAnim_Montage_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UObject>      CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// class FString                      CallFunc_Conv_SoftObjectReferenceToString_ReturnValue            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActionData                 CallFunc_GetActionData_OutData_2                                 (None)
// bool                               CallFunc_GetActionData_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// struct FSoftObjectPath             CallFunc_MakeSoftObjectPath_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UObject>      CallFunc_Conv_SoftObjPathToSoftObjRef_ReturnValue                (UObjectWrapper, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                K2Node_DynamicCast_AsAnim_Montage_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_3          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                K2Node_DynamicCast_AsAnim_Montage_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActionData                 CallFunc_GetActionData_OutData_3                                 (None)
// bool                               CallFunc_GetActionData_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_4          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_DynamicCast_AsAnim_Montage_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_5          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_DynamicCast_AsAnim_Montage_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorEyesViewPoint_OutLocation                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetActorEyesViewPoint_OutRotation                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Pyromancy_Flame_C::ExecuteUbergraph_BP_ActionableBehaviour_Pyromancy_Flame(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class UObject* Temp_object_Variable, int32 Temp_int_Completed_async_loads_Variable, int32 Temp_int_Cached_array_length_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FFlammableTargetIgnite& CallFunc_MakeFlammableTargetIgniteFromHitResult_ReturnValue, const struct FFlammableTarget& CallFunc_FlammableTargetIgniteToFlammableTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFlammableInstance* CallFunc_GetFlammableInstanceFromTarget_ReturnValue, TArray<class FString>& Temp_string_Variable, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, bool CallFunc_IsValid_ReturnValue_1, class AActor* K2Node_Event_InvokingActor, enum class EActionableEventType K2Node_Event_OnActionType, enum class EActionableTrigger K2Node_Event_ActionTrigger, int32 Temp_int_Variable, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival_1, bool K2Node_DynamicCast_bSuccess_1, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue, float K2Node_Event_DeltaSeconds, class AIcarusActor* K2Node_DynamicCast_AsIcarus_Actor, bool K2Node_DynamicCast_bSuccess_3, const struct FActionData& CallFunc_GetActionData_OutData, bool CallFunc_GetActionData_ReturnValue, TArray<class AActor*>& Temp_object_Variable_1, const struct FActionData& CallFunc_GetActionData_OutData_1, bool CallFunc_GetActionData_ReturnValue_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage, bool K2Node_DynamicCast_bSuccess_4, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, TArray<TSoftObjectPtr<class UObject>>& K2Node_MakeArray_Array, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage_1, bool K2Node_DynamicCast_bSuccess_5, TSoftObjectPtr<class UObject> CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_SoftObjectReferenceToString_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 Temp_int_Variable_1, const struct FActionData& CallFunc_GetActionData_OutData_2, bool CallFunc_GetActionData_ReturnValue_2, const class FString& CallFunc_Array_Get_Item_1, const struct FSoftObjectPath& CallFunc_MakeSoftObjectPath_ReturnValue, TSoftObjectPtr<class UObject> CallFunc_Conv_SoftObjPathToSoftObjRef_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage_2, bool K2Node_DynamicCast_bSuccess_6, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_3, bool CallFunc_Array_IsValidIndex_ReturnValue_1, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage_3, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FActionData& CallFunc_GetActionData_OutData_3, bool CallFunc_GetActionData_ReturnValue_3, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_4, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage_4, bool K2Node_DynamicCast_bSuccess_8, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_5, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage_5, bool K2Node_DynamicCast_bSuccess_9, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_NotEqual_ObjectObject_ReturnValue, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorEyesViewPoint_OutRotation, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Pyromancy_Flame_C", "ExecuteUbergraph_BP_ActionableBehaviour_Pyromancy_Flame");

	Params::UBP_ActionableBehaviour_Pyromancy_Flame_C_ExecuteUbergraph_BP_ActionableBehaviour_Pyromancy_Flame_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_int_Completed_async_loads_Variable = Temp_int_Completed_async_loads_Variable;
	Parms.Temp_int_Cached_array_length_Variable = Temp_int_Cached_array_length_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_MakeFlammableTargetIgniteFromHitResult_ReturnValue = CallFunc_MakeFlammableTargetIgniteFromHitResult_ReturnValue;
	Parms.CallFunc_FlammableTargetIgniteToFlammableTarget_ReturnValue = CallFunc_FlammableTargetIgniteToFlammableTarget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetFlammableInstanceFromTarget_ReturnValue = CallFunc_GetFlammableInstanceFromTarget_ReturnValue;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Event_InvokingActor = K2Node_Event_InvokingActor;
	Parms.K2Node_Event_OnActionType = K2Node_Event_OnActionType;
	Parms.K2Node_Event_ActionTrigger = K2Node_Event_ActionTrigger;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival_1 = K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival_2 = K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_DynamicCast_AsIcarus_Actor = K2Node_DynamicCast_AsIcarus_Actor;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetActionData_OutData = CallFunc_GetActionData_OutData;
	Parms.CallFunc_GetActionData_ReturnValue = CallFunc_GetActionData_ReturnValue;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_GetActionData_OutData_1 = CallFunc_GetActionData_OutData_1;
	Parms.CallFunc_GetActionData_ReturnValue_1 = CallFunc_GetActionData_ReturnValue_1;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsAnim_Montage = K2Node_DynamicCast_AsAnim_Montage;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_DynamicCast_AsAnim_Montage_1 = K2Node_DynamicCast_AsAnim_Montage_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_SoftObjectReferenceToString_ReturnValue = CallFunc_Conv_SoftObjectReferenceToString_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_GetActionData_OutData_2 = CallFunc_GetActionData_OutData_2;
	Parms.CallFunc_GetActionData_ReturnValue_2 = CallFunc_GetActionData_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_MakeSoftObjectPath_ReturnValue = CallFunc_MakeSoftObjectPath_ReturnValue;
	Parms.CallFunc_Conv_SoftObjPathToSoftObjRef_ReturnValue = CallFunc_Conv_SoftObjPathToSoftObjRef_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_DynamicCast_AsAnim_Montage_2 = K2Node_DynamicCast_AsAnim_Montage_2;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_3 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_3;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsAnim_Montage_3 = K2Node_DynamicCast_AsAnim_Montage_3;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetActionData_OutData_3 = CallFunc_GetActionData_OutData_3;
	Parms.CallFunc_GetActionData_ReturnValue_3 = CallFunc_GetActionData_ReturnValue_3;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_4 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsAnim_Montage_4 = K2Node_DynamicCast_AsAnim_Montage_4;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_5 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsAnim_Montage_5 = K2Node_DynamicCast_AsAnim_Montage_5;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetActorEyesViewPoint_OutLocation = CallFunc_GetActorEyesViewPoint_OutLocation;
	Parms.CallFunc_GetActorEyesViewPoint_OutRotation = CallFunc_GetActorEyesViewPoint_OutRotation;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


