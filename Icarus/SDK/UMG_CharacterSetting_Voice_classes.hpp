#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x319 - 0x310)
// WidgetBlueprintGeneratedClass UMG_CharacterSetting_Voice.UMG_CharacterSetting_Voice_C
class UUMG_CharacterSetting_Voice_C : public UUMG_CharacterSetting_TextBase_C
{
public:
	class UFMODEvent*                            AuditionFMODEvent;                                 // 0x310(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasMadeInitialSelection;                           // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUMG_CharacterSetting_Voice_C* GetDefaultObj();

	void ClearOptions(bool ClearIndex);
	void IsValidVoice(const struct FCharacterVoicesRowHandle& RowHandle, bool* IsValid, const struct FRowMetadata& CallFunc_GetMetadata_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void GenerateOptions(const struct FCharacterVoicesRowHandle& DefaultSelection, int32 SelectionIndex, int32 CallFunc_NumRows_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FCharacterVoicesEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FCharacterVoicesRowHandle& CallFunc_StructToRowHandle_ReturnValue, bool CallFunc_IsValidVoice_IsValid, int32 CallFunc_AddOption_Index, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue, bool CallFunc_EqualEqual_FCharacterVoicesRowHandleFCharacterVoicesRowHandle_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SetVoiceParameter(const struct FRowHandle& CallFunc_GetSelectedOption_SelectedRow, enum class EValid CallFunc_CastToCharacterVoicesRowHandle_Paths, const struct FCharacterVoicesRowHandle& CallFunc_CastToCharacterVoicesRowHandle_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FCharacterVoiceData& CallFunc_GetCharacterVoicesStruct_CharacterVoices, enum class EValid CallFunc_GetCharacterVoicesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1);
	void PlayAuditionEvent(const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue);
	void ChangeSelection(int32 Index, int32 TempIndex, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void GetSelectionDisplayName(class FText* DisplayName, const struct FRowHandle& CallFunc_GetSelectedOption_SelectedRow, enum class EValid CallFunc_CastToCharacterVoicesRowHandle_Paths, const struct FCharacterVoicesRowHandle& CallFunc_CastToCharacterVoicesRowHandle_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FCharacterVoiceData& CallFunc_GetCharacterVoicesStruct_CharacterVoices, enum class EValid CallFunc_GetCharacterVoicesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1);
};

}


