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

// 0x28 (0x28 - 0x0)
// UserDefinedStruct S_Atmosphere.S_Atmosphere
struct FS_Atmosphere
{
public:
	int32                                        AtmosphereMinusDensity_2_38FCCB1B4982100A4A423AAF5E7D9FFF; // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AtmosphereMinusHaze_7_67C6211C468EAC3C88C12A939A8CC595; // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AtmosphereMinusViewDistance_9_A7135D614893BFDEFBEDAF9321F6E6BC; // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AtmosphereMinusFalloff_10_536B32E64033120C84D084B75BF98FD2; // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AtmosphereMinusBrightness_20_58F85F834FCB4A265083F1B6D8BC7464; // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AtmosphereMinusUltraClear_31_DAE73D424E5838A23A9916A2DA2DE496; // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FRealmPlacementRequirement>    Realm_Placement_Requirement_16_A494EF644D54B07E9418FF90054EA762; // 0x18(0x10)(Edit, BlueprintVisible)
};

}


