#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Resolve.Resolve_C
// (None)

class UClass* UResolve_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Resolve_C");

	return Clss;
}


// Resolve_C Resolve.Default__Resolve_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UResolve_C* UResolve_C::GetDefaultObj()
{
	static class UResolve_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UResolve_C*>(UResolve_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Resolve.Resolve_C.SetCurrentResolve
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InResolve                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResolve_C::SetCurrentResolve(float InResolve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Resolve_C", "SetCurrentResolve");

	Params::UResolve_C_SetCurrentResolve_Params Parms{};

	Parms.InResolve = InResolve;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Resolve.Resolve_C.SetMaxResolve
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewMaxResolve                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResolve_C::SetMaxResolve(int32 NewMaxResolve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Resolve_C", "SetMaxResolve");

	Params::UResolve_C_SetMaxResolve_Params Parms{};

	Parms.NewMaxResolve = NewMaxResolve;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Resolve.Resolve_C.OnIncompleteResolveSegmentDrained
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Segment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResolve_C::OnIncompleteResolveSegmentDrained(int32 Segment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Resolve_C", "OnIncompleteResolveSegmentDrained");

	Params::UResolve_C_OnIncompleteResolveSegmentDrained_Params Parms{};

	Parms.Segment = Segment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Resolve.Resolve_C.OnNotEnoughResolve
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResolve_C::OnNotEnoughResolve()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Resolve_C", "OnNotEnoughResolve");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Resolve.Resolve_C.ExecuteUbergraph_Resolve
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_InResolve                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NewMaxResolve                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UResolveSegment_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue_1                            (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Segment                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UResolveSegment_C*           K2Node_DynamicCast_AsResolve_Segment                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue_2                            (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UResolveSegment_C*           K2Node_DynamicCast_AsResolve_Segment_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResolve_C::ExecuteUbergraph_Resolve(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, float CallFunc_Conv_IntToFloat_ReturnValue, float K2Node_CustomEvent_InResolve, int32 K2Node_CustomEvent_NewMaxResolve, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_FClamp_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UResolveSegment_C* CallFunc_Create_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, int32 K2Node_CustomEvent_Segment, class UWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class UResolveSegment_C* K2Node_DynamicCast_AsResolve_Segment, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Variable, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_2, class UWidget* CallFunc_Array_Get_Item_2, bool CallFunc_Array_IsValidIndex_ReturnValue, class UResolveSegment_C* K2Node_DynamicCast_AsResolve_Segment_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Resolve_C", "ExecuteUbergraph_Resolve");

	Params::UResolve_C_ExecuteUbergraph_Resolve_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_CustomEvent_InResolve = K2Node_CustomEvent_InResolve;
	Parms.K2Node_CustomEvent_NewMaxResolve = K2Node_CustomEvent_NewMaxResolve;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue_1 = CallFunc_GetAllChildren_ReturnValue_1;
	Parms.K2Node_CustomEvent_Segment = K2Node_CustomEvent_Segment;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsResolve_Segment = K2Node_DynamicCast_AsResolve_Segment;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetAllChildren_ReturnValue_2 = CallFunc_GetAllChildren_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsResolve_Segment_1 = K2Node_DynamicCast_AsResolve_Segment_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


