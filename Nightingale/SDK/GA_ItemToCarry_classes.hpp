#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x428 - 0x420)
// BlueprintGeneratedClass GA_ItemToCarry.GA_ItemToCarry_C
class UGA_ItemToCarry_C : public UBP_NWXGameplayAbility_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_ItemToCarry_C* GetDefaultObj();

	void ExecuteUbergraph_GA_ItemToCarry(int32 EntryPoint);
};

}


