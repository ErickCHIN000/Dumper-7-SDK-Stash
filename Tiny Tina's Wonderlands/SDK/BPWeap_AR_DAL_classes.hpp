#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x9F8 - 0x9F0)
// BlueprintGeneratedClass BPWeap_AR_DAL.BPWeap_AR_DAL_C
class ABPWeap_AR_DAL_C : public ABPWeap_DAL_BaseWeapon_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABPWeap_AR_DAL_C* GetDefaultObj();

	void UserConstructionScript();
	void ShowChainFeed();
	void Notify_ReloadEnded(bool bCompleted, bool bAmmoGiven);
	void HideChain();
	void ExecuteUbergraph_BPWeap_AR_DAL(int32 EntryPoint, bool K2Node_Event_bCompleted, bool K2Node_Event_bAmmoGiven);
};

}


