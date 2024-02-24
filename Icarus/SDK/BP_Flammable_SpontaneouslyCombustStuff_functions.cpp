#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Flammable_SpontaneouslyCombustStuff.BP_Flammable_SpontaneouslyCombustStuff_C
// (None)

class UClass* UBP_Flammable_SpontaneouslyCombustStuff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Flammable_SpontaneouslyCombustStuff_C");

	return Clss;
}


// BP_Flammable_SpontaneouslyCombustStuff_C BP_Flammable_SpontaneouslyCombustStuff.Default__BP_Flammable_SpontaneouslyCombustStuff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Flammable_SpontaneouslyCombustStuff_C* UBP_Flammable_SpontaneouslyCombustStuff_C::GetDefaultObj()
{
	static class UBP_Flammable_SpontaneouslyCombustStuff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Flammable_SpontaneouslyCombustStuff_C*>(UBP_Flammable_SpontaneouslyCombustStuff_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Flammable_SpontaneouslyCombustStuff.BP_Flammable_SpontaneouslyCombustStuff_C.SpontaneouslyCombustStuff
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               LitSomething                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCurrentState_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ADisasterController*         CallFunc_GetDisasterController_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBoxSphereBounds            K2Node_MakeStruct_BoxSphereBounds                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFlammableInstance*>  CallFunc_GetFlammableInstancesIntersectingBounds_ReturnValue     (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableInstance*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFlammableTargetIgnite      CallFunc_MakeFlammableTargetIgniteFromInstance_ReturnValue       (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_CanPropagateToTarget_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFlammableState         CallFunc_GetFlammableState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFlammableInstance*          CallFunc_TryIgniteFlammableTarget_OutInstance                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryIgniteFlammableTarget_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Flammable_SpontaneouslyCombustStuff_C::SpontaneouslyCombustStuff(bool* LitSomething, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsCurrentState_ReturnValue, class ADisasterController* CallFunc_GetDisasterController_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FBoxSphereBounds& K2Node_MakeStruct_BoxSphereBounds, TArray<class UFlammableInstance*>& CallFunc_GetFlammableInstancesIntersectingBounds_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UFlammableInstance* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FFlammableTargetIgnite& CallFunc_MakeFlammableTargetIgniteFromInstance_ReturnValue, bool CallFunc_CanPropagateToTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, enum class EFlammableState CallFunc_GetFlammableState_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UFlammableInstance* CallFunc_TryIgniteFlammableTarget_OutInstance, bool CallFunc_TryIgniteFlammableTarget_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Flammable_SpontaneouslyCombustStuff_C", "SpontaneouslyCombustStuff");

	Params::UBP_Flammable_SpontaneouslyCombustStuff_C_SpontaneouslyCombustStuff_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsCurrentState_ReturnValue = CallFunc_IsCurrentState_ReturnValue;
	Parms.CallFunc_GetDisasterController_ReturnValue = CallFunc_GetDisasterController_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_MakeStruct_BoxSphereBounds = K2Node_MakeStruct_BoxSphereBounds;
	Parms.CallFunc_GetFlammableInstancesIntersectingBounds_ReturnValue = CallFunc_GetFlammableInstancesIntersectingBounds_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_MakeFlammableTargetIgniteFromInstance_ReturnValue = CallFunc_MakeFlammableTargetIgniteFromInstance_ReturnValue;
	Parms.CallFunc_CanPropagateToTarget_ReturnValue = CallFunc_CanPropagateToTarget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetFlammableState_ReturnValue = CallFunc_GetFlammableState_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_TryIgniteFlammableTarget_OutInstance = CallFunc_TryIgniteFlammableTarget_OutInstance;
	Parms.CallFunc_TryIgniteFlammableTarget_ReturnValue = CallFunc_TryIgniteFlammableTarget_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (LitSomething != nullptr)
		*LitSomething = Parms.LitSomething;

}


// Function BP_Flammable_SpontaneouslyCombustStuff.BP_Flammable_SpontaneouslyCombustStuff_C.OnFlammableInstanceState_Combusting_Tick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlammableInstance*          Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableState*             State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Flammable_SpontaneouslyCombustStuff_C::OnFlammableInstanceState_Combusting_Tick(class UFlammableInstance* Instance, class UFlammableState* State, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Flammable_SpontaneouslyCombustStuff_C", "OnFlammableInstanceState_Combusting_Tick");

	Params::UBP_Flammable_SpontaneouslyCombustStuff_C_OnFlammableInstanceState_Combusting_Tick_Params Parms{};

	Parms.Instance = Instance;
	Parms.State = State;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Flammable_SpontaneouslyCombustStuff.BP_Flammable_SpontaneouslyCombustStuff_C.OnFlammableInstanceState_Combusting_Enter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlammableInstance*          Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableState*             State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Flammable_SpontaneouslyCombustStuff_C::OnFlammableInstanceState_Combusting_Enter(class UFlammableInstance* Instance, class UFlammableState* State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Flammable_SpontaneouslyCombustStuff_C", "OnFlammableInstanceState_Combusting_Enter");

	Params::UBP_Flammable_SpontaneouslyCombustStuff_C_OnFlammableInstanceState_Combusting_Enter_Params Parms{};

	Parms.Instance = Instance;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Flammable_SpontaneouslyCombustStuff.BP_Flammable_SpontaneouslyCombustStuff_C.ExecuteUbergraph_BP_Flammable_SpontaneouslyCombustStuff
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableInstance*          K2Node_Event_Instance_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableState*             K2Node_Event_State_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SpontaneouslyCombustStuff_LitSomething                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFlammableInstance*          K2Node_Event_Instance                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableState*             K2Node_Event_State                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SpontaneouslyCombustStuff_LitSomething_1                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Flammable_SpontaneouslyCombustStuff_C::ExecuteUbergraph_BP_Flammable_SpontaneouslyCombustStuff(int32 EntryPoint, class UFlammableInstance* K2Node_Event_Instance_1, class UFlammableState* K2Node_Event_State_1, float K2Node_Event_DeltaSeconds, bool CallFunc_SpontaneouslyCombustStuff_LitSomething, bool CallFunc_Not_PreBool_ReturnValue, class UFlammableInstance* K2Node_Event_Instance, class UFlammableState* K2Node_Event_State, bool CallFunc_SpontaneouslyCombustStuff_LitSomething_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Flammable_SpontaneouslyCombustStuff_C", "ExecuteUbergraph_BP_Flammable_SpontaneouslyCombustStuff");

	Params::UBP_Flammable_SpontaneouslyCombustStuff_C_ExecuteUbergraph_BP_Flammable_SpontaneouslyCombustStuff_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Instance_1 = K2Node_Event_Instance_1;
	Parms.K2Node_Event_State_1 = K2Node_Event_State_1;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_SpontaneouslyCombustStuff_LitSomething = CallFunc_SpontaneouslyCombustStuff_LitSomething;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_Instance = K2Node_Event_Instance;
	Parms.K2Node_Event_State = K2Node_Event_State;
	Parms.CallFunc_SpontaneouslyCombustStuff_LitSomething_1 = CallFunc_SpontaneouslyCombustStuff_LitSomething_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


