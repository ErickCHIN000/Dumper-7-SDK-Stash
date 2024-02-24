#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_CompanionsPanel_Entry_Info.wid_CompanionsPanel_Entry_Info_C
// (None)

class UClass* UWid_CompanionsPanel_Entry_Info_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_CompanionsPanel_Entry_Info_C");

	return Clss;
}


// wid_CompanionsPanel_Entry_Info_C wid_CompanionsPanel_Entry_Info.Default__wid_CompanionsPanel_Entry_Info_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_CompanionsPanel_Entry_Info_C* UWid_CompanionsPanel_Entry_Info_C::GetDefaultObj()
{
	static class UWid_CompanionsPanel_Entry_Info_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_CompanionsPanel_Entry_Info_C*>(UWid_CompanionsPanel_Entry_Info_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_CompanionsPanel_Entry_Info.wid_CompanionsPanel_Entry_Info_C.SetCustomColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_MissionSelection_Avatar_TypeSelection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (UObjectWrapper)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (UObjectWrapper)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (UObjectWrapper)

void UWid_CompanionsPanel_Entry_Info_C::SetCustomColor(enum class Enum_MissionSelection_Avatar_Type Selection, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool K2Node_SwitchEnum_CmpSuccess, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionsPanel_Entry_Info_C", "SetCustomColor");

	Params::UWid_CompanionsPanel_Entry_Info_C_SetCustomColor_Params Parms{};

	Parms.Selection = Selection;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionsPanel_Entry_Info.wid_CompanionsPanel_Entry_Info_C.AddToContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      New                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWid_CompanionsPanel_Entry_Info_C::AddToContent(const class FString& New)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionsPanel_Entry_Info_C", "AddToContent");

	Params::UWid_CompanionsPanel_Entry_Info_C_AddToContent_Params Parms{};

	Parms.New = New;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionsPanel_Entry_Info.wid_CompanionsPanel_Entry_Info_C.ClearContentBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CompanionsPanel_Entry_Info_C::ClearContentBox()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionsPanel_Entry_Info_C", "ClearContentBox");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionsPanel_Entry_Info.wid_CompanionsPanel_Entry_Info_C.Set Custom Title
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ModFont                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActorInfo                  CallFunc_K2_GetActorInfo_Info                                    (None)
// bool                               CallFunc_K2_GetActorInfo_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (UObjectWrapper, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        CallFunc_FormatText_Output                                       (None)

void UWid_CompanionsPanel_Entry_Info_C::Set_Custom_Title(class FText Title, bool ModFont, bool Temp_bool_Variable, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FActorInfo& CallFunc_K2_GetActorInfo_Info, bool CallFunc_K2_GetActorInfo_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, class FText K2Node_Select_Default, class FText CallFunc_FormatText_Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionsPanel_Entry_Info_C", "Set Custom Title");

	Params::UWid_CompanionsPanel_Entry_Info_C_Set_Custom_Title_Params Parms{};

	Parms.Title = Title;
	Parms.ModFont = ModFont;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_K2_GetActorInfo_Info = CallFunc_K2_GetActorInfo_Info;
	Parms.CallFunc_K2_GetActorInfo_ReturnValue = CallFunc_K2_GetActorInfo_ReturnValue;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_FormatText_Output = CallFunc_FormatText_Output;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionsPanel_Entry_Info.wid_CompanionsPanel_Entry_Info_C.SetContent
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Content                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<enum class EBuffType>       ColorEnum                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Single                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      BuffIDs                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      NewLocalVar_1                                                    (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               ArrowBuffFound                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              PsycheOldID                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PsycheNewID                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              HealthOldID                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              HealthNewID                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_ParseIntoArray_ReturnValue                              (ReferenceParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              CallFunc_ParseIntoArray_ReturnValue_1                            (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_CompanionsPanel_Entry_element_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Trim_ReturnValue                                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FText                        CallFunc_FormatText_Output                                       (None)
// class FText                        CallFunc_FormatText_Output_1                                     (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_FormatText_Output_2                                     (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)
// class FText                        CallFunc_FormatText_Output_3                                     (None)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuffType               CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// TArray<class FName>                K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetBuffsToReportForCompanion_Output_new                 (ReferenceParm)
// TArray<class FName>                CallFunc_GetBuffsToReportForCompanion_Output_ex                  (ReferenceParm)
// TArray<class FName>                K2Node_MakeArray_Array_2                                         (ConstParm, ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array_3                                         (ConstParm, ReferenceParm)
// TArray<class FName>                CallFunc_GetBuffsToReportForCompanion_Output_new_1               (ReferenceParm)
// TArray<class FName>                CallFunc_GetBuffsToReportForCompanion_Output_ex_1                (ReferenceParm)
// int32                              CallFunc_Array_Find_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionsPanel_Entry_Info_C::SetContent(const class FString& Content, TArray<enum class EBuffType>& ColorEnum, bool Single, const class FString& BuffIDs, const class FString& NewLocalVar_1, const class FString& NewLocalVar_0, bool ArrowBuffFound, int32 PsycheOldID, int32 PsycheNewID, int32 HealthOldID, int32 HealthNewID, class UTexture2D* Temp_object_Variable, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, bool Temp_bool_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, class UWid_CompanionsPanel_Entry_element_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UTexture2D* Temp_object_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Variable, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_4, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Trim_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_FormatText_Output, class FText CallFunc_FormatText_Output_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, class FText CallFunc_Conv_StringToText_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, class FText CallFunc_FormatText_Output_2, class FText CallFunc_Conv_StringToText_ReturnValue_3, class FText CallFunc_FormatText_Output_3, bool CallFunc_EqualEqual_StriStri_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, class UTexture2D* K2Node_Select_Default_1, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, int32 Temp_int_Array_Index_Variable_3, enum class ESlateVisibility Temp_byte_Variable, int32 Temp_int_Array_Index_Variable_4, enum class ESlateVisibility Temp_byte_Variable_1, enum class EBuffType CallFunc_Array_Get_Item_2, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_NotEqual_NameName_ReturnValue, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default_2, TArray<class FName>& K2Node_MakeArray_Array, TArray<class FName>& K2Node_MakeArray_Array_1, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<class FName>& CallFunc_GetBuffsToReportForCompanion_Output_new, TArray<class FName>& CallFunc_GetBuffsToReportForCompanion_Output_ex, TArray<class FName>& K2Node_MakeArray_Array_2, class FName CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, class FName CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Find_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, TArray<class FName>& K2Node_MakeArray_Array_3, TArray<class FName>& CallFunc_GetBuffsToReportForCompanion_Output_new_1, TArray<class FName>& CallFunc_GetBuffsToReportForCompanion_Output_ex_1, int32 CallFunc_Array_Find_ReturnValue_3, class FName CallFunc_Array_Get_Item_5, bool CallFunc_GreaterEqual_IntInt_ReturnValue_3, int32 CallFunc_Array_Find_ReturnValue_4, bool CallFunc_GreaterEqual_IntInt_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_3, class FName CallFunc_Array_Get_Item_6, bool CallFunc_Less_IntInt_ReturnValue_5, int32 CallFunc_Array_Find_ReturnValue_5, bool CallFunc_GreaterEqual_IntInt_ReturnValue_5, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_6, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionsPanel_Entry_Info_C", "SetContent");

	Params::UWid_CompanionsPanel_Entry_Info_C_SetContent_Params Parms{};

	Parms.Content = Content;
	Parms.ColorEnum = ColorEnum;
	Parms.Single = Single;
	Parms.BuffIDs = BuffIDs;
	Parms.NewLocalVar_1 = NewLocalVar_1;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.ArrowBuffFound = ArrowBuffFound;
	Parms.PsycheOldID = PsycheOldID;
	Parms.PsycheNewID = PsycheNewID;
	Parms.HealthOldID = HealthOldID;
	Parms.HealthNewID = HealthNewID;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_ParseIntoArray_ReturnValue = CallFunc_ParseIntoArray_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_ParseIntoArray_ReturnValue_1 = CallFunc_ParseIntoArray_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Trim_ReturnValue = CallFunc_Trim_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_FormatText_Output = CallFunc_FormatText_Output;
	Parms.CallFunc_FormatText_Output_1 = CallFunc_FormatText_Output_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_FormatText_Output_2 = CallFunc_FormatText_Output_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.CallFunc_FormatText_Output_3 = CallFunc_FormatText_Output_3;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetBuffsToReportForCompanion_Output_new = CallFunc_GetBuffsToReportForCompanion_Output_new;
	Parms.CallFunc_GetBuffsToReportForCompanion_Output_ex = CallFunc_GetBuffsToReportForCompanion_Output_ex;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Find_ReturnValue_1 = CallFunc_Array_Find_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Find_ReturnValue_2 = CallFunc_Array_Find_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_2 = CallFunc_GreaterEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_GetBuffsToReportForCompanion_Output_new_1 = CallFunc_GetBuffsToReportForCompanion_Output_new_1;
	Parms.CallFunc_GetBuffsToReportForCompanion_Output_ex_1 = CallFunc_GetBuffsToReportForCompanion_Output_ex_1;
	Parms.CallFunc_Array_Find_ReturnValue_3 = CallFunc_Array_Find_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_3 = CallFunc_GreaterEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_Find_ReturnValue_4 = CallFunc_Array_Find_ReturnValue_4;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_4 = CallFunc_GreaterEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.CallFunc_Array_Find_ReturnValue_5 = CallFunc_Array_Find_ReturnValue_5;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_5 = CallFunc_GreaterEqual_IntInt_ReturnValue_5;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_6 = CallFunc_Less_IntInt_ReturnValue_6;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionsPanel_Entry_Info.wid_CompanionsPanel_Entry_Info_C.SetStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_CompanionPanel_EntryStatus                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionsPanel_Entry_Info_C::SetStatus(enum class Enum_CompanionPanel_Entry Status)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionsPanel_Entry_Info_C", "SetStatus");

	Params::UWid_CompanionsPanel_Entry_Info_C_SetStatus_Params Parms{};

	Parms.Status = Status;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionsPanel_Entry_Info.wid_CompanionsPanel_Entry_Info_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionsPanel_Entry_Info_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionsPanel_Entry_Info_C", "PreConstruct");

	Params::UWid_CompanionsPanel_Entry_Info_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionsPanel_Entry_Info.wid_CompanionsPanel_Entry_Info_C.ExecuteUbergraph_wid_CompanionsPanel_Entry_Info
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

void UWid_CompanionsPanel_Entry_Info_C::ExecuteUbergraph_wid_CompanionsPanel_Entry_Info(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionsPanel_Entry_Info_C", "ExecuteUbergraph_wid_CompanionsPanel_Entry_Info");

	Params::UWid_CompanionsPanel_Entry_Info_C_ExecuteUbergraph_wid_CompanionsPanel_Entry_Info_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


