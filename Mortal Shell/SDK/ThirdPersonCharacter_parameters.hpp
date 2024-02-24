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

// 0x18 (0x18 - 0x0)
// Function ThirdPersonCharacter.ThirdPersonCharacter_C.InpActEvt_Jump_K2Node_InputActionEvent_2
struct AThirdPersonCharacter_C_InpActEvt_Jump_K2Node_InputActionEvent_2_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ThirdPersonCharacter.ThirdPersonCharacter_C.InpActEvt_Jump_K2Node_InputActionEvent_1
struct AThirdPersonCharacter_C_InpActEvt_Jump_K2Node_InputActionEvent_1_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ThirdPersonCharacter.ThirdPersonCharacter_C.InpActEvt_AtkPrimary_K2Node_InputActionEvent_0
struct AThirdPersonCharacter_C_InpActEvt_AtkPrimary_K2Node_InputActionEvent_0_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ThirdPersonCharacter.ThirdPersonCharacter_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_40
struct AThirdPersonCharacter_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_40_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ThirdPersonCharacter.ThirdPersonCharacter_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90
struct AThirdPersonCharacter_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ThirdPersonCharacter.ThirdPersonCharacter_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79
struct AThirdPersonCharacter_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ThirdPersonCharacter.ThirdPersonCharacter_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_38
struct AThirdPersonCharacter_C_InpAxisEvt_TurnRate_K2Node_InputAxisEvent_38_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ThirdPersonCharacter.ThirdPersonCharacter_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_53
struct AThirdPersonCharacter_C_InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_53_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ThirdPersonCharacter.ThirdPersonCharacter_C.ServerMeleeAtk
struct AThirdPersonCharacter_C_ServerMeleeAtk_Params
{
public:
	bool                                         BoolVal;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ThirdPersonCharacter.ThirdPersonCharacter_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_47
struct AThirdPersonCharacter_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_47_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xDC (0xDC - 0x0)
// Function ThirdPersonCharacter.ThirdPersonCharacter_C.ExecuteUbergraph_ThirdPersonCharacter
struct AThirdPersonCharacter_C_ExecuteUbergraph_ThirdPersonCharacter_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EC9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key;                       // 0x8(0x18)(HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetControlRotation_ReturnValue;           // 0x20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        K2Node_InputAxisEvent_AxisValue_5;                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x3C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FKey                                  K2Node_InputActionEvent_Key_2;                     // 0x48(0x18)(HasGetValueTypeHash)
	struct FVector                               CallFunc_GetRightVector_ReturnValue;               // 0x60(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue;             // 0x6C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_InputAxisEvent_AxisValue_4;                 // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EDD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  Temp_struct_Variable;                              // 0x80(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_1;                     // 0x98(0x18)(HasGetValueTypeHash)
	float                                        K2Node_InputAxisEvent_AxisValue_3;                 // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_InputAxisEvent_AxisValue_2;                 // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_InputAxisEvent_AxisValue_1;                 // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetWorldDeltaSeconds_ReturnValue_1;       // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_3;        // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_BoolVal;                        // 0xD4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EEF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_InputAxisEvent_AxisValue;                   // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


