#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA20 - 0xA18)
// BlueprintGeneratedClass BPWeap_PS_Jakobs.BPWeap_PS_Jakobs_C
class ABPWeap_PS_Jakobs_C : public ABPWeap_Jakobs_BaseWeapon_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA18(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABPWeap_PS_Jakobs_C* GetDefaultObj();

	void UserConstructionScript();
	void HideSpeedLoader();
	void ReceiveBeginPlay();
	void HideAmmo();
	void Notify_ReloadEnded(bool bCompleted, bool bAmmoGiven);
	void ResetCylinder();
	void Weapon_NotifyPutDown(class AWeapon* EventWeapon);
	void ShowXbowVisibleAmmo();
	void ExecuteUbergraph_BPWeap_PS_Jakobs(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_bCompleted, bool K2Node_Event_bAmmoGiven, class AWeapon* K2Node_CustomEvent_EventWeapon, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1);
};

}


