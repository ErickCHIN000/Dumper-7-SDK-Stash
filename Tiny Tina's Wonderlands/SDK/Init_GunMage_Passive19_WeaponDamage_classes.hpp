#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x48 - 0x30)
// BlueprintGeneratedClass Init_GunMage_Passive19_WeaponDamage.Init_GunMage_Passive19_WeaponDamage_C
class UInit_GunMage_Passive19_WeaponDamage_C : public UAttributeInitializer
{
public:
	struct FDataTableValueHandle                 Scalar;                                            // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UInit_GunMage_Passive19_WeaponDamage_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetDataTableValueFromHandle_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess1, class UOakPlayerAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class UGbxAbility* CallFunc_GetClassFeat_Res, class UGbxAbility* CallFunc_FindAbility_ReturnValue, TScriptInterface<class IIFeat_GunMage_C> K2Node_DynamicCast_AsIFeat_Gun_Mage, bool K2Node_DynamicCast_bSuccess2, TScriptInterface<class IIPassive_Parent_C> K2Node_DynamicCast_AsIPassive_Parent, bool K2Node_DynamicCast_bSuccess3, int32 CallFunc_GetSpellweavingStacks_Res, int32 CallFunc_GetSkillGrade_Res, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue1);
};

}


