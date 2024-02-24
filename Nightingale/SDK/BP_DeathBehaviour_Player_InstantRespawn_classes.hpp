#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x120 - 0x118)
// BlueprintGeneratedClass BP_DeathBehaviour_Player_InstantRespawn.BP_DeathBehaviour_Player_InstantRespawn_C
class UBP_DeathBehaviour_Player_InstantRespawn_C : public UBP_DeathBehaviour_Player_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x118(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_DeathBehaviour_Player_InstantRespawn_C* GetDefaultObj();

	void StartDowned();
	void StartDeath();
	void StartRespawn();
	void ExecuteUbergraph_BP_DeathBehaviour_Player_InstantRespawn(int32 EntryPoint, bool CallFunc_RunSpawningEQS_ReturnValue, class APawn* CallFunc_GetPawn_ReturnValue, const struct FGameplayTag& CallFunc_DeathDownedTimeRemainingTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_GetPawn_ReturnValue_1, const struct FGameplayTag& CallFunc_DeathDeathTimeRemainingTag_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess);
};

}


