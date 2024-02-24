#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x184 (0x1B4 - 0x30)
// BlueprintGeneratedClass DA_ExplodingObject.DA_ExplodingObject_C
class UDA_ExplodingObject_C : public UGbxDataAssetBlueprintable
{
public:
	int32                                        DamageTypes;                                       // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_304C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           Mesh;                                              // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     Material;                                          // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OverrideMaterialsByElement;                        // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3053[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class Enum_ExplodingObjectDamage, class UMaterialInstance*> ElementalMaterials;                                // 0x50(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UStaticMesh*>                   RemnantMesh;                                       // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<enum class Enum_ExplodingObjectDamage, class UMaterialInstance*> RemnantMaterial;                                   // 0xB0(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<enum class Enum_ExplodingObjectDamage, class UDA_ExplodingObjectPresentation_C*> Explosion;                                         // 0x100(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<enum class Enum_ExplodingObjectDamage, class UStaticMesh*> AttachedMeshes;                                    // 0x150(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UItemPoolListData*                     ItemPool;                                          // 0x1A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SimulatePhysics;                                   // 0x1A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_305B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FuseDuration;                                      // 0x1AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ExplodedDuration;                                  // 0x1B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UDA_ExplodingObject_C* GetDefaultObj();

};

}


