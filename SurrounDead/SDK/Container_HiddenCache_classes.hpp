#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x390 - 0x388)
// BlueprintGeneratedClass Container_HiddenCache.Container_HiddenCache_C
class AContainer_HiddenCache_C : public ABP_LootContainer_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x388(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AContainer_HiddenCache_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void Event1();
	void Event2();
	void ExecuteUbergraph_Container_HiddenCache(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


