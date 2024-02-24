#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x430 - 0x428)
// BlueprintGeneratedClass Pistol2AmmoBox.Pistol2AmmoBox_C
class APistol2AmmoBox_C : public AGenericAmmoBox_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x428(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class APistol2AmmoBox_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_Pistol2AmmoBox(int32 EntryPoint);
};

}


