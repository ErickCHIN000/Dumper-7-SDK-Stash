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
// Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.ShouldBlockInput
struct UBP_InputCaptureComponent_C_ShouldBlockInput_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.EndInputCapture
struct UBP_InputCaptureComponent_C_EndInputCapture_Params
{
public:
	class UBP_InputCaptureComponent_C*           CaptureComponent;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.BeginInputCapture
struct UBP_InputCaptureComponent_C_BeginInputCapture_Params
{
public:
	class UBP_InputCaptureComponent_C*           CaptureComponent;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Instigator;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.ServerLookUp
struct UBP_InputCaptureComponent_C_ServerLookUp_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.ServerLookRight
struct UBP_InputCaptureComponent_C_ServerLookRight_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.ServerFire
struct UBP_InputCaptureComponent_C_ServerFire_Params
{
public:
	bool                                         Pressed;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.ServerAltFire
struct UBP_InputCaptureComponent_C_ServerAltFire_Params
{
public:
	bool                                         Pressed;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.ServerMoveForward
struct UBP_InputCaptureComponent_C_ServerMoveForward_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.ServerJump
struct UBP_InputCaptureComponent_C_ServerJump_Params
{
public:
	bool                                         Pressed;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.ExecuteUbergraph_BP_InputCaptureComponent
struct UBP_InputCaptureComponent_C_ExecuteUbergraph_BP_InputCaptureComponent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C2A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_InputCaptureComponent_C*           K2Node_CustomEvent_CaptureComponent_1;             // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_InputCaptureComponent_C*           K2Node_CustomEvent_CaptureComponent;               // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_CustomEvent_Instigator;                     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_AxisValue_2;                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_AxisValue_1;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Pressed_2;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_Pressed_1;                      // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C4D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_CustomEvent_AxisValue;                      // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SelectFloat_ReturnValue;                  // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Pressed;                        // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C5E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SelectFloat_ReturnValue_2;                // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.OnJump__DelegateSignature
struct UBP_InputCaptureComponent_C_OnJump__DelegateSignature_Params
{
public:
	bool                                         Pressed;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.OnMoveForward__DelegateSignature
struct UBP_InputCaptureComponent_C_OnMoveForward__DelegateSignature_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.OnBeginInputCapture__DelegateSignature
struct UBP_InputCaptureComponent_C_OnBeginInputCapture__DelegateSignature_Params
{
public:
	class UBP_InputCaptureComponent_C*           CaptureComponent;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Instigator;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.OnEndInputCapture__DelegateSignature
struct UBP_InputCaptureComponent_C_OnEndInputCapture__DelegateSignature_Params
{
public:
	class UBP_InputCaptureComponent_C*           CaptureComponent;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.OnAltFire__DelegateSignature
struct UBP_InputCaptureComponent_C_OnAltFire__DelegateSignature_Params
{
public:
	bool                                         Pressed;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.OnFire__DelegateSignature
struct UBP_InputCaptureComponent_C_OnFire__DelegateSignature_Params
{
public:
	bool                                         Pressed;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.OnLookRight__DelegateSignature
struct UBP_InputCaptureComponent_C_OnLookRight__DelegateSignature_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.OnLookUp__DelegateSignature
struct UBP_InputCaptureComponent_C_OnLookUp__DelegateSignature_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


