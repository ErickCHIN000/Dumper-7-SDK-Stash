#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x24C - 0x240)
// BlueprintGeneratedClass BP_Achievement_WarRoom.BP_Achievement_WarRoom_C
class ABP_Achievement_WarRoom_C : public ABP_AchievementBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        StretchGoalIndex;                                  // 0x248(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Achievement_WarRoom_C* GetDefaultObj();

	bool HasMetRequirements(bool bIsClient, bool bIsMainMenu, bool bIsIsland, bool CallFunc_Not_PreBool_ReturnValue, class UGGProgression* CallFunc_GetPlayerProgression_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_GetUnlockedStretchGoalNum_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void OnAchievementInitialize();
	void OnGoalUnlocked(class AGGCastleStretchGoal* UnlockedGoal);
	void ExecuteUbergraph_BP_Achievement_WarRoom(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGGGoatCastleSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UGGGoatCastleSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, class AGGCastleStretchGoal* K2Node_CustomEvent_UnlockedGoal, class UGGAchievementSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
};

}


