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
// Function BP_Sign_Base.BP_Sign_Base_C.GetSignIconRow
struct ABP_Sign_Base_C_GetSignIconRow_Params
{
public:
	struct FItemableRowHandle                    ReturnValue;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_Sign_Base.BP_Sign_Base_C.GetSignColor
struct ABP_Sign_Base_C_GetSignColor_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_Sign_Base.BP_Sign_Base_C.GetSignText
struct ABP_Sign_Base_C_GetSignText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReturnParm)
};

// 0x11 (0x11 - 0x0)
// Function BP_Sign_Base.BP_Sign_Base_C.OnRep_IconRow
struct ABP_Sign_Base_C_OnRep_IconRow_Params
{
public:
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue;          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_Sign_Text_Display_C*              K2Node_DynamicCast_AsUMG_Sign_Text_Display;        // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x39 (0x39 - 0x0)
// Function BP_Sign_Base.BP_Sign_Base_C.OnRep_FontColor
struct ABP_Sign_Base_C_OnRep_FontColor_Params
{
public:
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x0(0x28)(None)
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue;          // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_Sign_Text_Display_C*              K2Node_DynamicCast_AsUMG_Sign_Text_Display;        // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function BP_Sign_Base.BP_Sign_Base_C.Deployable_Interact
struct ABP_Sign_Base_C_Deployable_Interact_Params
{
public:
	class AActor*                                Interactor;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacterSurvival*        K2Node_DynamicCast_AsIcarus_Player_Character_Survival; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_272F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerControllerSurvival*       K2Node_DynamicCast_AsIcarus_Player_Controller_Survival; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BP_Sign_Base.BP_Sign_Base_C.OnRep_Text
struct ABP_Sign_Base_C_OnRep_Text_Params
{
public:
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue;          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_Sign_Text_Display_C*              K2Node_DynamicCast_AsUMG_Sign_Text_Display;        // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function BP_Sign_Base.BP_Sign_Base_C.SetSignText
struct ABP_Sign_Base_C_SetSignText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FLinearColor                          Color;                                             // 0x18(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_Sign_Base.BP_Sign_Base_C.UpdateTextRender
struct ABP_Sign_Base_C_UpdateTextRender_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FLinearColor                          Color;                                             // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_Sign_Base.BP_Sign_Base_C.SetSignIcon
struct ABP_Sign_Base_C_SetSignIcon_Params
{
public:
	struct FItemableRowHandle                    IconRow;                                           // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_Sign_Base.BP_Sign_Base_C.UpdateIcon
struct ABP_Sign_Base_C_UpdateIcon_Params
{
public:
	struct FItemableRowHandle                    IconRow;                                           // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0xC8 (0xC8 - 0x0)
// Function BP_Sign_Base.BP_Sign_Base_C.ExecuteUbergraph_BP_Sign_Base
struct ABP_Sign_Base_C_ExecuteUbergraph_BP_Sign_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28F3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Event_Text;                                 // 0x8(0x18)(ConstParm)
	struct FLinearColor                          K2Node_Event_Color;                                // 0x20(0x10)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_Text;                           // 0x30(0x18)(ConstParm)
	struct FLinearColor                          K2Node_CustomEvent_Color;                          // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemableRowHandle                    K2Node_Event_IconRow;                              // 0x58(0x18)(ConstParm, NoDestructor, HasGetValueTypeHash)
	struct FItemableRowHandle                    K2Node_CustomEvent_IconRow;                        // 0x70(0x18)(NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue;          // 0x88(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_Sign_Text_Display_C*              K2Node_DynamicCast_AsUMG_Sign_Text_Display;        // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_290C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0xA0(0x28)(None)
};

}
}


