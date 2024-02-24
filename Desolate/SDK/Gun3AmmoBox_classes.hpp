#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x430 - 0x428)
// BlueprintGeneratedClass Gun3AmmoBox.Gun3AmmoBox_C
class AGun3AmmoBox_C : public AGenericAmmoBox_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x428(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AGun3AmmoBox_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_Gun3AmmoBox(int32 EntryPoint);
};

}


