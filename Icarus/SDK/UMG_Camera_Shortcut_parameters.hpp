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
// Function UMG_Camera_Shortcut.UMG_Camera_Shortcut_C.PreConstruct
struct UUMG_Camera_Shortcut_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2DA (0x2DA - 0x0)
// Function UMG_Camera_Shortcut.UMG_Camera_Shortcut_C.ExecuteUbergraph_UMG_Camera_Shortcut
struct UUMG_Camera_Shortcut_C_ExecuteUbergraph_UMG_Camera_Shortcut_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B25[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettingsSubsystem*            CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  Temp_wildcard_Variable;                            // 0x10(0x18)(HasGetValueTypeHash)
	class FText                                  CallFunc_GetDisplayNameForKey_ReturnValue;         // 0x28(0x18)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B32[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x48(0x18)(None)
	struct FKeybindData                          CallFunc_GetKeybindingsStruct_Keybindings;         // 0x60(0x108)(None)
	enum class EValid                            CallFunc_GetKeybindingsStruct_Paths;               // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x169(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B4B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKeybindData                          CallFunc_GetKeybindingsStruct_Keybindings_1;       // 0x170(0x108)(None)
	enum class EValid                            CallFunc_GetKeybindingsStruct_Paths_1;             // 0x278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B59[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionKeyMapping                CallFunc_GetCurrentActionMapping_Out;              // 0x280(0x28)(None)
	enum class EValid                            CallFunc_GetCurrentActionMapping_Paths;            // 0x2A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x2A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x2AA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B6C[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputAxisKeyMapping                  CallFunc_GetCurrentAxisMapping_Out;                // 0x2B0(0x28)(None)
	enum class EValid                            CallFunc_GetCurrentAxisMapping_Paths;              // 0x2D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_3;                    // 0x2D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


