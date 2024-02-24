#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0xF0 - 0x28)
// BlueprintGeneratedClass BP_HuntingClueSpawnerInstanceGroup.BP_HuntingClueSpawnerInstanceGroup_C
class UBP_HuntingClueSpawnerInstanceGroup_C : public UObject
{
public:
	struct FHuntingClueSetup                     ClueSetup;                                         // 0x28(0x90)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FHuntingClueSetupRowHandle            ClueSetupRow;                                      // 0xB8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_HuntingClue_C*                     PreviousClue;                                      // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_HuntingClue_C*>             Clues;                                             // 0xD8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class UClass*                                ClueClass;                                         // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_HuntingClueSpawnerInstanceGroup_C* GetDefaultObj();

};

}


