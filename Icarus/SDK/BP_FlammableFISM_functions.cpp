#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FlammableFISM.BP_FlammableFISM_C
// (None)

class UClass* UBP_FlammableFISM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FlammableFISM_C");

	return Clss;
}


// BP_FlammableFISM_C BP_FlammableFISM.Default__BP_FlammableFISM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FlammableFISM_C* UBP_FlammableFISM_C::GetDefaultObj()
{
	static class UBP_FlammableFISM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FlammableFISM_C*>(UBP_FlammableFISM_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FlammableFISM.BP_FlammableFISM_C.CombustedEnter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlammableInstanceFLOD*      Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FlammableFISM_C::CombustedEnter(class UFlammableInstanceFLOD* Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlammableFISM_C", "CombustedEnter");

	Params::UBP_FlammableFISM_C_CombustedEnter_Params Parms{};

	Parms.Instance = Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FlammableFISM.BP_FlammableFISM_C.CombustingExit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlammableInstanceFLOD*      Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FlammableFISM_C::CombustingExit(class UFlammableInstanceFLOD* Instance, class UNiagaraComponent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlammableFISM_C", "CombustingExit");

	Params::UBP_FlammableFISM_C_CombustingExit_Params Parms{};

	Parms.Instance = Instance;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FlammableFISM.BP_FlammableFISM_C.CombustingEnter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlammableInstanceFLOD*      Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBoxSphereBounds            CallFunc_GetFlammableWorldBounds_ReturnValue                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNiagaraComponent*           Temp_object_Variable                                             (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_AddComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_FlammableFISM_C::CombustingEnter(class UFlammableInstanceFLOD* Instance, const struct FBoxSphereBounds& CallFunc_GetFlammableWorldBounds_ReturnValue, class UNiagaraComponent* Temp_object_Variable, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UNiagaraComponent* CallFunc_AddComponentByClass_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlammableFISM_C", "CombustingEnter");

	Params::UBP_FlammableFISM_C_CombustingEnter_Params Parms{};

	Parms.Instance = Instance;
	Parms.CallFunc_GetFlammableWorldBounds_ReturnValue = CallFunc_GetFlammableWorldBounds_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_AddComponentByClass_ReturnValue = CallFunc_AddComponentByClass_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FlammableFISM.BP_FlammableFISM_C.OnReplacedInstanceCombusted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFLODInstanceID             NewInstance                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UFlammableInstanceFLOD*      Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FlammableFISM_C::OnReplacedInstanceCombusted(const struct FFLODInstanceID& NewInstance, class UFlammableInstanceFLOD* Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlammableFISM_C", "OnReplacedInstanceCombusted");

	Params::UBP_FlammableFISM_C_OnReplacedInstanceCombusted_Params Parms{};

	Parms.NewInstance = NewInstance;
	Parms.Instance = Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FlammableFISM.BP_FlammableFISM_C.TryReplaceInstanceCombusted
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlammableInstanceFLOD*      Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFLODRecord*                 BurntRecord                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFLODRecord*                 CallFunc_GetRegisteredRecord_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFLODRecord*                 CallFunc_GetRegisteredRecord_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFLODRecord*                 CallFunc_FindReplacementBurntRecord_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SwapRecordInstance_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFLODInstanceID             K2Node_MakeStruct_FLODInstanceID                                 (NoDestructor, HasGetValueTypeHash)

void UBP_FlammableFISM_C::TryReplaceInstanceCombusted(class UFlammableInstanceFLOD* Instance, class UFLODRecord* BurntRecord, class UFLODRecord* CallFunc_GetRegisteredRecord_ReturnValue, TArray<int32>& K2Node_MakeArray_Array, bool CallFunc_IsServer_ReturnValue, class UFLODRecord* CallFunc_GetRegisteredRecord_ReturnValue_1, class UFLODRecord* CallFunc_FindReplacementBurntRecord_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_SwapRecordInstance_ReturnValue, const struct FFLODInstanceID& K2Node_MakeStruct_FLODInstanceID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlammableFISM_C", "TryReplaceInstanceCombusted");

	Params::UBP_FlammableFISM_C_TryReplaceInstanceCombusted_Params Parms{};

	Parms.Instance = Instance;
	Parms.BurntRecord = BurntRecord;
	Parms.CallFunc_GetRegisteredRecord_ReturnValue = CallFunc_GetRegisteredRecord_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetRegisteredRecord_ReturnValue_1 = CallFunc_GetRegisteredRecord_ReturnValue_1;
	Parms.CallFunc_FindReplacementBurntRecord_ReturnValue = CallFunc_FindReplacementBurntRecord_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SwapRecordInstance_ReturnValue = CallFunc_SwapRecordInstance_ReturnValue;
	Parms.K2Node_MakeStruct_FLODInstanceID = K2Node_MakeStruct_FLODInstanceID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FlammableFISM.BP_FlammableFISM_C.OnFlammableInstanceState_Combusting_Enter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlammableInstance*          Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableState*             State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FlammableFISM_C::OnFlammableInstanceState_Combusting_Enter(class UFlammableInstance* Instance, class UFlammableState* State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlammableFISM_C", "OnFlammableInstanceState_Combusting_Enter");

	Params::UBP_FlammableFISM_C_OnFlammableInstanceState_Combusting_Enter_Params Parms{};

	Parms.Instance = Instance;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FlammableFISM.BP_FlammableFISM_C.OnFlammableInstanceState_Combusted_Enter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlammableInstance*          Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableState*             State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FlammableFISM_C::OnFlammableInstanceState_Combusted_Enter(class UFlammableInstance* Instance, class UFlammableState* State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlammableFISM_C", "OnFlammableInstanceState_Combusted_Enter");

	Params::UBP_FlammableFISM_C_OnFlammableInstanceState_Combusted_Enter_Params Parms{};

	Parms.Instance = Instance;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FlammableFISM.BP_FlammableFISM_C.OnFlammableInstanceState_Combusting_Exit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlammableInstance*          Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableState*             State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FlammableFISM_C::OnFlammableInstanceState_Combusting_Exit(class UFlammableInstance* Instance, class UFlammableState* State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlammableFISM_C", "OnFlammableInstanceState_Combusting_Exit");

	Params::UBP_FlammableFISM_C_OnFlammableInstanceState_Combusting_Exit_Params Parms{};

	Parms.Instance = Instance;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FlammableFISM.BP_FlammableFISM_C.OnFlammableInstanceDetached
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFlammableInstance*          Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FlammableFISM_C::OnFlammableInstanceDetached(class UFlammableInstance* Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlammableFISM_C", "OnFlammableInstanceDetached");

	Params::UBP_FlammableFISM_C_OnFlammableInstanceDetached_Params Parms{};

	Parms.Instance = Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FlammableFISM.BP_FlammableFISM_C.OnFlammableInstanceAttached
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFlammableInstance*          Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FlammableFISM_C::OnFlammableInstanceAttached(class UFlammableInstance* Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlammableFISM_C", "OnFlammableInstanceAttached");

	Params::UBP_FlammableFISM_C_OnFlammableInstanceAttached_Params Parms{};

	Parms.Instance = Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FlammableFISM.BP_FlammableFISM_C.ExecuteUbergraph_BP_FlammableFISM
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableInstance*          K2Node_CustomEvent_Instance_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableState*             K2Node_CustomEvent_State_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableInstance*          K2Node_CustomEvent_Instance_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableState*             K2Node_CustomEvent_State_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableInstanceFLOD*      K2Node_DynamicCast_AsFlammable_Instance_FLOD                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFlammableInstanceFLOD*      K2Node_DynamicCast_AsFlammable_Instance_FLOD_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFlammableInstance*          K2Node_CustomEvent_Instance                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableState*             K2Node_CustomEvent_State                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UFlammableInstanceFLOD*      K2Node_DynamicCast_AsFlammable_Instance_FLOD_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFlammableInstance*          K2Node_Event_Instance_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableState*             CallFunc_GetFlammableState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableState*             CallFunc_GetFlammableState_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableInstance*          K2Node_Event_Instance                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UFlammableState*             CallFunc_GetFlammableState_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableState*             CallFunc_GetFlammableState_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FlammableFISM_C::ExecuteUbergraph_BP_FlammableFISM(int32 EntryPoint, class UFlammableInstance* K2Node_CustomEvent_Instance_2, class UFlammableState* K2Node_CustomEvent_State_2, class UFlammableInstance* K2Node_CustomEvent_Instance_1, class UFlammableState* K2Node_CustomEvent_State_1, class UFlammableInstanceFLOD* K2Node_DynamicCast_AsFlammable_Instance_FLOD, bool K2Node_DynamicCast_bSuccess, class UFlammableInstanceFLOD* K2Node_DynamicCast_AsFlammable_Instance_FLOD_1, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFlammableInstance* K2Node_CustomEvent_Instance, class UFlammableState* K2Node_CustomEvent_State, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFlammableInstanceFLOD* K2Node_DynamicCast_AsFlammable_Instance_FLOD_2, bool K2Node_DynamicCast_bSuccess_2, class UFlammableInstance* K2Node_Event_Instance_1, class UFlammableState* CallFunc_GetFlammableState_ReturnValue, class UFlammableState* CallFunc_GetFlammableState_ReturnValue_1, class UFlammableInstance* K2Node_Event_Instance, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UFlammableState* CallFunc_GetFlammableState_ReturnValue_2, class UFlammableState* CallFunc_GetFlammableState_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlammableFISM_C", "ExecuteUbergraph_BP_FlammableFISM");

	Params::UBP_FlammableFISM_C_ExecuteUbergraph_BP_FlammableFISM_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Instance_2 = K2Node_CustomEvent_Instance_2;
	Parms.K2Node_CustomEvent_State_2 = K2Node_CustomEvent_State_2;
	Parms.K2Node_CustomEvent_Instance_1 = K2Node_CustomEvent_Instance_1;
	Parms.K2Node_CustomEvent_State_1 = K2Node_CustomEvent_State_1;
	Parms.K2Node_DynamicCast_AsFlammable_Instance_FLOD = K2Node_DynamicCast_AsFlammable_Instance_FLOD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFlammable_Instance_FLOD_1 = K2Node_DynamicCast_AsFlammable_Instance_FLOD_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Instance = K2Node_CustomEvent_Instance;
	Parms.K2Node_CustomEvent_State = K2Node_CustomEvent_State;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_DynamicCast_AsFlammable_Instance_FLOD_2 = K2Node_DynamicCast_AsFlammable_Instance_FLOD_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_Event_Instance_1 = K2Node_Event_Instance_1;
	Parms.CallFunc_GetFlammableState_ReturnValue = CallFunc_GetFlammableState_ReturnValue;
	Parms.CallFunc_GetFlammableState_ReturnValue_1 = CallFunc_GetFlammableState_ReturnValue_1;
	Parms.K2Node_Event_Instance = K2Node_Event_Instance;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetFlammableState_ReturnValue_2 = CallFunc_GetFlammableState_ReturnValue_2;
	Parms.CallFunc_GetFlammableState_ReturnValue_3 = CallFunc_GetFlammableState_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


