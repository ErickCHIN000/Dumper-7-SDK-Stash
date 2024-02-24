#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_TasksPanel_List_Entry.wid_TasksPanel_List_Entry_C
// (None)

class UClass* UWid_TasksPanel_List_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_TasksPanel_List_Entry_C");

	return Clss;
}


// wid_TasksPanel_List_Entry_C wid_TasksPanel_List_Entry.Default__wid_TasksPanel_List_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_TasksPanel_List_Entry_C* UWid_TasksPanel_List_Entry_C::GetDefaultObj()
{
	static class UWid_TasksPanel_List_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_TasksPanel_List_Entry_C*>(UWid_TasksPanel_List_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_TasksPanel_List_Entry.wid_TasksPanel_List_Entry_C.SetType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_TasksPanel_Entry_TypeNewType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable_2                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_3                                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable_4                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_5                                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable_6                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_7                                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_8                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_11                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_12                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_4                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_13                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_14                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_15                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_16                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_5                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_17                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default_1                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_18                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_2                            (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_6                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// class FString                      Temp_string_Variable_9                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_7                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_19                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_20                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_8                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_21                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_22                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_23                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_24                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_25                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default_2                                          (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// class FString                      K2Node_Select_Default_3                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_26                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_3                            (None)
// class FString                      Temp_string_Variable_10                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_9                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_3                           (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_10                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_27                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_28                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default_4                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_29                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_4                         (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_30                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_31                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_32                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_11                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default_5                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_33                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_5                         (None)
// bool                               Temp_bool_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default_6                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default_7                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_34                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_6                         (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_4                            (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_12                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_4                           (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_35                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_13                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_36                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_37                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_38                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_39                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_7                         (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_40                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_41                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_42                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_14                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_43                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_44                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default_8                                          (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_8                         (None)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default_9                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_45                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_5                            (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_9                         (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_15                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_5                           (None)
// class FString                      Temp_string_Variable_11                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_16                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_46                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default_10                                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_47                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_48                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_49                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_17                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_50                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_51                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_52                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_53                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default_11                                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_10                        (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_11                        (None)

void UWid_TasksPanel_List_Entry_C::SetType(enum class Enum_TasksPanel_Entry_Type NewType, const class FString& NewLocalVar_0, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool Temp_bool_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, bool Temp_bool_Variable_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool Temp_bool_Variable_2, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, bool Temp_bool_Variable_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool Temp_bool_Variable_4, const class FString& Temp_string_Variable_4, const class FString& Temp_string_Variable_5, bool Temp_bool_Variable_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool Temp_bool_Variable_6, const class FString& Temp_string_Variable_6, const class FString& Temp_string_Variable_7, bool Temp_bool_Variable_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, bool Temp_bool_Variable_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& Temp_string_Variable_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, bool CallFunc_NotEqual_StrStr_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, class FText CallFunc_Conv_IntToText_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, const class FString& CallFunc_Conv_TextToString_ReturnValue_4, bool CallFunc_NotEqual_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, bool Temp_bool_Variable_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_14, const class FString& CallFunc_Concat_StrStr_ReturnValue_15, const class FString& CallFunc_Concat_StrStr_ReturnValue_16, const class FString& CallFunc_Conv_TextToString_ReturnValue_5, const class FString& K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue_17, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, const class FString& K2Node_Select_Default_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_18, class FText CallFunc_Conv_IntToText_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_6, class FText CallFunc_MakeLiteralText_ReturnValue_2, const class FString& Temp_string_Variable_9, const class FString& CallFunc_Conv_TextToString_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_19, const class FString& CallFunc_Concat_StrStr_ReturnValue_20, const class FString& CallFunc_Conv_TextToString_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_21, const class FString& CallFunc_Concat_StrStr_ReturnValue_22, const class FString& CallFunc_Concat_StrStr_ReturnValue_23, const class FString& CallFunc_Concat_StrStr_ReturnValue_24, const class FString& CallFunc_Concat_StrStr_ReturnValue_25, bool CallFunc_NotEqual_StrStr_ReturnValue_3, const class FString& K2Node_Select_Default_2, class FText CallFunc_Conv_StringToText_ReturnValue_2, const class FString& K2Node_Select_Default_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_26, class FText CallFunc_Conv_StringToText_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, class FText CallFunc_Conv_IntToText_ReturnValue_3, const class FString& Temp_string_Variable_10, const class FString& CallFunc_Conv_TextToString_ReturnValue_9, class FText CallFunc_MakeLiteralText_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_10, bool Temp_bool_Variable_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_27, const class FString& CallFunc_Concat_StrStr_ReturnValue_28, const class FString& K2Node_Select_Default_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_29, class FText CallFunc_Conv_StringToText_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_30, const class FString& CallFunc_Concat_StrStr_ReturnValue_31, const class FString& CallFunc_Concat_StrStr_ReturnValue_32, const class FString& CallFunc_Conv_TextToString_ReturnValue_11, const class FString& K2Node_Select_Default_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_33, class FText CallFunc_Conv_StringToText_ReturnValue_5, bool Temp_bool_Variable_11, bool CallFunc_NotEqual_StrStr_ReturnValue_4, const class FString& K2Node_Select_Default_6, const class FString& K2Node_Select_Default_7, bool CallFunc_Less_IntInt_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_34, class FText CallFunc_Conv_StringToText_ReturnValue_6, class FText CallFunc_Conv_IntToText_ReturnValue_4, const class FString& CallFunc_Conv_TextToString_ReturnValue_12, class FText CallFunc_MakeLiteralText_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_35, const class FString& CallFunc_Conv_TextToString_ReturnValue_13, const class FString& CallFunc_Concat_StrStr_ReturnValue_36, const class FString& CallFunc_Concat_StrStr_ReturnValue_37, const class FString& CallFunc_Concat_StrStr_ReturnValue_38, const class FString& CallFunc_Concat_StrStr_ReturnValue_39, class FText CallFunc_Conv_StringToText_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_40, const class FString& CallFunc_Concat_StrStr_ReturnValue_41, const class FString& CallFunc_Concat_StrStr_ReturnValue_42, const class FString& CallFunc_Conv_TextToString_ReturnValue_14, const class FString& CallFunc_Concat_StrStr_ReturnValue_43, const class FString& CallFunc_Concat_StrStr_ReturnValue_44, const class FString& K2Node_Select_Default_8, class FText CallFunc_Conv_StringToText_ReturnValue_8, bool CallFunc_NotEqual_StrStr_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_5, const class FString& K2Node_Select_Default_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_45, class FText CallFunc_Conv_IntToText_ReturnValue_5, class FText CallFunc_Conv_StringToText_ReturnValue_9, const class FString& CallFunc_Conv_TextToString_ReturnValue_15, class FText CallFunc_MakeLiteralText_ReturnValue_5, const class FString& Temp_string_Variable_11, const class FString& CallFunc_Conv_TextToString_ReturnValue_16, const class FString& CallFunc_Concat_StrStr_ReturnValue_46, const class FString& K2Node_Select_Default_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_47, const class FString& CallFunc_Concat_StrStr_ReturnValue_48, const class FString& CallFunc_Concat_StrStr_ReturnValue_49, const class FString& CallFunc_Conv_TextToString_ReturnValue_17, const class FString& CallFunc_Concat_StrStr_ReturnValue_50, const class FString& CallFunc_Concat_StrStr_ReturnValue_51, const class FString& CallFunc_Concat_StrStr_ReturnValue_52, const class FString& CallFunc_Concat_StrStr_ReturnValue_53, const class FString& K2Node_Select_Default_11, class FText CallFunc_Conv_StringToText_ReturnValue_10, class FText CallFunc_Conv_StringToText_ReturnValue_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_TasksPanel_List_Entry_C", "SetType");

	Params::UWid_TasksPanel_List_Entry_C_SetType_Params Parms{};

	Parms.NewType = NewType;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.Temp_string_Variable_3 = Temp_string_Variable_3;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_string_Variable_4 = Temp_string_Variable_4;
	Parms.Temp_string_Variable_5 = Temp_string_Variable_5;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.Temp_string_Variable_6 = Temp_string_Variable_6;
	Parms.Temp_string_Variable_7 = Temp_string_Variable_7;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.Temp_string_Variable_8 = Temp_string_Variable_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_3 = CallFunc_Conv_TextToString_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_11 = CallFunc_Concat_StrStr_ReturnValue_11;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_12 = CallFunc_Concat_StrStr_ReturnValue_12;
	Parms.CallFunc_Conv_TextToString_ReturnValue_4 = CallFunc_Conv_TextToString_ReturnValue_4;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue_1 = CallFunc_NotEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_13 = CallFunc_Concat_StrStr_ReturnValue_13;
	Parms.Temp_bool_Variable_9 = Temp_bool_Variable_9;
	Parms.CallFunc_Concat_StrStr_ReturnValue_14 = CallFunc_Concat_StrStr_ReturnValue_14;
	Parms.CallFunc_Concat_StrStr_ReturnValue_15 = CallFunc_Concat_StrStr_ReturnValue_15;
	Parms.CallFunc_Concat_StrStr_ReturnValue_16 = CallFunc_Concat_StrStr_ReturnValue_16;
	Parms.CallFunc_Conv_TextToString_ReturnValue_5 = CallFunc_Conv_TextToString_ReturnValue_5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Concat_StrStr_ReturnValue_17 = CallFunc_Concat_StrStr_ReturnValue_17;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue_2 = CallFunc_NotEqual_StrStr_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_18 = CallFunc_Concat_StrStr_ReturnValue_18;
	Parms.CallFunc_Conv_IntToText_ReturnValue_2 = CallFunc_Conv_IntToText_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_6 = CallFunc_Conv_TextToString_ReturnValue_6;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.Temp_string_Variable_9 = Temp_string_Variable_9;
	Parms.CallFunc_Conv_TextToString_ReturnValue_7 = CallFunc_Conv_TextToString_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_19 = CallFunc_Concat_StrStr_ReturnValue_19;
	Parms.CallFunc_Concat_StrStr_ReturnValue_20 = CallFunc_Concat_StrStr_ReturnValue_20;
	Parms.CallFunc_Conv_TextToString_ReturnValue_8 = CallFunc_Conv_TextToString_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_21 = CallFunc_Concat_StrStr_ReturnValue_21;
	Parms.CallFunc_Concat_StrStr_ReturnValue_22 = CallFunc_Concat_StrStr_ReturnValue_22;
	Parms.CallFunc_Concat_StrStr_ReturnValue_23 = CallFunc_Concat_StrStr_ReturnValue_23;
	Parms.CallFunc_Concat_StrStr_ReturnValue_24 = CallFunc_Concat_StrStr_ReturnValue_24;
	Parms.CallFunc_Concat_StrStr_ReturnValue_25 = CallFunc_Concat_StrStr_ReturnValue_25;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue_3 = CallFunc_NotEqual_StrStr_ReturnValue_3;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_26 = CallFunc_Concat_StrStr_ReturnValue_26;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Conv_IntToText_ReturnValue_3 = CallFunc_Conv_IntToText_ReturnValue_3;
	Parms.Temp_string_Variable_10 = Temp_string_Variable_10;
	Parms.CallFunc_Conv_TextToString_ReturnValue_9 = CallFunc_Conv_TextToString_ReturnValue_9;
	Parms.CallFunc_MakeLiteralText_ReturnValue_3 = CallFunc_MakeLiteralText_ReturnValue_3;
	Parms.CallFunc_Conv_TextToString_ReturnValue_10 = CallFunc_Conv_TextToString_ReturnValue_10;
	Parms.Temp_bool_Variable_10 = Temp_bool_Variable_10;
	Parms.CallFunc_Concat_StrStr_ReturnValue_27 = CallFunc_Concat_StrStr_ReturnValue_27;
	Parms.CallFunc_Concat_StrStr_ReturnValue_28 = CallFunc_Concat_StrStr_ReturnValue_28;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_29 = CallFunc_Concat_StrStr_ReturnValue_29;
	Parms.CallFunc_Conv_StringToText_ReturnValue_4 = CallFunc_Conv_StringToText_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_30 = CallFunc_Concat_StrStr_ReturnValue_30;
	Parms.CallFunc_Concat_StrStr_ReturnValue_31 = CallFunc_Concat_StrStr_ReturnValue_31;
	Parms.CallFunc_Concat_StrStr_ReturnValue_32 = CallFunc_Concat_StrStr_ReturnValue_32;
	Parms.CallFunc_Conv_TextToString_ReturnValue_11 = CallFunc_Conv_TextToString_ReturnValue_11;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_33 = CallFunc_Concat_StrStr_ReturnValue_33;
	Parms.CallFunc_Conv_StringToText_ReturnValue_5 = CallFunc_Conv_StringToText_ReturnValue_5;
	Parms.Temp_bool_Variable_11 = Temp_bool_Variable_11;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue_4 = CallFunc_NotEqual_StrStr_ReturnValue_4;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_34 = CallFunc_Concat_StrStr_ReturnValue_34;
	Parms.CallFunc_Conv_StringToText_ReturnValue_6 = CallFunc_Conv_StringToText_ReturnValue_6;
	Parms.CallFunc_Conv_IntToText_ReturnValue_4 = CallFunc_Conv_IntToText_ReturnValue_4;
	Parms.CallFunc_Conv_TextToString_ReturnValue_12 = CallFunc_Conv_TextToString_ReturnValue_12;
	Parms.CallFunc_MakeLiteralText_ReturnValue_4 = CallFunc_MakeLiteralText_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_35 = CallFunc_Concat_StrStr_ReturnValue_35;
	Parms.CallFunc_Conv_TextToString_ReturnValue_13 = CallFunc_Conv_TextToString_ReturnValue_13;
	Parms.CallFunc_Concat_StrStr_ReturnValue_36 = CallFunc_Concat_StrStr_ReturnValue_36;
	Parms.CallFunc_Concat_StrStr_ReturnValue_37 = CallFunc_Concat_StrStr_ReturnValue_37;
	Parms.CallFunc_Concat_StrStr_ReturnValue_38 = CallFunc_Concat_StrStr_ReturnValue_38;
	Parms.CallFunc_Concat_StrStr_ReturnValue_39 = CallFunc_Concat_StrStr_ReturnValue_39;
	Parms.CallFunc_Conv_StringToText_ReturnValue_7 = CallFunc_Conv_StringToText_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_40 = CallFunc_Concat_StrStr_ReturnValue_40;
	Parms.CallFunc_Concat_StrStr_ReturnValue_41 = CallFunc_Concat_StrStr_ReturnValue_41;
	Parms.CallFunc_Concat_StrStr_ReturnValue_42 = CallFunc_Concat_StrStr_ReturnValue_42;
	Parms.CallFunc_Conv_TextToString_ReturnValue_14 = CallFunc_Conv_TextToString_ReturnValue_14;
	Parms.CallFunc_Concat_StrStr_ReturnValue_43 = CallFunc_Concat_StrStr_ReturnValue_43;
	Parms.CallFunc_Concat_StrStr_ReturnValue_44 = CallFunc_Concat_StrStr_ReturnValue_44;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.CallFunc_Conv_StringToText_ReturnValue_8 = CallFunc_Conv_StringToText_ReturnValue_8;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue_5 = CallFunc_NotEqual_StrStr_ReturnValue_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.K2Node_Select_Default_9 = K2Node_Select_Default_9;
	Parms.CallFunc_Concat_StrStr_ReturnValue_45 = CallFunc_Concat_StrStr_ReturnValue_45;
	Parms.CallFunc_Conv_IntToText_ReturnValue_5 = CallFunc_Conv_IntToText_ReturnValue_5;
	Parms.CallFunc_Conv_StringToText_ReturnValue_9 = CallFunc_Conv_StringToText_ReturnValue_9;
	Parms.CallFunc_Conv_TextToString_ReturnValue_15 = CallFunc_Conv_TextToString_ReturnValue_15;
	Parms.CallFunc_MakeLiteralText_ReturnValue_5 = CallFunc_MakeLiteralText_ReturnValue_5;
	Parms.Temp_string_Variable_11 = Temp_string_Variable_11;
	Parms.CallFunc_Conv_TextToString_ReturnValue_16 = CallFunc_Conv_TextToString_ReturnValue_16;
	Parms.CallFunc_Concat_StrStr_ReturnValue_46 = CallFunc_Concat_StrStr_ReturnValue_46;
	Parms.K2Node_Select_Default_10 = K2Node_Select_Default_10;
	Parms.CallFunc_Concat_StrStr_ReturnValue_47 = CallFunc_Concat_StrStr_ReturnValue_47;
	Parms.CallFunc_Concat_StrStr_ReturnValue_48 = CallFunc_Concat_StrStr_ReturnValue_48;
	Parms.CallFunc_Concat_StrStr_ReturnValue_49 = CallFunc_Concat_StrStr_ReturnValue_49;
	Parms.CallFunc_Conv_TextToString_ReturnValue_17 = CallFunc_Conv_TextToString_ReturnValue_17;
	Parms.CallFunc_Concat_StrStr_ReturnValue_50 = CallFunc_Concat_StrStr_ReturnValue_50;
	Parms.CallFunc_Concat_StrStr_ReturnValue_51 = CallFunc_Concat_StrStr_ReturnValue_51;
	Parms.CallFunc_Concat_StrStr_ReturnValue_52 = CallFunc_Concat_StrStr_ReturnValue_52;
	Parms.CallFunc_Concat_StrStr_ReturnValue_53 = CallFunc_Concat_StrStr_ReturnValue_53;
	Parms.K2Node_Select_Default_11 = K2Node_Select_Default_11;
	Parms.CallFunc_Conv_StringToText_ReturnValue_10 = CallFunc_Conv_StringToText_ReturnValue_10;
	Parms.CallFunc_Conv_StringToText_ReturnValue_11 = CallFunc_Conv_StringToText_ReturnValue_11;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_TasksPanel_List_Entry.wid_TasksPanel_List_Entry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_TasksPanel_List_Entry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_TasksPanel_List_Entry_C", "PreConstruct");

	Params::UWid_TasksPanel_List_Entry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_TasksPanel_List_Entry.wid_TasksPanel_List_Entry_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_TasksPanel_List_Entry_C::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_TasksPanel_List_Entry_C", "Update");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_TasksPanel_List_Entry.wid_TasksPanel_List_Entry_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_TasksPanel_List_Entry_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_TasksPanel_List_Entry_C", "Tick");

	Params::UWid_TasksPanel_List_Entry_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_TasksPanel_List_Entry.wid_TasksPanel_List_Entry_C.ExecuteUbergraph_wid_TasksPanel_List_Entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCompanionByActiveEvent_Valid                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCompanionByActiveEvent_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// struct FQuestType                  CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// TArray<class AEventSystemBackend*> CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class AEventSystemBackend*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// float                              CallFunc_CalculateEffectiveness_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQuestInfoInput             CallFunc_GetQuestInfoBP_ReturnValue                              (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_TasksPanel_List_Entry_C::ExecuteUbergraph_wid_TasksPanel_List_Entry(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool Temp_bool_Variable, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, bool K2Node_Event_IsDesignTime, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_GetCompanionByActiveEvent_Valid, class FName CallFunc_GetCompanionByActiveEvent_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FQuestType& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, TArray<class AEventSystemBackend*>& CallFunc_GetAllActorsOfClass_OutActors, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class AEventSystemBackend* CallFunc_Array_Get_Item, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue, const class FString& K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, float CallFunc_CalculateEffectiveness_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_GetText_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, class FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FQuestInfoInput& CallFunc_GetQuestInfoBP_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_TasksPanel_List_Entry_C", "ExecuteUbergraph_wid_TasksPanel_List_Entry");

	Params::UWid_TasksPanel_List_Entry_C_ExecuteUbergraph_wid_TasksPanel_List_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_1 = CallFunc_SlotAsCanvasSlot_ReturnValue_1;
	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_GetDesiredSize_ReturnValue_1 = CallFunc_GetDesiredSize_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCompanionByActiveEvent_Valid = CallFunc_GetCompanionByActiveEvent_Valid;
	Parms.CallFunc_GetCompanionByActiveEvent_ReturnValue = CallFunc_GetCompanionByActiveEvent_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_CalculateEffectiveness_ReturnValue = CallFunc_CalculateEffectiveness_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetQuestInfoBP_ReturnValue = CallFunc_GetQuestInfoBP_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


