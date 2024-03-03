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

// 0x1 (0x1 - 0x0)
// Function WB_PB_Raw.WB_PB_Raw_C.SetMarqueeTiling
struct UWB_PB_Raw_C_SetMarqueeTiling_Params
{
public:
	enum class ESlateBrushTileType               Tiling;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_PB_Raw.WB_PB_Raw_C.SetMarqueeDrawAs
struct UWB_PB_Raw_C_SetMarqueeDrawAs_Params
{
public:
	enum class ESlateBrushDrawType               DrawAs;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_PB_Raw.WB_PB_Raw_C.SetBarFillType
struct UWB_PB_Raw_C_SetBarFillType_Params
{
public:
	enum class EProgressBarFillType              BarFillType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_PB_Raw.WB_PB_Raw_C.SetMarqueeTint
struct UWB_PB_Raw_C_SetMarqueeTint_Params
{
public:
	struct FLinearColor                          Tint;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_PB_Raw.WB_PB_Raw_C.SetFillColorAndOpacity
struct UWB_PB_Raw_C_SetFillColorAndOpacity_Params
{
public:
	struct FLinearColor                          InColor;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WB_PB_Raw.WB_PB_Raw_C.SetMarqueeImageSize
struct UWB_PB_Raw_C_SetMarqueeImageSize_Params
{
public:
	struct FVector2D                             ImageSize;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_PB_Raw.WB_PB_Raw_C.SetBackgroundTint
struct UWB_PB_Raw_C_SetBackgroundTint_Params
{
public:
	struct FLinearColor                          InColor;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WB_PB_Raw.WB_PB_Raw_C.SetMarqueeImage
struct UWB_PB_Raw_C_SetMarqueeImage_Params
{
public:
	class UObject*                               Image;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WB_PB_Raw.WB_PB_Raw_C.SetFillImage
struct UWB_PB_Raw_C_SetFillImage_Params
{
public:
	class UObject*                               FillImage;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_PB_Raw.WB_PB_Raw_C.SetMarquee
struct UWB_PB_Raw_C_SetMarquee_Params
{
public:
	bool                                         IsMarquee;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function WB_PB_Raw.WB_PB_Raw_C.SetFillImageSize
struct UWB_PB_Raw_C_SetFillImageSize_Params
{
public:
	struct FVector2D                             FillImageSize;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_PB_Raw.WB_PB_Raw_C.SetColor
struct UWB_PB_Raw_C_SetColor_Params
{
public:
	struct FLinearColor                          InColor;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_PB_Raw.WB_PB_Raw_C.SetFillImageTiling
struct UWB_PB_Raw_C_SetFillImageTiling_Params
{
public:
	enum class ESlateBrushTileType               Tiling;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WB_PB_Raw.WB_PB_Raw_C.SetPercent
struct UWB_PB_Raw_C_SetPercent_Params
{
public:
	float                                        InPercent;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WB_PB_Raw.WB_PB_Raw_C.SetFillImageMargin
struct UWB_PB_Raw_C_SetFillImageMargin_Params
{
public:
	float                                        Margin;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_PB_Raw.WB_PB_Raw_C.SetFillImageDrawAs
struct UWB_PB_Raw_C_SetFillImageDrawAs_Params
{
public:
	enum class ESlateBrushDrawType               Draw_As;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x79 (0x79 - 0x0)
// Function WB_PB_Raw.WB_PB_Raw_C.ExecuteUbergraph_WB_PB_Raw
struct UWB_PB_Raw_C_ExecuteUbergraph_WB_PB_Raw_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateBrushTileType               K2Node_CustomEvent_Tiling_1;                       // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateBrushDrawType               K2Node_CustomEvent_DrawAs;                         // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EProgressBarFillType              K2Node_CustomEvent_BarFillType;                    // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D5[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          K2Node_CustomEvent_Tint;                           // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_CustomEvent_InColor_2;                      // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             K2Node_CustomEvent_ImageSize;                      // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_CustomEvent_InColor_1;                      // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Image;                          // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_FillImage;                      // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsMarquee;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3DE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             K2Node_CustomEvent_FillImageSize;                  // 0x54(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_CustomEvent_InColor;                        // 0x5C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateBrushTileType               K2Node_CustomEvent_Tiling;                         // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_CustomEvent_InPercent;                      // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_Margin;                         // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateBrushDrawType               K2Node_CustomEvent_Draw_As;                        // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


