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

// 0x140 (0x140 - 0x0)
// Function JournalObserver_v2.JournalObserver_v2_C.Get_QuestGiver
struct UJournalObserver_v2_C_Get_QuestGiver_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	enum class EQuestGiver                       Temp_byte_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_130D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x20(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x38(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x50(0x18)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x68(0x18)(None)
	class FText                                  Temp_text_Variable_4;                              // 0x80(0x18)(None)
	class FText                                  Temp_text_Variable_5;                              // 0x98(0x18)(None)
	class FText                                  Temp_text_Variable_6;                              // 0xB0(0x18)(None)
	class FText                                  Temp_text_Variable_7;                              // 0xC8(0x18)(None)
	class FText                                  Temp_text_Variable_8;                              // 0xE0(0x18)(None)
	class FText                                  Temp_text_Variable_9;                              // 0xF8(0x18)(None)
	class FText                                  Temp_text_Variable_10;                             // 0x110(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x128(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function JournalObserver_v2.JournalObserver_v2_C.Get_CompletedBox_Visibility
struct UJournalObserver_v2_C_Get_CompletedBox_Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x198 (0x198 - 0x0)
// Function JournalObserver_v2.JournalObserver_v2_C.UpdateContent
struct UJournalObserver_v2_C_UpdateContent_Params
{
public:
	class USHQuestDiaryComponent*                Quest;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJournalTaskLine_C*                    CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestView                            CallFunc_Array_Get_Item;                           // 0x18(0xE0)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_134A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_134B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTaskView                             CallFunc_Array_Get_Item_1;                         // 0x110(0x70)(None)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x184(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x185(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1350[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1351[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x190(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x308 (0x308 - 0x0)
// Function JournalObserver_v2.JournalObserver_v2_C.SetQuest
struct UJournalObserver_v2_C_SetQuest_Params
{
public:
	struct FQuestView                            Quest;                                             // 0x0(0xE0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         OnHidden;                                          // 0xE0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1389[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        QuestID;                                           // 0xE4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EQuestGiver                       Temp_byte_Variable;                                // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_138B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0xF0(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x108(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x120(0x18)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x138(0x18)(None)
	class FText                                  Temp_text_Variable_4;                              // 0x150(0x18)(None)
	class FText                                  Temp_text_Variable_5;                              // 0x168(0x18)(None)
	class FText                                  Temp_text_Variable_6;                              // 0x180(0x18)(None)
	class FText                                  Temp_text_Variable_7;                              // 0x198(0x18)(None)
	class FText                                  Temp_text_Variable_8;                              // 0x1B0(0x18)(None)
	class FText                                  Temp_text_Variable_9;                              // 0x1C8(0x18)(None)
	class FText                                  Temp_text_Variable_10;                             // 0x1E0(0x18)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x200(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x204(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1397[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x208(0x18)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x220(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_139A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTaskView                             CallFunc_Array_Get_Item;                           // 0x228(0x70)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x298(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x2B0(0x18)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_1;            // 0x2C8(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue_1;                // 0x2E0(0x18)(None)
	class UJournalTaskLine_C*                    CallFunc_Create_ReturnValue;                       // 0x2F8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x300(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function JournalObserver_v2.JournalObserver_v2_C.Tick
struct UJournalObserver_v2_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function JournalObserver_v2.JournalObserver_v2_C.ExecuteUbergraph_JournalObserver_v2
struct UJournalObserver_v2_C_ExecuteUbergraph_JournalObserver_v2_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x4(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x40(0x10)(ZeroConstructor, NoDestructor)
	class ACharacter*                            CallFunc_GetPlayerCharacter_ReturnValue;           // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IICharacterStatObserver_C> K2Node_DynamicCast_AsICharacter_Stat_Observer;     // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_13D4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USHQuestDiaryComponent*                CallFunc_GetQuestDiary_Return;                     // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


