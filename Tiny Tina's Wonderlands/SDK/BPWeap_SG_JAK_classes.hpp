#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA20 - 0xA18)
// BlueprintGeneratedClass BPWeap_SG_JAK.BPWeap_SG_JAK_C
class ABPWeap_SG_JAK_C : public ABPWeap_Jakobs_BaseWeapon_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA18(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABPWeap_SG_JAK_C* GetDefaultObj();

	void UserConstructionScript();
	void Notify_ReloadEnded(bool bCompleted, bool bAmmoGiven);
	void ResetVisibleAmmo();
	void ExecuteUbergraph_BPWeap_SG_JAK(int32 EntryPoint, bool K2Node_Event_bCompleted, bool K2Node_Event_bAmmoGiven);
};

}


