#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x9F8 - 0x9F0)
// BlueprintGeneratedClass BPWeap_HW_VLA.BPWeap_HW_VLA_C
class ABPWeap_HW_VLA_C : public ABPWeap_VLA_BaseWeapon_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABPWeap_HW_VLA_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void LoadShells();
	void ShellsLoaded();
	void ExecuteUbergraph_BPWeap_HW_VLA(int32 EntryPoint);
};

}


