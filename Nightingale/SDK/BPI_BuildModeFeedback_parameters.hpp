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

// 0x1 (0x1 - 0x0)
// Function BPI_BuildModeFeedback.BPI_BuildModeFeedback_C.SetBuildModeFeedbackMode
struct IBPI_BuildModeFeedback_C_SetBuildModeFeedbackMode_Params
{
public:
	enum class EBuildModeContext                 Mode;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BPI_BuildModeFeedback.BPI_BuildModeFeedback_C.SetBuildModeFeedbackActionEnabled
struct IBPI_BuildModeFeedback_C_SetBuildModeFeedbackActionEnabled_Params
{
public:
	enum class EBuildModeAction                  Action;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enabled;                                           // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_BuildModeFeedback.BPI_BuildModeFeedback_C.GetBuildModeFeedbackComponent
struct IBPI_BuildModeFeedback_C_GetBuildModeFeedbackComponent_Params
{
public:
	class UBP_BuildModeFeedbackComponent_C*      Component;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


