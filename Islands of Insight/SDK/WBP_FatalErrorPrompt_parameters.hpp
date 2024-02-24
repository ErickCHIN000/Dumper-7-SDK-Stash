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
// Function WBP_FatalErrorPrompt.WBP_FatalErrorPrompt_C.Set Error Message
struct UWBP_FatalErrorPrompt_C_Set_Error_Message_Params
{
public:
	class FText                                  ErrorMessage;                                      // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x4 (0x4 - 0x0)
// Function WBP_FatalErrorPrompt.WBP_FatalErrorPrompt_C.ExecuteUbergraph_WBP_FatalErrorPrompt
struct UWBP_FatalErrorPrompt_C_ExecuteUbergraph_WBP_FatalErrorPrompt_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


