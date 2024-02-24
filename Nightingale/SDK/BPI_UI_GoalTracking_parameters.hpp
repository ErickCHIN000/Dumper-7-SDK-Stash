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

// 0x81 (0x81 - 0x0)
// Function BPI_UI_GoalTracking.BPI_UI_GoalTracking_C.TrackBuildingEntity
struct IBPI_UI_GoalTracking_C_TrackBuildingEntity_Params
{
public:
	struct FStructureAssetReference              StructureAssetRef;                                 // 0x0(0x80)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         IsAdding;                                          // 0x80(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x71 (0x71 - 0x0)
// Function BPI_UI_GoalTracking.BPI_UI_GoalTracking_C.TrackCraftingEntity
struct IBPI_UI_GoalTracking_C_TrackCraftingEntity_Params
{
public:
	struct FCraftingRecipeReference              CraftingRecipeRef;                                 // 0x0(0x70)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         IsAdding;                                          // 0x70(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BPI_UI_GoalTracking.BPI_UI_GoalTracking_C.IsEntityPinned
struct IBPI_UI_GoalTracking_C_IsEntityPinned_Params
{
public:
	class FName                                  ID;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPinned;                                          // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


