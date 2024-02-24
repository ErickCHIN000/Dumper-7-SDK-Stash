#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0xA18 - 0xA09)
// BlueprintGeneratedClass BPWeap_HW_TOR_BaseWeapon.BPWeap_HW_TOR_BaseWeapon_C
class ABPWeap_HW_TOR_BaseWeapon_C : public ABPWeap_Torgue_BaseWeapon_C
{
public:
	uint8                                        Pad_285B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA10(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABPWeap_HW_TOR_BaseWeapon_C* GetDefaultObj();

	void VisibleAmmoUpdate();
	void ShowRocketBone();
	void HideRocketBone();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void HideRocket();
	void ExecuteUbergraph_BPWeap_HW_TOR_BaseWeapon(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1);
};

}


