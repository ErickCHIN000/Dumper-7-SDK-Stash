#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_DialogueDebug.wid_DialogueDebug_C
// (None)

class UClass* UWid_DialogueDebug_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_DialogueDebug_C");

	return Clss;
}


// wid_DialogueDebug_C wid_DialogueDebug.Default__wid_DialogueDebug_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_DialogueDebug_C* UWid_DialogueDebug_C::GetDefaultObj()
{
	static class UWid_DialogueDebug_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_DialogueDebug_C*>(UWid_DialogueDebug_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_DialogueDebug.wid_DialogueDebug_C.Search
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        CurrentVisibility                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsChecked_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_DialogueDebugEntry_C*   CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FText                        CallFunc_GetText_ReturnValue_1                                   (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue_2                                   (None)
// class FText                        CallFunc_GetText_ReturnValue_3                                   (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_DialogueDebug_C::Search(enum class ESlateVisibility CurrentVisibility, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, const class FString& Temp_string_Variable, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable_1, class UWid_DialogueDebugEntry_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_GetText_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue_3, bool CallFunc_Contains_ReturnValue, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, class FText CallFunc_GetText_ReturnValue_2, class FText CallFunc_GetText_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, const class FString& K2Node_Select_Default, bool CallFunc_EqualEqual_StrStr_ReturnValue_4, bool CallFunc_EqualEqual_StriStri_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_Contains_ReturnValue_2, bool CallFunc_Contains_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueDebug_C", "Search");

	Params::UWid_DialogueDebug_C_Search_Params Parms{};

	Parms.CurrentVisibility = CurrentVisibility;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue_1 = CallFunc_GetText_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_2 = CallFunc_EqualEqual_StrStr_ReturnValue_2;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_3 = CallFunc_EqualEqual_StrStr_ReturnValue_3;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue_1 = CallFunc_Contains_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_GetText_ReturnValue_2 = CallFunc_GetText_ReturnValue_2;
	Parms.CallFunc_GetText_ReturnValue_3 = CallFunc_GetText_ReturnValue_3;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue_3 = CallFunc_Conv_TextToString_ReturnValue_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_4 = CallFunc_EqualEqual_StrStr_ReturnValue_4;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_1 = CallFunc_EqualEqual_StriStri_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_5 = CallFunc_EqualEqual_StrStr_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_Contains_ReturnValue_2 = CallFunc_Contains_ReturnValue_2;
	Parms.CallFunc_Contains_ReturnValue_3 = CallFunc_Contains_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_6 = CallFunc_BooleanOR_ReturnValue_6;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueDebug.wid_DialogueDebug_C.OnDialogueFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_DialogueDebugEntry_C*   CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_DialogueDebug_C::OnDialogueFinished(int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Array_Length_ReturnValue, class UWid_DialogueDebugEntry_C* CallFunc_Array_Get_Item, bool CallFunc_IsVisible_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueDebug_C", "OnDialogueFinished");

	Params::UWid_DialogueDebug_C_OnDialogueFinished_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueDebug.wid_DialogueDebug_C.OnDialogueOnhovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_DialogueDebug_C::OnDialogueOnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueDebug_C", "OnDialogueOnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialogueDebug.wid_DialogueDebug_C.OnDialogueHovered
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ChatterId                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// struct FDialogueMetadataV2         CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FString                      CallFunc_GetDisplayName_ReturnValue_2                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// struct FDialogueDataV2             CallFunc_GetDataTableRowFromName_OutRow_1                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Array_Get_Item                                          (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)

void UWid_DialogueDebug_C::OnDialogueHovered(class FName ChatterId, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FDialogueMetadataV2& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_2, const struct FDialogueDataV2& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, class FText CallFunc_Array_Get_Item, class FText CallFunc_Conv_StringToText_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueDebug_C", "OnDialogueHovered");

	Params::UWid_DialogueDebug_C_OnDialogueHovered_Params Parms{};

	Parms.ChatterId = ChatterId;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue_1 = CallFunc_GetDisplayName_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_GetDisplayName_ReturnValue_2 = CallFunc_GetDisplayName_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueDebug.wid_DialogueDebug_C.CreateDialogueEntries
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_DialogueDebug_C::CreateDialogueEntries(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueDebug_C", "CreateDialogueEntries");

	Params::UWid_DialogueDebug_C_CreateDialogueEntries_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueDebug.wid_DialogueDebug_C.OnDialogueSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ChatterId                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ChatterName                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWid_DialogueDebugEntry_C*   Dialogue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_DialogueDebug_C::OnDialogueSelected(class FName ChatterId, class FText ChatterName, class UWid_DialogueDebugEntry_C* Dialogue, class FText CallFunc_Conv_NameToText_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueDebug_C", "OnDialogueSelected");

	Params::UWid_DialogueDebug_C_OnDialogueSelected_Params Parms{};

	Parms.ChatterId = ChatterId;
	Parms.ChatterName = ChatterName;
	Parms.Dialogue = Dialogue;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueDebug.wid_DialogueDebug_C.CreateDialogueEntry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      AkEvent                                                          (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class UWid_DialogueDebugEntry_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_DialogueDebugDisplayTypeTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDialogueMetadataV2         CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogueDataV2             CallFunc_GetDataTableRowFromName_OutRow_1                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FText                        CallFunc_Array_Get_Item                                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_DialogueDebug_C::CreateDialogueEntry(class FName RowName, const class FString& AkEvent, class UWid_DialogueDebugEntry_C* CallFunc_Create_ReturnValue, enum class E_DialogueDebugDisplayType Temp_byte_Variable, const struct FDialogueMetadataV2& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FDialogueDataV2& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FText CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText K2Node_Select_Default, bool CallFunc_EqualEqual_StrStr_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueDebug_C", "CreateDialogueEntry");

	Params::UWid_DialogueDebug_C_CreateDialogueEntry_Params Parms{};

	Parms.RowName = RowName;
	Parms.AkEvent = AkEvent;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueDebug.wid_DialogueDebug_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_DialogueDebug_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueDebug_C", "PreConstruct");

	Params::UWid_DialogueDebug_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueDebug.wid_DialogueDebug_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_DialogueDebug_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueDebug_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialogueDebug.wid_DialogueDebug_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_DialogueDebug_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueDebug_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialogueDebug.wid_DialogueDebug_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_DialogueDebug_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueDebug_C", "BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialogueDebug.wid_DialogueDebug_C.BndEvt__StartAutoplay_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_DialogueDebug_C::BndEvt__StartAutoplay_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueDebug_C", "BndEvt__StartAutoplay_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialogueDebug.wid_DialogueDebug_C.BndEvt__StopAutoplay_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_DialogueDebug_C::BndEvt__StopAutoplay_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueDebug_C", "BndEvt__StopAutoplay_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialogueDebug.wid_DialogueDebug_C.BndEvt__PauseAutoplay_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_DialogueDebug_C::BndEvt__PauseAutoplay_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueDebug_C", "BndEvt__PauseAutoplay_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialogueDebug.wid_DialogueDebug_C.BndEvt__ResetDisabled_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_DialogueDebug_C::BndEvt__ResetDisabled_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueDebug_C", "BndEvt__ResetDisabled_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialogueDebug.wid_DialogueDebug_C.BndEvt__SearchID_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWid_DialogueDebug_C::BndEvt__SearchID_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueDebug_C", "BndEvt__SearchID_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::UWid_DialogueDebug_C_BndEvt__SearchID_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueDebug.wid_DialogueDebug_C.BndEvt__SearchActor_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWid_DialogueDebug_C::BndEvt__SearchActor_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueDebug_C", "BndEvt__SearchActor_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::UWid_DialogueDebug_C_BndEvt__SearchActor_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueDebug.wid_DialogueDebug_C.BndEvt__SearchAkEvent_K2Node_ComponentBoundEvent_7_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWid_DialogueDebug_C::BndEvt__SearchAkEvent_K2Node_ComponentBoundEvent_7_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueDebug_C", "BndEvt__SearchAkEvent_K2Node_ComponentBoundEvent_7_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::UWid_DialogueDebug_C_BndEvt__SearchAkEvent_K2Node_ComponentBoundEvent_7_OnEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueDebug.wid_DialogueDebug_C.BndEvt__SearchText_K2Node_ComponentBoundEvent_8_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWid_DialogueDebug_C::BndEvt__SearchText_K2Node_ComponentBoundEvent_8_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueDebug_C", "BndEvt__SearchText_K2Node_ComponentBoundEvent_8_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::UWid_DialogueDebug_C_BndEvt__SearchText_K2Node_ComponentBoundEvent_8_OnEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueDebug.wid_DialogueDebug_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_DialogueDebug_C::BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueDebug_C", "BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UWid_DialogueDebug_C_BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueDebug.wid_DialogueDebug_C.ExecuteUbergraph_wid_DialogueDebug
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_ComponentBoundEvent_Text_3                                (ConstParm)
// class UWid_DialogueDebugEntry_C*   CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text_2                                (ConstParm)
// class FText                        K2Node_ComponentBoundEvent_Text_1                                (ConstParm)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// bool                               K2Node_ComponentBoundEvent_bIsChecked                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_DialogueDebug_C::ExecuteUbergraph_wid_DialogueDebug(int32 EntryPoint, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable_1, bool K2Node_Event_IsDesignTime, class FText K2Node_Select_Default, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class FText K2Node_ComponentBoundEvent_Text_3, class UWid_DialogueDebugEntry_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class FText K2Node_ComponentBoundEvent_Text_2, class FText K2Node_ComponentBoundEvent_Text_1, class FText K2Node_ComponentBoundEvent_Text, bool K2Node_ComponentBoundEvent_bIsChecked, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_Not_PreBool_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueDebug_C", "ExecuteUbergraph_wid_DialogueDebug");

	Params::UWid_DialogueDebug_C_ExecuteUbergraph_wid_DialogueDebug_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Text_3 = K2Node_ComponentBoundEvent_Text_3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Text_2 = K2Node_ComponentBoundEvent_Text_2;
	Parms.K2Node_ComponentBoundEvent_Text_1 = K2Node_ComponentBoundEvent_Text_1;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.K2Node_ComponentBoundEvent_bIsChecked = K2Node_ComponentBoundEvent_bIsChecked;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


