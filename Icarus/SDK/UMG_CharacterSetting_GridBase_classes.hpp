#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2F0 - 0x2D0)
// WidgetBlueprintGeneratedClass UMG_CharacterSetting_GridBase.UMG_CharacterSetting_GridBase_C
class UUMG_CharacterSetting_GridBase_C : public UUMG_CharacterSetting_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUniformGridPanel*                     OptionsGrid;                                       // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_SettingName;                                  // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        GridItemWidth;                                     // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        NumColumns;                                        // 0x2EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_CharacterSetting_GridBase_C* GetDefaultObj();

	void ClearOptions(bool ClearIndex);
	void GetToggleButtonAtIndex(int32 OptionIndex, class UUMG_ToggleButton_ColorSelect_C** Button, bool* Success, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUMG_ToggleButton_ColorSelect_C*>& CallFunc_GetChildWidgetsOfClass_ChildWidgets, const struct FRowHandle& CallFunc_Array_Get_Item, class UUMG_ToggleButton_ColorSelect_C* CallFunc_Array_Get_Item_1, enum class EValid CallFunc_CastToCharacterCreationDataRowHandle_Paths, const struct FCharacterCreationDataRowHandle& CallFunc_CastToCharacterCreationDataRowHandle_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_FCharacterCreationDataRowHandleFCharacterCreationDataRowHandle_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void AddOption(const struct FRowHandle& Option, int32* Index, enum class EValid CallFunc_CastToCharacterCreationDataRowHandle_Paths, const struct FCharacterCreationDataRowHandle& CallFunc_CastToCharacterCreationDataRowHandle_ReturnValue, int32 CallFunc_AddOption_Index, bool K2Node_SwitchEnum_CmpSuccess, class UUMG_ToggleButton_ColorSelect_C* CallFunc_AddNewGridItem_ReturnValue);
	void OnGridSelectionUpdated(class UUMG_ToggleButtonBase_C* ToggleButton, class UUMG_ToggleButton_ColorSelect_C* K2Node_DynamicCast_AsUMG_Toggle_Button_Color_Select, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Find_ReturnValue);
	class UUMG_ToggleButton_ColorSelect_C* AddNewGridItem(const struct FCharacterCreationDataRowHandle& CharacterCustomisationRow, float WidthOverride, int32 RowLength, class UUMG_ToggleButton_ColorSelect_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_CharacterSetting_GridBase(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
};

}


