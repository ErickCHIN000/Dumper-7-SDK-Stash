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

// 0x8 (0x8 - 0x0)
// Function UMG_MetaWorkshopCost.UMG_MetaWorkshopCost_C.OnLoaded_88A07CE44A58269F97E6A0B898CBB13E
struct UUMG_MetaWorkshopCost_C_OnLoaded_88A07CE44A58269F97E6A0B898CBB13E_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2B8 (0x2B8 - 0x0)
// Function UMG_MetaWorkshopCost.UMG_MetaWorkshopCost_C.ExecuteUbergraph_UMG_MetaWorkshopCost
struct UUMG_MetaWorkshopCost_C_ExecuteUbergraph_UMG_MetaWorkshopCost_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMetaCurrencyRowHandle                CallFunc_MakeMetaCurrency_ReturnValue;             // 0x4(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_507B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMetaCurrency                         CallFunc_GetMetaCurrencyStruct_MetaCurrency;       // 0x28(0xB8)(None)
	enum class EValid                            CallFunc_GetMetaCurrencyStruct_Paths;              // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5089[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Temp_object_Variable;                              // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0xF2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50A1[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_MakeBrushFromTexture_ReturnValue;         // 0xF8(0x88)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x180(0x10)(ZeroConstructor, NoDestructor)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x190(0x88)(None)
	struct FSlateBrush                           K2Node_Select_Default;                             // 0x218(0x88)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x2A0(0x18)(None)
};

}
}


