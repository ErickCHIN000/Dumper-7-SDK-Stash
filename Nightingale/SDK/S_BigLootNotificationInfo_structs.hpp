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

// 0xC0 (0xC0 - 0x0)
// UserDefinedStruct S_BigLootNotificationInfo.S_BigLootNotificationInfo
struct FS_BigLootNotificationInfo
{
public:
	float                                        DisplayTime_26_BE1901F94266BE7360887CAE26485220;   // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RemoveManually_27_3C9EFAD240E41EAA5F4329974CC360BA; // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4875[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Icon_28_E18F0E0A42B8957F55617586AFE8F756;          // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  Headline_29_C8CCA288499FEE3D59E8B9B5641234C5;      // 0x10(0x18)(Edit, BlueprintVisible)
	class FText                                  Content_31_3588B455476C29607A7EFA94256E14EE;       // 0x28(0x18)(Edit, BlueprintVisible)
	struct FLinearColor                          IconFrameColor_32_C0B3F2A54F5CD051F3A42DA3F14D1EC4; // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          HeadlineFrameColor_33_CEB7F9F4418F7137A676F4958F31222D; // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Particles_35_99D9BF2F4BAAA85DE65D2885DE8C7009;     // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4888[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ParticlesColor_34_00E1836544A508115D2545B0C4A75B2E; // 0x64(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ToolTipLeft_37_78D2FF194BD680DCADC9469316FD17A0;   // 0x74(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4891[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ToolTipLeftText_38_14A58EA8452A5A139C9908A464D81D02; // 0x78(0x18)(Edit, BlueprintVisible)
	class UObject*                               ToolTipLeftIcon_39_04887EA94FED9752CC2280852BAF830F; // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         ToolTipRight_40_BA9258244AC5173C9677A88F2B6D9F25;  // 0x98(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4898[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ToolTipRightText_41_1248788749E187C71D6F408C2DDACE33; // 0xA0(0x18)(Edit, BlueprintVisible)
	class UObject*                               ToolTipRightIcon_42_652E09EB4835A9E433DED8A6E7286A4E; // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}


