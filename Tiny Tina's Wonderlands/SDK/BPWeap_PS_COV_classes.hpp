#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA00 - 0x9F8)
// BlueprintGeneratedClass BPWeap_PS_COV.BPWeap_PS_COV_C
class ABPWeap_PS_COV_C : public ABPWeap_COV_BaseWeapon_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F8(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABPWeap_PS_COV_C* GetDefaultObj();

	void DisablePlug();
	void EnablePlug();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void FirstPersonCreated();
	void Notify_ReloadEnded(bool bCompleted, bool bAmmoGiven);
	void ExecuteUbergraph_BPWeap_PS_COV(int32 EntryPoint, bool K2Node_Event_bCompleted, bool K2Node_Event_bAmmoGiven);
};

}


