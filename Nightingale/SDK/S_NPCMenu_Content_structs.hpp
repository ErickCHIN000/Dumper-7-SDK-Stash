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

// 0x30 (0x30 - 0x0)
// UserDefinedStruct S_NPCMenu_Content.S_NPCMenu_Content
struct FS_NPCMenu_Content
{
public:
	enum class E_ui_NPCMenus                     MenuType_5_1D0090984FBAB9D8030DAB9337F563A0;       // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_45CE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  OptionalMinusMenuName_11_F092A2B34FD8A6C061CFAA862A3DEB58; // 0x8(0x18)(Edit, BlueprintVisible)
	TArray<struct FDataTableRowHandle>           AvailableContent_13_8B4A5D0E4B0F2F2C3B05F7BA94300022; // 0x20(0x10)(Edit, BlueprintVisible)
};

}


