#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Debug_TraitSelector_Panel.WBP_Debug_TraitSelector_Panel_C
// (None)

class UClass* UWBP_Debug_TraitSelector_Panel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Debug_TraitSelector_Panel_C");

	return Clss;
}


// WBP_Debug_TraitSelector_Panel_C WBP_Debug_TraitSelector_Panel.Default__WBP_Debug_TraitSelector_Panel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Debug_TraitSelector_Panel_C* UWBP_Debug_TraitSelector_Panel_C::GetDefaultObj()
{
	static class UWBP_Debug_TraitSelector_Panel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Debug_TraitSelector_Panel_C*>(UWBP_Debug_TraitSelector_Panel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Debug_TraitSelector_Panel.WBP_Debug_TraitSelector_Panel_C.RefreshActiveTextWrapBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_Debug_TraitSelector_Panel_C::RefreshActiveTextWrapBox(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool CallFunc_HasAnyChildren_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_TraitSelector_Panel_C", "RefreshActiveTextWrapBox");

	Params::UWBP_Debug_TraitSelector_Panel_C_RefreshActiveTextWrapBox_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Debug_TraitSelector_Panel.WBP_Debug_TraitSelector_Panel_C.RefreshCharacteristicText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_BasicText_OneLine_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacteristicDataAsset*    CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_Debug_TraitSelector_Panel_C::RefreshCharacteristicText(class UWBP_BasicText_OneLine_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FLinearColor& Temp_struct_Variable, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 Temp_int_Loop_Counter_Variable, uint8 CallFunc_MakeLiteralByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UCharacteristicDataAsset* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_TraitSelector_Panel_C", "RefreshCharacteristicText");

	Params::UWBP_Debug_TraitSelector_Panel_C_RefreshCharacteristicText_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Debug_TraitSelector_Panel.WBP_Debug_TraitSelector_Panel_C.FilterTraits
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        FilterText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class UCharacteristicDataAsset*>CharacteristicsToFilter                                          (Edit, BlueprintVisible)
// class UCharacteristicDataAsset*    CurrentCharacteristic                                            (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CurrentFilterText                                                (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FText                        WidgetValue                                                      (Edit, BlueprintVisible)
// bool                               bShowWidget                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CurrentWidget                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             WidgetsToFilter                                                  (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<class FString>              FilterArray                                                      (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacteristicData         CallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacteristicDataAsset*    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_ParseIntoArray_ReturnValue                              (ReferenceParm)
// bool                               CallFunc_NotEqual_TextText_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Debug_TraitSelector_Panel_C::FilterTraits(class FText FilterText, const TArray<class UCharacteristicDataAsset*>& CharacteristicsToFilter, class UCharacteristicDataAsset* CurrentCharacteristic, const class FString& CurrentFilterText, class FText WidgetValue, bool bShowWidget, class UWidget* CurrentWidget, const TArray<class UWidget*>& WidgetsToFilter, const TArray<class FString>& FilterArray, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FCharacteristicData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UCharacteristicDataAsset* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, bool CallFunc_NotEqual_TextText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_TraitSelector_Panel_C", "FilterTraits");

	Params::UWBP_Debug_TraitSelector_Panel_C_FilterTraits_Params Parms{};

	Parms.FilterText = FilterText;
	Parms.CharacteristicsToFilter = CharacteristicsToFilter;
	Parms.CurrentCharacteristic = CurrentCharacteristic;
	Parms.CurrentFilterText = CurrentFilterText;
	Parms.WidgetValue = WidgetValue;
	Parms.bShowWidget = bShowWidget;
	Parms.CurrentWidget = CurrentWidget;
	Parms.WidgetsToFilter = WidgetsToFilter;
	Parms.FilterArray = FilterArray;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_ParseIntoArray_ReturnValue = CallFunc_ParseIntoArray_ReturnValue;
	Parms.CallFunc_NotEqual_TextText_ReturnValue = CallFunc_NotEqual_TextText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Debug_TraitSelector_Panel.WBP_Debug_TraitSelector_Panel_C.OnCharacteristicSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CharacteristicSelected                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacteristicDataAsset*    CharacteristicRef                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Debug_TraitSelector_Panel_C::OnCharacteristicSelected(bool CharacteristicSelected, class UCharacteristicDataAsset* CharacteristicRef, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_TraitSelector_Panel_C", "OnCharacteristicSelected");

	Params::UWBP_Debug_TraitSelector_Panel_C_OnCharacteristicSelected_Params Parms{};

	Parms.CharacteristicSelected = CharacteristicSelected;
	Parms.CharacteristicRef = CharacteristicRef;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Debug_TraitSelector_Panel.WBP_Debug_TraitSelector_Panel_C.PopulateTraits
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UCharacteristicDataAsset*>CallFunc_GetAllCharacteristics_ReturnValue                       (ReferenceParm)

void UWBP_Debug_TraitSelector_Panel_C::PopulateTraits(TArray<class UCharacteristicDataAsset*>& CallFunc_GetAllCharacteristics_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_TraitSelector_Panel_C", "PopulateTraits");

	Params::UWBP_Debug_TraitSelector_Panel_C_PopulateTraits_Params Parms{};

	Parms.CallFunc_GetAllCharacteristics_ReturnValue = CallFunc_GetAllCharacteristics_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Debug_TraitSelector_Panel.WBP_Debug_TraitSelector_Panel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Debug_TraitSelector_Panel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_TraitSelector_Panel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Debug_TraitSelector_Panel.WBP_Debug_TraitSelector_Panel_C.BndEvt__WBP_PopupTraits_bu_Done_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Debug_TraitSelector_Panel_C::BndEvt__WBP_PopupTraits_bu_Done_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_TraitSelector_Panel_C", "BndEvt__WBP_PopupTraits_bu_Done_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Debug_TraitSelector_Panel.WBP_Debug_TraitSelector_Panel_C.BndEvt__WBP_PopupTraits_TraitFilter_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Debug_TraitSelector_Panel_C::BndEvt__WBP_PopupTraits_TraitFilter_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_TraitSelector_Panel_C", "BndEvt__WBP_PopupTraits_TraitFilter_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::UWBP_Debug_TraitSelector_Panel_C_BndEvt__WBP_PopupTraits_TraitFilter_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Debug_TraitSelector_Panel.WBP_Debug_TraitSelector_Panel_C.BndEvt__WBP_Debug_TraitSelector_Panel_TraitListView_K2Node_ComponentBoundEvent_3_OnListEntryGeneratedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Debug_TraitSelector_Panel_C::BndEvt__WBP_Debug_TraitSelector_Panel_TraitListView_K2Node_ComponentBoundEvent_3_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_TraitSelector_Panel_C", "BndEvt__WBP_Debug_TraitSelector_Panel_TraitListView_K2Node_ComponentBoundEvent_3_OnListEntryGeneratedDynamic__DelegateSignature");

	Params::UWBP_Debug_TraitSelector_Panel_C_BndEvt__WBP_Debug_TraitSelector_Panel_TraitListView_K2Node_ComponentBoundEvent_3_OnListEntryGeneratedDynamic__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Debug_TraitSelector_Panel.WBP_Debug_TraitSelector_Panel_C.BndEvt__WBP_Debug_TraitSelector_Panel_TraitListView_K2Node_ComponentBoundEvent_4_OnListEntryReleasedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Debug_TraitSelector_Panel_C::BndEvt__WBP_Debug_TraitSelector_Panel_TraitListView_K2Node_ComponentBoundEvent_4_OnListEntryReleasedDynamic__DelegateSignature(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_TraitSelector_Panel_C", "BndEvt__WBP_Debug_TraitSelector_Panel_TraitListView_K2Node_ComponentBoundEvent_4_OnListEntryReleasedDynamic__DelegateSignature");

	Params::UWBP_Debug_TraitSelector_Panel_C_BndEvt__WBP_Debug_TraitSelector_Panel_TraitListView_K2Node_ComponentBoundEvent_4_OnListEntryReleasedDynamic__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Debug_TraitSelector_Panel.WBP_Debug_TraitSelector_Panel_C.ExecuteUbergraph_WBP_Debug_TraitSelector_Panel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_sw_Debug_CharacteristicEntry_C*K2Node_DynamicCast_AsWBP_Sw_Debug_Characteristic_Entry           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// class UUserWidget*                 K2Node_ComponentBoundEvent_Widget_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_sw_Debug_CharacteristicEntry_C*K2Node_DynamicCast_AsWBP_Sw_Debug_Characteristic_Entry_1         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Debug_TraitSelector_Panel_C::ExecuteUbergraph_WBP_Debug_TraitSelector_Panel(int32 EntryPoint, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UWBP_sw_Debug_CharacteristicEntry_C* K2Node_DynamicCast_AsWBP_Sw_Debug_Characteristic_Entry, bool K2Node_DynamicCast_bSuccess, class FText K2Node_ComponentBoundEvent_Text, class UUserWidget* K2Node_ComponentBoundEvent_Widget_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_sw_Debug_CharacteristicEntry_C* K2Node_DynamicCast_AsWBP_Sw_Debug_Characteristic_Entry_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_TraitSelector_Panel_C", "ExecuteUbergraph_WBP_Debug_TraitSelector_Panel");

	Params::UWBP_Debug_TraitSelector_Panel_C_ExecuteUbergraph_WBP_Debug_TraitSelector_Panel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.K2Node_DynamicCast_AsWBP_Sw_Debug_Characteristic_Entry = K2Node_DynamicCast_AsWBP_Sw_Debug_Characteristic_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.K2Node_ComponentBoundEvent_Widget_1 = K2Node_ComponentBoundEvent_Widget_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsWBP_Sw_Debug_Characteristic_Entry_1 = K2Node_DynamicCast_AsWBP_Sw_Debug_Characteristic_Entry_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Debug_TraitSelector_Panel.WBP_Debug_TraitSelector_Panel_C.CharacteristicSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CharacteristicSelected                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacteristicDataAsset*    CharacteristicRef                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Debug_TraitSelector_Panel_C::CharacteristicSelected__DelegateSignature(bool CharacteristicSelected, class UCharacteristicDataAsset* CharacteristicRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_TraitSelector_Panel_C", "CharacteristicSelected__DelegateSignature");

	Params::UWBP_Debug_TraitSelector_Panel_C_CharacteristicSelected__DelegateSignature_Params Parms{};

	Parms.CharacteristicSelected = CharacteristicSelected;
	Parms.CharacteristicRef = CharacteristicRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Debug_TraitSelector_Panel.WBP_Debug_TraitSelector_Panel_C.Cleared__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Debug_TraitSelector_Panel_C::Cleared__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_TraitSelector_Panel_C", "Cleared__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


