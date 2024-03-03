#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x260 - 0x258)
// BlueprintGeneratedClass bp_inq_cagebed.bp_inq_cagebed_C
class Abp_inq_cagebed_C : public ABP_BASE_INTERACTABLE_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class Abp_inq_cagebed_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void Hide_Bed();
	void Show_Bed();
	void Game_Load();
	void ExecuteUbergraph_bp_inq_cagebed(int32 EntryPoint, bool K2Node_SwitchInteger_CmpSuccess);
};

}


