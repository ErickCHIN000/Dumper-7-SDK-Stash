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
// Function BPI_NPC_Controller.BPI_NPC_Controller_C.fnSetOcclusionVisibility
struct IBPI_NPC_Controller_C_FnSetOcclusionVisibility_Params
{
public:
	class AActor*                                Player_Reference;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Visible;                                        // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function BPI_NPC_Controller.BPI_NPC_Controller_C.fnInterruptRoutine
struct IBPI_NPC_Controller_C_FnInterruptRoutine_Params
{
public:
	struct FStruct_NPC_ProfilesList              Profiles;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FVector2D                             Duration_Range__Min__Max_;                         // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Permanent_Change;                                  // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x110 (0x110 - 0x0)
// Function BPI_NPC_Controller.BPI_NPC_Controller_C.fnArrivedAtStation
struct IBPI_NPC_Controller_C_FnArrivedAtStation_Params
{
public:
	class ABP_Station_Base_C*                    Station_Reference;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_NPC_StationInfo               Station_Info;                                      // 0x10(0xFC)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_27[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function BPI_NPC_Controller.BPI_NPC_Controller_C.fnArrivedAtPOI
struct IBPI_NPC_Controller_C_FnArrivedAtPOI_Params
{
public:
	class ABP_NPC_POI_Base_C*                    Parent_POI;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


