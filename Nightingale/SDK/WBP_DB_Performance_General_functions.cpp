#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DB_Performance_General.WBP_DB_Performance_General_C
// (None)

class UClass* UWBP_DB_Performance_General_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DB_Performance_General_C");

	return Clss;
}


// WBP_DB_Performance_General_C WBP_DB_Performance_General.Default__WBP_DB_Performance_General_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DB_Performance_General_C* UWBP_DB_Performance_General_C::GetDefaultObj()
{
	static class UWBP_DB_Performance_General_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DB_Performance_General_C*>(UWBP_DB_Performance_General_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_DB_Performance_General.WBP_DB_Performance_General_C.StopInsightsTrace
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Succeeded                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StopTracing_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Performance_General_C::StopInsightsTrace(bool* Succeeded, bool CallFunc_StopTracing_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_General_C", "StopInsightsTrace");

	Params::UWBP_DB_Performance_General_C_StopInsightsTrace_Params Parms{};

	Parms.CallFunc_StopTracing_ReturnValue = CallFunc_StopTracing_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Succeeded != nullptr)
		*Succeeded = Parms.Succeeded;

}


// Function WBP_DB_Performance_General.WBP_DB_Performance_General_C.StartInsightsTrace
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Succeeded                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTracing_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetNWXPlayerController_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Performance_General_C::StartInsightsTrace(bool* Succeeded, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsTracing_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class ANWXPlayerController* CallFunc_GetNWXPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_General_C", "StartInsightsTrace");

	Params::UWBP_DB_Performance_General_C_StartInsightsTrace_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsTracing_ReturnValue = CallFunc_IsTracing_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetNWXPlayerController_ReturnValue = CallFunc_GetNWXPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Succeeded != nullptr)
		*Succeeded = Parms.Succeeded;

}


// Function WBP_DB_Performance_General.WBP_DB_Performance_General_C.UpdateButtonColors
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                     SelectedButton                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UButton*>             DeSelectedButtons                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UButton*>             UnSelectableButtons                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UButton*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Performance_General_C::UpdateButtonColors(class UButton* SelectedButton, TArray<class UButton*>& DeSelectedButtons, TArray<class UButton*>& UnSelectableButtons, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UButton* CallFunc_Array_Get_Item, class UButton* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_General_C", "UpdateButtonColors");

	Params::UWBP_DB_Performance_General_C_UpdateButtonColors_Params Parms{};

	Parms.SelectedButton = SelectedButton;
	Parms.DeSelectedButtons = DeSelectedButtons;
	Parms.UnSelectableButtons = UnSelectableButtons;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue = CallFunc_Conv_ColorToLinearColor_ReturnValue;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue_1 = CallFunc_Conv_ColorToLinearColor_ReturnValue_1;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue_2 = CallFunc_Conv_ColorToLinearColor_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Performance_General.WBP_DB_Performance_General_C.UpdateNetworkEmulationProfile
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EmulationOption                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      EmulationCommand                                                 (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void UWBP_DB_Performance_General_C::UpdateNetworkEmulationProfile(const class FString& EmulationOption, const class FString& EmulationCommand, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_General_C", "UpdateNetworkEmulationProfile");

	Params::UWBP_DB_Performance_General_C_UpdateNetworkEmulationProfile_Params Parms{};

	Parms.EmulationOption = EmulationOption;
	Parms.EmulationCommand = EmulationCommand;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Performance_General.WBP_DB_Performance_General_C.BndEvt__WBP_DB_Performance_General_BT_Average_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_Performance_General_C::BndEvt__WBP_DB_Performance_General_BT_Average_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_General_C", "BndEvt__WBP_DB_Performance_General_BT_Average_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Performance_General.WBP_DB_Performance_General_C.BndEvt__WBP_DB_Performance_General_BT_Bad_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_Performance_General_C::BndEvt__WBP_DB_Performance_General_BT_Bad_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_General_C", "BndEvt__WBP_DB_Performance_General_BT_Bad_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Performance_General.WBP_DB_Performance_General_C.BndEvt__WBP_DB_Performance_General_BT_StartTrace_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_Performance_General_C::BndEvt__WBP_DB_Performance_General_BT_StartTrace_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_General_C", "BndEvt__WBP_DB_Performance_General_BT_StartTrace_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Performance_General.WBP_DB_Performance_General_C.BndEvt__WBP_DB_Performance_General_BT_StopTrace_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_Performance_General_C::BndEvt__WBP_DB_Performance_General_BT_StopTrace_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_General_C", "BndEvt__WBP_DB_Performance_General_BT_StopTrace_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Performance_General.WBP_DB_Performance_General_C.BndEvt__WBP_DB_Performance_General_BT_Off_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_Performance_General_C::BndEvt__WBP_DB_Performance_General_BT_Off_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_General_C", "BndEvt__WBP_DB_Performance_General_BT_Off_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Performance_General.WBP_DB_Performance_General_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_DB_Performance_General_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_General_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Performance_General.WBP_DB_Performance_General_C.BndEvt__WBP_DB_Performance_General_CB_TraceLengthSeconds_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Performance_General_C::BndEvt__WBP_DB_Performance_General_CB_TraceLengthSeconds_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_General_C", "BndEvt__WBP_DB_Performance_General_CB_TraceLengthSeconds_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature");

	Params::UWBP_DB_Performance_General_C_BndEvt__WBP_DB_Performance_General_CB_TraceLengthSeconds_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Performance_General.WBP_DB_Performance_General_C.ExecuteUbergraph_WBP_DB_Performance_General
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             CallFunc_GetOwningPlayerState_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentNetworkEmulationProfileName_ReturnValue       (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UButton*>             K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// TArray<class UButton*>             K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference)
// TArray<class UButton*>             K2Node_MakeArray_Array_2                                         (ReferenceParm, ContainsInstancedReference)
// TArray<class UButton*>             K2Node_MakeArray_Array_3                                         (ReferenceParm, ContainsInstancedReference)
// TArray<class UButton*>             K2Node_MakeArray_Array_4                                         (ReferenceParm, ContainsInstancedReference)
// TArray<class UButton*>             K2Node_MakeArray_Array_5                                         (ReferenceParm, ContainsInstancedReference)
// TArray<class UButton*>             K2Node_MakeArray_Array_6                                         (ReferenceParm, ContainsInstancedReference)
// TArray<class UButton*>             K2Node_MakeArray_Array_7                                         (ReferenceParm, ContainsInstancedReference)
// TArray<class UButton*>             K2Node_MakeArray_Array_8                                         (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_StartInsightsTrace_Succeeded                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StopInsightsTrace_Succeeded                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTracing_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UButton*>             K2Node_MakeArray_Array_9                                         (ReferenceParm, ContainsInstancedReference)
// TArray<class UButton*>             K2Node_MakeArray_Array_10                                        (ReferenceParm, ContainsInstancedReference)
// TArray<class UButton*>             K2Node_MakeArray_Array_11                                        (ReferenceParm, ContainsInstancedReference)
// TArray<class UButton*>             K2Node_MakeArray_Array_12                                        (ReferenceParm, ContainsInstancedReference)
// TArray<class UButton*>             K2Node_MakeArray_Array_13                                        (ReferenceParm, ContainsInstancedReference)
// TArray<class UButton*>             K2Node_MakeArray_Array_14                                        (ReferenceParm, ContainsInstancedReference)
// TArray<class UButton*>             K2Node_MakeArray_Array_15                                        (ReferenceParm, ContainsInstancedReference)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem                          (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Performance_General_C::ExecuteUbergraph_WBP_DB_Performance_General(int32 EntryPoint, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, const class FString& CallFunc_GetCurrentNetworkEmulationProfileName_ReturnValue, bool K2Node_SwitchString_CmpSuccess, TArray<class UButton*>& K2Node_MakeArray_Array, TArray<class UButton*>& K2Node_MakeArray_Array_1, TArray<class UButton*>& K2Node_MakeArray_Array_2, TArray<class UButton*>& K2Node_MakeArray_Array_3, TArray<class UButton*>& K2Node_MakeArray_Array_4, TArray<class UButton*>& K2Node_MakeArray_Array_5, TArray<class UButton*>& K2Node_MakeArray_Array_6, TArray<class UButton*>& K2Node_MakeArray_Array_7, TArray<class UButton*>& K2Node_MakeArray_Array_8, bool CallFunc_StartInsightsTrace_Succeeded, bool CallFunc_StopInsightsTrace_Succeeded, bool CallFunc_IsTracing_ReturnValue, TArray<class UButton*>& K2Node_MakeArray_Array_9, TArray<class UButton*>& K2Node_MakeArray_Array_10, TArray<class UButton*>& K2Node_MakeArray_Array_11, TArray<class UButton*>& K2Node_MakeArray_Array_12, TArray<class UButton*>& K2Node_MakeArray_Array_13, TArray<class UButton*>& K2Node_MakeArray_Array_14, TArray<class UButton*>& K2Node_MakeArray_Array_15, const class FString& K2Node_ComponentBoundEvent_SelectedItem, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType, bool K2Node_SwitchString_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_General_C", "ExecuteUbergraph_WBP_DB_Performance_General");

	Params::UWBP_DB_Performance_General_C_ExecuteUbergraph_WBP_DB_Performance_General_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayerState_ReturnValue = CallFunc_GetOwningPlayerState_ReturnValue;
	Parms.CallFunc_GetCurrentNetworkEmulationProfileName_ReturnValue = CallFunc_GetCurrentNetworkEmulationProfileName_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.K2Node_MakeArray_Array_7 = K2Node_MakeArray_Array_7;
	Parms.K2Node_MakeArray_Array_8 = K2Node_MakeArray_Array_8;
	Parms.CallFunc_StartInsightsTrace_Succeeded = CallFunc_StartInsightsTrace_Succeeded;
	Parms.CallFunc_StopInsightsTrace_Succeeded = CallFunc_StopInsightsTrace_Succeeded;
	Parms.CallFunc_IsTracing_ReturnValue = CallFunc_IsTracing_ReturnValue;
	Parms.K2Node_MakeArray_Array_9 = K2Node_MakeArray_Array_9;
	Parms.K2Node_MakeArray_Array_10 = K2Node_MakeArray_Array_10;
	Parms.K2Node_MakeArray_Array_11 = K2Node_MakeArray_Array_11;
	Parms.K2Node_MakeArray_Array_12 = K2Node_MakeArray_Array_12;
	Parms.K2Node_MakeArray_Array_13 = K2Node_MakeArray_Array_13;
	Parms.K2Node_MakeArray_Array_14 = K2Node_MakeArray_Array_14;
	Parms.K2Node_MakeArray_Array_15 = K2Node_MakeArray_Array_15;
	Parms.K2Node_ComponentBoundEvent_SelectedItem = K2Node_ComponentBoundEvent_SelectedItem;
	Parms.K2Node_ComponentBoundEvent_SelectionType = K2Node_ComponentBoundEvent_SelectionType;
	Parms.K2Node_SwitchString_CmpSuccess_1 = K2Node_SwitchString_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


