#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x3B8 - 0x3A8)
// BlueprintGeneratedClass Ai_BaseDeathContainer.Ai_BaseDeathContainer_C
class AAi_BaseDeathContainer_C : public AGenericDeathContainer_C
{
public:
	class UClass*                                BonusMeatLootList;                                 // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                BonusSkinLootList;                                 // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAi_BaseDeathContainer_C* GetDefaultObj();

	void RollBonusLootList(class UClass* LootList, class UObject* CallFunc_GetDefaultObject_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, class AGenericLootList_C* K2Node_DynamicCast_AsGeneric_Loot_List, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_Roll_ReturnValue, bool CallFunc_IsValidClass_ReturnValue);
	void RollSkillBasedLootList(class ASHPlayerCharacter* PlayerCharacter, bool* Result, bool CallFunc_RollSecondSkinDrop_ReturnValue, bool CallFunc_RollSecondMeatDrop_ReturnValue, bool CallFunc_RollSkillBasedLootList_Result);
	void GetTrophyRollAdditionalChance(class ASHPlayerCharacter* PlayerCharacter, float* Chance, float CallFunc_GetAiTrophyLootChance_ReturnValue);
};

}


