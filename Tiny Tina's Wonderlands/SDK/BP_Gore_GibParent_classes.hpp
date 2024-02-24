#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x470 - 0x458)
// BlueprintGeneratedClass BP_Gore_GibParent.BP_Gore_GibParent_C
class ABP_Gore_GibParent_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x458(0x8)(Transient, DuplicateTransient)
	class USceneComponent*                       Scene;                                             // 0x460(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UImpactFXManagerComponent*             ImpactFXManager;                                   // 0x468(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Gore_GibParent_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Gore_GibParent(int32 EntryPoint, class UMeshComponent* CallFunc_GetComponentByClass_ReturnValue);
};

}


