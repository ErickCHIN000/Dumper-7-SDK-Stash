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

// 0x48 (0x48 - 0x0)
// Function MovementTutorial2.MovementTutorial2_C.GetStepCompletionArray
struct AMovementTutorial2_C_GetStepCompletionArray_Params
{
public:
	TArray<bool>                                 ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsMobilePlatform_ReturnValue;             // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B7D[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<bool>                                 K2Node_MakeArray_Array;                            // 0x18(0x10)(ReferenceParm)
	TArray<bool>                                 K2Node_MakeArray_Array_1;                          // 0x28(0x10)(ReferenceParm)
	TArray<bool>                                 K2Node_Select_Default;                             // 0x38(0x10)(ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function MovementTutorial2.MovementTutorial2_C.OnTutorialActivated
struct AMovementTutorial2_C_OnTutorialActivated_Params
{
public:
	class AGGPlayerController*                   PC;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               Goat;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function MovementTutorial2.MovementTutorial2_C.GoatJumped
struct AMovementTutorial2_C_GoatJumped_Params
{
public:
	class AGGCharacter*                          Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x83 (0x83 - 0x0)
// Function MovementTutorial2.MovementTutorial2_C.ExecuteUbergraph_MovementTutorial2
struct AMovementTutorial2_C_ExecuteUbergraph_MovementTutorial2_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C3F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C41[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGPlayerController*                   K2Node_Event_PC;                                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               K2Node_Event_Goat;                                 // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x30(0x8)(NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               CallFunc_GetControlledGoat_ReturnValue;            // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSprinting_ReturnValue;                  // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C55[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x4C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_C58[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGCharacter*                          K2Node_CustomEvent_Character;                      // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<bool>                                 CallFunc_GetStepCompletionArray_ReturnValue;       // 0x68(0x10)(ReferenceParm)
	bool                                         CallFunc_Array_Get_Item;                           // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C62[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x82(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


