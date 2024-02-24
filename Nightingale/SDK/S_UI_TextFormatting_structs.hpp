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

// 0x40 (0x40 - 0x0)
// UserDefinedStruct S_UI_TextFormatting.S_UI_TextFormatting
struct FS_UI_TextFormatting
{
public:
	enum class E_UI_TypeFaces                    FontStyle_8_DD83741F44426E68C66470AEC2D85BFD;      // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A51[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TextSize_7_6BA03A5644C4FE2E46837A9555352D1E;       // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETextJustify                      Alignment_6_958FACC14B5FB82F34E848AD4F2E60BE;      // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A61[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              Padding_17_509D32694D7F7DC115E1E885FBC05150;       // 0x10(0x20)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TextColor_22_CD6859DF4352BF2EEB2E6FB43B1A4EEB;     // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


