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

// 0x18 (0x18 - 0x0)
// UserDefinedStruct S_InventoryPanelData.S_InventoryPanelData
struct FS_InventoryPanelData
{
public:
	enum class E_InventoryPanels                 Panel_8_7CCC2268410760DAAC39EBAD0653A947;          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1522[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Size_11_A8AE60F14347362DC3173A982119919E;          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_ItemData>                   ArrayData_16_FAAFC694493382596F6051B5A32DCE45;     // 0x8(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
};

}


