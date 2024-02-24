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

// 0x9 (0x9 - 0x0)
// Function bc_LightingElement_01_PostProcess.bc_LightingElement_01_PostProcess_C.OverwriteCheck
struct Ubc_LightingElement_01_PostProcess_C_OverwriteCheck_Params
{
public:
	class Aba_LightingSetup_01_C*                Setup;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function bc_LightingElement_01_PostProcess.bc_LightingElement_01_PostProcess_C.Backup
struct Ubc_LightingElement_01_PostProcess_C_Backup_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Backup_Success;                           // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function bc_LightingElement_01_PostProcess.bc_LightingElement_01_PostProcess_C.Update
struct Ubc_LightingElement_01_PostProcess_C_Update_Params
{
public:
	float                                        ChangeProgress;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SkipAnyTimeCheck;                                  // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Success;                                           // 0x5(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Update_Success;                           // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInEditor_ReturnValue;                   // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


