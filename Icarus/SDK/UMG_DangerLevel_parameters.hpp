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

// 0x11D (0x11D - 0x0)
// Function UMG_DangerLevel.UMG_DangerLevel_C.SetDanger
struct UUMG_DangerLevel_C_SetDanger_Params
{
public:
	int32                                        Danger;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4251[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           Extreme;                                           // 0x8(0x28)(Edit, BlueprintVisible)
	struct FSlateColor                           Selected;                                          // 0x30(0x28)(Edit, BlueprintVisible)
	struct FSlateColor                           Hard;                                              // 0x58(0x28)(Edit, BlueprintVisible)
	struct FSlateColor                           Medium;                                            // 0x80(0x28)(Edit, BlueprintVisible)
	struct FSlateColor                           Easy;                                              // 0xA8(0x28)(Edit, BlueprintVisible)
	int32                                        Temp_int_Variable;                                 // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0xDC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_427D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4281[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_Select_Default;                             // 0xE8(0x28)(None)
	class UImage*                                CallFunc_Array_Get_Item;                           // 0x110(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x11C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_DangerLevel.UMG_DangerLevel_C.PreConstruct
struct UUMG_DangerLevel_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function UMG_DangerLevel.UMG_DangerLevel_C.ExecuteUbergraph_UMG_DangerLevel
struct UUMG_DangerLevel_C_ExecuteUbergraph_UMG_DangerLevel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4310[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UImage*>                        K2Node_MakeArray_Array;                            // 0x8(0x10)(ReferenceParm, ContainsInstancedReference)
};

}
}


