#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x24C - 0x240)
// BlueprintGeneratedClass BP_Achiement_SyncTowers.BP_Achiement_SyncTowers_C
class ABP_Achiement_SyncTowers_C : public ABP_AchievementBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        Total_Towers;                                      // 0x248(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Achiement_SyncTowers_C* GetDefaultObj();

	bool HasMetRequirements(bool bIsClient, bool bIsMainMenu, bool bIsIsland, class UGGProgression* CallFunc_GetPlayerProgression_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UGGWorldSave* CallFunc_GetWorldSave_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void OnAchievementInitialize();
	void On_Goat_Tower_Sync(class AGGGoatTower* GoatTower, enum class ETowerSynchronizationEvent SynchronizationEvent);
	void ExecuteUbergraph_BP_Achiement_SyncTowers(int32 EntryPoint, class UGGProgression* CallFunc_GetPlayerProgression_ReturnValue, class UGGWorldSave* CallFunc_GetWorldSave_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGGAchievementSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue, class AGGGoatTower* K2Node_CustomEvent_GoatTower, enum class ETowerSynchronizationEvent K2Node_CustomEvent_SynchronizationEvent, bool CallFunc_IsServer_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


