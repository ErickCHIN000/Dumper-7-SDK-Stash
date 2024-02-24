#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x430 - 0x428)
// BlueprintGeneratedClass GunAmmoBox.GunAmmoBox_C
class AGunAmmoBox_C : public AGenericAmmoBox_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x428(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AGunAmmoBox_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_GunAmmoBox(int32 EntryPoint);
};

}


