#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA4 (0x23C - 0x198)
// BlueprintGeneratedClass Ability_Melee_HiltMod_01.Ability_Melee_HiltMod_01_C
class UAbility_Melee_HiltMod_01_C : public UAbility_Melee_HiltMod_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              NewVar_0_0;                                        // 0x1A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOakAbilityResourceController_WeaponShotModifier RsrcCntrlr_OakAbilityResourceController_WeaponShotModifier_Ability_Melee_HiltMod_01; // 0x1A8(0x28)(None)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Melee_HiltMod_01; // 0x1D0(0x28)(None)
	float                                        AmpTimer;                                          // 0x1F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B3B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 AmpTimerHandle;                                    // 0x200(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                        AmpShotQuantity;                                   // 0x218(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B3D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 AmpShotQuantityHandle;                             // 0x220(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                        AmpShotsFired;                                     // 0x238(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAbility_Melee_HiltMod_01_C* GetDefaultObj();

	void OnActivated();
	void AmpShotFired(class AWeapon* Weapon, struct FWeaponShotModifierData& Data);
	void OnAbilityTimerEnded(struct FOakAbilityTimerSpec& Spec, struct FOakAbilityTimerResult& Result);
	void DoHiltMod_Hit(class UGbxDamageType* DamageType, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void ExecuteUbergraph_Ability_Melee_HiltMod_01(int32 EntryPoint, class UGbxDamageType* K2Node_Event_DamageType, class AActor* K2Node_Event_DamagedActor, const struct FCausedDamageDetails& K2Node_Event_Details, class AWeapon* K2Node_CustomEvent_Weapon, const struct FWeaponShotModifierData& K2Node_CustomEvent_Data, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchEnum_CmpSuccess, const struct FOakAbilityTimerSpec& K2Node_Event_Spec, const struct FOakAbilityTimerResult& K2Node_Event_Result, float CallFunc_GetDataTableValueFromHandle_ReturnValue, bool K2Node_SwitchEnum1_CmpSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FOakAbilityResourceSpec_WeaponShotModifier& K2Node_MakeStruct_OakAbilityResourceSpec_WeaponShotModifier, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, int32 CallFunc_FTrunc_ReturnValue, const struct FOakAbilityResourceSpec_WeaponShotModifier& K2Node_MakeStruct_OakAbilityResourceSpec_WeaponShotModifier1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
};

}


