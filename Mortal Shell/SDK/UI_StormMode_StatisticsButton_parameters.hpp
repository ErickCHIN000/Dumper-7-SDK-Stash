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
// Function UI_StormMode_StatisticsButton.UI_StormMode_StatisticsButton_C.SetNumber
struct UUI_StormMode_StatisticsButton_C_SetNumber_Params
{
public:
	int32                                        PageIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Multiply_IntInt_ReturnValue;              // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1713[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x18(0x18)(None)
};

// 0x180 (0x180 - 0x0)
// Function UI_StormMode_StatisticsButton.UI_StormMode_StatisticsButton_C.Populate
struct UUI_StormMode_StatisticsButton_C_Populate_Params
{
public:
	bool                                         IsValid;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1781[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_StormModeRun_Data             Data;                                              // 0x8(0x68)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x70(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x88(0x18)(None)
	class FText                                  CallFunc_GetWeaponNames_ReturnValue;               // 0xA0(0x18)(None)
	class FText                                  CallFunc_GetPlaytimeFromDate_ReturnValue;          // 0xB8(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0xD0(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0xE8(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x100(0x18)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x118(0x18)(None)
	class FText                                  Temp_text_Variable_4;                              // 0x130(0x18)(None)
	class FText                                  Temp_text_Variable_5;                              // 0x148(0x18)(None)
	enum class EArmorTypes                       Temp_byte_Variable;                                // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17A0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x168(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_StatisticsButton.UI_StormMode_StatisticsButton_C.PreConstruct
struct UUI_StormMode_StatisticsButton_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function UI_StormMode_StatisticsButton.UI_StormMode_StatisticsButton_C.ExecuteUbergraph_UI_StormMode_StatisticsButton
struct UUI_StormMode_StatisticsButton_C_ExecuteUbergraph_UI_StormMode_StatisticsButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1800[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SetNumber_Index;                          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


