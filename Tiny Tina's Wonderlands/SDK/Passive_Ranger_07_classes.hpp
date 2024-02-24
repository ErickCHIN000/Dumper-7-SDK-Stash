#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x66 (0x320 - 0x2BA)
// BlueprintGeneratedClass Passive_Ranger_07.Passive_Ranger_07_C
class UPassive_Ranger_07_C : public U_Passive_Parent_C
{
public:
	uint8                                        Pad_2F3F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(Transient, DuplicateTransient)
	class UGbxAbility*                           RangerFeat;                                        // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBPEventHub_PlayerCharacter_C*         PlayerEventHub;                                    // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BuffDuration;                                      // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F46[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 BuffDurationHandle;                                // 0x2E0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Ranger_07; // 0x2F8(0x28)(None)

	static class UClass* StaticClass();
	static class UPassive_Ranger_07_C* GetDefaultObj();

	void OnActivated();
	void OnDeactivated();
	void ReviveSuccess(class AActor* Revived_By);
	void ExecuteUbergraph_Passive_Ranger_07(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetAbilityOwner_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, class UGbxAbility* CallFunc_GetClassFeat_Res, TScriptInterface<class IIFeat_Ranger_C> K2Node_DynamicCast_AsIFeat_Ranger, bool K2Node_DynamicCast_bSuccess1, class AActor* CallFunc_GetMushroomCompanion_Ref, bool CallFunc_GetMushroomCompanion_Res, TScriptInterface<class IIBPChar_MushroomCompanion_C> K2Node_DynamicCast_AsIBPChar_Mushroom_Companion, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_Passive_Ranger_07_Set_Enabled_Res, TScriptInterface<class IIFeat_Ranger_C> K2Node_DynamicCast_AsIFeat_Ranger1, bool K2Node_DynamicCast_bSuccess3, class AActor* CallFunc_GetMushroomCompanion_Ref1, bool CallFunc_GetMushroomCompanion_Res1, class AActor* K2Node_CustomEvent_Revived_By, TScriptInterface<class IIBPChar_MushroomCompanion_C> K2Node_DynamicCast_AsIBPChar_Mushroom_Companion1, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_Passive_Ranger_07_Set_Enabled_Res1, float CallFunc_GetDataTableValueFromHandle_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, class UOakPlayerAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess5, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue);
};

}


