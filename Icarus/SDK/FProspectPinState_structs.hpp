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

// 0x2E5 (0x2E5 - 0x0)
// UserDefinedStruct FProspectPinState.FProspectPinState
struct FFProspectPinState
{
public:
	enum class E_ProspectState                   ProspectState_21_77302F9747CF42F9231981914F4278C6; // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5008[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          ButtonStyle_25_82FF3768457743DFA3406CBC1FB34981;   // 0x8(0x278)(Edit, BlueprintVisible)
	TMap<enum class E_ButtonState, struct FSlateColor> TextColour_31_C1382A194CA2E0AE03F027AC5FDCE061;    // 0x280(0x50)(Edit, BlueprintVisible)
	struct FLinearColor                          BorderColour_35_ABF007D4440E3A0BDDD95896FD7C3B7C;  // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  JoinVisible_45_21D89ACF4A20B200439508BC99964E41;   // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  HostVisible_46_24CFEB9A4312E03B5AD0E48240AE93C5;   // 0x2E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  LoadVisible_42_6BEACC0744A9786709634899EB1F9726;   // 0x2E2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  ClaimVisible_44_C06324EA4B58DA1369E5EB8D1A0F7660;  // 0x2E3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  EndVisible_48_F0DFF6CF42FDEDD17F79358AA00E49B6;    // 0x2E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


