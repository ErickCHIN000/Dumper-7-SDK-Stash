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

// 0x250 (0x250 - 0x0)
// Function wid_CraftingMenuEntry_03.wid_CraftingMenuEntry_03_C.SetSelected
struct UWid_CraftingMenuEntry_03_C_SetSelected_Params
{
public:
	bool                                         NewSelected;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_178F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x8(0x28)(UObjectWrapper)
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0x30(0x58)(UObjectWrapper, HasGetValueTypeHash)
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo_1;                 // 0x88(0x58)(UObjectWrapper, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0xE0(0x28)(UObjectWrapper)
	struct FSlateBrush                           CallFunc_MakeBrushFromTexture_ReturnValue;         // 0x108(0x88)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_2;                    // 0x190(0x28)(UObjectWrapper)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x1B8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x1C8(0x88)(UObjectWrapper)
};

// 0x68 (0x68 - 0x0)
// Function wid_CraftingMenuEntry_03.wid_CraftingMenuEntry_03_C.GetItemCountText
struct UWid_CraftingMenuEntry_03_C_GetItemCountText_Params
{
public:
	class UInventoryComponent2*                  Inventory;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ItemClass;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm)
	class FString                                CurrentAmount;                                     // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_Count_ReturnValue;                        // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1821[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_FloatToString_ReturnValue;           // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x50(0x18)(None)
};

// 0x3 (0x3 - 0x0)
// Function wid_CraftingMenuEntry_03.wid_CraftingMenuEntry_03_C.SetHighlighted
struct UWid_CraftingMenuEntry_03_C_SetHighlighted_Params
{
public:
	bool                                         NewHighlighted;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECraftingResult                   CanBeCrafted;                                      // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ForceNoAnimation;                                  // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function wid_CraftingMenuEntry_03.wid_CraftingMenuEntry_03_C.Update
struct UWid_CraftingMenuEntry_03_C_Update_Params
{
public:
	class UCrafting*                             CraftingComponent;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventoryComponent2*                  InventoryComponent;                                // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function wid_CraftingMenuEntry_03.wid_CraftingMenuEntry_03_C.PreConstruct
struct UWid_CraftingMenuEntry_03_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x300 (0x300 - 0x0)
// Function wid_CraftingMenuEntry_03.wid_CraftingMenuEntry_03_C.ExecuteUbergraph_wid_CraftingMenuEntry_03
struct UWid_CraftingMenuEntry_03_C_ExecuteUbergraph_wid_CraftingMenuEntry_03_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_NewHighlighted;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECraftingResult                   K2Node_CustomEvent_CanBeCrafted;                   // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_ForceNoAnimation;               // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_192C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCrafting*                             K2Node_CustomEvent_CraftingComponent;              // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventoryComponent2*                  K2Node_CustomEvent_InventoryComponent;             // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCraftingRecipe                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x18(0x108)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_194A[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemEntry                            CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x130(0x150)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1954[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x288(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x298(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x2A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0x2B8(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x2D0(0x18)(None)
	class FText                                  CallFunc_GetItemCountText_ReturnValue;             // 0x2E8(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function wid_CraftingMenuEntry_03.wid_CraftingMenuEntry_03_C.UpdateDescription__DelegateSignature
struct UWid_CraftingMenuEntry_03_C_UpdateDescription__DelegateSignature_Params
{
public:
	class FString                                Description;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

}
}


