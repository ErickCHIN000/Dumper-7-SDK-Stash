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

// 0x71 (0x71 - 0x0)
// Function wid_hud_GasMaskIndicator.wid_hud_GasMaskIndicator_C.SetCount
struct UWid_hud_GasMaskIndicator_C_SetCount_Params
{
public:
	int32                                        FilterCount;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BDD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x8(0x28)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x30(0x18)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x48(0x28)(None)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function wid_hud_GasMaskIndicator.wid_hud_GasMaskIndicator_C.SetEmpty
struct UWid_hud_GasMaskIndicator_C_SetEmpty_Params
{
public:
	bool                                         IsEmpty;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C2C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_BoolToFloat_ReturnValue;             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function wid_hud_GasMaskIndicator.wid_hud_GasMaskIndicator_C.SetProgress
struct UWid_hud_GasMaskIndicator_C_SetProgress_Params
{
public:
	float                                        Progress;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C5F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


