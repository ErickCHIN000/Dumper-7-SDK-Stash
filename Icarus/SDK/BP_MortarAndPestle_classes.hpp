#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x9E0 - 0x9D0)
// BlueprintGeneratedClass BP_MortarAndPestle.BP_MortarAndPestle_C
class ABP_MortarAndPestle_C : public ABP_ProcessorBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  SM_DEP_Mortar_Pestle_02;                           // 0x9D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MortarAndPestle_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MortarAndPestle(int32 EntryPoint);
};

}


