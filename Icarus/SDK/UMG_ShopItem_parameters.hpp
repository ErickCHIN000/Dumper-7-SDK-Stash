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

// 0x30 (0x30 - 0x0)
// Function UMG_ShopItem.UMG_ShopItem_C.UpdateVisuals
struct UUMG_ShopItem_C_UpdateVisuals_Params
{
public:
	bool                                         Hovered;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50D6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_Select_Default;                             // 0x8(0x28)(None)
};

// 0x3F0 (0x3F0 - 0x0)
// Function UMG_ShopItem.UMG_ShopItem_C.ExecuteUbergraph_UMG_ShopItem
struct UUMG_ShopItem_C_ExecuteUbergraph_UMG_ShopItem_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5257[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5265[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMetaResource                         CallFunc_Array_Get_Item;                           // 0x18(0x18)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5277[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item_1;                         // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5281[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMetaItem                             K2Node_MakeStruct_MetaItem;                        // 0x50(0x40)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5287[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_ConvertToItem_ReturnValue;                // 0x98(0x1F0)(ContainsInstancedReference)
	struct FItemableData                         CallFunc_GetItemableData_ItemableData;             // 0x288(0xE8)(None)
	enum class EDataValid                        CallFunc_GetItemableData_Paths;                    // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5295[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_MetaWorkshopCost_C*               CallFunc_Create_ReturnValue;                       // 0x378(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x380(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHorizontalBoxSlot*                    CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x388(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x390(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52B0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             CallFunc_Get_Icon_or_Missing_Output;               // 0x398(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x3C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52BE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x3C8(0x18)(None)
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue_1;                // 0x3E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue_2;                // 0x3E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function UMG_ShopItem.UMG_ShopItem_C.Purchase__DelegateSignature
struct UUMG_ShopItem_C_Purchase__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


