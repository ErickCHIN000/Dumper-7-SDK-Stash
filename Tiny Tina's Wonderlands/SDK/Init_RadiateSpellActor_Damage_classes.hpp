#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass Init_RadiateSpellActor_Damage.Init_RadiateSpellActor_Damage_C
class UInit_RadiateSpellActor_Damage_C : public UAttributeInitializer
{
public:

	static class UClass* StaticClass();
	static class UInit_RadiateSpellActor_Damage_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, class ARadiateDamageActor_Spell_Base_C* K2Node_DynamicCast_AsRadiate_Damage_Actor_Spell_Base, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetSpellModDamage_ReturnValue);
};

}


