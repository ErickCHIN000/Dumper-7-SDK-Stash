#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FamiliarityWidget.FamiliarityWidget_C
// (None)

class UClass* UFamiliarityWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FamiliarityWidget_C");

	return Clss;
}


// FamiliarityWidget_C FamiliarityWidget.Default__FamiliarityWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFamiliarityWidget_C* UFamiliarityWidget_C::GetDefaultObj()
{
	static class UFamiliarityWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFamiliarityWidget_C*>(UFamiliarityWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FamiliarityWidget.FamiliarityWidget_C.OnLastDiamondMaxed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFamiliarityWidget_C::OnLastDiamondMaxed(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FamiliarityWidget_C", "OnLastDiamondMaxed");

	Params::UFamiliarityWidget_C_OnLastDiamondMaxed_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FamiliarityWidget.FamiliarityWidget_C.OnLastDiamondAppeared
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFamiliarityWidget_C::OnLastDiamondAppeared()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FamiliarityWidget_C", "OnLastDiamondAppeared");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FamiliarityWidget.FamiliarityWidget_C.GetCurrentDiamond
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFamiliarityDiamond_C*       Output                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFamiliarityDiamond_C*>CallFunc_GetDiamonds_Array                                       (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFamiliarityDiamond_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFamiliarityWidget_C::GetCurrentDiamond(class UFamiliarityDiamond_C** Output, TArray<class UFamiliarityDiamond_C*>& CallFunc_GetDiamonds_Array, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UFamiliarityDiamond_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FamiliarityWidget_C", "GetCurrentDiamond");

	Params::UFamiliarityWidget_C_GetCurrentDiamond_Params Parms{};

	Parms.CallFunc_GetDiamonds_Array = CallFunc_GetDiamonds_Array;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;

}


// Function FamiliarityWidget.FamiliarityWidget_C.OnLastDiamondFIlled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFamiliarityWidget_C::OnLastDiamondFIlled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FamiliarityWidget_C", "OnLastDiamondFIlled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FamiliarityWidget.FamiliarityWidget_C.GetDiamonds
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UFamiliarityDiamond_C*>Array                                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UFamiliarityDiamond_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UFamiliarityWidget_C::GetDiamonds(TArray<class UFamiliarityDiamond_C*>* Array, TArray<class UFamiliarityDiamond_C*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FamiliarityWidget_C", "GetDiamonds");

	Params::UFamiliarityWidget_C_GetDiamonds_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function FamiliarityWidget.FamiliarityWidget_C.ResetDiamonds
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFamiliarityDiamond_C*>CallFunc_GetDiamonds_Array                                       (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UFamiliarityDiamond_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFamiliarityWidget_C::ResetDiamonds(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UFamiliarityDiamond_C*>& CallFunc_GetDiamonds_Array, class UFamiliarityDiamond_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FamiliarityWidget_C", "ResetDiamonds");

	Params::UFamiliarityWidget_C_ResetDiamonds_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDiamonds_Array = CallFunc_GetDiamonds_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FamiliarityWidget.FamiliarityWidget_C.SetNumFilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OldDiamondsNumber                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewDiamondsNumber                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bAnimateLast                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFamiliarityWidget_C::SetNumFilled(int32 OldDiamondsNumber, int32 NewDiamondsNumber, bool bAnimateLast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FamiliarityWidget_C", "SetNumFilled");

	Params::UFamiliarityWidget_C_SetNumFilled_Params Parms{};

	Parms.OldDiamondsNumber = OldDiamondsNumber;
	Parms.NewDiamondsNumber = NewDiamondsNumber;
	Parms.bAnimateLast = bAnimateLast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FamiliarityWidget.FamiliarityWidget_C.PlayMaxedFamAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFamiliarityWidget_C::PlayMaxedFamAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FamiliarityWidget_C", "PlayMaxedFamAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FamiliarityWidget.FamiliarityWidget_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFamiliarityWidget_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FamiliarityWidget_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FamiliarityWidget.FamiliarityWidget_C.BndEvt__FamiliarityDiamond_09_K2Node_ComponentBoundEvent_0_OnMaxedAnimEnd__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFamiliarityWidget_C::BndEvt__FamiliarityDiamond_09_K2Node_ComponentBoundEvent_0_OnMaxedAnimEnd__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FamiliarityWidget_C", "BndEvt__FamiliarityDiamond_09_K2Node_ComponentBoundEvent_0_OnMaxedAnimEnd__DelegateSignature");

	Params::UFamiliarityWidget_C_BndEvt__FamiliarityDiamond_09_K2Node_ComponentBoundEvent_0_OnMaxedAnimEnd__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FamiliarityWidget.FamiliarityWidget_C.ExecuteUbergraph_FamiliarityWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_OldDiamondsNumber                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NewDiamondsNumber                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bAnimateLast                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFamiliarityDiamond_C*>CallFunc_GetDiamonds_Array                                       (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFamiliarityDiamond_C*>CallFunc_GetDiamonds_Array_1                                     (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFamiliarityDiamond_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFamiliarityDiamond_C*       CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFamiliarityDiamond_C*>CallFunc_GetDiamonds_Array_2                                     (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFamiliarityDiamond_C*>CallFunc_GetDiamonds_Array_3                                     (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFamiliarityDiamond_C*       CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UFamiliarityDiamond_C*       CallFunc_GetCurrentDiamond_Output                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFamiliarityDiamond_C*       CallFunc_GetCurrentDiamond_Output_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFamiliarityDiamond_C*       CallFunc_GetCurrentDiamond_Output_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFamiliarityWidget_C::ExecuteUbergraph_FamiliarityWidget(int32 EntryPoint, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, int32 K2Node_CustomEvent_OldDiamondsNumber, int32 K2Node_CustomEvent_NewDiamondsNumber, bool K2Node_CustomEvent_bAnimateLast, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Clamp_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, TArray<class UFamiliarityDiamond_C*>& CallFunc_GetDiamonds_Array, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool Temp_bool_IsClosed_Variable, TArray<class UFamiliarityDiamond_C*>& CallFunc_GetDiamonds_Array_1, int32 Temp_int_Variable_2, class UFamiliarityDiamond_C* CallFunc_Array_Get_Item, class UFamiliarityDiamond_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UFamiliarityDiamond_C*>& CallFunc_GetDiamonds_Array_2, int32 CallFunc_Array_Length_ReturnValue, TArray<class UFamiliarityDiamond_C*>& CallFunc_GetDiamonds_Array_3, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue_3, class UFamiliarityDiamond_C* CallFunc_Array_Get_Item_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFamiliarityDiamond_C* CallFunc_GetCurrentDiamond_Output, class UFamiliarityDiamond_C* CallFunc_GetCurrentDiamond_Output_1, class UFamiliarityDiamond_C* CallFunc_GetCurrentDiamond_Output_2, int32 Temp_int_Loop_Counter_Variable, int32 K2Node_ComponentBoundEvent_Index, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FamiliarityWidget_C", "ExecuteUbergraph_FamiliarityWidget");

	Params::UFamiliarityWidget_C_ExecuteUbergraph_FamiliarityWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CustomEvent_OldDiamondsNumber = K2Node_CustomEvent_OldDiamondsNumber;
	Parms.K2Node_CustomEvent_NewDiamondsNumber = K2Node_CustomEvent_NewDiamondsNumber;
	Parms.K2Node_CustomEvent_bAnimateLast = K2Node_CustomEvent_bAnimateLast;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue_1 = CallFunc_Clamp_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetDiamonds_Array = CallFunc_GetDiamonds_Array;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetDiamonds_Array_1 = CallFunc_GetDiamonds_Array_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDiamonds_Array_2 = CallFunc_GetDiamonds_Array_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetDiamonds_Array_3 = CallFunc_GetDiamonds_Array_3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_3 = CallFunc_Subtract_IntInt_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetCurrentDiamond_Output = CallFunc_GetCurrentDiamond_Output;
	Parms.CallFunc_GetCurrentDiamond_Output_1 = CallFunc_GetCurrentDiamond_Output_1;
	Parms.CallFunc_GetCurrentDiamond_Output_2 = CallFunc_GetCurrentDiamond_Output_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_ComponentBoundEvent_Index = K2Node_ComponentBoundEvent_Index;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FamiliarityWidget.FamiliarityWidget_C.LastDiamondMaxed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFamiliarityWidget_C::LastDiamondMaxed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FamiliarityWidget_C", "LastDiamondMaxed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FamiliarityWidget.FamiliarityWidget_C.LastDiamondAppeared__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFamiliarityWidget_C::LastDiamondAppeared__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FamiliarityWidget_C", "LastDiamondAppeared__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FamiliarityWidget.FamiliarityWidget_C.LastDiamondFilled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFamiliarityWidget_C::LastDiamondFilled__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FamiliarityWidget_C", "LastDiamondFilled__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


