#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x1C8 - 0x198)
// BlueprintGeneratedClass Ability_HiltMod_Legendary_MiningPick.Ability_HiltMod_Legendary_MiningPick_C
class UAbility_HiltMod_Legendary_MiningPick_C : public UAbility_Melee_HiltMod_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_HiltMod_Legendary_MiningPick; // 0x1A0(0x28)(None)

	static class UClass* StaticClass();
	static class UAbility_HiltMod_Legendary_MiningPick_C* GetDefaultObj();

	void DoHiltMod_Hit(class UGbxDamageType* DamageType, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void OnActivated();
	void CE_InvPickup(class AActor* PickedUpActor, int32 Quantity);
	void OnDeactivated();
	void ExecuteUbergraph_Ability_HiltMod_Legendary_MiningPick(int32 EntryPoint, const struct FSpawnDroppedPickupLootRequest& K2Node_MakeStruct_SpawnDroppedPickupLootRequest, class UGbxDamageType* K2Node_Event_DamageType, class AActor* K2Node_Event_DamagedActor, const struct FCausedDamageDetails& K2Node_Event_Details, int32 CallFunc_SpawnLootAsync_ReturnValue, class AActor* K2Node_CustomEvent_PickedUpActor, int32 K2Node_CustomEvent_Quantity, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1);
};

}


