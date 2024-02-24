#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x231 - 0x220)
// BlueprintGeneratedClass BP_WraithSpell_DestructibleIcicle.BP_WraithSpell_DestructibleIcicle_C
class ABP_WraithSpell_DestructibleIcicle_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UDestructibleComponent*                Destructible;                                      // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Obsidian;                                          // 0x230(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class ABP_WraithSpell_DestructibleIcicle_C* GetDefaultObj();

	void UserConstructionScript();
	void Destroy(class UDestructibleMesh* Mesh);
	void ExecuteUbergraph_BP_WraithSpell_DestructibleIcicle(int32 EntryPoint, class UDestructibleMesh* K2Node_CustomEvent_Mesh, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
};

}


