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
// Function BP_AIManagerInterface.BP_AIManagerInterface_C.Return AI Manager
struct IBP_AIManagerInterface_C_Return_AI_Manager_Params
{
public:
	class ABP_AIManager_C*                       AI_Manager;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_AIManagerInterface.BP_AIManagerInterface_C.Return AI Manager Settings
struct IBP_AIManagerInterface_C_Return_AI_Manager_Settings_Params
{
public:
	struct FS_AIOptimization                     AI_Settings;                                       // 0x0(0xC)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


