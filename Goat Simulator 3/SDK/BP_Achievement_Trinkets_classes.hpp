#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x248 - 0x240)
// BlueprintGeneratedClass BP_Achievement_Trinkets.BP_Achievement_Trinkets_C
class ABP_Achievement_Trinkets_C : public ABP_AchievementBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Achievement_Trinkets_C* GetDefaultObj();

	bool HasMetRequirements(bool bIsClient, bool bIsMainMenu, bool bIsIsland, class UGGQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_GetGlobalQuestSet_bOutSuccess, class AGGQuestSet* CallFunc_GetGlobalQuestSet_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetMaximumTargetProgress_ReturnValue, bool CallFunc_GetProgress_ReachedMaximum, int32 CallFunc_GetProgress_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void OnAchievementInitialize();
	void ExecuteUbergraph_BP_Achievement_Trinkets(int32 EntryPoint);
};

}


