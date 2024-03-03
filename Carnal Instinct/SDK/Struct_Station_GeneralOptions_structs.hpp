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

// 0x38 (0x38 - 0x0)
// UserDefinedStruct Struct_Station_GeneralOptions.Struct_Station_GeneralOptions
struct FStruct_Station_GeneralOptions
{
public:
	struct FVector                               AreaScale_2_A184D2F14C2E0698B27A3ABE3F2AE1D3;      // 0x0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AreaVisible_5_D876DCCB4B8D57FD6A7446ADCF8072BE;    // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         AreaHidden_7_27DE020849AA3FEC7015BB8A25FE39B9;     // 0xD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         PoseHidden_9_F38B30614A0C67BA220D2EB71E52E951;     // 0xE(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1209[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           PropMesh_15_D3E4E4484357AEC1A191B2B08D3A76FC;      // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               NavMeshvolumeScale_24_D019053743A594411E9D7E8C12BED448; // 0x18(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1212[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMesh*                         PoseMesh_17_01A07439413B6BE6C0908F82077D7FB4;      // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    PoseMaterial_20_62157C8F441A9C0FDBC475847A557FA8;  // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


