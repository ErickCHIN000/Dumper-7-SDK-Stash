#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x518 - 0x510)
// BlueprintGeneratedClass GA_CreatureAbility_GiantDowned.GA_CreatureAbility_GiantDowned_C
class UGA_CreatureAbility_GiantDowned_C : public UGA_CreatureAbilityBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x510(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_GiantDowned_C* GetDefaultObj();

	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_CreatureAbility_GiantDowned(int32 EntryPoint, TScriptInterface<class IBPI_EquippedItems_C> CallFunc_UnequipEquippedItem_self_CastInput, bool CallFunc_UnequipEquippedItem_Success);
};

}


