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

// 0x108 (0x108 - 0x0)
// Function UMG_ServerMessageTicker.UMG_ServerMessageTicker_C.Update
struct UUMG_ServerMessageTicker_C_Update_Params
{
public:
	struct FMaintenanceStatus                    Status;                                            // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FDateTime                             CallFunc_ConvertToDateTime_ReturnValue;            // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                             CallFunc_ConvertToDateTime_ReturnValue_1;          // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_AsTimeZoneDateTime_DateTime_ReturnValue;  // 0x30(0x18)(None)
	class FText                                  CallFunc_AsTimeZoneDateTime_DateTime_ReturnValue_1; // 0x48(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x60(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0xA0(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xE0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xF0(0x18)(None)
};

}
}


