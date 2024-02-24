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

// 0x450 (0x450 - 0x0)
// Function UMG_MissionBoardProspectSelected.UMG_MissionBoardProspectSelected_C.UpdateRewards
struct UUMG_MissionBoardProspectSelected_C_UpdateRewards_Params
{
public:
	float                                        Temp_float_Variable;                               // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_1;                             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_2;                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_3;                             // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_WorkshopCostLarge_C*              CallFunc_Create_ReturnValue;                       // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_4;                             // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FProspectListRowHandle                CallFunc_MakeProspectList_ReturnValue;             // 0x28(0x18)(NoDestructor, HasGetValueTypeHash)
	enum class EMissionDifficulty                Temp_byte_Variable;                                // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_292C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIcarusProspect                       CallFunc_GetProspectListStruct_ProspectList;       // 0x48(0x2C8)(None)
	enum class EValid                            CallFunc_GetProspectListStruct_Paths;              // 0x310(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x311(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2932[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default;                             // 0x314(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFactionMission                       CallFunc_GetFactionMissionsStruct_FactionMissions; // 0x318(0xF0)(None)
	enum class EValid                            CallFunc_GetFactionMissionsStruct_Paths;           // 0x408(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x409(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_293C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWorkshopCost                         CallFunc_Array_Get_Item;                           // 0x40C(0x1C)(NoDestructor)
	class UHorizontalBoxSlot*                    CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x428(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x430(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x434(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FCeil_ReturnValue;                        // 0x438(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x43C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x440(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_294F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x444(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x448(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2954[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x44C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3D8 (0x3D8 - 0x0)
// Function UMG_MissionBoardProspectSelected.UMG_MissionBoardProspectSelected_C.GetSelectedProspectInfo
struct UUMG_MissionBoardProspectSelected_C_GetSelectedProspectInfo_Params
{
public:
	struct FFProspectServerInfo                  Prospect_Info;                                     // 0x0(0x19B)(Parm, OutParm, HasGetValueTypeHash)
	uint8                                        Pad_2993[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EMissionDifficulty                Difficulty;                                        // 0x1A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2994[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProspectInfo                         K2Node_MakeStruct_ProspectInfo;                    // 0x1A8(0x90)(None)
	struct FFProspectServerInfo                  K2Node_MakeStruct_FProspectServerInfo;             // 0x238(0x19B)(HasGetValueTypeHash)
	uint8                                        Pad_2999[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x328 (0x328 - 0x0)
// Function UMG_MissionBoardProspectSelected.UMG_MissionBoardProspectSelected_C.UpdateCompletionText
struct UUMG_MissionBoardProspectSelected_C_UpdateCompletionText_Params
{
public:
	struct FFactionMissionsRowHandle             RowHandle;                                         // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                         Found;                                             // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A2F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFactionMission                       CallFunc_GetFactionMissionsStruct_FactionMissions; // 0x20(0xF0)(None)
	enum class EValid                            CallFunc_GetFactionMissionsStruct_Paths;           // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x112(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x113(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterFlagsRowHandle              CallFunc_Array_Get_Item;                           // 0x114(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A48[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterFlag                        CallFunc_GetCharacterFlagsStruct_CharacterFlags;   // 0x130(0x30)(None)
	enum class EValid                            CallFunc_GetCharacterFlagsStruct_Paths;            // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FCharacterFlagsRowHandleFCharacterFlagsRowHandle_ReturnValue; // 0x161(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x162(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FCharacterFlagsRowHandleFCharacterFlagsRowHandle_ReturnValue_1; // 0x163(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A56[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x168(0x40)(HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x1A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A61[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue;                  // 0x1AC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x1BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x1BD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A6C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x1C0(0x18)(None)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A79[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x1E0(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x1F8(0x18)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x210(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x238(0x28)(None)
	struct FSlateColor                           K2Node_Select_Default_1;                           // 0x260(0x28)(None)
	bool                                         Temp_bool_Variable_2;                              // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A8E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_1;            // 0x290(0x18)(None)
	class FText                                  K2Node_Select_Default_2;                           // 0x2A8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x2C0(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x300(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x310(0x18)(None)
};

// 0x526 (0x526 - 0x0)
// Function UMG_MissionBoardProspectSelected.UMG_MissionBoardProspectSelected_C.UpdateWorldStats
struct UUMG_MissionBoardProspectSelected_C_UpdateWorldStats_Params
{
public:
	TArray<struct FProspectStatsRowHandle>       StatsList;                                         // 0x0(0x10)(Edit, BlueprintVisible)
	TArray<int32>                                Values;                                            // 0x10(0x10)(Edit, BlueprintVisible)
	TArray<struct FWorldStatsEnum>               Stats;                                             // 0x20(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C4D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UProspectSubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C54[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProspectInfo                         CallFunc_GetActiveProspectInfo_ReturnValue;        // 0x50(0x90)(ConstParm)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0xE4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FProspectListRowHandle                CallFunc_MakeProspectList_ReturnValue;             // 0xF0(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue;             // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C65[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIcarusProspect                       CallFunc_GetProspectListStruct_ProspectList;       // 0x110(0x2C8)(None)
	enum class EValid                            CallFunc_GetProspectListStruct_Paths;              // 0x3D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x3D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C72[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x3DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x3E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x3E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FProspectStatsRowHandle               CallFunc_Array_Get_Item;                           // 0x3E8(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x400(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C83[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProspectStat                         CallFunc_GetProspectStatsStruct_ProspectStats;     // 0x408(0x68)(None)
	enum class EValid                            CallFunc_GetProspectStatsStruct_Paths;             // 0x470(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x471(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x472(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C91[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWorldStatsEnum>               CallFunc_Map_Keys_Keys;                            // 0x478(0x10)(ReferenceParm)
	struct FWorldStatsEnum                       CallFunc_Array_Get_Item_1;                         // 0x488(0x10)(HasGetValueTypeHash)
	int32                                        CallFunc_Map_Find_Value;                           // 0x498(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x49C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C9A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x4A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x4A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C9B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDifficultySetup                      CallFunc_Map_Find_Value_1;                         // 0x4A8(0x28)(None)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x4D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CA2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Get_Item_2;                         // 0x4D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x4D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CA5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWorldStatsEnum                       CallFunc_Array_Get_Item_3;                         // 0x4E0(0x10)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x4F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CA9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_StatTitle_C*                      CallFunc_Create_ReturnValue;                       // 0x4F8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x500(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CBA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x504(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x508(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x50C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Get_Item_4;                         // 0x510(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CC9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x518(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x520(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x524(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x525(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB8 (0xB8 - 0x0)
// Function UMG_MissionBoardProspectSelected.UMG_MissionBoardProspectSelected_C.SetTime
struct UUMG_MissionBoardProspectSelected_C_SetTime_Params
{
public:
	TArray<class FString>                        Time;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D8A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item;                           // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x28(0x18)(None)
	class FString                                CallFunc_Array_Get_Item_1;                         // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Array_Get_Item_2;                         // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x60(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x78(0x18)(None)
	class FString                                CallFunc_Array_Get_Item_3;                         // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_3;          // 0xA0(0x18)(None)
};

// 0x680 (0x680 - 0x0)
// Function UMG_MissionBoardProspectSelected.UMG_MissionBoardProspectSelected_C.ShowSelectedProspect
struct UUMG_MissionBoardProspectSelected_C_ShowSelectedProspect_Params
{
public:
	struct FFProspectServerInfo                  Prospect;                                          // 0x0(0x19B)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_2E4B[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Active;                                            // 0x1A0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_ProspectState                   ProspectState;                                     // 0x1A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E55[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlueprintSessionResult               CurrentSession;                                    // 0x1A8(0x108)(Edit, BlueprintVisible)
	enum class EMissionDifficulty                CallFunc_GetCurrentProspectDifficulty_ReturnValue; // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E5B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x2B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x2C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FProspectListRowHandle                CallFunc_MakeProspectList_ReturnValue;             // 0x2C8(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetRemainingProspectTime_ReturnValue;     // 0x2E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E6D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_FormatRawSecondsToTimeLengthDigital_Time; // 0x2E8(0x10)(ReferenceParm)
	struct FIcarusProspect                       CallFunc_GetProspectListStruct_ProspectList;       // 0x2F8(0x2C8)(None)
	enum class EValid                            CallFunc_GetProspectListStruct_Paths;              // 0x5C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x5C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x5C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x5C3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E85[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_MakeBrushFromTexture_ReturnValue;         // 0x5C8(0x88)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x650(0x18)(None)
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x668(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x670(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E9A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x678(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function UMG_MissionBoardProspectSelected.UMG_MissionBoardProspectSelected_C.Tick
struct UUMG_MissionBoardProspectSelected_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UMG_MissionBoardProspectSelected.UMG_MissionBoardProspectSelected_C.BndEvt__UMG_PlanetProspectSelected_UMG_DifficultySelect_K2Node_ComponentBoundEvent_6_DifficultyUpdated__DelegateSignature
struct UUMG_MissionBoardProspectSelected_C_BndEvt__UMG_PlanetProspectSelected_UMG_DifficultySelect_K2Node_ComponentBoundEvent_6_DifficultyUpdated__DelegateSignature_Params
{
public:
	enum class EMissionDifficulty                Difficulty;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UMG_MissionBoardProspectSelected.UMG_MissionBoardProspectSelected_C.ManuallyUpdateDifficulty
struct UUMG_MissionBoardProspectSelected_C_ManuallyUpdateDifficulty_Params
{
public:
	enum class EMissionDifficulty                CachedDifficulty;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_MissionBoardProspectSelected.UMG_MissionBoardProspectSelected_C.BndEvt__UMG_MissionBoardProspectSelected_StartOperation_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature
struct UUMG_MissionBoardProspectSelected_C_BndEvt__UMG_MissionBoardProspectSelected_StartOperation_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature_Params
{
public:
	class UUMG_ButtonBase_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_MissionBoardProspectSelected.UMG_MissionBoardProspectSelected_C.BndEvt__UMG_MissionBoardProspectSelected_CancelOperation_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
struct UUMG_MissionBoardProspectSelected_C_BndEvt__UMG_MissionBoardProspectSelected_CancelOperation_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
{
public:
	class UUMG_ButtonBase_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA0 (0xA0 - 0x0)
// Function UMG_MissionBoardProspectSelected.UMG_MissionBoardProspectSelected_C.ExecuteUbergraph_UMG_MissionBoardProspectSelected
struct UUMG_MissionBoardProspectSelected_C_ExecuteUbergraph_UMG_MissionBoardProspectSelected_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x4(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FProspectListRowHandle                CallFunc_MakeProspectList_ReturnValue;             // 0x48(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetRemainingProspectTime_ReturnValue;     // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30B8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_FormatRawSecondsToTimeLengthDigital_Time; // 0x68(0x10)(ReferenceParm)
	class FString                                CallFunc_Array_Get_Item;                           // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionDifficulty                K2Node_ComponentBoundEvent_Difficulty;             // 0x8D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionDifficulty                K2Node_CustomEvent_CachedDifficulty;               // 0x8E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30ED[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_ButtonBase_C*                     K2Node_ComponentBoundEvent_Button_1;               // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ButtonBase_C*                     K2Node_ComponentBoundEvent_Button;                 // 0x98(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A0 (0x1A0 - 0x0)
// Function UMG_MissionBoardProspectSelected.UMG_MissionBoardProspectSelected_C.OperationSelected__DelegateSignature
struct UUMG_MissionBoardProspectSelected_C_OperationSelected__DelegateSignature_Params
{
public:
	struct FFProspectServerInfo                  ProspectInfo;                                      // 0x0(0x19B)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_3132[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


