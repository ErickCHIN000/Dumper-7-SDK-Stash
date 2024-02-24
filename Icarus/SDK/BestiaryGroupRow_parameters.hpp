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

// 0x18 (0x18 - 0x0)
// Function BestiaryGroupRow.BestiaryGroupRow_C.SetBestiary
struct UBestiaryGroupRow_C_SetBestiary_Params
{
public:
	struct FBestiaryDataRowHandle                NewBestiary;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x1FD (0x1FD - 0x0)
// Function BestiaryGroupRow.BestiaryGroupRow_C.ExecuteUbergraph_BestiaryGroupRow
struct UBestiaryGroupRow_C_ExecuteUbergraph_BestiaryGroupRow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B17[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBestiaryData                         CallFunc_GetBestiaryDataStruct_BestiaryData;       // 0x8(0x1D8)(None)
	enum class EValid                            CallFunc_GetBestiaryDataStruct_Paths;              // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B20[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBestiaryDataRowHandle                K2Node_CustomEvent_NewBestiary;                    // 0x1E4(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


