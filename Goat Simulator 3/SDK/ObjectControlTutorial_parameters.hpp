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

// 0x10 (0x10 - 0x0)
// Function ObjectControlTutorial.ObjectControlTutorial_C.OnTutorialActivated
struct AObjectControlTutorial_C_OnTutorialActivated_Params
{
public:
	class AGGPlayerController*                   PC;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               Goat;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE8 (0xE8 - 0x0)
// Function ObjectControlTutorial.ObjectControlTutorial_C.ExecuteUbergraph_ObjectControlTutorial
struct AObjectControlTutorial_C_ExecuteUbergraph_ObjectControlTutorial_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_BCD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGPlayerController*                   K2Node_Event_PC;                                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               K2Node_Event_Goat;                                 // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x28(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FNotificationProperties               CallFunc_MakeNotificationProperties_ReturnValue;   // 0x30(0x14)(NoDestructor)
	uint8                                        Pad_BD9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetTutorialID_ReturnValue;                // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TScriptInterface<class IGGTutorialInterface> K2Node_DynamicCast_AsGGTutorial_Interface;         // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BDF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetTutorialText_ReturnValue;              // 0x70(0x18)(None)
	struct FNotification                         CallFunc_MakeNotification_ReturnValue;             // 0x88(0x60)(None)
};

}
}


