#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x248 - 0x240)
// BlueprintGeneratedClass BP_Achievement_WasteOfMoney.BP_Achievement_WasteOfMoney_C
class ABP_Achievement_WasteOfMoney_C : public ABP_AchievementBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Achievement_WasteOfMoney_C* GetDefaultObj();

	bool HasMetRequirements(bool bIsClient, bool bIsMainMenu, bool bIsIsland, class UGGInventory* CallFunc_GetPlayerInventory_ReturnValue, bool CallFunc_IsGearUnlockedDataAsset_ReturnValue);
	void OnAchievementInitialize();
	void ExecuteUbergraph_BP_Achievement_WasteOfMoney(int32 EntryPoint);
};

}


