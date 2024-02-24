#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xEC8 - 0xEC0)
// BlueprintGeneratedClass AssultRifleRightHand.AssultRifleRightHand_C
class AAssultRifleRightHand_C : public ALongRangeWeaponCommon_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEC0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AAssultRifleRightHand_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_AssultRifleRightHand(int32 EntryPoint);
};

}


