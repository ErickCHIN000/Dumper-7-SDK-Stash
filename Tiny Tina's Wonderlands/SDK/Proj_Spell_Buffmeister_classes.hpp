#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x758 - 0x748)
// BlueprintGeneratedClass Proj_Spell_Buffmeister.Proj_Spell_Buffmeister_C
class AProj_Spell_Buffmeister_C : public AOakProjectile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x748(0x8)(Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x750(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AProj_Spell_Buffmeister_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SetupSpawnedActor(class AGrenadeMod* OwningSpell);
	void ExecuteUbergraph_Proj_Spell_Buffmeister(int32 EntryPoint, class AGrenadeMod* K2Node_Event_OwningSpell, class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue, class UAbility_Buffmeister_C* K2Node_DynamicCast_AsAbility_Buffmeister, bool K2Node_DynamicCast_bSuccess);
};

}


