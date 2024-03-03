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

// 0x10 (0x10 - 0x0)
// Function WB_BaseProgressBar.WB_BaseProgressBar_C.GetPercent
struct UWB_BaseProgressBar_C_GetPercent_Params
{
public:
	float                                        Percent;                                           // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1210[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UProgressBar*                          CallFunc_GetCurrentProgressBar_AsProgress_Bar;     // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function WB_BaseProgressBar.WB_BaseProgressBar_C.GetCurrentProgressBar
struct UWB_BaseProgressBar_C_GetCurrentProgressBar_Params
{
public:
	class UProgressBar*                          AsProgress_Bar;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_125E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProgressBar*                          K2Node_DynamicCast_AsProgress_Bar;                 // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetPercent
struct UWB_BaseProgressBar_C_SetPercent_Params
{
public:
	float                                        InPercent;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetFillColorAndOpacity
struct UWB_BaseProgressBar_C_SetFillColorAndOpacity_Params
{
public:
	struct FLinearColor                          InColor;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetFillImageTiling
struct UWB_BaseProgressBar_C_SetFillImageTiling_Params
{
public:
	enum class ESlateBrushTileType               Tiling;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetBarFillType
struct UWB_BaseProgressBar_C_SetBarFillType_Params
{
public:
	enum class EProgressBarFillType              BarFillType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetFillImageSize
struct UWB_BaseProgressBar_C_SetFillImageSize_Params
{
public:
	struct FVector2D                             FillImageSize;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetFillImage
struct UWB_BaseProgressBar_C_SetFillImage_Params
{
public:
	class UObject*                               FillImage;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetIsMarquee
struct UWB_BaseProgressBar_C_SetIsMarquee_Params
{
public:
	bool                                         InbIsMarquee;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetMarqueeImage
struct UWB_BaseProgressBar_C_SetMarqueeImage_Params
{
public:
	class UObject*                               Image;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetMarqueeImageSize
struct UWB_BaseProgressBar_C_SetMarqueeImageSize_Params
{
public:
	struct FVector2D                             Image_Size;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetMarqueeTint
struct UWB_BaseProgressBar_C_SetMarqueeTint_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetMarqueeDrawAs
struct UWB_BaseProgressBar_C_SetMarqueeDrawAs_Params
{
public:
	enum class ESlateBrushDrawType               Draw_As;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetMarqueeTiling
struct UWB_BaseProgressBar_C_SetMarqueeTiling_Params
{
public:
	enum class ESlateBrushTileType               Tiling;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetBackgroundTint
struct UWB_BaseProgressBar_C_SetBackgroundTint_Params
{
public:
	struct FLinearColor                          Tint;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetFillImageMargin
struct UWB_BaseProgressBar_C_SetFillImageMargin_Params
{
public:
	float                                        Margin;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetFillImageDrawAs
struct UWB_BaseProgressBar_C_SetFillImageDrawAs_Params
{
public:
	enum class ESlateBrushDrawType               Draw_As;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x328 (0x328 - 0x0)
// Function WB_BaseProgressBar.WB_BaseProgressBar_C.ExecuteUbergraph_WB_BaseProgressBar
struct UWB_BaseProgressBar_C_ExecuteUbergraph_WB_BaseProgressBar_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_2;                               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_3;                               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_4;                               // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_InPercent;                      // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1548[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UProgressBar*                          CallFunc_GetCurrentProgressBar_AsProgress_Bar;     // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_CustomEvent_InColor;                        // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProgressBar*                          CallFunc_GetCurrentProgressBar_AsProgress_Bar_1;   // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateBrushTileType               K2Node_CustomEvent_Tiling_1;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1568[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UProgressBar*                          CallFunc_GetCurrentProgressBar_AsProgress_Bar_2;   // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EProgressBarFillType              K2Node_CustomEvent_BarFillType;                    // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1575[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProgressBarStyle                     CallFunc_SetFillImageTiling_Output_Get;            // 0x58(0x1A0)(None)
	struct FVector2D                             K2Node_CustomEvent_FillImageSize;                  // 0x1F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProgressBar*                          CallFunc_GetCurrentProgressBar_AsProgress_Bar_3;   // 0x200(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_FillImage;                      // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProgressBar*                          CallFunc_GetCurrentProgressBar_AsProgress_Bar_4;   // 0x210(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EProgressBarFillType              Temp_byte_Variable;                                // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1596[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UProgressBar*                          CallFunc_GetCurrentProgressBar_AsProgress_Bar_5;   // 0x220(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default;                             // 0x228(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_InbIsMarquee;                   // 0x22C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15AA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_CustomEvent_Image;                          // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProgressBar*                          CallFunc_GetCurrentProgressBar_AsProgress_Bar_6;   // 0x238(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             K2Node_CustomEvent_Image_Size;                     // 0x244(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15BE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UProgressBar*                          CallFunc_GetCurrentProgressBar_AsProgress_Bar_7;   // 0x250(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_CustomEvent_Color;                          // 0x258(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProgressBar*                          CallFunc_GetCurrentProgressBar_AsProgress_Bar_8;   // 0x268(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateBrushDrawType               K2Node_CustomEvent_Draw_As_1;                      // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15D2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UProgressBar*                          CallFunc_GetCurrentProgressBar_AsProgress_Bar_9;   // 0x278(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateBrushTileType               K2Node_CustomEvent_Tiling;                         // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15E1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UProgressBar*                          CallFunc_GetCurrentProgressBar_AsProgress_Bar_10;  // 0x288(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_CustomEvent_Tint;                           // 0x290(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x2A0(0x28)(None)
	class UProgressBar*                          CallFunc_GetCurrentProgressBar_AsProgress_Bar_11;  // 0x2C8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_Margin;                         // 0x2D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15FD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UProgressBar*                          CallFunc_GetCurrentProgressBar_AsProgress_Bar_12;  // 0x2D8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateBrushDrawType               K2Node_CustomEvent_Draw_As;                        // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_160C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UProgressBar*                          CallFunc_GetCurrentProgressBar_AsProgress_Bar_13;  // 0x2E8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1628[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UProgressBar*>                  K2Node_MakeArray_Array;                            // 0x2F8(0x10)(ReferenceParm, ContainsInstancedReference)
	class UProgressBar*                          CallFunc_Array_Get_Item;                           // 0x308(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x310(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x314(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1638[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x318(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_163C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UProgressBar*                          CallFunc_GetCurrentProgressBar_AsProgress_Bar_14;  // 0x320(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


