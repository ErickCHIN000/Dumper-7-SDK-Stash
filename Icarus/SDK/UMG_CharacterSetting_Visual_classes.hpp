#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x310 - 0x310)
// WidgetBlueprintGeneratedClass UMG_CharacterSetting_Visual.UMG_CharacterSetting_Visual_C
class UUMG_CharacterSetting_Visual_C : public UUMG_CharacterSetting_TextBase_C
{
public:

	static class UClass* StaticClass();
	static class UUMG_CharacterSetting_Visual_C* GetDefaultObj();

	void GetSelectionDisplayName(class FText* DisplayName, const struct FRowHandle& CallFunc_GetSelectedOption_SelectedRow, enum class EValid CallFunc_CastToCharacterCreationDataRowHandle_Paths, const struct FCharacterCreationDataRowHandle& CallFunc_CastToCharacterCreationDataRowHandle_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FCharacterCreationData& CallFunc_GetCharacterCreationDataStruct_CharacterCreationData, enum class EValid CallFunc_GetCharacterCreationDataStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1);
};

}


