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
// Function BP_CharInterface.BP_CharInterface_C.SetOnLeft?
struct IBP_CharInterface_C_SetOnLeft__Params
{
public:
	bool                                         OnLeft_;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_CharInterface.BP_CharInterface_C.SetMountHorse
struct IBP_CharInterface_C_SetMountHorse_Params
{
public:
	class AHorseBP_C*                            Mount;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_CharInterface.BP_CharInterface_C.Set Transport Type
struct IBP_CharInterface_C_Set_Transport_Type_Params
{
public:
	enum class ETransportType                    TransportType;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_CharInterface.BP_CharInterface_C.Get Transport Type
struct IBP_CharInterface_C_Get_Transport_Type_Params
{
public:
	enum class ETransportType                    TransportType;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


