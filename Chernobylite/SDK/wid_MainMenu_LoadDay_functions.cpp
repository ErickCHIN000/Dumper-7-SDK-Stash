#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_MainMenu_LoadDay.wid_MainMenu_LoadDay_C
// (None)

class UClass* UWid_MainMenu_LoadDay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_MainMenu_LoadDay_C");

	return Clss;
}


// wid_MainMenu_LoadDay_C wid_MainMenu_LoadDay.Default__wid_MainMenu_LoadDay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_MainMenu_LoadDay_C* UWid_MainMenu_LoadDay_C::GetDefaultObj()
{
	static class UWid_MainMenu_LoadDay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_MainMenu_LoadDay_C*>(UWid_MainMenu_LoadDay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_MainMenu_LoadDay.wid_MainMenu_LoadDay_C.AddCustomGameModeName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        DisplayText                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FCustomSaveGameMetadataInfo MetaData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        NewText                                                          (Parm, OutParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWid_MainMenu_LoadDay_C::AddCustomGameModeName(class FText DisplayText, struct FCustomSaveGameMetadataInfo& MetaData, class FText* NewText, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_LoadDay_C", "AddCustomGameModeName");

	Params::UWid_MainMenu_LoadDay_C_AddCustomGameModeName_Params Parms{};

	Parms.DisplayText = DisplayText;
	Parms.MetaData = MetaData;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewText != nullptr)
		*NewText = Parms.NewText;

}


// Function wid_MainMenu_LoadDay.wid_MainMenu_LoadDay_C.UpdateBackgroundVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_LoadDay_C::UpdateBackgroundVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_LoadDay_C", "UpdateBackgroundVisibility");

	Params::UWid_MainMenu_LoadDay_C_UpdateBackgroundVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_LoadDay.wid_MainMenu_LoadDay_C.SaveNameToSlotType
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      SaveName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FCustomSaveInfo             SaveInfo                                                         (Parm, OutParm)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCustomSaveInfo>     CallFunc_Map_Values_Values                                       (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomSaveInfo             CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StartsWith_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_LoadDay_C::SaveNameToSlotType(const class FString& SaveName, struct FCustomSaveInfo* SaveInfo, bool* Result, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<struct FCustomSaveInfo>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue, const struct FCustomSaveInfo& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_StartsWith_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_LoadDay_C", "SaveNameToSlotType");

	Params::UWid_MainMenu_LoadDay_C_SaveNameToSlotType_Params Parms{};

	Parms.SaveName = SaveName;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_StartsWith_ReturnValue = CallFunc_StartsWith_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SaveInfo != nullptr)
		*SaveInfo = std::move(Parms.SaveInfo);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function wid_MainMenu_LoadDay.wid_MainMenu_LoadDay_C.CreateCustomSaveEntry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SaveName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FCustomSaveGameMetadataInfo MetaData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               IsFirst                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsNoneDummy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_LoadDay_List_Entry_C*   Entry                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomSaveInfo             SaveInfo                                                         (Edit, BlueprintVisible)
// enum class ECustomSaveType         SaveType                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomSaveInfo             CallFunc_SaveNameToSlotType_SaveInfo                             (None)
// bool                               CallFunc_SaveNameToSlotType_Result                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_LeftS                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class UWid_LoadDay_List_Entry_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UVerticalBoxSlot*            K2Node_DynamicCast_AsVertical_Box_Slot                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_AddCustomGameModeName_NewText                           (None)

void UWid_MainMenu_LoadDay_C::CreateCustomSaveEntry(const class FString& SaveName, struct FCustomSaveGameMetadataInfo& MetaData, bool IsFirst, bool IsNoneDummy, class UWid_LoadDay_List_Entry_C** Entry, const struct FCustomSaveInfo& SaveInfo, enum class ECustomSaveType SaveType, const struct FCustomSaveInfo& CallFunc_SaveNameToSlotType_SaveInfo, bool CallFunc_SaveNameToSlotType_Result, class FText CallFunc_MakeLiteralText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Replace_ReturnValue, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UWid_LoadDay_List_Entry_C* CallFunc_Create_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_SelectString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_AddCustomGameModeName_NewText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_LoadDay_C", "CreateCustomSaveEntry");

	Params::UWid_MainMenu_LoadDay_C_CreateCustomSaveEntry_Params Parms{};

	Parms.SaveName = SaveName;
	Parms.MetaData = MetaData;
	Parms.IsFirst = IsFirst;
	Parms.IsNoneDummy = IsNoneDummy;
	Parms.SaveInfo = SaveInfo;
	Parms.SaveType = SaveType;
	Parms.CallFunc_SaveNameToSlotType_SaveInfo = CallFunc_SaveNameToSlotType_SaveInfo;
	Parms.CallFunc_SaveNameToSlotType_Result = CallFunc_SaveNameToSlotType_Result;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_DynamicCast_AsVertical_Box_Slot = K2Node_DynamicCast_AsVertical_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AddCustomGameModeName_NewText = CallFunc_AddCustomGameModeName_NewText;

	UObject::ProcessEvent(Func, &Parms);

	if (Entry != nullptr)
		*Entry = Parms.Entry;

}


// Function wid_MainMenu_LoadDay.wid_MainMenu_LoadDay_C.CreateSaveMap
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FString, struct FCustomSaveGameMetadataInfo>SortedSaves                                                      (Parm, OutParm)
// TArray<class FString>              LocalSaveNames                                                   (Edit, BlueprintVisible)
// TMap<class FString, struct FCustomSaveGameMetadataInfo>EntriesMap                                                       (Edit, BlueprintVisible)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, struct FCustomSaveGameMetadataInfo>CallFunc_SortSaves_ReturnValue                                   (None)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetCustomSaves_ReturnValue                              (ReferenceParm)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// struct FCustomSaveGameMetadataInfo CallFunc_GetSaveMetadata_Metadata                                (None)
// struct FCustomSaveGameMetadataInfo CallFunc_GetSaveMetadata_Metadata_1                              (None)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomSaveGameMetadataInfo CallFunc_GetSaveMetadata_Metadata_2                              (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCustomSaveInfo>     CallFunc_Map_Values_Values                                       (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomSaveInfo             CallFunc_Array_Get_Item_3                                        (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              CallFunc_GetCustomSaveNames_ReturnValue                          (ReferenceParm)

void UWid_MainMenu_LoadDay_C::CreateSaveMap(TMap<class FString, struct FCustomSaveGameMetadataInfo>* SortedSaves, const TArray<class FString>& LocalSaveNames, TMap<class FString, struct FCustomSaveGameMetadataInfo> EntriesMap, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_2, TMap<class FString, struct FCustomSaveGameMetadataInfo> CallFunc_SortSaves_ReturnValue, int32 Temp_int_Array_Index_Variable_3, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<class FName>& K2Node_MakeArray_Array, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, class FName CallFunc_Array_Get_Item, TArray<class FString>& CallFunc_GetCustomSaves_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, const struct FCustomSaveGameMetadataInfo& CallFunc_GetSaveMetadata_Metadata, const struct FCustomSaveGameMetadataInfo& CallFunc_GetSaveMetadata_Metadata_1, bool CallFunc_DoesSaveGameExist_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const class FString& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, const struct FCustomSaveGameMetadataInfo& CallFunc_GetSaveMetadata_Metadata_2, bool CallFunc_Less_IntInt_ReturnValue_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_3, TArray<struct FCustomSaveInfo>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue_3, const struct FCustomSaveInfo& CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_3, TArray<class FString>& CallFunc_GetCustomSaveNames_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_LoadDay_C", "CreateSaveMap");

	Params::UWid_MainMenu_LoadDay_C_CreateSaveMap_Params Parms{};

	Parms.LocalSaveNames = LocalSaveNames;
	Parms.EntriesMap = EntriesMap;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_SortSaves_ReturnValue = CallFunc_SortSaves_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetCustomSaves_ReturnValue = CallFunc_GetCustomSaves_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetSaveMetadata_Metadata = CallFunc_GetSaveMetadata_Metadata;
	Parms.CallFunc_GetSaveMetadata_Metadata_1 = CallFunc_GetSaveMetadata_Metadata_1;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_GetSaveMetadata_Metadata_2 = CallFunc_GetSaveMetadata_Metadata_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_2 = CallFunc_GetCGGameInstance_AsCGGame_Instance_2;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_3 = CallFunc_GetCGGameInstance_AsCGGame_Instance_3;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_GetCustomSaveNames_ReturnValue = CallFunc_GetCustomSaveNames_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SortedSaves != nullptr)
		*SortedSaves = Parms.SortedSaves;

}


// Function wid_MainMenu_LoadDay.wid_MainMenu_LoadDay_C.GetQuestName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        Quest                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Map                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        QuestName                                                        (Parm, OutParm)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventMap               CallFunc_GetMapEnumByName_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestInfoInput             CallFunc_GetQuestInfoBP_ReturnValue                              (None)
// struct FDescriptionInfo            CallFunc_GetQuestDescription_ReturnValue                         (None)

void UWid_MainMenu_LoadDay_C::GetQuestName(class FName Quest, class FName Map, class FText* QuestName, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, enum class EEventMap CallFunc_GetMapEnumByName_ReturnValue, const struct FQuestInfoInput& CallFunc_GetQuestInfoBP_ReturnValue, const struct FDescriptionInfo& CallFunc_GetQuestDescription_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_LoadDay_C", "GetQuestName");

	Params::UWid_MainMenu_LoadDay_C_GetQuestName_Params Parms{};

	Parms.Quest = Quest;
	Parms.Map = Map;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_2 = CallFunc_GetCGGameInstance_AsCGGame_Instance_2;
	Parms.CallFunc_GetMapEnumByName_ReturnValue = CallFunc_GetMapEnumByName_ReturnValue;
	Parms.CallFunc_GetQuestInfoBP_ReturnValue = CallFunc_GetQuestInfoBP_ReturnValue;
	Parms.CallFunc_GetQuestDescription_ReturnValue = CallFunc_GetQuestDescription_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (QuestName != nullptr)
		*QuestName = Parms.QuestName;

}


// Function wid_MainMenu_LoadDay.wid_MainMenu_LoadDay_C.GetMapName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        MapName                                                          (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<enum class EEventMap, struct FStruct_MapInformation>Temp_byte_Variable                                               (None)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventMap               CallFunc_GetMapEnumByName_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// struct FStruct_MapInformation      CallFunc_Map_Find_Value_1                                        (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_1                                          (None)

void UWid_MainMenu_LoadDay_C::GetMapName(class FName ID, class FText* MapName, bool Temp_bool_Variable, bool Temp_bool_Variable_1, TMap<enum class EEventMap, struct FStruct_MapInformation> Temp_byte_Variable, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, enum class EEventMap CallFunc_GetMapEnumByName_ReturnValue, class FText K2Node_Select_Default, const struct FStruct_MapInformation& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class FText K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_LoadDay_C", "GetMapName");

	Params::UWid_MainMenu_LoadDay_C_GetMapName_Params Parms{};

	Parms.ID = ID;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetMapEnumByName_ReturnValue = CallFunc_GetMapEnumByName_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	if (MapName != nullptr)
		*MapName = Parms.MapName;

}


// Function wid_MainMenu_LoadDay.wid_MainMenu_LoadDay_C.OnEntryHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWid_LoadDay_List_Entry_C*   Entry                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_LoadDay_C::OnEntryHovered(class UWid_LoadDay_List_Entry_C* Entry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_LoadDay_C", "OnEntryHovered");

	Params::UWid_MainMenu_LoadDay_C_OnEntryHovered_Params Parms{};

	Parms.Entry = Entry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_LoadDay.wid_MainMenu_LoadDay_C.ToUpperString
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Input                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                      Output                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_ToUpper_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)

void UWid_MainMenu_LoadDay_C::ToUpperString(class FText Input, class FString* Output, class FText CallFunc_TextToUpper_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_ToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_LoadDay_C", "ToUpperString");

	Params::UWid_MainMenu_LoadDay_C_ToUpperString_Params Parms{};

	Parms.Input = Input;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_ToUpper_ReturnValue = CallFunc_ToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

}


// Function wid_MainMenu_LoadDay.wid_MainMenu_LoadDay_C.GetPlaytimeString
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Playtime                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue_1                                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue_2                                   (ZeroConstructor, HasGetValueTypeHash)

void UWid_MainMenu_LoadDay_C::GetPlaytimeString(int32 Time, class FString* Playtime, int32 CallFunc_Percent_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Replace_ReturnValue, const class FString& CallFunc_Replace_ReturnValue_1, const class FString& CallFunc_Replace_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_LoadDay_C", "GetPlaytimeString");

	Params::UWid_MainMenu_LoadDay_C_GetPlaytimeString_Params Parms{};

	Parms.Time = Time;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue_1 = CallFunc_Divide_IntInt_ReturnValue_1;
	Parms.CallFunc_Percent_IntInt_ReturnValue_1 = CallFunc_Percent_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue_2 = CallFunc_Conv_IntToString_ReturnValue_2;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_Replace_ReturnValue_1 = CallFunc_Replace_ReturnValue_1;
	Parms.CallFunc_Replace_ReturnValue_2 = CallFunc_Replace_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Playtime != nullptr)
		*Playtime = std::move(Parms.Playtime);

}


// Function wid_MainMenu_LoadDay.wid_MainMenu_LoadDay_C.Update Metadata Box
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCustomSaveGameMetadataInfo MetaData                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                      SaveName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_ScreenshotDataToTexture_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetPlaytimeString_Playtime                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetQuestName_QuestName                                  (None)
// class FText                        CallFunc_GetMapName_MapName                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_ToUpperString_Output                                    (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_ToUpperString_Output_1                                  (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FString                      CallFunc_ToUpperString_Output_2                                  (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)

void UWid_MainMenu_LoadDay_C::Update_Metadata_Box(const struct FCustomSaveGameMetadataInfo& MetaData, const class FString& SaveName, class UTexture2D* CallFunc_ScreenshotDataToTexture_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetPlaytimeString_Playtime, class FText CallFunc_GetQuestName_QuestName, class FText CallFunc_GetMapName_MapName, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_ToUpperString_Output, const class FString& CallFunc_ToUpperString_Output_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_ToUpperString_Output_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, class FText CallFunc_Conv_StringToText_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_LoadDay_C", "Update Metadata Box");

	Params::UWid_MainMenu_LoadDay_C_Update_Metadata_Box_Params Parms{};

	Parms.MetaData = MetaData;
	Parms.SaveName = SaveName;
	Parms.CallFunc_ScreenshotDataToTexture_ReturnValue = CallFunc_ScreenshotDataToTexture_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlaytimeString_Playtime = CallFunc_GetPlaytimeString_Playtime;
	Parms.CallFunc_GetQuestName_QuestName = CallFunc_GetQuestName_QuestName;
	Parms.CallFunc_GetMapName_MapName = CallFunc_GetMapName_MapName;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_ToUpperString_Output = CallFunc_ToUpperString_Output;
	Parms.CallFunc_ToUpperString_Output_1 = CallFunc_ToUpperString_Output_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_ToUpperString_Output_2 = CallFunc_ToUpperString_Output_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_LoadDay.wid_MainMenu_LoadDay_C.GetSaveMetadata
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      SaveFileName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FCustomSaveGameMetadataInfo MetaData                                                         (Parm, OutParm)
// struct FCustomSaveGameMetadataInfo LocalMetadata                                                    (Edit, BlueprintVisible)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_MakeDateTime_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DateTimeDateTime_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_FormatDateTime_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// struct FCustomSaveGameMetadataInfo CallFunc_GetSaveGameMetadata_ReturnValue                         (None)
// struct FCustomSaveGameMetadataInfo K2Node_MakeStruct_CustomSaveGameMetadataInfo                     (UObjectWrapper)

void UWid_MainMenu_LoadDay_C::GetSaveMetadata(const class FString& SaveFileName, struct FCustomSaveGameMetadataInfo* MetaData, const struct FCustomSaveGameMetadataInfo& LocalMetadata, bool Temp_bool_Variable, const class FString& Temp_string_Variable, const struct FDateTime& CallFunc_MakeDateTime_ReturnValue, bool CallFunc_EqualEqual_DateTimeDateTime_ReturnValue, const class FString& CallFunc_FormatDateTime_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const class FString& K2Node_Select_Default, const struct FCustomSaveGameMetadataInfo& CallFunc_GetSaveGameMetadata_ReturnValue, const struct FCustomSaveGameMetadataInfo& K2Node_MakeStruct_CustomSaveGameMetadataInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_LoadDay_C", "GetSaveMetadata");

	Params::UWid_MainMenu_LoadDay_C_GetSaveMetadata_Params Parms{};

	Parms.SaveFileName = SaveFileName;
	Parms.LocalMetadata = LocalMetadata;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_MakeDateTime_ReturnValue = CallFunc_MakeDateTime_ReturnValue;
	Parms.CallFunc_EqualEqual_DateTimeDateTime_ReturnValue = CallFunc_EqualEqual_DateTimeDateTime_ReturnValue;
	Parms.CallFunc_FormatDateTime_ReturnValue = CallFunc_FormatDateTime_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetSaveGameMetadata_ReturnValue = CallFunc_GetSaveGameMetadata_ReturnValue;
	Parms.K2Node_MakeStruct_CustomSaveGameMetadataInfo = K2Node_MakeStruct_CustomSaveGameMetadataInfo;

	UObject::ProcessEvent(Func, &Parms);

	if (MetaData != nullptr)
		*MetaData = std::move(Parms.MetaData);

}


// Function wid_MainMenu_LoadDay.wid_MainMenu_LoadDay_C.LoadGameFromCurrentCheckpoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      DummySaveName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UseCustomSaves_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_LoadDay_C::LoadGameFromCurrentCheckpoint(const class FString& DummySaveName, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_UseCustomSaves_ReturnValue, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_LoadDay_C", "LoadGameFromCurrentCheckpoint");

	Params::UWid_MainMenu_LoadDay_C_LoadGameFromCurrentCheckpoint_Params Parms{};

	Parms.DummySaveName = DummySaveName;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_UseCustomSaves_ReturnValue = CallFunc_UseCustomSaves_ReturnValue;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_LoadDay.wid_MainMenu_LoadDay_C.GetSaveTimestamp
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      SaveFileName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// struct FDateTime                   CallFunc_MakeDateTime_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_GetSaveTimestamp_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DateTimeDateTime_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_FormatDateTime_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        K2Node_Select_Default                                            (None)

class FText UWid_MainMenu_LoadDay_C::GetSaveTimestamp(const class FString& SaveFileName, bool Temp_bool_Variable, class FText Temp_text_Variable, const struct FDateTime& CallFunc_MakeDateTime_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const struct FDateTime& CallFunc_GetSaveTimestamp_ReturnValue, bool CallFunc_EqualEqual_DateTimeDateTime_ReturnValue, const class FString& CallFunc_FormatDateTime_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_LoadDay_C", "GetSaveTimestamp");

	Params::UWid_MainMenu_LoadDay_C_GetSaveTimestamp_Params Parms{};

	Parms.SaveFileName = SaveFileName;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_MakeDateTime_ReturnValue = CallFunc_MakeDateTime_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetSaveTimestamp_ReturnValue = CallFunc_GetSaveTimestamp_ReturnValue;
	Parms.CallFunc_EqualEqual_DateTimeDateTime_ReturnValue = CallFunc_EqualEqual_DateTimeDateTime_ReturnValue;
	Parms.CallFunc_FormatDateTime_ReturnValue = CallFunc_FormatDateTime_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_MainMenu_LoadDay.wid_MainMenu_LoadDay_C.CreateCurrentCheckpoint
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCustomSaveGameMetadataInfo MetaData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        SaveName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_LoadDay_List_Entry_C*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_LoadDay_List_Entry_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_AddCustomGameModeName_NewText                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)

class UWid_LoadDay_List_Entry_C* UWid_MainMenu_LoadDay_C::CreateCurrentCheckpoint(struct FCustomSaveGameMetadataInfo& MetaData, class FName SaveName, class UWid_LoadDay_List_Entry_C* CallFunc_Create_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, class FText CallFunc_AddCustomGameModeName_NewText, class FText CallFunc_MakeLiteralText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class UPanelSlot* CallFunc_AddChild_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_LoadDay_C", "CreateCurrentCheckpoint");

	Params::UWid_MainMenu_LoadDay_C_CreateCurrentCheckpoint_Params Parms{};

	Parms.MetaData = MetaData;
	Parms.SaveName = SaveName;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_AddCustomGameModeName_NewText = CallFunc_AddCustomGameModeName_NewText;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_MainMenu_LoadDay.wid_MainMenu_LoadDay_C.CreateCheckpointEntry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CheckpointSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               IsFirst                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsNoneDummy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCustomSaveGameMetadataInfo Meta                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UWid_LoadDay_List_Entry_C*   Entry                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_LoadDay_List_Entry_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            K2Node_DynamicCast_AsVertical_Box_Slot                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_LeftS                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWid_MainMenu_LoadDay_C::CreateCheckpointEntry(const class FString& CheckpointSlot, bool IsFirst, bool IsNoneDummy, struct FCustomSaveGameMetadataInfo& Meta, class UWid_LoadDay_List_Entry_C** Entry, class UWid_LoadDay_List_Entry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FText Temp_text_Variable, class FText CallFunc_MakeLiteralText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Replace_ReturnValue, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_SelectString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_LoadDay_C", "CreateCheckpointEntry");

	Params::UWid_MainMenu_LoadDay_C_CreateCheckpointEntry_Params Parms{};

	Parms.CheckpointSlot = CheckpointSlot;
	Parms.IsFirst = IsFirst;
	Parms.IsNoneDummy = IsNoneDummy;
	Parms.Meta = Meta;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_DynamicCast_AsVertical_Box_Slot = K2Node_DynamicCast_AsVertical_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Entry != nullptr)
		*Entry = Parms.Entry;

}


// Function wid_MainMenu_LoadDay.wid_MainMenu_LoadDay_C.CreateDayEntry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Day                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               IsFirst                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsNoneDummy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCustomSaveGameMetadataInfo Meta                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UWid_LoadDay_List_Entry_C*   Entry                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UWid_LoadDay_List_Entry_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            K2Node_DynamicCast_AsVertical_Box_Slot                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_AddCustomGameModeName_NewText                           (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue_1                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWid_MainMenu_LoadDay_C::CreateDayEntry(const class FString& Day, bool IsFirst, bool IsNoneDummy, struct FCustomSaveGameMetadataInfo& Meta, class UWid_LoadDay_List_Entry_C** Entry, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWid_LoadDay_List_Entry_C* CallFunc_Create_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Replace_ReturnValue, class FText CallFunc_AddCustomGameModeName_NewText, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_SelectString_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_LoadDay_C", "CreateDayEntry");

	Params::UWid_MainMenu_LoadDay_C_CreateDayEntry_Params Parms{};

	Parms.Day = Day;
	Parms.IsFirst = IsFirst;
	Parms.IsNoneDummy = IsNoneDummy;
	Parms.Meta = Meta;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_DynamicCast_AsVertical_Box_Slot = K2Node_DynamicCast_AsVertical_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_AddCustomGameModeName_NewText = CallFunc_AddCustomGameModeName_NewText;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_SelectString_ReturnValue_1 = CallFunc_SelectString_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Entry != nullptr)
		*Entry = Parms.Entry;

}


// Function wid_MainMenu_LoadDay.wid_MainMenu_LoadDay_C.OnLoadDayAnimationFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SaveName                                                         (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSelectedSaveName_SaveName                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSelectedSaveName_IsValid                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_LoadDay_C::OnLoadDayAnimationFinished(const class FString& SaveName, const class FString& CallFunc_GetSelectedSaveName_SaveName, bool CallFunc_GetSelectedSaveName_IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_LoadDay_C", "OnLoadDayAnimationFinished");

	Params::UWid_MainMenu_LoadDay_C_OnLoadDayAnimationFinished_Params Parms{};

	Parms.SaveName = SaveName;
	Parms.CallFunc_GetSelectedSaveName_SaveName = CallFunc_GetSelectedSaveName_SaveName;
	Parms.CallFunc_GetSelectedSaveName_IsValid = CallFunc_GetSelectedSaveName_IsValid;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_LoadDay.wid_MainMenu_LoadDay_C.GetSelectedSaveName
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      SaveName                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetSelectedEntry_Entry                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_LoadDay_List_Entry_C*   K2Node_DynamicCast_AsWid_Load_Day_List_Entry                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_LoadDay_C::GetSelectedSaveName(class FString* SaveName, bool* IsValid, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetSelectedEntry_Entry, class UWid_LoadDay_List_Entry_C* K2Node_DynamicCast_AsWid_Load_Day_List_Entry, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_LoadDay_C", "GetSelectedSaveName");

	Params::UWid_MainMenu_LoadDay_C_GetSelectedSaveName_Params Parms{};

	Parms.CallFunc_GetSelectedEntry_Entry = CallFunc_GetSelectedEntry_Entry;
	Parms.K2Node_DynamicCast_AsWid_Load_Day_List_Entry = K2Node_DynamicCast_AsWid_Load_Day_List_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (SaveName != nullptr)
		*SaveName = std::move(Parms.SaveName);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

}


// Function wid_MainMenu_LoadDay.wid_MainMenu_LoadDay_C.BackPressed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_LoadDay_C::BackPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_LoadDay_C", "BackPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_LoadDay.wid_MainMenu_LoadDay_C.StartGamePressed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SaveName                                                         (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSelectedSaveName_SaveName                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSelectedSaveName_IsValid                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_LoadDay_C::StartGamePressed(const class FString& SaveName, const class FString& CallFunc_GetSelectedSaveName_SaveName, bool CallFunc_GetSelectedSaveName_IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_LoadDay_C", "StartGamePressed");

	Params::UWid_MainMenu_LoadDay_C_StartGamePressed_Params Parms{};

	Parms.SaveName = SaveName;
	Parms.CallFunc_GetSelectedSaveName_SaveName = CallFunc_GetSelectedSaveName_SaveName;
	Parms.CallFunc_GetSelectedSaveName_IsValid = CallFunc_GetSelectedSaveName_IsValid;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_LoadDay.wid_MainMenu_LoadDay_C.SetupEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)

void UWid_MainMenu_LoadDay_C::SetupEvents(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_LoadDay_C", "SetupEvents");

	Params::UWid_MainMenu_LoadDay_C_SetupEvents_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_LoadDay.wid_MainMenu_LoadDay_C.OnPopupConfirmed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SaveName                                                         (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetSelectedSaveName_SaveName                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSelectedSaveName_IsValid                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSaveVersion_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_LoadDay_C::OnPopupConfirmed(const class FString& SaveName, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_GetSelectedSaveName_SaveName, bool CallFunc_GetSelectedSaveName_IsValid, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, int32 CallFunc_GetSaveVersion_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_LoadDay_C", "OnPopupConfirmed");

	Params::UWid_MainMenu_LoadDay_C_OnPopupConfirmed_Params Parms{};

	Parms.SaveName = SaveName;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetSelectedSaveName_SaveName = CallFunc_GetSelectedSaveName_SaveName;
	Parms.CallFunc_GetSelectedSaveName_IsValid = CallFunc_GetSelectedSaveName_IsValid;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetSaveVersion_ReturnValue = CallFunc_GetSaveVersion_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_LoadDay.wid_MainMenu_LoadDay_C.HidePopup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_LoadDay_C::HidePopup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_LoadDay_C", "HidePopup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_LoadDay.wid_MainMenu_LoadDay_C.LoadDay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SaveName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UseCustomSaves_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_LoadDay_C::LoadDay(const class FString& SaveName, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class FName CallFunc_Conv_StringToName_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 CallFunc_PostEvent_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, bool CallFunc_UseCustomSaves_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_LoadDay_C", "LoadDay");

	Params::UWid_MainMenu_LoadDay_C_LoadDay_Params Parms{};

	Parms.SaveName = SaveName;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_2 = CallFunc_GetCGGameInstance_AsCGGame_Instance_2;
	Parms.CallFunc_UseCustomSaves_ReturnValue = CallFunc_UseCustomSaves_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_LoadDay.wid_MainMenu_LoadDay_C.OnDaySelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SaveName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_LoadDay_C::OnDaySelected(const class FString& SaveName, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_LoadDay_C", "OnDaySelected");

	Params::UWid_MainMenu_LoadDay_C_OnDaySelected_Params Parms{};

	Parms.SaveName = SaveName;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_LoadDay.wid_MainMenu_LoadDay_C.InitEntries
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CurrentSaveName                                                  (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// TMap<class FString, struct FCustomSaveGameMetadataInfo>SortedSaves                                                      (Edit, BlueprintVisible)
// TMap<class FString, struct FCustomSaveGameMetadataInfo>EntriesMap                                                       (Edit, BlueprintVisible)
// int32                              MinManualEntries                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MinDayEntries                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TScriptInterface<class ISelectableEntryInterace_C>>EntriesToDisable                                                 (Edit, BlueprintVisible)
// TArray<class FString>              Checkpoints                                                      (Edit, BlueprintVisible)
// TArray<TScriptInterface<class ISelectableEntryInterace_C>>Entries                                                          (Edit, BlueprintVisible)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomSaveGameMetadataInfo CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_LoadDay_List_Entry_C*   CallFunc_CreateCurrentCheckpoint_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_Array_Add_NewItem_CastInput                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomSaveGameMetadataInfo CallFunc_Map_Find_Value_1                                        (None)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UWid_LoadDay_List_Entry_C*   CallFunc_CreateDayEntry_Entry                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_Array_Add_NewItem_CastInput_1                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, struct FCustomSaveGameMetadataInfo>CallFunc_CreateSaveMap_SortedSaves                               (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCustomSaveGameMetadataInfo CallFunc_Map_Find_Value_2                                        (None)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_LoadDay_List_Entry_C*   K2Node_DynamicCast_AsWid_Load_Day_List_Entry                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEntryIndex_EntryIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISelectableEntryOwnerInterface_C>CallFunc_SelectNewEntry_self_CastInput                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class FString                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_LoadDay_List_Entry_C*   CallFunc_CreateCustomSaveEntry_Entry                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_Array_Add_NewItem_CastInput_2                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_LoadDay_C::InitEntries(const class FString& CurrentSaveName, TMap<class FString, struct FCustomSaveGameMetadataInfo> SortedSaves, TMap<class FString, struct FCustomSaveGameMetadataInfo> EntriesMap, int32 MinManualEntries, int32 MinDayEntries, const TArray<TScriptInterface<class ISelectableEntryInterace_C>>& EntriesToDisable, const TArray<class FString>& Checkpoints, const TArray<TScriptInterface<class ISelectableEntryInterace_C>>& Entries, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FCustomSaveGameMetadataInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UWid_LoadDay_List_Entry_C* CallFunc_CreateCurrentCheckpoint_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_Array_Add_NewItem_CastInput, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Contains_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const struct FCustomSaveGameMetadataInfo& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, class UWid_LoadDay_List_Entry_C* CallFunc_CreateDayEntry_Entry, bool CallFunc_EqualEqual_StrStr_ReturnValue, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_Array_Add_NewItem_CastInput_1, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, TMap<class FString, struct FCustomSaveGameMetadataInfo> CallFunc_CreateSaveMap_SortedSaves, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, const struct FCustomSaveGameMetadataInfo& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, int32 CallFunc_Array_Length_ReturnValue_3, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_Array_Get_Item, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_Array_Get_Item_1, class UWid_LoadDay_List_Entry_C* K2Node_DynamicCast_AsWid_Load_Day_List_Entry, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetEntryIndex_EntryIndex, TScriptInterface<class ISelectableEntryOwnerInterface_C> CallFunc_SelectNewEntry_self_CastInput, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, TArray<class FString>& CallFunc_Map_Keys_Keys, const class FString& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_2, class UWid_LoadDay_List_Entry_C* CallFunc_CreateCustomSaveEntry_Entry, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_Array_Add_NewItem_CastInput_2, int32 CallFunc_Array_Add_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_LoadDay_C", "InitEntries");

	Params::UWid_MainMenu_LoadDay_C_InitEntries_Params Parms{};

	Parms.CurrentSaveName = CurrentSaveName;
	Parms.SortedSaves = SortedSaves;
	Parms.EntriesMap = EntriesMap;
	Parms.MinManualEntries = MinManualEntries;
	Parms.MinDayEntries = MinDayEntries;
	Parms.EntriesToDisable = EntriesToDisable;
	Parms.Checkpoints = Checkpoints;
	Parms.Entries = Entries;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_CreateCurrentCheckpoint_ReturnValue = CallFunc_CreateCurrentCheckpoint_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Add_NewItem_CastInput = CallFunc_Array_Add_NewItem_CastInput;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_CreateDayEntry_Entry = CallFunc_CreateDayEntry_Entry;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Array_Add_NewItem_CastInput_1 = CallFunc_Array_Add_NewItem_CastInput_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_CreateSaveMap_SortedSaves = CallFunc_CreateSaveMap_SortedSaves;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsWid_Load_Day_List_Entry = K2Node_DynamicCast_AsWid_Load_Day_List_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetEntryIndex_EntryIndex = CallFunc_GetEntryIndex_EntryIndex;
	Parms.CallFunc_SelectNewEntry_self_CastInput = CallFunc_SelectNewEntry_self_CastInput;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_CreateCustomSaveEntry_Entry = CallFunc_CreateCustomSaveEntry_Entry;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Add_NewItem_CastInput_2 = CallFunc_Array_Add_NewItem_CastInput_2;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_LoadDay.wid_MainMenu_LoadDay_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_LoadDay_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_LoadDay_C", "PreConstruct");

	Params::UWid_MainMenu_LoadDay_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_LoadDay.wid_MainMenu_LoadDay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_MainMenu_LoadDay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_LoadDay_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_LoadDay.wid_MainMenu_LoadDay_C.InputDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_LoadDay_C::InputDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_LoadDay_C", "InputDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_LoadDay.wid_MainMenu_LoadDay_C.InputUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_LoadDay_C::InputUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_LoadDay_C", "InputUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_LoadDay.wid_MainMenu_LoadDay_C.InputEnter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_LoadDay_C::InputEnter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_LoadDay_C", "InputEnter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_LoadDay.wid_MainMenu_LoadDay_C.InputBack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_LoadDay_C::InputBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_LoadDay_C", "InputBack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_LoadDay.wid_MainMenu_LoadDay_C.ExecuteUbergraph_wid_MainMenu_LoadDay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetSelectedEntry_Entry                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_DynamicCast_AsWidget                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScrollBox*                  K2Node_DynamicCast_AsScroll_Box                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomSaveGameMetadataInfo K2Node_MakeStruct_CustomSaveGameMetadataInfo                     (UObjectWrapper)
// class UWid_LoadDay_List_Entry_C*   CallFunc_CreateCheckpointEntry_Entry                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_LoadDay_List_Entry_C*   CallFunc_CreateDayEntry_Entry                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_LoadDay_C::ExecuteUbergraph_wid_MainMenu_LoadDay(int32 EntryPoint, bool K2Node_Event_IsDesignTime, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetSelectedEntry_Entry, class UWidget* K2Node_DynamicCast_AsWidget, bool K2Node_DynamicCast_bSuccess, class UPanelWidget* CallFunc_GetParent_ReturnValue, int32 Temp_int_Variable, class UScrollBox* K2Node_DynamicCast_AsScroll_Box, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue_2, int32 Temp_int_Variable_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FCustomSaveGameMetadataInfo& K2Node_MakeStruct_CustomSaveGameMetadataInfo, class UWid_LoadDay_List_Entry_C* CallFunc_CreateCheckpointEntry_Entry, class UWid_LoadDay_List_Entry_C* CallFunc_CreateDayEntry_Entry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_LoadDay_C", "ExecuteUbergraph_wid_MainMenu_LoadDay");

	Params::UWid_MainMenu_LoadDay_C_ExecuteUbergraph_wid_MainMenu_LoadDay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetSelectedEntry_Entry = CallFunc_GetSelectedEntry_Entry;
	Parms.K2Node_DynamicCast_AsWidget = K2Node_DynamicCast_AsWidget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetParent_ReturnValue = CallFunc_GetParent_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_DynamicCast_AsScroll_Box = K2Node_DynamicCast_AsScroll_Box;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue_1 = CallFunc_IsVisible_ReturnValue_1;
	Parms.CallFunc_IsVisible_ReturnValue_2 = CallFunc_IsVisible_ReturnValue_2;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_CustomSaveGameMetadataInfo = K2Node_MakeStruct_CustomSaveGameMetadataInfo;
	Parms.CallFunc_CreateCheckpointEntry_Entry = CallFunc_CreateCheckpointEntry_Entry;
	Parms.CallFunc_CreateDayEntry_Entry = CallFunc_CreateDayEntry_Entry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_LoadDay.wid_MainMenu_LoadDay_C.LoadDayDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_LoadDay_C::LoadDayDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_LoadDay_C", "LoadDayDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


