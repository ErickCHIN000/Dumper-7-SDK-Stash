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

// 0x41 (0x41 - 0x0)
// Function wid_TrainingChoicePrompt.wid_TrainingChoicePrompt_C.UpdateSubtitleManagerOffset
struct UWid_TrainingChoicePrompt_C_UpdateSubtitleManagerOffset_Params
{
public:
	bool                                         ToZero;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BBB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWid_SubtitleManager_C*>        CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
	struct FVector2D                             CallFunc_GetDesiredSize_ReturnValue;               // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_SubtitleManager_C*                CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X;                          // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y;                          // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SelectFloat_ReturnValue;                  // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2C (0x2C - 0x0)
// Function wid_TrainingChoicePrompt.wid_TrainingChoicePrompt_C.AddPrompt
struct UWid_TrainingChoicePrompt_C_AddPrompt_Params
{
public:
	int32                                        Idx;                                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_C23[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_TrainingPrompt_C*                 CallFunc_Create_ReturnValue;                       // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x134 (0x134 - 0x0)
// Function wid_TrainingChoicePrompt.wid_TrainingChoicePrompt_C.GetNextTrainingInternal
struct UWid_TrainingChoicePrompt_C_GetNextTrainingInternal_Params
{
public:
	class FName                                  TrainingId;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTrainingInfo                         NextTraining;                                      // 0x8(0x60)(Parm, OutParm)
	struct FTrainingInfo                         CallFunc_GetDataTableRowFromName_OutRow;           // 0x68(0x60)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CAA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTrainingInfo                         CallFunc_GetNextTrainingInternal_NextTraining;     // 0xD0(0x60)(None)
	bool                                         CallFunc_IsTrainingCompleted_IsCompleted;          // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x131(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x132(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x133(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x170 (0x170 - 0x0)
// Function wid_TrainingChoicePrompt.wid_TrainingChoicePrompt_C.GetLastCompletedTrainingInChainOrStarter
struct UWid_TrainingChoicePrompt_C_GetLastCompletedTrainingInChainOrStarter_Params
{
public:
	class FName                                  StartingTrainingId;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  TrainingId;                                        // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FTrainingInfo>      NewLocalVar_1;                                     // 0x10(0x50)(Edit, BlueprintVisible)
	TArray<class FName>                          TrainingsChain;                                    // 0x60(0x10)(Edit, BlueprintVisible)
	class FName                                  CurrentTraningId;                                  // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D39[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Array_Get_Item;                           // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D46[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTrainingInfo                         CallFunc_GetDataTableRowFromName_OutRow;           // 0x98(0x60)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D4F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Max_ReturnValue;                          // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsTrainingCompleted_IsCompleted;          // 0x104(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D5C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTrainingInfo                         CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x108(0x60)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D62[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x16C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function wid_TrainingChoicePrompt.wid_TrainingChoicePrompt_C.ReplaceTagWithValue
struct UWid_TrainingChoicePrompt_C_ReplaceTagWithValue_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                Tag;                                               // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                        Value;                                             // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DBA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReplacedText;                                      // 0x30(0x18)(Parm, OutParm)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Replace_ReturnValue;                      // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x78(0x18)(None)
};

// 0x1F1 (0x1F1 - 0x0)
// Function wid_TrainingChoicePrompt.wid_TrainingChoicePrompt_C.GetPerk
struct UWid_TrainingChoicePrompt_C_GetPerk_Params
{
public:
	struct FTrainingInfo                         TrainingInfo;                                      // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPlayerPerkInfo                       PerkInfo;                                          // 0x60(0xC8)(Parm, OutParm)
	struct FPlayerPerkInfo                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x128(0xC8)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1DC (0x1DC - 0x0)
// Function wid_TrainingChoicePrompt.wid_TrainingChoicePrompt_C.DisplayTrainingCommitment
struct UWid_TrainingChoicePrompt_C_DisplayTrainingCommitment_Params
{
public:
	struct FTrainingInfo                         TrainingInfo;                                      // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPlayerPerkInfo                       CallFunc_GetPerk_PerkInfo;                         // 0x60(0xC8)(None)
	class FText                                  CallFunc_ReplaceTagWithValue_ReplacedText;         // 0x128(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E51[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_ReplaceTagWithValue_ReplacedText_1;       // 0x150(0x18)(None)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E5B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_DialogueSingleOptionData      K2Node_MakeStruct_struct_DialogueSingleOptionData; // 0x170(0x68)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x1D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function wid_TrainingChoicePrompt.wid_TrainingChoicePrompt_C.GetNextTraining
struct UWid_TrainingChoicePrompt_C_GetNextTraining_Params
{
public:
	class FName                                  TrainingName;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTrainingInfo                         NextTraining;                                      // 0x8(0x60)(Parm, OutParm)
	class FName                                  CallFunc_GetLastCompletedTrainingInChainOrStarter_TrainingId; // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTrainingInfo                         CallFunc_GetNextTrainingInternal_NextTraining;     // 0x70(0x60)(None)
};

// 0x29 (0x29 - 0x0)
// Function wid_TrainingChoicePrompt.wid_TrainingChoicePrompt_C.IsTrainingCompleted
struct UWid_TrainingChoicePrompt_C_IsTrainingCompleted_Params
{
public:
	class FName                                  NewParam;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCompleted;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EDE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_DialogueSystemGetBool_ReturnValue;        // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x639 (0x639 - 0x0)
// Function wid_TrainingChoicePrompt.wid_TrainingChoicePrompt_C.DisplayAvailableTrainings
struct UWid_TrainingChoicePrompt_C_DisplayAvailableTrainings_Params
{
public:
	class FName                                  Trainer;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FTrainingInfo>      FirstInChainTrainings;                             // 0x8(0x50)(Edit, BlueprintVisible)
	TArray<struct FStruct_DialogueSingleOptionData> NewPropmts;                                        // 0x58(0x10)(Edit, BlueprintVisible)
	TMap<class FName, struct FTrainingInfo>      Trainings;                                         // 0x68(0x50)(Edit, BlueprintVisible)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1026[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1038[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_1;    // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x100(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x110(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x120(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Replace_ReturnValue;                      // 0x130(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_2;          // 0x140(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1055[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue_3;          // 0x158(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FTrainingInfo                         CallFunc_Array_Get_Item;                           // 0x168(0x60)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1061[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlayerPerkInfo                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x1D0(0xC8)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsTrainingCompleted_IsCompleted;          // 0x299(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x29A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_106F[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Select_Default;                             // 0x2A0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x2B0(0x18)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1075[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue_1;           // 0x2D0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1079[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Replace_ReturnValue_1;                    // 0x2E8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x2F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1082[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue_4;          // 0x300(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x310(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1091[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Select_Default_1;                           // 0x328(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x338(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x348(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x360(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_109C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_DialogueSingleOptionData      K2Node_MakeStruct_struct_DialogueSingleOptionData; // 0x368(0x68)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x3D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10A7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_Map_Keys_Keys;                            // 0x3D8(0x10)(ReferenceParm)
	class FName                                  CallFunc_Array_Get_Item_1;                         // 0x3E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_Map_Keys_Keys_1;                          // 0x3F0(0x10)(ReferenceParm)
	struct FTrainingInfo                         CallFunc_GetNextTraining_NextTraining;             // 0x400(0x60)(None)
	class FName                                  CallFunc_Array_Get_Item_2;                         // 0x460(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x468(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10C0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTrainingInfo                         CallFunc_Map_Find_Value;                           // 0x470(0x60)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x4D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10C7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x4D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x4D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Map_Remove_ReturnValue;                   // 0x4D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x4DA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10D3[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x4DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x4E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0x4E8(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x4F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item_3;                         // 0x4FC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x504(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10FA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTrainingInfo                         CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x508(0x60)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x568(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1104[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlayerPerkInfo                       CallFunc_GetPerk_PerkInfo;                         // 0x570(0xC8)(None)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x638(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xE9 (0xE9 - 0x0)
// Function wid_TrainingChoicePrompt.wid_TrainingChoicePrompt_C.RemoveTrailingSplitCharacter
struct UWid_TrainingChoicePrompt_C_RemoveTrailingSplitCharacter_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ReturnParm)
	int32                                        Counter;                                           // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1270[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                String;                                            // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1278[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Len_ReturnValue;                          // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1280[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_1;                               // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1287[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetSubstring_ReturnValue;                 // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x88(0x18)(None)
	int32                                        CallFunc_Len_ReturnValue_1;                        // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1293[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0xA8(0x18)(None)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xC5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12A7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Len_ReturnValue_2;                        // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_2;            // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_3;            // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetCharacterAt_ReturnValue;               // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x51 (0x51 - 0x0)
// Function wid_TrainingChoicePrompt.wid_TrainingChoicePrompt_C.SelectOption
struct UWid_TrainingChoicePrompt_C_SelectOption_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowSoundEvent;                                   // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         WasPreviouslySelected;                             // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_136C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_TrainingPrompt_C*                 CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_TrainingPrompt_C*                 CallFunc_Array_Get_Item_1;                         // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Select_Default;                             // 0x20(0x18)(None)
	class FText                                  CallFunc_RemoveTrailingSplitCharacter_ReturnValue; // 0x38(0x18)(None)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x85 (0x85 - 0x0)
// Function wid_TrainingChoicePrompt.wid_TrainingChoicePrompt_C.FillPrompts
struct UWid_TrainingChoicePrompt_C_FillPrompts_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_143A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_TrainingPrompt_C*                 CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_DialogueSingleOptionData      CallFunc_Array_Get_Item_1;                         // 0x18(0x68)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x14 (0x14 - 0x0)
// Function wid_TrainingChoicePrompt.wid_TrainingChoicePrompt_C.FillReferencesArrayAndShowCorrectPromptsNumber
struct UWid_TrainingChoicePrompt_C_FillReferencesArrayAndShowCorrectPromptsNumber_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1497[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function wid_TrainingChoicePrompt.wid_TrainingChoicePrompt_C.ShowOptions
struct UWid_TrainingChoicePrompt_C_ShowOptions_Params
{
public:
	TArray<struct FStruct_DialogueSingleOptionData> Prompts;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function wid_TrainingChoicePrompt.wid_TrainingChoicePrompt_C.PreConstruct
struct UWid_TrainingChoicePrompt_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function wid_TrainingChoicePrompt.wid_TrainingChoicePrompt_C.InternalBeginShowPrompts
struct UWid_TrainingChoicePrompt_C_InternalBeginShowPrompts_Params
{
public:
	TArray<struct FStruct_DialogueSingleOptionData> Prompts;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x17C (0x17C - 0x0)
// Function wid_TrainingChoicePrompt.wid_TrainingChoicePrompt_C.ExecuteUbergraph_wid_TrainingChoicePrompt
struct UWid_TrainingChoicePrompt_C_ExecuteUbergraph_wid_TrainingChoicePrompt_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           Temp_delegate_Variable;                            // 0x4(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	uint8                                        Pad_15FA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LastInputWasFromGamepad_Gamepad;          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1601[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_DialogueSingleOptionData      CallFunc_Array_Get_Item;                           // 0x28(0x68)(HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1615[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FStruct_DialogueSingleOptionData> K2Node_CustomEvent_Prompts_1;                      // 0xA8(0x10)(ConstParm, ReferenceParm)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1622[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTrainingInfo                         CallFunc_Array_Get_Item_1;                         // 0xC0(0x60)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x12C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable;                              // 0x130(0x10)(ConstParm, ReferenceParm)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x144(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1638[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_3;            // 0x14C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue_1;                      // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_163F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FStruct_DialogueSingleOptionData> K2Node_CustomEvent_Prompts;                        // 0x158(0x10)(ConstParm, ReferenceParm)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PostEvent_ReturnValue;                    // 0x178(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


