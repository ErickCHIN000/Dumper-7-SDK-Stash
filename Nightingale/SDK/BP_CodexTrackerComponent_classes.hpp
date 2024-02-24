#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2F8 - 0x2F0)
// BlueprintGeneratedClass BP_CodexTrackerComponent.BP_CodexTrackerComponent_C
class UBP_CodexTrackerComponent_C : public UCodexTrackerComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_CodexTrackerComponent_C* GetDefaultObj();

	void On_Codex_Entry_Updated(struct FCodexEntry& CodexEntry, struct FGameplayTag& SubentryTag);
	void On_Codex_Entry_Granted(struct FCodexEntry& CodexEntry, struct FGameplayTag& SubentryTag, const TArray<struct FInventoryEntry>& CodexRewards, class APawn* OwningPawn, const class FString& CallFunc_MakeLiteralString_ReturnValue, const class FString& CallFunc_MakeLiteralString_ReturnValue_1, TArray<struct FInventoryEntry>& CallFunc_GenerateEssenceRewardsForCodex_ReturnValue, bool CallFunc_ClaimItems_bSuccess, TArray<struct FGuid>& CallFunc_ClaimItems_ClaimedInstances, TArray<struct FInventoryEntry>& CallFunc_ClaimItems_UnclaimedItems, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class APlayerState* K2Node_DynamicCast_AsPlayer_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue, class APawn* CallFunc_GetPawn_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_CodexTrackerComponent(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


