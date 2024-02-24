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

// 0x21 (0x21 - 0x0)
// Function RALS_Camera_BPI.RALS_Camera_BPI_C.BPI_Get_3P_TraceParams
struct IRALS_Camera_BPI_C_BPI_Get_3P_TraceParams_Params
{
public:
	struct FVector                               TraceOrigin;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TraceRadius;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETraceTypeQuery                   TraceChannel;                                      // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function RALS_Camera_BPI.RALS_Camera_BPI_C.BPI_Get_3P_PivotTarget
struct IRALS_Camera_BPI_C_BPI_Get_3P_PivotTarget_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function RALS_Camera_BPI.RALS_Camera_BPI_C.BPI_Get_FP_CameraTarget
struct IRALS_Camera_BPI_C_BPI_Get_FP_CameraTarget_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function RALS_Camera_BPI.RALS_Camera_BPI_C.BPI_Get_CameraParameters
struct IRALS_Camera_BPI_C_BPI_Get_CameraParameters_Params
{
public:
	double                                       TP_FOV;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FP_FOV;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RightShoulder;                                     // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


