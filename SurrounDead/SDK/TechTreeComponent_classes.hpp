#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x150 - 0x140)
// BlueprintGeneratedClass TechTreeComponent.TechTreeComponent_C
class UTechTreeComponent_C : public UTechTreeManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        SkillPoints;                                       // 0x148(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentPoints;                                     // 0x14C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTechTreeComponent_C* GetDefaultObj();

	void ResetTreeComplete(class AActor* CallFunc_GetOwner_ReturnValue, class ABP_MPPlayerController_C* K2Node_DynamicCast_AsBP_MPPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character, bool K2Node_DynamicCast_bSuccess_1);
	void ResetTree(class AActor* CallFunc_GetOwner_ReturnValue, class ABP_MPPlayerController_C* K2Node_DynamicCast_AsBP_MPPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character, bool K2Node_DynamicCast_bSuccess_1);
	void Add_Skill_Points(int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void PayCost(int32 Cost, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void HasEnoughResources(int32 TechnologyCost, bool* EnoughResources, bool CallFunc_Less_IntInt_ReturnValue);
	void TryPayTechnologyCost(int32 Cost, bool* Success, bool CallFunc_HasEnoughResources_EnoughResources);
	void CheckUnlockCost(class UTechnologyAsset* Technology, bool* CanUnlock, class UBP_SkillTreeAsset_C* K2Node_DynamicCast_AsBP_Skill_Tree_Asset, bool K2Node_DynamicCast_bSuccess, bool CallFunc_TryPayTechnologyCost_Success);
	void TryToUnlockTechnology(class UTechnologyAsset* Technology);
	void ComponentPreSave();
	void ComponentLoaded();
	void ExecuteUbergraph_TechTreeComponent(int32 EntryPoint, class UTechnologyAsset* K2Node_CustomEvent_Technology, bool CallFunc_CheckUnlockCost_CanUnlock, bool CallFunc_HasUnlockedParents_ReturnValue, bool CallFunc_IsTechnologyUnlocked_ReturnValue);
};

}


