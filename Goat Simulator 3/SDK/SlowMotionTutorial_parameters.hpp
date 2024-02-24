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
// Function SlowMotionTutorial.SlowMotionTutorial_C.ShouldCompleteTutorial
struct ASlowMotionTutorial_C_ShouldCompleteTutorial_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function SlowMotionTutorial.SlowMotionTutorial_C.OnTutorialActivated
struct ASlowMotionTutorial_C_OnTutorialActivated_Params
{
public:
	class AGGPlayerController*                   PC;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               Goat;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function SlowMotionTutorial.SlowMotionTutorial_C.ExecuteUbergraph_SlowMotionTutorial
struct ASlowMotionTutorial_C_ExecuteUbergraph_SlowMotionTutorial_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetCurrentTimeDilation_ReturnValue;       // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	class AGGPlayerController*                   K2Node_Event_PC;                                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               K2Node_Event_Goat;                                 // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNotificationProperties               CallFunc_MakeNotificationProperties_ReturnValue;   // 0x28(0x14)(NoDestructor)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNotification                         CallFunc_MakeNotification_ReturnValue;             // 0x40(0x60)(None)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0xA0(0x8)(NoDestructor, HasGetValueTypeHash)
};

}
}


