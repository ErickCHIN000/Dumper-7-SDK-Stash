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

// 0x49 (0x49 - 0x0)
// Function BP_DialogueManager.BP_DialogueManager_C.GetDialogueWidget
struct ABP_DialogueManager_C_GetDialogueWidget_Params
{
public:
	class UUMG_Dialogue_C*                       DialogueWidget;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EValid                            CallFunc_GetIcarusPlayerController_IsValid;        // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_185B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               CallFunc_GetIcarusPlayerController_ReturnValue;    // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1861[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface;       // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_186B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_UserInterface_Base_C*             CallFunc_GetUserInterface_UserInterface;           // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_Dialogue_C*                       CallFunc_GetDialogue_Dialogue;                     // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BP_DialogueManager.BP_DialogueManager_C.OnDialoguePlayed
struct ABP_DialogueManager_C_OnDialoguePlayed_Params
{
public:
	struct FDialogueRowHandle                    Dialogue;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x127 (0x127 - 0x0)
// Function BP_DialogueManager.BP_DialogueManager_C.ExecuteUbergraph_BP_DialogueManager
struct ABP_DialogueManager_C_ExecuteUbergraph_BP_DialogueManager_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18F3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_Dialogue_C*                       CallFunc_GetDialogueWidget_DialogueWidget;         // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18FA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogueRowHandle                    K2Node_Event_Dialogue;                             // 0x14(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18FE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogue                             CallFunc_GetDialogueStruct_Dialogue;               // 0x30(0xE0)(None)
	enum class EValid                            CallFunc_GetDialogueStruct_Paths;                  // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_190C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_Dialogue_C*                       CallFunc_GetDialogueWidget_DialogueWidget_1;       // 0x118(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x124(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x125(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x126(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


