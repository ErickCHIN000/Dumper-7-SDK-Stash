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

// 0x50 (0x50 - 0x0)
// UserDefinedStruct SerializedActorWithInventories.SerializedActorWithInventories
struct FSerializedActorWithInventories
{
public:
	class UClass*                                ActorClass_2_C873BF97458B7739AFBE82B4CCB84558;     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C82[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ActorTrans_5_9CA8722F4AC8E716DAE1418A5BAF4F30;     // 0x10(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	TArray<struct FSerializedInventory>          Inventories_9_C0D9F9864E4C065B5B659584B4C9CF23;    // 0x40(0x10)(Edit, BlueprintVisible)
};

}


