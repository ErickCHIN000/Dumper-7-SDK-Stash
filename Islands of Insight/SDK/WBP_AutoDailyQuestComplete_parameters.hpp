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

// 0xC0 (0xC0 - 0x0)
// Function WBP_AutoDailyQuestComplete.WBP_AutoDailyQuestComplete_C.ExecuteUbergraph_WBP_AutoDailyQuestComplete
struct UWBP_AutoDailyQuestComplete_C_ExecuteUbergraph_WBP_AutoDailyQuestComplete_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EQuestType                        Temp_byte_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x18(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x30(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x48(0x18)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x60(0x18)(None)
	class FText                                  Temp_text_Variable_4;                              // 0x78(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x90(0x10)(ZeroConstructor, NoDestructor)
	class FText                                  K2Node_Select_Default;                             // 0xA0(0x18)(None)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


