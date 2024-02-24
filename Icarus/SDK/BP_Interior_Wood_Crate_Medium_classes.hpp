#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E (0x7A8 - 0x78A)
// BlueprintGeneratedClass BP_Interior_Wood_Crate_Medium.BP_Interior_Wood_Crate_Medium_C
class ABP_Interior_Wood_Crate_Medium_C : public ABP_DeployableContainerBase_C
{
public:
	uint8                                        Pad_2013[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x790(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioOcclusionComponent*              AudioOcclusion1;                                   // 0x798(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_UIProjectionLocation_C*            BP_UIProjectionLocation;                           // 0x7A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Interior_Wood_Crate_Medium_C* GetDefaultObj();

	void OnBecomeInteractedWith();
	void OnNoLongerInteractedWith();
	void ExecuteUbergraph_BP_Interior_Wood_Crate_Medium(int32 EntryPoint);
};

}


