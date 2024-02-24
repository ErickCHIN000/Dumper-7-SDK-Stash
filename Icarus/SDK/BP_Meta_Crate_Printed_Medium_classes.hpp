#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x16 (0x7A0 - 0x78A)
// BlueprintGeneratedClass BP_Meta_Crate_Printed_Medium.BP_Meta_Crate_Printed_Medium_C
class ABP_Meta_Crate_Printed_Medium_C : public ABP_DeployableContainerBase_C
{
public:
	uint8                                        Pad_68B0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x790(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioOcclusionComponent*              AudioOcclusion1;                                   // 0x798(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Meta_Crate_Printed_Medium_C* GetDefaultObj();

	void OnBecomeInteractedWith();
	void OnNoLongerInteractedWith();
	void ExecuteUbergraph_BP_Meta_Crate_Printed_Medium(int32 EntryPoint);
};

}


