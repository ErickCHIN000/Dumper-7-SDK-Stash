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

// 0x18 (0x18 - 0x0)
// Function WBP_ShopOfferItemDetails.WBP_ShopOfferItemDetails_C.UpdateDescription
struct UWBP_ShopOfferItemDetails_C_UpdateDescription_Params
{
public:
	class FText                                  CallFunc_GetItemDescription_ReturnValue;           // 0x0(0x18)(None)
};

// 0x135 (0x135 - 0x0)
// Function WBP_ShopOfferItemDetails.WBP_ShopOfferItemDetails_C.UpdateAttributeModifiers
struct UWBP_ShopOfferItemDetails_C_UpdateAttributeModifiers_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46A8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_Shop_sw_AttributeRow_C*           CallFunc_Create_ReturnValue;                       // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46AA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46AC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeValueAndUIData              CallFunc_Array_Get_Item;                           // 0x30(0x100)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x134(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x135 (0x135 - 0x0)
// Function WBP_ShopOfferItemDetails.WBP_ShopOfferItemDetails_C.UpdateAttributes
struct UWBP_ShopOfferItemDetails_C_UpdateAttributes_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46D0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_Shop_sw_AttributeRow_C*           CallFunc_Create_ReturnValue;                       // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46D2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46D4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeValueAndUIData              CallFunc_Array_Get_Item;                           // 0x30(0x100)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x134(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_ShopOfferItemDetails.WBP_ShopOfferItemDetails_C.UpdateItemLevel
struct UWBP_ShopOfferItemDetails_C_UpdateItemLevel_Params
{
public:
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x0(0x18)(None)
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast;     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE8 (0xE8 - 0x0)
// Function WBP_ShopOfferItemDetails.WBP_ShopOfferItemDetails_C.UpdateDurability
struct UWBP_ShopOfferItemDetails_C_UpdateDurability_Params
{
public:
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x0(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x18(0x50)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x68(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xB8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xC8(0x18)(None)
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast;     // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function WBP_ShopOfferItemDetails.WBP_ShopOfferItemDetails_C.UpdateExtractionResult
struct UWBP_ShopOfferItemDetails_C_UpdateExtractionResult_Params
{
public:
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x8(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x58(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x68(0x18)(None)
};

// 0xE0 (0xE0 - 0x0)
// Function WBP_ShopOfferItemDetails.WBP_ShopOfferItemDetails_C.UpdateQuality
struct UWBP_ShopOfferItemDetails_C_UpdateQuality_Params
{
public:
	enum class EItemQuality                      Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_472B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x20(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x38(0x18)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x50(0x18)(None)
	class FText                                  Temp_text_Variable_4;                              // 0x68(0x18)(None)
	class FText                                  Temp_text_Variable_5;                              // 0x80(0x18)(None)
	class FText                                  Temp_text_Variable_6;                              // 0x98(0x18)(None)
	class FText                                  Temp_text_Variable_7;                              // 0xB0(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0xC8(0x18)(None)
};

// 0x20 (0x20 - 0x0)
// Function WBP_ShopOfferItemDetails.WBP_ShopOfferItemDetails_C.UpdateWeight
struct UWBP_ShopOfferItemDetails_C_UpdateWeight_Params
{
public:
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x0(0x18)(None)
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast;     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_ShopOfferItemDetails.WBP_ShopOfferItemDetails_C.ExecuteUbergraph_WBP_ShopOfferItemDetails
struct UWBP_ShopOfferItemDetails_C_ExecuteUbergraph_WBP_ShopOfferItemDetails_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


