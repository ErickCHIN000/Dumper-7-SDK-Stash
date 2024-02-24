#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x5C0 - 0x5B0)
// BlueprintGeneratedClass BP_SkeletalItem_Scanner_DeepOre.BP_SkeletalItem_Scanner_DeepOre_C
class ABP_SkeletalItem_Scanner_DeepOre_C : public ABP_SkeletalItem_Scanner_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                      ScreenWidget;                                      // 0x5B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SkeletalItem_Scanner_DeepOre_C* GetDefaultObj();

	class UWidgetComponent* GetScreenWidget();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SkeletalItem_Scanner_DeepOre(int32 EntryPoint);
};

}


