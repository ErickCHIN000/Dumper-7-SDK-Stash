#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA00 - 0x9F8)
// BlueprintGeneratedClass BPWeap_AR_COV.BPWeap_AR_COV_C
class ABPWeap_AR_COV_C : public ABPWeap_COV_BaseWeapon_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F8(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABPWeap_AR_COV_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Weapon_NotifyEquipped();
	void ExecuteUbergraph_BPWeap_AR_COV(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


