#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xA38 - 0xA28)
// BlueprintGeneratedClass BP_Structure_Functional.BP_Structure_Functional_C
class ABP_Structure_Functional_C : public ABP_Structure_Constructed_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  BaseMesh;                                          // 0xA30(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Structure_Functional_C* GetDefaultObj();

	class UStaticMeshComponent* GetEntitySupportMesh();
	struct FGameplayTag GetIdentifierTag();
	void GetSupportMesh(class UStaticMeshComponent** SupportMesh);
	void GetCacheParameters(bool* bCanCache, bool* bCanWithdraw);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Structure_Functional(int32 EntryPoint);
};

}


