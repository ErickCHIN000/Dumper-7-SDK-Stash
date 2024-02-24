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

// 0x44 (0x44 - 0x0)
// UserDefinedStruct MaterialSet.MaterialSet
struct FMaterialSet
{
public:
	class FString                                MaterialName_24_8EC99390450E125046A13891D5D6AA78;  // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	enum class EMaterialSlot                     MaterialType_19_89702AAB40093D038C1E1890759BD0A6;  // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DAF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MaterialUniqueShortName_27_054530BA4E6ABC3F1CEEC68FA6F3C425; // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FLinearColor                          BaseColor_5_11BA726F45870A41A0855A884940F9EA;      // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RoughnessBias_12_C7A4B7C242C8086A64EDD5AD1ADA76C6; // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MetallicValue_31_76A759384C7F915E28CEDDA4F7525C09; // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EmissivePower_30_B8A5B76F43F8625BE8E29BB4688397A3; // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


