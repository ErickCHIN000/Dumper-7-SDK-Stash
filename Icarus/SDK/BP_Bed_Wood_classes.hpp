#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x7B8 - 0x7A8)
// BlueprintGeneratedClass BP_Bed_Wood.BP_Bed_Wood_C
class ABP_Bed_Wood_C : public ABP_BedBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UGFurComponent*                        GFur;                                              // 0x7B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Bed_Wood_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Bed_Wood(int32 EntryPoint);
};

}


