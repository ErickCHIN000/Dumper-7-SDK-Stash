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

// 0x10 (0x10 - 0x0)
// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Rainbow MID
struct IUltra_Dynamic_Weather_Interface_C_Get_Rainbow_MID_Params
{
public:
	bool                                         Rainbow_Enabled;                                   // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20A8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              Mid;                                               // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Intended Water Level
struct IUltra_Dynamic_Weather_Interface_C_Get_Intended_Water_Level_Params
{
public:
	bool                                         Using_Water_Level;                                 // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20E8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Water_Level;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Set Project Mode
struct IUltra_Dynamic_Weather_Interface_C_Set_Project_Mode_Params
{
public:
	enum class EUDS_Project_Mode                 Mode;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Weather Particle Collision Channel
struct IUltra_Dynamic_Weather_Interface_C_Get_Weather_Particle_Collision_Channel_Params
{
public:
	enum class ECollisionChannel                 Channel;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Destroy Close Thunder Component
struct IUltra_Dynamic_Weather_Interface_C_Destroy_Close_Thunder_Component_Params
{
public:
	class USceneComponent*                       Component;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Close Thunder Sound Occlusion
struct IUltra_Dynamic_Weather_Interface_C_Get_Close_Thunder_Sound_Occlusion_Params
{
public:
	double                                       Volume;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LPF;                                               // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x178 (0x178 - 0x0)
// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Apply State
struct IUltra_Dynamic_Weather_Interface_C_Apply_State_Params
{
public:
	struct FUDS_and_UDW_State                    State;                                             // 0x0(0x178)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x178 (0x178 - 0x0)
// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get State for Saving
struct IUltra_Dynamic_Weather_Interface_C_Get_State_for_Saving_Params
{
public:
	struct FUDS_and_UDW_State                    UDW_State;                                         // 0x0(0x178)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Intended Cloud Direction
struct IUltra_Dynamic_Weather_Interface_C_Get_Intended_Cloud_Direction_Params
{
public:
	double                                       Intended_Cloud_Direction;                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Intended Cloud Speed
struct IUltra_Dynamic_Weather_Interface_C_Get_Intended_Cloud_Speed_Params
{
public:
	double                                       Intended_Cloud_Speed;                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Update Weather Settings from UDS
struct IUltra_Dynamic_Weather_Interface_C_Update_Weather_Settings_from_UDS_Params
{
public:
	double                                       Cloud_Coverage;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Fog;                                               // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Dust;                                              // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


