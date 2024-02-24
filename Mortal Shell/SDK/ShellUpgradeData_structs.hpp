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

// 0x88 (0x88 - 0x0)
// UserDefinedStruct ShellUpgradeData.ShellUpgradeData
struct FShellUpgradeData
{
public:
	class FText                                  Title_9_48C8B3434DDBECABB96D7ABB77111C64;          // 0x0(0x18)(Edit, BlueprintVisible)
	class FText                                  Description_10_449CCBEC41FCBB87F8FF0499D3B23EBE;   // 0x18(0x18)(Edit, BlueprintVisible)
	class FText                                  DescriptionOnPurchase_31_CA0A0399435757F60C96439596D2B0DE; // 0x30(0x18)(Edit, BlueprintVisible)
	int32                                        BondingCost_26_F40FD07B45895C80EFD6BE844BEDFC14;   // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        UpgradeCost_28_36410E694B2CB7E9B978219C16AC70E8;   // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLockedInPressPreview__42_3B017F7C4491D7DF82F98988F0BD4DF8; // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_19FE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DescriptionIfPressPreview_44_806EF0EF4FF7061B46C6DC815DC2B6F4; // 0x58(0x18)(Edit, BlueprintVisible)
	class USoundCue*                             VO_47_A37CC0FB45CE0099AE0597BFF8E3257A;            // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Glyph_Inactive_50_B42C79694ECF5F0E96C723808560E8F0; // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Glyph_Active_52_FFBEEE9448D9A58070D714A751FADB61;  // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


