#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x244 - 0x238)
// BlueprintGeneratedClass BP_Challenge_PlayerLevel.BP_Challenge_PlayerLevel_C
class UBP_Challenge_PlayerLevel_C : public UBP_Challenge_Console_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	int32                                        PlayerLevel;                                       // 0x240(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Challenge_PlayerLevel_C* GetDefaultObj();

	void LeveledUp(int32 Old_XP_Level, int32 New_XP_Level, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void OnInitChallengeInstance(class UChallengesComponent* OwningChallenges, class AGbxCharacter* AssociatedCharacter);
	void ExecuteUbergraph_BP_Challenge_PlayerLevel(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UChallengesComponent* K2Node_Event_OwningChallenges, class AGbxCharacter* K2Node_Event_AssociatedCharacter, class UPlayerBalanceStateComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


