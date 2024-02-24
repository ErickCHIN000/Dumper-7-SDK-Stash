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

// 0x25 (0x25 - 0x0)
// UserDefinedStruct S_CreatureAbilityZoneDefinition.S_CreatureAbilityZoneDefinition
struct FS_CreatureAbilityZoneDefinition
{
public:
	enum class Enum_ZoneDefinitionType           ZoneType_32_122562384C125B1B53512685F5172C0E;      // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DAB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Yaw_16_CE8D8B8E4B7B6BE9F565649BD71D94D5;           // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        YawRange_17_F7DF40C2429380D92F1E59BC505B3DBD;      // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Pitch_18_864F90744F4F164C5D8CC3B33B8C7E1A;         // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PitchRange_19_2F28792C43DE3FFEAECB3794580ABFEE;    // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinDistance_20_B41AE058421A67F10084FE93B20146A2;   // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxDistance_21_0930A5164C7ACEE01F5CF29302B3E1EF;   // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Socket_41_3D6CE2F74444CE21749CE59829C7F1C4;        // 0x1C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseSocketRotation_43_A49A0B354C44EDEC5DEC6682A0B0D205; // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


