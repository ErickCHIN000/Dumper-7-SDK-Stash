#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x208 (0x780 - 0x578)
// BlueprintGeneratedClass BP_SkeletalItem_Shield_Back.BP_SkeletalItem_Shield_Back_C
class ABP_SkeletalItem_Shield_Back_C : public ASkeletalItem
{
public:
	uint8                                        Pad_5FE0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x580(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x588(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FItemData                             ShieldItem;                                        // 0x590(0x1F0)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class ABP_SkeletalItem_Shield_Back_C* GetDefaultObj();

	void OnRep_Item_Data();
	void OnLoaded_80ED98D14DF2AA1232DDA287390DB216(class UObject* Loaded);
	void UpdateShieldItem();
	void IcarusBeginPlay();
	void ExecuteUbergraph_BP_SkeletalItem_Shield_Back(int32 EntryPoint, class UObject* K2Node_CustomEvent_Loaded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* Temp_object_Variable, class USkeletalMesh* K2Node_DynamicCast_AsSkeletal_Mesh, bool K2Node_DynamicCast_bSuccess, const struct FMeshableData& CallFunc_GetMeshableData_MeshableData, enum class EDataValid CallFunc_GetMeshableData_Paths, bool K2Node_SwitchEnum_CmpSuccess);
};

}


