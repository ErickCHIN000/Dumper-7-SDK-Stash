#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x988 - 0x980)
// BlueprintGeneratedClass BPWeaponFireProjectileComponent_JAK.BPWeaponFireProjectileComponent_JAK_C
class UBPWeaponFireProjectileComponent_JAK_C : public UWeaponJAKFireProjectileComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x980(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBPWeaponFireProjectileComponent_JAK_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK(int32 EntryPoint);
};

}


