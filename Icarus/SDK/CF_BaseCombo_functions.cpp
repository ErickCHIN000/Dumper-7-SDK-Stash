#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_BaseCombo.CF_BaseCombo_C
// (None)

class UClass* UCF_BaseCombo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_BaseCombo_C");

	return Clss;
}


// CF_BaseCombo_C CF_BaseCombo.Default__CF_BaseCombo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_BaseCombo_C* UCF_BaseCombo_C::GetDefaultObj()
{
	static class UCF_BaseCombo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_BaseCombo_C*>(UCF_BaseCombo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_BaseCombo.CF_BaseCombo_C.HandleArg
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Arg                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_BaseCombo_C::HandleArg(int32 Index, const class FString& Arg, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_BaseCombo_C", "HandleArg");

	Params::UCF_BaseCombo_C_HandleArg_Params Parms{};

	Parms.Index = Index;
	Parms.Arg = Arg;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_BaseCombo.CF_BaseCombo_C.UpdatePreview
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class FString>              Args                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCF_BaseCombo_C::UpdatePreview(TArray<class FString>& Args)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_BaseCombo_C", "UpdatePreview");

	Params::UCF_BaseCombo_C_UpdatePreview_Params Parms{};

	Parms.Args = Args;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_BaseCombo.CF_BaseCombo_C.Execute
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCF_BaseCombo_C::Execute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_BaseCombo_C", "Execute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_BaseCombo.CF_BaseCombo_C.HandleExecute
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCF_BaseCombo_C::HandleExecute(class UUserWidget* Widget, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_BaseCombo_C", "HandleExecute");

	Params::UCF_BaseCombo_C_HandleExecute_Params Parms{};

	Parms.Widget = Widget;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_BaseCombo.CF_BaseCombo_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_1_OnItemSet__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      NameString                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCF_BaseCombo_C::BndEvt__ComboBox_K2Node_ComponentBoundEvent_1_OnItemSet__DelegateSignature(const class FString& NameString, class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_BaseCombo_C", "BndEvt__ComboBox_K2Node_ComponentBoundEvent_1_OnItemSet__DelegateSignature");

	Params::UCF_BaseCombo_C_BndEvt__ComboBox_K2Node_ComponentBoundEvent_1_OnItemSet__DelegateSignature_Params Parms{};

	Parms.NameString = NameString;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_BaseCombo.CF_BaseCombo_C.Handle On Item Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCF_BaseCombo_C::Handle_On_Item_Set(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_BaseCombo_C", "Handle On Item Set");

	Params::UCF_BaseCombo_C_Handle_On_Item_Set_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_BaseCombo.CF_BaseCombo_C.BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCF_BaseCombo_C::BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_BaseCombo_C", "BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_BaseCombo.CF_BaseCombo_C.ExecuteUbergraph_CF_BaseCombo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_Event_Args                                                (ConstParm, ReferenceParm)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_CustomEvent_Widget_1                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Amount                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetSelectedWidget_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_NameString                            (ZeroConstructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_CustomEvent_Widget                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCF_BaseCombo_C::ExecuteUbergraph_CF_BaseCombo(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, TArray<class FString>& K2Node_Event_Args, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, class UUserWidget* K2Node_CustomEvent_Widget_1, int32 K2Node_CustomEvent_Amount, class UUserWidget* CallFunc_GetSelectedWidget_ReturnValue, const class FString& K2Node_ComponentBoundEvent_NameString, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UUserWidget* K2Node_CustomEvent_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_BaseCombo_C", "ExecuteUbergraph_CF_BaseCombo");

	Params::UCF_BaseCombo_C_ExecuteUbergraph_CF_BaseCombo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Event_Args = K2Node_Event_Args;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_Widget_1 = K2Node_CustomEvent_Widget_1;
	Parms.K2Node_CustomEvent_Amount = K2Node_CustomEvent_Amount;
	Parms.CallFunc_GetSelectedWidget_ReturnValue = CallFunc_GetSelectedWidget_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NameString = K2Node_ComponentBoundEvent_NameString;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;

	UObject::ProcessEvent(Func, &Parms);

}

}


