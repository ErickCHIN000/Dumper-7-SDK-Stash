#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x9F0 - 0x9E4)
// BlueprintGeneratedClass BPWeap_VLA_BaseWeapon.BPWeap_VLA_BaseWeapon_C
class ABPWeap_VLA_BaseWeapon_C : public ABPWeap_BaseWeapon_C
{
public:
	uint8                                        Pad_30B7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9E8(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABPWeap_VLA_BaseWeapon_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPWeap_VLA_BaseWeapon(int32 EntryPoint);
};

}


