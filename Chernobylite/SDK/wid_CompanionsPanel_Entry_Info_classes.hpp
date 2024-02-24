#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x53 (0x2B3 - 0x260)
// WidgetBlueprintGeneratedClass wid_CompanionsPanel_Entry_Info.wid_CompanionsPanel_Entry_Info_C
class UWid_CompanionsPanel_Entry_Info_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBorder*                               Background;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Content;                                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Title;                                             // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  TitleName;                                         // 0x280(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FString                                ContentNonFormated;                                // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FName                                  NameID;                                            // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         AddIcons;                                          // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         PsycheChanged;                                     // 0x2B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HealthChanged;                                     // 0x2B2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_CompanionsPanel_Entry_Info_C* GetDefaultObj();

	void SetCustomColor(enum class Enum_MissionSelection_Avatar_Type Selection, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool K2Node_SwitchEnum_CmpSuccess, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2);
	void AddToContent(const class FString& New);
	void ClearContentBox();
	void Set_Custom_Title(class FText Title, bool ModFont, bool Temp_bool_Variable, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FActorInfo& CallFunc_K2_GetActorInfo_Info, bool CallFunc_K2_GetActorInfo_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, class FText K2Node_Select_Default, class FText CallFunc_FormatText_Output);
	void SetContent(const class FString& Content, TArray<enum class EBuffType>& ColorEnum, bool Single, const class FString& BuffIDs, const class FString& NewLocalVar_1, const class FString& NewLocalVar_0, bool ArrowBuffFound, int32 PsycheOldID, int32 PsycheNewID, int32 HealthOldID, int32 HealthNewID, class UTexture2D* Temp_object_Variable, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, bool Temp_bool_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, class UWid_CompanionsPanel_Entry_element_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UTexture2D* Temp_object_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Variable, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_4, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Trim_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_FormatText_Output, class FText CallFunc_FormatText_Output_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, class FText CallFunc_Conv_StringToText_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, class FText CallFunc_FormatText_Output_2, class FText CallFunc_Conv_StringToText_ReturnValue_3, class FText CallFunc_FormatText_Output_3, bool CallFunc_EqualEqual_StriStri_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, class UTexture2D* K2Node_Select_Default_1, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, int32 Temp_int_Array_Index_Variable_3, enum class ESlateVisibility Temp_byte_Variable, int32 Temp_int_Array_Index_Variable_4, enum class ESlateVisibility Temp_byte_Variable_1, enum class EBuffType CallFunc_Array_Get_Item_2, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_NotEqual_NameName_ReturnValue, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default_2, TArray<class FName>& K2Node_MakeArray_Array, TArray<class FName>& K2Node_MakeArray_Array_1, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<class FName>& CallFunc_GetBuffsToReportForCompanion_Output_new, TArray<class FName>& CallFunc_GetBuffsToReportForCompanion_Output_ex, TArray<class FName>& K2Node_MakeArray_Array_2, class FName CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, class FName CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Find_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, TArray<class FName>& K2Node_MakeArray_Array_3, TArray<class FName>& CallFunc_GetBuffsToReportForCompanion_Output_new_1, TArray<class FName>& CallFunc_GetBuffsToReportForCompanion_Output_ex_1, int32 CallFunc_Array_Find_ReturnValue_3, class FName CallFunc_Array_Get_Item_5, bool CallFunc_GreaterEqual_IntInt_ReturnValue_3, int32 CallFunc_Array_Find_ReturnValue_4, bool CallFunc_GreaterEqual_IntInt_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_3, class FName CallFunc_Array_Get_Item_6, bool CallFunc_Less_IntInt_ReturnValue_5, int32 CallFunc_Array_Find_ReturnValue_5, bool CallFunc_GreaterEqual_IntInt_ReturnValue_5, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_6, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue);
	void SetStatus(enum class Enum_CompanionPanel_Entry Status);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_wid_CompanionsPanel_Entry_Info(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class FText CallFunc_TextToUpper_ReturnValue);
};

}

