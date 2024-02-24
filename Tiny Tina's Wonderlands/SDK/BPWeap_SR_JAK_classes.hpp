#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA20 - 0xA18)
// BlueprintGeneratedClass BPWeap_SR_JAK.BPWeap_SR_JAK_C
class ABPWeap_SR_JAK_C : public ABPWeap_Jakobs_BaseWeapon_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA18(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABPWeap_SR_JAK_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void HideMag();
	void ShowAmmo();
	void HideAmmo();
	void Fire_Rotate();
	void RotationReset();
	void Notify_ReloadEnded(bool bCompleted, bool bAmmoGiven);
	void ExecuteUbergraph_BPWeap_SR_JAK(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_bCompleted, bool K2Node_Event_bAmmoGiven);
};

}


