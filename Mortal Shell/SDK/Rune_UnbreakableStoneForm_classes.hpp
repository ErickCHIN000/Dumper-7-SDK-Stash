#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0xFD - 0xD9)
// BlueprintGeneratedClass Rune_UnbreakableStoneForm.Rune_UnbreakableStoneForm_C
class URune_UnbreakableStoneForm_C : public URuneUpgradeBase_C
{
public:
	uint8                                        Pad_1B0B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AGameplayGM_C*                         GameplayGM;                                        // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Icon;                                              // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        IconID;                                            // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IconAdded;                                         // 0xFC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class URune_UnbreakableStoneForm_C* GetDefaultObj();

	bool Legendary_(int32 CallFunc_GetX_Value_Value, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void RemoveIcon();
	void GetX_Value(int32* Value, enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default);
	void Rune_Enable();
	void Rune_Disable();
	void Unbreakable_StoneForm_Start();
	void OnUpdateUnbreakableStoneForm(bool Remove);
	void OnStoneFormLeft();
	void Unbreakable_StoneForm_Start_Unbind();
	void OnStoneFormLeft_Unbind();
	void OnUpdateUnbreakableStoneForm_Unbind();
	void ExecuteUbergraph_Rune_UnbreakableStoneForm(int32 EntryPoint, bool CallFunc_Legendary__ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, bool K2Node_CustomEvent_Remove, int32 CallFunc_GetX_Value_Value, float CallFunc_GetChanceForTier_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Legendary__ReturnValue_1, int32 K2Node_Select_Default, int32 CallFunc_AddStatusIcon_IconID);
};

}


