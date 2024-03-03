#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x298 - 0x27C)
// BlueprintGeneratedClass bp_dlg_proxy_mesh.bp_dlg_proxy_mesh_C
class Abp_dlg_proxy_mesh_C : public Abp_dlg_proxy_base_C
{
public:
	uint8                                        Pad_2072[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USkeletalMeshComponent*                Proxy_mesh;                                        // 0x288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     Fake_capsule;                                      // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Abp_dlg_proxy_mesh_C* GetDefaultObj();

	void Custom_proxy_init();
	void ExecuteUbergraph_bp_dlg_proxy_mesh(int32 EntryPoint, TArray<class USkeletalMeshComponent*>& K2Node_MakeArray_Array);
};

}


