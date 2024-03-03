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

// 0x11 (0x11 - 0x0)
// Function ALS_Camera_BPI.ALS_Camera_BPI_C.BPI_Get_3P_TraceParams
struct IALS_Camera_BPI_C_BPI_Get_3P_TraceParams_Params
{
public:
	struct FVector                               TraceOrigin;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TraceRadius;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETraceTypeQuery                   TraceChannel;                                      // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function ALS_Camera_BPI.ALS_Camera_BPI_C.BPI_Get_3P_PivotTarget
struct IALS_Camera_BPI_C_BPI_Get_3P_PivotTarget_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function ALS_Camera_BPI.ALS_Camera_BPI_C.BPI_Get_FP_CameraTarget
struct IALS_Camera_BPI_C_BPI_Get_FP_CameraTarget_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function ALS_Camera_BPI.ALS_Camera_BPI_C.BPI_Get_CameraParameters
struct IALS_Camera_BPI_C_BPI_Get_CameraParameters_Params
{
public:
	float                                        TP_FOV;                                            // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FP_FOV;                                            // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RightShoulder;                                     // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


