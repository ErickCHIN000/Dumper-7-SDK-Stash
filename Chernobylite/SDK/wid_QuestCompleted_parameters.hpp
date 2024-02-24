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

// 0x28 (0x28 - 0x0)
// Function wid_QuestCompleted.wid_QuestCompleted_C.GetSoundToPlay
struct UWid_QuestCompleted_C_GetSoundToPlay_Params
{
public:
	class UAkAudioEvent*                         Event;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CF4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         Temp_object_Variable;                              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         Temp_object_Variable_1;                            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         K2Node_Select_Default;                             // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA0 (0xA0 - 0x0)
// Function wid_QuestCompleted.wid_QuestCompleted_C.Init
struct UWid_QuestCompleted_C_Init_Params
{
public:
	bool                                         WasSuccessfull;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D53[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  QuestName;                                         // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  CustomTitle;                                       // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  CustomContent;                                     // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         Temp_bool_Variable;                                // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TextIsEmpty_ReturnValue_1;                // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D68[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x58(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x70(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x88(0x18)(None)
};

// 0x68 (0x68 - 0x0)
// Function wid_QuestCompleted.wid_QuestCompleted_C.Activate
struct UWid_QuestCompleted_C_Activate_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DB2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  QuestName;                                         // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	float                                        Delay;                                             // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DB6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable;                              // 0x28(0x10)(ConstParm, ReferenceParm)
	FDelegateProperty_                           Temp_delegate_Variable;                            // 0x38(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	class UAkAudioEvent*                         CallFunc_GetSoundToPlay_Event;                     // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PostEvent_ReturnValue;                    // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DC4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function wid_QuestCompleted.wid_QuestCompleted_C.ExecuteUbergraph_wid_QuestCompleted
struct UWid_QuestCompleted_C_ExecuteUbergraph_wid_QuestCompleted_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_E27[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


