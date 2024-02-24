#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E (0x150 - 0x132)
// BlueprintGeneratedClass Ability_Ring_Cond_Dungeon.Ability_Ring_Cond_Dungeon_C
class UAbility_Ring_Cond_Dungeon_C : public UBP_InventoryAbility_C
{
public:
	uint8                                        Pad_40BD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x138(0x8)(Transient, DuplicateTransient)
	class UGbxCondition*                         IsInEDCondition;                                   // 0x140(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                          RingTimerHandle;                                   // 0x148(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UAbility_Ring_Cond_Dungeon_C* GetDefaultObj();

	void OnDeactivated();
	void OnActivated();
	void AddRingStatus();
	void RemoveRingStatus();
	void QueryEndlessDungeon();
	void ExecuteUbergraph_Ability_Ring_Cond_Dungeon(int32 EntryPoint, class AActor* CallFunc_GetAbilityOwner_ReturnValue, bool CallFunc_K2_EvaluateCondition_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, bool CallFunc_RemoveStatusEffect_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}


