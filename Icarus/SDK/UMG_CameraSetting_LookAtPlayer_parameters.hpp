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

// 0x571 (0x571 - 0x0)
// Function UMG_CameraSetting_LookAtPlayer.UMG_CameraSetting_LookAtPlayer_C.UpdatePostProcess
struct UUMG_CameraSetting_LookAtPlayer_C_UpdatePostProcess_Params
{
public:
	struct FPostProcessSettings                  Settings;                                          // 0x0(0x560)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         CallFunc_GetCheckboxState_ReturnValue;             // 0x560(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_412F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PhotoCamera_C*                     CallFunc_GetPhotoCameraPawn_ReturnValue;           // 0x568(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x570(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


