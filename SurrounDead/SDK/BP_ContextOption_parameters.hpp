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
// Function BP_ContextOption.BP_ContextOption_C.PreConstruct
struct UBP_ContextOption_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_ContextOption.BP_ContextOption_C.SetContextOption
struct UBP_ContextOption_C_SetContextOption_Params
{
public:
	bool                                         Active_;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x112 (0x112 - 0x0)
// Function BP_ContextOption.BP_ContextOption_C.ExecuteUbergraph_BP_ContextOption
struct UBP_ContextOption_C_ExecuteUbergraph_BP_ContextOption_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C59[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              CallFunc_MakeVector4_ReturnValue;                  // 0x10(0x20)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x30(0x14)(None)
	uint8                                        Pad_1C5F[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              CallFunc_MakeVector4_ReturnValue_1;                // 0x50(0x20)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrushOutlineSettings            K2Node_MakeStruct_SlateBrushOutlineSettings;       // 0x70(0x40)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0xB0(0x14)(None)
	uint8                                        Pad_1C63[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrushOutlineSettings            K2Node_MakeStruct_SlateBrushOutlineSettings_1;     // 0xD0(0x40)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Active_;                        // 0x111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


