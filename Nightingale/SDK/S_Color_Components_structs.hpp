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
// UserDefinedStruct S_Color_Components.S_Color_Components
struct FS_Color_Components
{
public:
	int32                                        Sun_Color_7_6D82936A4A45F5F086ABECA6CB78165B;      // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Rayleigh_Color_10_41C0C40C491028476F1C1C9645AEE8A4; // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Sky_Luminance_Color_16_2517B23045FF4F084A3E5AA2204FFAC4; // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Fog_Color_12_80759543403A00BAB0EA749F7817F48D;     // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MiE_Color_14_4E30A866499232B0BD7C82951994A5D2;     // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C4B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRealmPlacementRequirement>    Realm_Placement_Requirement_21_8558C2EF440E8C4BA5FF1189AD0B2951; // 0x18(0x10)(Edit, BlueprintVisible)
};

}


