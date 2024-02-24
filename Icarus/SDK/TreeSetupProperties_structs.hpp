#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x140 (0x140 - 0x0)
// UserDefinedStruct TreeSetupProperties.TreeSetupProperties
struct FTreeSetupProperties
{
public:
	TMap<struct FBaseStatsEnum, int32>           Stats_47_FF0C329548596122663D7F8C7C4B49FC;         // 0x0(0x50)(Edit, BlueprintVisible)
	float                                        CollisionDetachThreshold_19_984D367B487128FFA0DF6AA21FD46EE1; // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CollisionDetachInvScaleMultiplier_20_84930E674CB8C94A4ECCB1ACC6B4EB82; // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DamageActionBreakEffort_21_34EE34AF45B61CDDDF2822837AC3E864; // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AngularDampingZ_22_1CDF18A54256FD0444B9FE957570A74B; // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MassRelativeCollisionDamageRatio_51_D953ABC84723C1590542569E0D57FC88; // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3446[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalMaterial*                     TreePrimitivePhysicsMaterial_23_EB9306AD4EFC5ECE3F1775A31CE86A61; // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTreeAudioDataRowHandle               AudioDataRow_24_9DB876A4407B971A19625C92CBEB2CC1;  // 0x70(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FTreePrimitiveSubdivideMeshes> SubdivedMeshSets_32_07839A424550A7C858DF458571AD9E60; // 0x88(0x50)(Edit, BlueprintVisible)
	TMap<class FString, class FName>             PrimitivesSubdivedMeshes_36_1103586647CFF7B12ADC5CB3A72DEB7C; // 0xD8(0x50)(Edit, BlueprintVisible)
	bool                                         DebugCollisions_38_C3B4E6D142F40FBA014575A629CFC403; // 0x128(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         DebugMetadata_37_150B18504CF3821821D5CABB33CD7D14; // 0x129(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3484[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          LeafPrimitivesToForceDetach_55_157CD5C2426DC12FB2CE98ABCACBEC3A; // 0x130(0x10)(Edit, BlueprintVisible)
};

}


