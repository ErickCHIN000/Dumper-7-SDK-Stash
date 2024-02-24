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
// Function W_CreatureEntryGrid.W_CreatureEntryGrid_C.PreConstruct
struct UW_CreatureEntryGrid_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x424 (0x424 - 0x0)
// Function W_CreatureEntryGrid.W_CreatureEntryGrid_C.ExecuteUbergraph_W_CreatureEntryGrid
struct UW_CreatureEntryGrid_C_ExecuteUbergraph_W_CreatureEntryGrid_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAISetup                              CallFunc_GetAISetupStruct_AISetup;                 // 0x8(0x230)(None)
	enum class EValid                            CallFunc_GetAISetupStruct_Paths;                   // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x239(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_220[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBestiaryData                         CallFunc_GetBestiaryDataStruct_BestiaryData;       // 0x240(0x1D8)(None)
	enum class EValid                            CallFunc_GetBestiaryDataStruct_Paths;              // 0x418(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x419(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_224[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x41C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


