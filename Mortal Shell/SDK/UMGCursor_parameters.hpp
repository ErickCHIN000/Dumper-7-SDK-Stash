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

// 0x1A0 (0x1A0 - 0x0)
// Function UMGCursor.UMGCursor_C.GeCursorMat
struct UUMGCursor_C_GeCursorMat_Params
{
public:
	struct FSlateBrush                           ReturnValue;                                       // 0x0(0x88)(Parm, OutParm, ReturnParm)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x88(0x88)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C49[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_1;                    // 0x118(0x88)(None)
};

// 0x22 (0x22 - 0x0)
// Function UMGCursor.UMGCursor_C.GetCursorVisibility
struct UUMGCursor_C_GetCursorVisibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Local_MouseIdle;                                   // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C6D[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGamePlayGameStateInterface_C> K2Node_DynamicCast_AsGame_Play_Game_State_Interface; // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetForceHideCursor_Value;                 // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function UMGCursor.UMGCursor_C.Tick
struct UUMGCursor_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4C (0x4C - 0x0)
// Function UMGCursor.UMGCursor_C.ExecuteUbergraph_UMGCursor
struct UUMGCursor_C_ExecuteUbergraph_UMGCursor_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CB8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UKeyboardModeNotifierComponent_C*      CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier; // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x10(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


