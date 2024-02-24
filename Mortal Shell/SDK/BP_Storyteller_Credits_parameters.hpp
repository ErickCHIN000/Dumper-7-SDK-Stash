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

// 0x8 (0x8 - 0x0)
// Function BP_Storyteller_Credits.BP_Storyteller_Credits_C.Timer_Progress_Set
struct ABP_Storyteller_Credits_C_Timer_Progress_Set_Params
{
public:
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x0(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Storyteller_Credits.BP_Storyteller_Credits_C.Timer_End_Set
struct ABP_Storyteller_Credits_C_Timer_End_Set_Params
{
public:
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x0(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Storyteller_Credits.BP_Storyteller_Credits_C.Timer_Run_Set
struct ABP_Storyteller_Credits_C_Timer_Run_Set_Params
{
public:
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x0(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Storyteller_Credits.BP_Storyteller_Credits_C.Timer_Begin_Set
struct ABP_Storyteller_Credits_C_Timer_Begin_Set_Params
{
public:
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x0(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0xC0 (0xC0 - 0x0)
// Function BP_Storyteller_Credits.BP_Storyteller_Credits_C.DisplayText
struct ABP_Storyteller_Credits_C_DisplayText_Params
{
public:
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x0(0x8)(NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x8(0x18)(None)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x20(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetText_ReturnValue_1;                    // 0x48(0x18)(None)
	int32                                        CallFunc_Len_ReturnValue;                          // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1434[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetSubstring_ReturnValue;                 // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x78(0x18)(None)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue;          // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1440[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0xA8(0x18)(None)
};

// 0x11 (0x11 - 0x0)
// Function BP_Storyteller_Credits.BP_Storyteller_Credits_C.StartStoryteller
struct ABP_Storyteller_Credits_C_StartStoryteller_Params
{
public:
	TArray<class FText>                          TextToDisplay;                                     // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                         Immediate;                                         // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB1 (0xB1 - 0x0)
// Function BP_Storyteller_Credits.BP_Storyteller_Credits_C.ExecuteUbergraph_BP_Storyteller_Credits
struct ABP_Storyteller_Credits_C_ExecuteUbergraph_BP_Storyteller_Credits_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1574[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Array_Get_Item;                           // 0x8(0x18)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_157F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_158C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          K2Node_CustomEvent_TextToDisplay;                  // 0x40(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Immediate;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1596[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IMainMenuInterface_C> K2Node_DynamicCast_AsMain_Menu_Interface;          // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_159B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x70(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x80(0x10)(ZeroConstructor, NoDestructor)
	class UUMG_Storyteller_Black_Background_C*   CallFunc_Create_ReturnValue;                       // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15AB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IMainMenuInterface_C> K2Node_DynamicCast_AsMain_Menu_Interface_1;        // 0xA0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


