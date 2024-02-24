#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x120 - 0x118)
// BlueprintGeneratedClass BP_DeathBehaviour_Player_InstantDeath.BP_DeathBehaviour_Player_InstantDeath_C
class UBP_DeathBehaviour_Player_InstantDeath_C : public UBP_DeathBehaviour_Player_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x118(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_DeathBehaviour_Player_InstantDeath_C* GetDefaultObj();

	void StartDowned();
	void ExecuteUbergraph_BP_DeathBehaviour_Player_InstantDeath(int32 EntryPoint, class APawn* CallFunc_GetPawn_ReturnValue, const struct FGameplayTag& CallFunc_DeathDownedTimeRemainingTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_GetPawn_ReturnValue_1);
};

}


