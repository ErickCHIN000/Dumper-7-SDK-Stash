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

// 0xFC (0xFC - 0x0)
// UserDefinedStruct Struct_NPC_StationInfo.Struct_NPC_StationInfo
struct FStruct_NPC_StationInfo
{
public:
	enum class Enum_StationType                  StationType_23_C98ECEF54E6FDE768185B9983174BD59;   // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_358[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_NPC_StationMontages           RegularAnimations_20_B6ECE3FD4AAA0D5AA5120E940DA49025; // 0x8(0x51)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_35A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_NPC_StationMontages           LinkedStationAnimations_19_52A050FD43923B4E27205F96FBC41F51; // 0x60(0x51)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_35B[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform_10_A316F4E54CBECF7EF75D1F804BCA4102;     // 0xC0(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FVector2D                             DurationRangeMinMax_13_93B674F746B095E2F06E18B689CE6C92; // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowPlayerInteraction_25_4BF03373434B3A4FB65923A995BE8739; // 0xF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseStationOnce_30_5AD46A7748BE331F01026FA7B22639FE; // 0xF9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         PlayAnimationOnce_29_994E46CD433677A0D9C14C82ED58EDCB; // 0xFA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseStationHUDPosition_32_8FEF985A4BD977051C4E14A09D8BAF21; // 0xFB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}


