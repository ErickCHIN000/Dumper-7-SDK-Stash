#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x260 - 0x258)
// BlueprintGeneratedClass bp_loot_ridePony.bp_loot_ridePony_C
class Abp_loot_ridePony_C : public ABP_BASE_INTERACTABLE_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class Abp_loot_ridePony_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void Game_Load();
	void Show_Pony_Jar();
	void ExecuteUbergraph_bp_loot_ridePony(int32 EntryPoint, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1);
};

}


