#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x248 - 0x240)
// BlueprintGeneratedClass BP_Achievement_GOAT.BP_Achievement_GOAT_C
class ABP_Achievement_GOAT_C : public ABP_AchievementBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Achievement_GOAT_C* GetDefaultObj();

	void OnAchievementInitialize();
	void OnCompletedAchievement(const class FString& AchievementID);
	void ExecuteUbergraph_BP_Achievement_GOAT(int32 EntryPoint, const class FString& K2Node_CustomEvent_AchievementID, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue);
};

}


