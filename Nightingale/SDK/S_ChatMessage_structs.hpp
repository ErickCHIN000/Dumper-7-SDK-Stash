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

// 0x20 (0x20 - 0x0)
// UserDefinedStruct S_ChatMessage.S_ChatMessage
struct FS_ChatMessage
{
public:
	enum class E_ChatMessageType                 Type_17_80BE729B426CF6258A807DAD34194517;          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2491[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ChannelID_6_CEF5DFD746A69CDB8F1BF898341A9A5F;      // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FromSocialID_16_CB5180144D044B121F03208DA9130661;  // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2494[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Message_12_C7E2300F4B17A97F3E06A7B3EAF6B17E;       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
};

}


