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

// 0x68 (0x68 - 0x0)
// UserDefinedStruct struct_DialogueSingleOptionData.struct_DialogueSingleOptionData
struct FStruct_DialogueSingleOptionData
{
public:
	class FText                                  Prompt_2_BE684A354FAD2F86B2C18EBC6F44DBE7;         // 0x0(0x18)(Edit, BlueprintVisible)
	class FText                                  Thoughts_4_1E97B1BA40E6BCF27E73ECAC1D6E199E;       // 0x18(0x18)(Edit, BlueprintVisible)
	class FText                                  DisabledText_7_BC30887B4B0D3CC1A28CC196790A41CB;   // 0x30(0x18)(Edit, BlueprintVisible)
	bool                                         Enabled_9_6D1608754DB328A7495A6182EA7E58DC;        // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_19AC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogueItemInfo                     ItemInfo_12_752822E7430AD6C02EE2CBBA1952B828;      // 0x50(0x18)(Edit, BlueprintVisible)
};

}


