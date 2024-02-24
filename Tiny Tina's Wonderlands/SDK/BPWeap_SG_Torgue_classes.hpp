#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0xA18 - 0xA09)
// BlueprintGeneratedClass BPWeap_SG_Torgue.BPWeap_SG_Torgue_C
class ABPWeap_SG_Torgue_C : public ABPWeap_Torgue_BaseWeapon_C
{
public:
	uint8                                        Pad_3C30[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA10(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABPWeap_SG_Torgue_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void HideSpeedLoader();
	void ResetBoneVisibility();
	void Notify_ReloadEnded(bool bCompleted, bool bAmmoGiven);
	void ExecuteUbergraph_BPWeap_SG_Torgue(int32 EntryPoint, bool K2Node_Event_bCompleted, bool K2Node_Event_bAmmoGiven);
};

}


