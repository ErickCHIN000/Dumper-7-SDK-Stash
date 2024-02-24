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

// 0x1C (0x1C - 0x0)
// UserDefinedStruct SGirl_Progress.SGirl_Progress
struct FSGirl_Progress
{
public:
	int32                                        SpawnIteration_2_9A3B9B74458C12B9203AADA625688DCB; // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GirlSpawned_7_5966C4C3427C0BA7BC214799C2C7DF08;    // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F4D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeFromGirlSpawn_9_DB62B76B46B0DE181AEAD09C37955ADA; // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RechargingForNextIteration_14_6FFA9C2E4674EA431D4F6999D81769F5; // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReadyForIteration_15_B411A20C448E5C1B1C5D2581F846EC52; // 0xD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F4F[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGirlAiCharacter_C*                    Girl_23_125D1DF84E481AE7E3AEEBAB759856F9;          // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeFromGirlDeath_21_72C9096F4D45CA58D684BDB692A2E0F7; // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


