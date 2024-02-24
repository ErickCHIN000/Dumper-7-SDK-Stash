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
// Function BP_SpectatorSaveGame.BP_SpectatorSaveGame_C.SetPresetName
struct UBP_SpectatorSaveGame_C_SetPresetName_Params
{
public:
	class FText                                  PresetName;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        Index;                                             // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function BP_SpectatorSaveGame.BP_SpectatorSaveGame_C.GetPresetName
struct UBP_SpectatorSaveGame_C_GetPresetName_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C81[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C88[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Array_Get_Item;                           // 0x28(0x18)(None)
};

// 0x59 (0x59 - 0x0)
// Function BP_SpectatorSaveGame.BP_SpectatorSaveGame_C.SetPreset
struct UBP_SpectatorSaveGame_C_SetPreset_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CCD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<TSoftClassPtr<class UWidget>, struct FFPostProcessSaveData> Preset;                                            // 0x8(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB0 (0xB0 - 0x0)
// Function BP_SpectatorSaveGame.BP_SpectatorSaveGame_C.GetPreset
struct UBP_SpectatorSaveGame_C_GetPreset_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D40[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<TSoftClassPtr<class UWidget>, struct FFPostProcessSaveData> ReturnValue;                                       // 0x8(0x50)(Parm, OutParm, ReturnParm)
	int32                                        Temp_int_Variable;                                 // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D4A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<TSoftClassPtr<class UWidget>, struct FFPostProcessSaveData> K2Node_Select_Default;                             // 0x60(0x50)(None)
};

}
}


