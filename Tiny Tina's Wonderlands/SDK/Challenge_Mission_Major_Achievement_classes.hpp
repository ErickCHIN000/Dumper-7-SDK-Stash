#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x250 - 0x238)
// BlueprintGeneratedClass Challenge_Mission_Major_Achievement.Challenge_Mission_Major_Achievement_C
class UChallenge_Mission_Major_Achievement_C : public UChallenge_Mission_Plot_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UClass*                                AchievementChallenge;                              // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ChallengeToComplete;                               // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UChallenge_Mission_Major_Achievement_C* GetDefaultObj();

	void CompletedChallenge(class AGbxPlayerController* CompletedPlayer);
	void ExecuteUbergraph_Challenge_Mission_Major_Achievement(int32 EntryPoint, class AGbxPlayerController* K2Node_Event_CompletedPlayer, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UChallengesComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
};

}


