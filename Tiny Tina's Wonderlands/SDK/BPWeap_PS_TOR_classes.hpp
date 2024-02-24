#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0xA18 - 0xA09)
// BlueprintGeneratedClass BPWeap_PS_TOR.BPWeap_PS_TOR_C
class ABPWeap_PS_TOR_C : public ABPWeap_Torgue_BaseWeapon_C
{
public:
	uint8                                        Pad_3716[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA10(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABPWeap_PS_TOR_C* GetDefaultObj();

	void HideMoonClip();
	void ShowMoonClip();
	void UserConstructionScript();
	void Notify_ReloadEnded(bool bCompleted, bool bAmmoGiven);
	void ShowAmmo();
	void ReceiveBeginPlay();
	void HideSpeedLoader();
	void ResetCylinder();
	void Weapon_NotifyPutDown(class AWeapon* EventWeapon);
	void ExecuteUbergraph_BPWeap_PS_TOR(int32 EntryPoint, class AWeapon* K2Node_Event_EventWeapon, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_bCompleted, bool K2Node_Event_bAmmoGiven);
};

}


