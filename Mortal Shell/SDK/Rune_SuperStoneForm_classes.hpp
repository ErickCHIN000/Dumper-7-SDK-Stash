#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x27 (0x100 - 0xD9)
// BlueprintGeneratedClass Rune_SuperStoneForm.Rune_SuperStoneForm_C
class URune_SuperStoneForm_C : public URuneUpgradeBase_C
{
public:
	uint8                                        Pad_23F7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        IconID;                                            // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IconAdded;                                         // 0xEC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2409[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayGM_C*                         GameplayGM;                                        // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Icon;                                              // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URune_SuperStoneForm_C* GetDefaultObj();

	void RemoveIcon();
	void Rune_Enable();
	void Rune_Disable();
	void OnStoneFormExitCooldown();
	void OnSuperStoneFormActivated_Unbind();
	void OnSuperStoneFormActivated();
	void ExecuteUbergraph_Rune_SuperStoneForm(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetChanceForTier_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, int32 CallFunc_AddStatusIcon_IconID, int32 CallFunc_AddStatusIcon_IconID_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_GetValueForTier_RuneX, float CallFunc_Conv_IntToFloat_ReturnValue);
};

}


