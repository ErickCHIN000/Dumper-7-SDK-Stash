#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x250 - 0x200)
// BlueprintGeneratedClass Passive_Shaman_04.Passive_Shaman_04_C
class UPassive_Shaman_04_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x200(0x8)(Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Shaman_04; // 0x208(0x28)(None)
	float                                        BonusDuration;                                     // 0x230(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F07[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 BonusDurationHandle;                               // 0x238(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UPassive_Shaman_04_C* GetDefaultObj();

	void OnActivated();
	void OnDeactivated();
	void Shaman_04_WeaponSwap(class AWeapon* NewWeapon, class AWeapon* LastWeapon);
	void ExecuteUbergraph_Passive_Shaman_04(int32 EntryPoint, float CallFunc_GetDataTableValueFromHandle_ReturnValue, class AWeapon* K2Node_CustomEvent_NewWeapon, class AWeapon* K2Node_CustomEvent_LastWeapon, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class AActor* CallFunc_GetAbilityOwner_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue);
};

}


