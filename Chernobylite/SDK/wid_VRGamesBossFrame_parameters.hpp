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
// Function wid_VRGamesBossFrame.wid_VRGamesBossFrame_C.GetSoundToPlay
struct UWid_VRGamesBossFrame_C_GetSoundToPlay_Params
{
public:
	class UAkAudioEvent*                         Event;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function wid_VRGamesBossFrame.wid_VRGamesBossFrame_C.CapitalizeText
struct UWid_VRGamesBossFrame_C_CapitalizeText_Params
{
public:
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x0(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue_1;                // 0x18(0x18)(None)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A63[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_TextToUpper_ReturnValue_2;                // 0x38(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function wid_VRGamesBossFrame.wid_VRGamesBossFrame_C.PreConstruct
struct UWid_VRGamesBossFrame_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function wid_VRGamesBossFrame.wid_VRGamesBossFrame_C.ExecuteUbergraph_wid_VRGamesBossFrame
struct UWid_VRGamesBossFrame_C_ExecuteUbergraph_wid_VRGamesBossFrame_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


