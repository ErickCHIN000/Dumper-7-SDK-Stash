#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Actionable_FlameThrower.BP_Actionable_FlameThrower_C
// (None)

class UClass* UBP_Actionable_FlameThrower_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Actionable_FlameThrower_C");

	return Clss;
}


// BP_Actionable_FlameThrower_C BP_Actionable_FlameThrower.Default__BP_Actionable_FlameThrower_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Actionable_FlameThrower_C* UBP_Actionable_FlameThrower_C::GetDefaultObj()
{
	static class UBP_Actionable_FlameThrower_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Actionable_FlameThrower_C*>(UBP_Actionable_FlameThrower_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Actionable_FlameThrower.BP_Actionable_FlameThrower_C.TickTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Actionable_FlameThrower_C::TickTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Actionable_FlameThrower_C", "TickTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Actionable_FlameThrower.BP_Actionable_FlameThrower_C.SphereTrace
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// TArray<struct FHitResult>          CallFunc_SphereTraceMulti_OutHits                                (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_SphereTraceMulti_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFlammableTargetIgnite      CallFunc_MakeFlammableTargetIgniteFromHitResult_ReturnValue      (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UFlammableInstance*          CallFunc_TryIgniteFlammableTarget_OutInstance                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryIgniteFlammableTarget_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Actionable_FlameThrower_C::SphereTrace(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, TArray<struct FHitResult>& CallFunc_SphereTraceMulti_OutHits, bool CallFunc_SphereTraceMulti_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FFlammableTargetIgnite& CallFunc_MakeFlammableTargetIgniteFromHitResult_ReturnValue, class UFlammableInstance* CallFunc_TryIgniteFlammableTarget_OutInstance, bool CallFunc_TryIgniteFlammableTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Actionable_FlameThrower_C", "SphereTrace");

	Params::UBP_Actionable_FlameThrower_C_SphereTrace_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_SphereTraceMulti_OutHits = CallFunc_SphereTraceMulti_OutHits;
	Parms.CallFunc_SphereTraceMulti_ReturnValue = CallFunc_SphereTraceMulti_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_MakeFlammableTargetIgniteFromHitResult_ReturnValue = CallFunc_MakeFlammableTargetIgniteFromHitResult_ReturnValue;
	Parms.CallFunc_TryIgniteFlammableTarget_OutInstance = CallFunc_TryIgniteFlammableTarget_OutInstance;
	Parms.CallFunc_TryIgniteFlammableTarget_ReturnValue = CallFunc_TryIgniteFlammableTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Actionable_FlameThrower.BP_Actionable_FlameThrower_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OwningActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_SkeletalItem_FlameThrower_Small_C*K2Node_DynamicCast_AsBP_Skeletal_Item_Flame_Thrower_Small        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerCharacterSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Actionable_FlameThrower_C::Setup(class AActor* OwningActor, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_SkeletalItem_FlameThrower_Small_C* K2Node_DynamicCast_AsBP_Skeletal_Item_Flame_Thrower_Small, bool K2Node_DynamicCast_bSuccess, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Actionable_FlameThrower_C", "Setup");

	Params::UBP_Actionable_FlameThrower_C_Setup_Params Parms{};

	Parms.OwningActor = OwningActor;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Skeletal_Item_Flame_Thrower_Small = K2Node_DynamicCast_AsBP_Skeletal_Item_Flame_Thrower_Small;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Actionable_FlameThrower.BP_Actionable_FlameThrower_C.PerformAction
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      InvokingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableEventType    OnActionType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableTrigger      ActionTrigger                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Actionable_FlameThrower_C::PerformAction(class AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Actionable_FlameThrower_C", "PerformAction");

	Params::UBP_Actionable_FlameThrower_C_PerformAction_Params Parms{};

	Parms.InvokingActor = InvokingActor;
	Parms.OnActionType = OnActionType;
	Parms.ActionTrigger = ActionTrigger;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Actionable_FlameThrower.BP_Actionable_FlameThrower_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Actionable_FlameThrower_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Actionable_FlameThrower_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Actionable_FlameThrower.BP_Actionable_FlameThrower_C.Multi_SpawnFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     ImpactPoint                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ImpactNormal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Actionable_FlameThrower_C::Multi_SpawnFX(const struct FVector& ImpactPoint, const struct FVector& ImpactNormal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Actionable_FlameThrower_C", "Multi_SpawnFX");

	Params::UBP_Actionable_FlameThrower_C_Multi_SpawnFX_Params Parms{};

	Parms.ImpactPoint = ImpactPoint;
	Parms.ImpactNormal = ImpactNormal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Actionable_FlameThrower.BP_Actionable_FlameThrower_C.ExecuteUbergraph_BP_Actionable_FlameThrower
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_InvokingActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableEventType    K2Node_Event_OnActionType                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableTrigger      K2Node_Event_ActionTrigger                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FVector                     K2Node_CustomEvent_ImpactPoint                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_ImpactNormal                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Actionable_FlameThrower_C::ExecuteUbergraph_BP_Actionable_FlameThrower(int32 EntryPoint, class AActor* K2Node_Event_InvokingActor, enum class EActionableEventType K2Node_Event_OnActionType, enum class EActionableTrigger K2Node_Event_ActionTrigger, bool K2Node_SwitchEnum_CmpSuccess, class AActor* CallFunc_GetOwner_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& K2Node_CustomEvent_ImpactPoint, const struct FVector& K2Node_CustomEvent_ImpactNormal, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Actionable_FlameThrower_C", "ExecuteUbergraph_BP_Actionable_FlameThrower");

	Params::UBP_Actionable_FlameThrower_C_ExecuteUbergraph_BP_Actionable_FlameThrower_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InvokingActor = K2Node_Event_InvokingActor;
	Parms.K2Node_Event_OnActionType = K2Node_Event_OnActionType;
	Parms.K2Node_Event_ActionTrigger = K2Node_Event_ActionTrigger;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_ImpactPoint = K2Node_CustomEvent_ImpactPoint;
	Parms.K2Node_CustomEvent_ImpactNormal = K2Node_CustomEvent_ImpactNormal;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_MakeRotFromX_ReturnValue = CallFunc_MakeRotFromX_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


