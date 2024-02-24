#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x90 - 0x0)
// Function wid_DialogueItemInfo_Entry.wid_DialogueItemInfo_Entry_C.GetCategoryColour
struct UWid_DialogueItemInfo_Entry_C_GetCategoryColour_Params
{
public:
	enum class EItemCategory                     Category;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_511[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           SlateColor;                                        // 0x8(0x28)(Parm, OutParm, UObjectWrapper)
	bool                                         Valid;                                             // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_51A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSt_Inventory_Category                CallFunc_GetDataTableRowFromName_OutRow;           // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_526[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x68(0x28)(UObjectWrapper)
};

// 0x4D2 (0x4D2 - 0x0)
// Function wid_DialogueItemInfo_Entry.wid_DialogueItemInfo_Entry_C.Update
struct UWid_DialogueItemInfo_Entry_C_Update_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_586[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemEntry                            ItemInfo;                                          // 0x10(0x150)(Edit, BlueprintVisible)
	float                                        StoredAmountValue;                                 // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InventoryAmountValue;                              // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x169(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x16A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x16B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_59E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           CallFunc_GetCategoryColour_SlateColor;             // 0x170(0x28)(UObjectWrapper)
	bool                                         CallFunc_GetCategoryColour_Valid;                  // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_FormatText_Output;                        // 0x1A0(0x18)(None)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventoryComponent2*                  CallFunc_GetCGPlayerInventory_InventoryComponentNew; // 0x1C0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetItemInfo_IsValid;                      // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5AD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemEntry                            CallFunc_GetItemInfo_ReturnValue;                  // 0x1D0(0x150)(None)
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue;             // 0x320(0x18)(None)
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue_1;           // 0x338(0x18)(None)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x350(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventoryComponent2*                  CallFunc_GetCGPlayerInventory_InventoryComponentNew_1; // 0x358(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Count_ReturnValue;                        // 0x360(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Count_ReturnValue_1;                      // 0x364(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventoryComponent2*                  CallFunc_GetCGPlayerInventory_InventoryComponentNew_2; // 0x368(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetItemInfo_IsValid_1;                    // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B6[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemEntry                            CallFunc_GetItemInfo_ReturnValue_1;                // 0x380(0x150)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x4D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x4D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


