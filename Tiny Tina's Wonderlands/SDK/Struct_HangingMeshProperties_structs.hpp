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

// 0x68 (0x68 - 0x0)
// UserDefinedStruct Struct_HangingMeshProperties.Struct_HangingMeshProperties
struct FStruct_HangingMeshProperties
{
public:
	class UStaticMesh*                           Mesh_5_6C28BC1F4FC70895F2E9AF9DE830DE26;           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    MaterialOverride_8_E61931B54ECAA2B81458BDBA204CB519; // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MeshCount_34_3D28F5A846D7A9D5B93BA6AD4A72B34F;     // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RandomMask_37_D81F4F1440FCB5C16D64798EDB11857D;    // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               OffsetLocalSpace_11_679F916D4948487E90EA96963449DB2C; // 0x18(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ClipDistance_14_0ED0BC4A43430729686BCAB8BE7953EF;  // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OffsetAlongSpline_31_8BBDB4CB4B210FC5BCB09B886E311B76; // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Jitter_29_5519E9E24AED5FA659A758946F6387E6;        // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              InitialRotation_24_44D102554E241665CC8B2AAAA0F1A1EB; // 0x30(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FRotator                              RandomRotation_17_3D84501B47CFD6CE4C620A9429D7CD4E; // 0x3C(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FVector                               InitialScale_25_B2D02F94461821A9DE66FB8C34B60ABF;  // 0x48(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RandomScale_26_52070B4E43CFB28A70E2AEB41AE6896B;   // 0x54(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           ScaleCurve_40_96B8D0574686BE5EA42002838E5C5774;    // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


