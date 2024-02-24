#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x36 (0x168 - 0x132)
// BlueprintGeneratedClass Ability_All_Melee_Dragonlord.Ability_All_Melee_Dragonlord_C
class UAbility_All_Melee_Dragonlord_C : public UBP_InventoryAbility_C
{
public:
	uint8                                        Pad_2871[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x138(0x8)(Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_All_Melee_Dragonlord; // 0x140(0x28)(None)

	static class UClass* StaticClass();
	static class UAbility_All_Melee_Dragonlord_C* GetDefaultObj();

	void OnActivated();
	void CE_CausedDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void ExecuteUbergraph_Ability_All_Melee_Dragonlord(int32 EntryPoint, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, const struct FHitResult& Temp_struct_Variable, float CallFunc_GetDataTableValueFromHandle_ReturnValue, class UOakDamageCauserComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* K2Node_CustomEvent_DamageInstigator, float K2Node_CustomEvent_Damage, class UGbxDamageType* K2Node_CustomEvent_DamageType, class UDamageSource* K2Node_CustomEvent_DamageSource, class AActor* K2Node_CustomEvent_DamagedActor, const struct FCausedDamageDetails& K2Node_CustomEvent_Details, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Compare_Damage_Source_Equal, bool CallFunc_Compare_Damage_Source_Not_Equal, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}


