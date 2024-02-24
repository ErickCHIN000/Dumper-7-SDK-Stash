#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x47 (0x320 - 0x2D9)
// WidgetBlueprintGeneratedClass CF_DeveloperProspectLoad.CF_DeveloperProspectLoad_C
class UCF_DeveloperProspectLoad_C : public UCF_Base_C
{
public:
	uint8                                        Pad_1D4F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCustomComboBox*                       ComboBox;                                          // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            FilePath;                                          // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            LastSavedDate;                                     // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            MapName;                                           // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ProspectDTKey;                                     // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ProspectID;                                        // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_IconTextButton_C*                 UMG_IconTextButton_1;                              // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCF_DeveloperProspectLoad_C* GetDefaultObj();

	void CheckMapIsValid(const class FString& MapName, bool* IsMapValid, const TArray<class FString>& AllMaps, TArray<class FString>& CallFunc_GetAllMapNames_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, TArray<class FString>& CallFunc_GetAllMapNames_ReturnValue_1);
	void HandleArg(int32 Index, const class FString& Arg, bool K2Node_SwitchInteger_CmpSuccess);
	void OnHandleItemSet(class UDebugProspectRow_C* Row, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetDeveloperProspectFilePath_ReturnValue, bool Temp_bool_Variable_1, int32 CallFunc_FindSubstring_ReturnValue, const struct FProspectSaveStateHeader& CallFunc_LoadProspectSaveHeader_OutProspectSaveStateHeader, bool CallFunc_LoadProspectSaveHeader_ReturnValue, const class FString& CallFunc_RightChop_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText Temp_text_Variable, class FText CallFunc_AsTimeZoneDateTime_DateTime_ReturnValue, bool CallFunc_CheckMapIsValid_IsMapValid, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_Select_Default_1);
	void OnHandleExecute(class UDebugProspectRow_C* Row, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UIcarusGameInstance* K2Node_DynamicCast_AsIcarus_Game_Instance, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetDeveloperProspectFilePath_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const class FString& CallFunc_GetDeveloperProspectFilePath_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FProspectSaveStateHeader& CallFunc_LoadProspectSaveHeader_OutProspectSaveStateHeader, bool CallFunc_LoadProspectSaveHeader_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_Conv_StringToText_ReturnValue_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_4, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, class FText CallFunc_Conv_StringToText_ReturnValue_5, bool CallFunc_CheckMapIsValid_IsMapValid, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_6, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, class FText CallFunc_Conv_StringToText_ReturnValue_7, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_7, const struct FProspectListRowHandle& CallFunc_MakeProspectList_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, const struct FIcarusProspect& CallFunc_GetProspectListStruct_ProspectList, enum class EValid CallFunc_GetProspectListStruct_Paths, class FText CallFunc_Format_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_8, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_4, class FText CallFunc_Format_ReturnValue_4, const class FString& CallFunc_Conv_TextToString_ReturnValue_4);
	void Construct();
	void Execute();
	void BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
	void UpdatePreview(TArray<class FString>& Args);
	void BndEvt__CF_DeveloperProspectLoad_ComboBox_K2Node_ComponentBoundEvent_3_OnItemSet__DelegateSignature(const class FString& NameString, class UUserWidget* Widget);
	void ExecuteUbergraph_CF_DeveloperProspectLoad(int32 EntryPoint, const class FString& K2Node_ComponentBoundEvent_NameString, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UDebugProspectRow_C* CallFunc_Create_ReturnValue, class UDebugProspectRow_C* K2Node_DynamicCast_AsDebug_Prospect_Row, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, class UUserWidget* CallFunc_GetSelectedWidget_ReturnValue, class UDebugProspectRow_C* K2Node_DynamicCast_AsDebug_Prospect_Row_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class FString>& K2Node_Event_Args, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<class FString>& CallFunc_GetSavedDeveloperProspectFileNames_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2);
};

}


