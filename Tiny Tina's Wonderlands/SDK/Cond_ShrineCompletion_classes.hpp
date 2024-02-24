#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x90 - 0x88)
// BlueprintGeneratedClass Cond_ShrineCompletion.Cond_ShrineCompletion_C
class UCond_ShrineCompletion_C : public UGbxCondition_Blueprint
{
public:
	class UClass*                                ChallengeToCheck;                                  // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCond_ShrineCompletion_C* GetDefaultObj();

	bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class APlayerController* CallFunc_GetPrimaryPlayerController_ReturnValue, class UOakChallengesComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsChallengeComplete_ReturnValue);
};

}


