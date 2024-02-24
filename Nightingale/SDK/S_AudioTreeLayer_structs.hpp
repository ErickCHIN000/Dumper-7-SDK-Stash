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

// 0x89 (0x89 - 0x0)
// UserDefinedStruct S_AudioTreeLayer.S_AudioTreeLayer
struct FS_AudioTreeLayer
{
public:
	int32                                        TreeCount_41_19AEA741492319F3BDF96EAE92B31BA1;     // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2640[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkComponent*                          AkComponent_43_B69597F24E5C282D258BF1B27291AC78;   // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        TreeDensity_42_149243EC40CDBA7DC40ED3B76DA886F7;   // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_264B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               AverageTreePosition_44_8EE135F648DC74DE54BAF9A0B91C66F2; // 0x18(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_AudioTreeData                      Trees_77_D158BAD240484C297BF41194F9E054C7;         // 0x30(0x30)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         IsAkComponentActive_48_467C12334A91F5A8564B2181004A6763; // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2660[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         AkPlayEvent_58_6664EF944110F2447CBD10A2F2944C7C;   // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         AkStopEvent_55_ADEE7F004917EECB87FFE5B4CD432424;   // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkRtpc*                               DensityRTPC_84_9444947E4F7ED9380B1A7FA088C58AA3;   // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkRtpc*                               AverageTreeDistanceRTPC_85_B0329B43445FA84298390FA12A822173; // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Debug_63_DC67FE0D466638115111579E38112EC2;         // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


