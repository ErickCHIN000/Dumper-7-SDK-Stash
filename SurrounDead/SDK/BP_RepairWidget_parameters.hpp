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
// Function BP_RepairWidget.BP_RepairWidget_C.GetVehicle
struct UBP_RepairWidget_C_GetVehicle_Params
{
public:
	class ABP_PlayerCharacter_C*                 CallFunc_CastToCharacter_Character;                // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_RepairWidget.BP_RepairWidget_C.SetName
struct UBP_RepairWidget_C_SetName_Params
{
public:
	class FText                                  ActionName;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  ItemName;                                          // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function BP_RepairWidget.BP_RepairWidget_C.UpdateHealth
struct UBP_RepairWidget_C_UpdateHealth_Params
{
public:
	double                                       Health;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1FC (0x1FC - 0x0)
// Function BP_RepairWidget.BP_RepairWidget_C.ExecuteUbergraph_BP_RepairWidget
struct UBP_RepairWidget_C_ExecuteUbergraph_BP_RepairWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1607[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_ActionName;                     // 0x8(0x18)(None)
	class FText                                  K2Node_CustomEvent_ItemName;                       // 0x20(0x18)(None)
	double                                       K2Node_CustomEvent_Health;                         // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x40(0x50)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x90(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xE0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xF0(0x18)(None)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x110(0x50)(HasGetValueTypeHash)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x168(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x180(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x1D0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x1E0(0x18)(None)
	float                                        CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


