#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x220 - 0x198)
// BlueprintGeneratedClass Ability_Ranger_Wards_Reload_Barrage.Ability_Ranger_Wards_Reload_Barrage_C
class UAbility_Ranger_Wards_Reload_Barrage_C : public UAbility_All_Enchantment_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(Transient, DuplicateTransient)
	bool                                         bHasBarrage;                                       // 0x1A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F5B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameResourcePoolReference            NewVar_0_0;                                        // 0x1A8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference)
	class FText                                  DesiredAbilityName;                                // 0x1C0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameResourcePoolReference            SkillCooldownResourcePool;                         // 0x1D8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference)
	class UOakActionAbility*                     NewVar_1;                                          // 0x1F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Ranger_Wards_Reload_Barrage; // 0x1F8(0x28)(None)

	static class UClass* StaticClass();
	static class UAbility_Ranger_Wards_Reload_Barrage_C* GetDefaultObj();

	void OnActivated();
	void Enchantment_OnReload(class AWeapon* EventWeapon, bool bCompleted, bool bAmmoGiven);
	void CE_AbilitySlotChanged(class UOakPlayerAbilitySlotData* SlotData);
	void ExecuteUbergraph_Ability_Ranger_Wards_Reload_Barrage(int32 EntryPoint, class UOakActionAbility* CallFunc_GetPrimaryActionAbility_ReturnValue, class AWeapon* K2Node_Event_EventWeapon, bool K2Node_Event_bCompleted, bool K2Node_Event_bAmmoGiven, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, class UOakPlayerAbilitySlotData* K2Node_CustomEvent_SlotData, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate);
};

}


