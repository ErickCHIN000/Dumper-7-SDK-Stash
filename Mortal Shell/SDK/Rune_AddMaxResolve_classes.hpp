#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0xF0 - 0xD9)
// BlueprintGeneratedClass Rune_AddMaxResolve.Rune_AddMaxResolve_C
class URune_AddMaxResolve_C : public URuneUpgradeBase_C
{
public:
	uint8                                        Pad_233C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABossBaseCharacter_C*                  BossEnemy;                                         // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URune_AddMaxResolve_C* GetDefaultObj();

	void AddMaxResolve_OnEnemyHit(class AActor* HitActor);
	void Rune_Enable();
	void Rune_Disable();
	void ExecuteUbergraph_Rune_AddMaxResolve(int32 EntryPoint, class AActor* K2Node_CustomEvent_HitActor, class ABossBaseCharacter_C* K2Node_DynamicCast_AsBoss_Base_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_WasKilledThisFrame_bYes, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchName_CmpSuccess, float CallFunc_GetChanceForTier_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, TScriptInterface<class IBPI_StormMode_Character_C> CallFunc_AddMaxResolveBonus_self_CastInput);
};

}


