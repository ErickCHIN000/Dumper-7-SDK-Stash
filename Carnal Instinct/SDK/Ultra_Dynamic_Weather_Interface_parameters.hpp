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

// 0x4 (0x4 - 0x0)
// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Intended Cloud Direction
struct IUltra_Dynamic_Weather_Interface_C_Get_Intended_Cloud_Direction_Params
{
public:
	float                                        Intended_Cloud_Direction;                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Intended Cloud Speed
struct IUltra_Dynamic_Weather_Interface_C_Get_Intended_Cloud_Speed_Params
{
public:
	float                                        Intended_Cloud_Speed;                              // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Update Cloud Coverage from UDS
struct IUltra_Dynamic_Weather_Interface_C_Update_Cloud_Coverage_from_UDS_Params
{
public:
	float                                        Cloud_Coverage;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Set Current Season
struct IUltra_Dynamic_Weather_Interface_C_Set_Current_Season_Params
{
public:
	enum class EUDS_Season                       Season;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


