#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x648 - 0x638)
// BlueprintGeneratedClass BP_SkeletalItem_Wood_Rag_Torch.BP_SkeletalItem_Wood_Rag_Torch_C
class ABP_SkeletalItem_Wood_Rag_Torch_C : public ABP_SkeletalItem_Wood_Flare_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x638(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  SM_TorchRag_FireShell;                             // 0x640(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SkeletalItem_Wood_Rag_Torch_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SetItemVisible(bool bVisible);
	void LightUpdated();
	void ExecuteUbergraph_BP_SkeletalItem_Wood_Rag_Torch(int32 EntryPoint, bool K2Node_Event_bVisible, bool CallFunc_IsLit_Lit);
};

}


