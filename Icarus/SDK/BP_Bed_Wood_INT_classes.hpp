#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x7B0 - 0x7A8)
// BlueprintGeneratedClass BP_Bed_Wood_INT.BP_Bed_Wood_INT_C
class ABP_Bed_Wood_INT_C : public ABP_BedBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Bed_Wood_INT_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Bed_Wood_INT(int32 EntryPoint);
};

}


