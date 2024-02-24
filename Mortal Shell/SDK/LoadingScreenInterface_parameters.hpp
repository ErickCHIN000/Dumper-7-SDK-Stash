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
// Function LoadingScreenInterface.LoadingScreenInterface_C.LoadingScreen_ShouldLoadItemFromSave
struct ILoadingScreenInterface_C_LoadingScreen_ShouldLoadItemFromSave_Params
{
public:
	bool                                         Load_;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x14 (0x14 - 0x0)
// Function LoadingScreenInterface.LoadingScreenInterface_C.LoadingScreen_HandleLevelChange
struct ILoadingScreenInterface_C_LoadingScreen_HandleLevelChange_Params
{
public:
	bool                                         Set_Travel_Destination;                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A50[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Travel_Destination;                                // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Map_To_Load;                                       // 0xC(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


