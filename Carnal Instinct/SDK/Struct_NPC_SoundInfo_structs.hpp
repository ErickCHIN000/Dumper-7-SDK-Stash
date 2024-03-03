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
// UserDefinedStruct Struct_NPC_SoundInfo.Struct_NPC_SoundInfo
struct FStruct_NPC_SoundInfo
{
public:
	class USoundBase*                            Sound_2_2C63D3E74E8F47C2C1442388DDEA1E76;          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Volume_5_D38974A5493B16460E643B84F26B8AD3;         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Pitch_7_BF4B282341E6F9ACF28F948411B2BD51;          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartTime_9_3132F52E43CB8805B9F922960EA30674;      // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13DE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundAttenuation*                     SoundAttenuation_14_8C2A3BF641E049EB097E8C8A1D5824D7; // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundConcurrency*                     SoundConcurrency_17_FB4AB27246BD15E3A2E6DA9DBCF3CD36; // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


