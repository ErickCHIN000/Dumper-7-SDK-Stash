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

// 0xA8 (0xA8 - 0x0)
// UserDefinedStruct S_EncounterAVFXParams.S_EncounterAVFXParams
struct FS_EncounterAVFXParams
{
public:
	struct FTransform                            VFXLocation_14_96D57A4546F889BD0B57CD80A836CF82;   // 0x0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          VFXBaseColor_5_0B39C94745FFAEB6B6D19FBF6A50A9D6;   // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFXScale_8_41F2C8414695CB1303F26FBB70552889;       // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SFXLocation_19_CDF5FFF449FE986235E01A9D15B7C57F;   // 0x78(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       SFXMultipositions_21_C26BD6734A975C819F4E569C5FD275B4; // 0x90(0x10)(Edit, BlueprintVisible)
	class UScopedAkComponent*                    ScopedAkComponent_25_B033BBED4020A89B716B729CAC5FC1AE; // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}


