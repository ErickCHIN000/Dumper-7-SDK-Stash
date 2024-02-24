#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0xF0 - 0xD9)
// BlueprintGeneratedClass Rune_Riposte_Heal.Rune_Riposte_Heal_C
class URune_Riposte_Heal_C : public URuneUpgradeBase_C
{
public:
	uint8                                        Pad_24EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AEnemyCharacter_C*                     RiposteTarget;                                     // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URune_Riposte_Heal_C* GetDefaultObj();

	float Get_Bonus_Multiplier_for_XValue(int32 CallFunc_GetValueForTier_RuneX, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	void Sub_Riposte();
	void UnsubRiposte();
	void OnRip(bool bEmpowered, class ABaseCharacter_C* ParriedChar);
	void OnAnyDmgTaken(bool bDied);
	void Rune_Disable();
	void Rune_Enable();
	void ExecuteUbergraph_Rune_Riposte_Heal(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool K2Node_SwitchName_CmpSuccess, bool K2Node_CustomEvent_bEmpowered, class ABaseCharacter_C* K2Node_CustomEvent_ParriedChar, bool K2Node_CustomEvent_bDied, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_RandomFloat_ReturnValue, float CallFunc_GetChanceForTier_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool K2Node_SwitchName_CmpSuccess_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Get_Bonus_Multiplier_for_XValue_ReturnValue, class UBuffObject_C* CallFunc_GetBuffFromClass_BuffObject, class UBuffLifeStealForNextXHit_C* K2Node_DynamicCast_AsBuff_Life_Steal_for_Next_XHit, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBuffLifeStealForNextXHit_C* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_GetValueForTier_RuneX, bool K2Node_SwitchName_CmpSuccess_2, int32 CallFunc_GetValueForTier_RuneX_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class ABP_BloodProjectileSpawner_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_GetValueForTier_RuneX_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


