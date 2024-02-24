#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x4B0 - 0x4A0)
// BlueprintGeneratedClass Proj_Spell_GarlicBreath.Proj_Spell_GarlicBreath_C
class AProj_Spell_GarlicBreath_C : public ABasicSpellActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A0(0x8)(Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x4A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AProj_Spell_GarlicBreath_C* GetDefaultObj();

	void UserConstructionScript();
	void SetupSpawnedActor(class AGrenadeMod* OwningSpell);
	void ExecuteUbergraph_Proj_Spell_GarlicBreath(int32 EntryPoint, class AGrenadeMod* K2Node_Event_OwningSpell, class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue, class UAbility_GarlicBreath_C* K2Node_DynamicCast_AsAbility_Garlic_Breath, bool K2Node_DynamicCast_bSuccess);
};

}


