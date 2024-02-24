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

// 0xD8 (0xD8 - 0x0)
// Function wid_BuildSystem_Building_Path.wid_BuildSystem_Building_Path_C.Update
struct UWid_BuildSystem_Building_Path_C_Update_Params
{
public:
	TArray<class FName>                          Array;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                RowPath;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Path;                                              // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16AF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable;                              // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16B9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable_1;                            // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_BuildSystemGetReadablePath_ReturnValue;   // 0x68(0x18)(None)
	class FString                                K2Node_Select_Default;                             // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xC0(0x18)(None)
};

}
}


