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
// Function UMG_TerrainButtonPromptContents.UMG_TerrainButtonPromptContents_C.DontShowAgain
struct UUMG_TerrainButtonPromptContents_C_DontShowAgain_Params
{
public:
	bool                                         DontShowAgain;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UMG_TerrainButtonPromptContents.UMG_TerrainButtonPromptContents_C.SetBoostPanelDetails
struct UUMG_TerrainButtonPromptContents_C_SetBoostPanelDetails_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1CE5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PlayerLevel;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UMG_TerrainButtonPromptContents.UMG_TerrainButtonPromptContents_C.PreConstruct
struct UUMG_TerrainButtonPromptContents_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x81 (0x81 - 0x0)
// Function UMG_TerrainButtonPromptContents.UMG_TerrainButtonPromptContents_C.ExecuteUbergraph_UMG_TerrainButtonPromptContents
struct UUMG_TerrainButtonPromptContents_C_ExecuteUbergraph_UMG_TerrainButtonPromptContents_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Visible;                        // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D5A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_PlayerLevel;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D61[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x10(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x50(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x60(0x18)(None)
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


