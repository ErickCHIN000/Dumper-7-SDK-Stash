#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x270 - 0x258)
// BlueprintGeneratedClass bp_bast_corpse.bp_bast_corpse_C
class Abp_bast_corpse_C : public ABP_BASE_INTERACTABLE_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UDecalComponent*                       Decal;                                             // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  NewVar_0;                                          // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Abp_bast_corpse_C* GetDefaultObj();

	void Game_Load();
	void Spawn_Ded();
	void ExecuteUbergraph_bp_bast_corpse(int32 EntryPoint, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
};

}


