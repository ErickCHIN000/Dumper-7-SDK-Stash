#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x268 - 0x260)
// BlueprintGeneratedClass BP_ItemBody_CrocodileFemale_Black.BP_ItemBody_CrocodileFemale_Black_C
class ABP_ItemBody_CrocodileFemale_Black_C : public ABP_BASE_ARMOR_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)

	static class UClass* StaticClass();
	static class ABP_ItemBody_CrocodileFemale_Black_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ItemBody_CrocodileFemale_Black(int32 EntryPoint);
};

}


