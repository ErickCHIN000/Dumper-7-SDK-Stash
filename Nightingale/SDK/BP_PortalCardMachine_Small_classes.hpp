#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3D8 - 0x3D0)
// BlueprintGeneratedClass BP_PortalCardMachine_Small.BP_PortalCardMachine_Small_C
class ABP_PortalCardMachine_Small_C : public ABP_PortalCardMachine_C
{
public:
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x3D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PortalCardMachine_Small_C* GetDefaultObj();

	void ReturnMeshToHighlight(const struct FInteractionData& InteractionData, TArray<class UStaticMeshComponent*>* StaticMesh_to_Highlight, TArray<class USkeletalMeshComponent*>* SkeletalMesh_to_Highlight, bool* Hostile_, enum class EItemQuality* Quality, TArray<class UStaticMeshComponent*>& K2Node_MakeArray_Array);
};

}


