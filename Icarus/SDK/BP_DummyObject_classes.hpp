#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x419 (0x6D9 - 0x2C0)
// BlueprintGeneratedClass BP_DummyObject.BP_DummyObject_C
class ABP_DummyObject_C : public AIcarusActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x2D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FItemData                             Item;                                              // 0x2E0(0x1F0)(Edit, BlueprintVisible, Net, RepNotify, ContainsInstancedReference)
	int32                                        ItemLocation;                                      // 0x4D0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_204A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventory*                            ItemInventory;                                     // 0x4D8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    NewMaterial;                                       // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemData                             LocalItem;                                         // 0x4E8(0x1F0)(Edit, BlueprintVisible, ContainsInstancedReference)
	bool                                         SkeletalSet;                                       // 0x6D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_DummyObject_C* GetDefaultObj();

	void UpdateVisibility(bool Visibility, bool CallFunc_Not_PreBool_ReturnValue);
	void CreateLocal(const struct FItemData& Item, enum class EDataValid CallFunc_ItemDataValid_Paths, const struct FMeshableData& CallFunc_GetMeshableData_MeshableData, enum class EDataValid CallFunc_GetMeshableData_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1);
	void Create(const struct FMeshableData& CallFunc_GetMeshableData_MeshableData, enum class EDataValid CallFunc_GetMeshableData_Paths, bool K2Node_SwitchEnum_CmpSuccess, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess_1);
	void SetState(enum class EProcessorPreview Preview, bool K2Node_SwitchEnum_CmpSuccess);
	void OnRep_Item();
	void OnLoaded_F290FD0849F356AD3452B8A99B8E0F60(class UObject* Loaded);
	void LoadItemMesh(TSoftObjectPtr<class UObject> MeshToLoad);
	void ReceiveBeginPlay();
	void Initilaise(const struct FItemData& Item, int32 Location, class UInventory* Inventory);
	void ExecuteUbergraph_BP_DummyObject(int32 EntryPoint, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess, class USkeletalMesh* K2Node_DynamicCast_AsSkeletal_Mesh, bool K2Node_DynamicCast_bSuccess_1, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue_3, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, TSoftObjectPtr<class UObject> K2Node_CustomEvent_MeshToLoad, const struct FItemData& K2Node_CustomEvent_Item, int32 K2Node_CustomEvent_Location, class UInventory* K2Node_CustomEvent_Inventory, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_SetStaticMesh_ReturnValue);
};

}


