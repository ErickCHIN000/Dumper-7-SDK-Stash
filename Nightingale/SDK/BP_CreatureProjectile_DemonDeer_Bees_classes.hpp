#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE (0xCC0 - 0xCB2)
// BlueprintGeneratedClass BP_CreatureProjectile_DemonDeer_Bees.BP_CreatureProjectile_DemonDeer_Bees_C
class ABP_CreatureProjectile_DemonDeer_Bees_C : public ABP_ProjectileBase_C
{
public:
	uint8                                        Pad_35CE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xCB8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_CreatureProjectile_DemonDeer_Bees_C* GetDefaultObj();

	void BndEvt__BP_CreatureProjectile_DemonDeer_Bees_AbilitySystem_K2Node_ComponentBoundEvent_0_OnGameplayTagCountChanged__DelegateSignature(struct FGameplayTag& Tag, int32 Count);
	void ExecuteUbergraph_BP_CreatureProjectile_DemonDeer_Bees(int32 EntryPoint, const struct FGameplayTag& K2Node_ComponentBoundEvent_Tag, int32 K2Node_ComponentBoundEvent_Count, bool CallFunc_EqualEqual_GameplayTag_ReturnValue);
};

}


