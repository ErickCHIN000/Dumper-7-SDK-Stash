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

// 0x98 (0x98 - 0x0)
// UserDefinedStruct ClothingSettings.ClothingSettings
struct FClothingSettings
{
public:
	class USkeletalMesh*                         MaleMesh_55_C39419A54F846168C8ACC7B8047249B8;      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         FemaleMesh_56_759E5B484609B6B259ECB5ACB9BFA58A;    // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         UpdateAllBodyParts__62_67FB43564F6CE0C89955899C911D08E8; // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_157F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBodyPartSettings                     BodyPartSettings_60_19AFB636484813B2DE1483A03355E921; // 0x18(0x80)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
};

}


