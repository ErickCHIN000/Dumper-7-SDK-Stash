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

// 0x3C (0x3C - 0x0)
// UserDefinedStruct S_CameraResponse.S_CameraResponse
struct FS_CameraResponse
{
public:
	enum class E_LocationShakeMode               LocShakeMode_15_433311AF47333B2DF8E66C9D752D78D8;  // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2081[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class ULegacyCameraShake>      LocShakeClass_4_6C63E322451D17AAFC368A988BC614AF;  // 0x8(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	float                                        LocShakeInnerRadius_6_CAE0B1534FFF3F69E452BD9908681810; // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LocShakeOuterRadius_8_47E47A78448D2EF93BC6D0B65730052C; // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LocShakeFalloff_10_887587C8439557157C021995257F55F5; // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


