#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x138 - 0x128)
// BlueprintGeneratedClass BP_FLODTreeComponent.BP_FLODTreeComponent_C
class UBP_FLODTreeComponent_C : public UFLODActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x128(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ATreeBase*                             OwnerTree;                                         // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_FLODTreeComponent_C* GetDefaultObj();

	bool RevealImpl(struct FTransform& Transform, bool CallFunc_IsValid_ReturnValue);
	bool ConcealingImpl(bool CallFunc_IsValid_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_FLODTreeComponent(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class ATreeBase* K2Node_DynamicCast_AsTree_Base, bool K2Node_DynamicCast_bSuccess);
};

}


