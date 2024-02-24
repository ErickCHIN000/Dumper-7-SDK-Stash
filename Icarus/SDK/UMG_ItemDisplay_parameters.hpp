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

// 0x369 (0x369 - 0x0)
// Function UMG_ItemDisplay.UMG_ItemDisplay_C.Setup
struct UUMG_ItemDisplay_C_Setup_Params
{
public:
	struct FItemsStaticRowHandle                 Item;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FItemableRowHandle                    Itemable;                                          // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             Temp_wildcard_Variable;                            // 0x30(0x28)(HasGetValueTypeHash)
	struct FItemableData                         CallFunc_GetItemableStruct_Itemable;               // 0x58(0xE8)(None)
	enum class EValid                            CallFunc_GetItemableStruct_Paths;                  // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue;             // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x142(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_19D5[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             K2Node_MakeStruct_ItemData;                        // 0x148(0x1F0)(ContainsInstancedReference)
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetItemIcon_Icon;                         // 0x338(0x28)(HasGetValueTypeHash)
	class UUMG_ItemPopup_C*                      CallFunc_Create_ReturnValue;                       // 0x360(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Show_for_Item_Shown;                      // 0x368(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_ItemDisplay.UMG_ItemDisplay_C.PreConstruct
struct UUMG_ItemDisplay_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function UMG_ItemDisplay.UMG_ItemDisplay_C.ExecuteUbergraph_UMG_ItemDisplay
struct UUMG_ItemDisplay_C_ExecuteUbergraph_UMG_ItemDisplay_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


