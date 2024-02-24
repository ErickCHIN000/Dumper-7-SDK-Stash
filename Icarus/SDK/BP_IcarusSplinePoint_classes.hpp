#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x540 - 0x4E0)
// BlueprintGeneratedClass BP_IcarusSplinePoint.BP_IcarusSplinePoint_C
class UBP_IcarusSplinePoint_C : public UIcarusSplinePoint
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMesh*                           RepMesh;                                           // 0x4E8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UMaterialInterface*                    RepMaterial;                                       // 0x4F0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3234[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RepTrans;                                          // 0x500(0x30)(Edit, BlueprintVisible, Net, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn)
	bool                                         Ghost;                                             // 0x530(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_3240[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    GhostMaterial;                                     // 0x538(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_IcarusSplinePoint_C* GetDefaultObj();

	void OnRep_Ghost();
	void OnRep_GhostMaterial();
	void OnRep_RepTrans();
	void OnRep_RepMaterial();
	void OnRep_RepMesh();
	void ReceiveBeginPlay();
	void Async_ReInit();
	void ExecuteUbergraph_BP_IcarusSplinePoint(int32 EntryPoint, bool CallFunc_SetStaticMesh_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult);
};

}


