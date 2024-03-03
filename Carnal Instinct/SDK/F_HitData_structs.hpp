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

// 0x1F (0x1F - 0x0)
// UserDefinedStruct F_HitData.F_HitData
struct FF_HitData
{
public:
	float                                        Damage_8_8A6EEDBC4C4FFE0E3E833EA3D27F4A30;         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_240F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                DamageCauser_15_DAE0C2F84D70A3AA978C488D0BC41B87;  // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HitFromDirection_20_AC11655846381A0D6FD3C4AA496A0BD3; // 0x10(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanBeParried_3_274E7C0C472E417D7B01F3948ADFE8F7;   // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CanBeBlocked_4_D5754E264753E6392A062E9043144292;   // 0x1D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CanReceiveImpact_18_DBF6DAAF441035D475E5ED99B95573C3; // 0x1E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}


