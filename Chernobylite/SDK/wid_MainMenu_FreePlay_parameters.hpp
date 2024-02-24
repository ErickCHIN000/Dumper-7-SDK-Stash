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
// Function wid_MainMenu_FreePlay.wid_MainMenu_FreePlay_C.OnAsyncLoadFinished
struct UWid_MainMenu_FreePlay_C_OnAsyncLoadFinished_Params
{
public:
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x180 (0x180 - 0x0)
// Function wid_MainMenu_FreePlay.wid_MainMenu_FreePlay_C.StartGamePressed
struct UWid_MainMenu_FreePlay_C_StartGamePressed_Params
{
public:
	TMap<enum class EEventMap, struct FStruct_MapInformation> Temp_byte_Variable;                                // 0x0(0x50)(None)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEventMap                         CallFunc_Get_Selected_Level_Output_Get;            // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7AC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x5C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_7AF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_MapInformation                CallFunc_Map_Find_Value;                           // 0x70(0xE9)(HasGetValueTypeHash)
	uint8                                        Pad_7B3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7B7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_1;    // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_2;    // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function wid_MainMenu_FreePlay.wid_MainMenu_FreePlay_C.Prepare and Setup Values For Free Play
struct UWid_MainMenu_FreePlay_C_Prepare_and_Setup_Values_For_Free_Play_Params
{
public:
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_1;    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEventMap                         CallFunc_Get_Selected_Level_Output_Get;            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_825[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Get_Selected_Mission_Output;              // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEventMap                         CallFunc_Get_Selected_Level_Output_Get_1;          // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_82D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Get_Selected_Weather_Output;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentlySelectedIndex_CurrentlySelected; // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue;               // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_831[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1; // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue_1;             // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_838[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2; // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue_2;             // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetMood_ReturnValue;                      // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ActivateQuestDebug_ReturnValue;           // 0x3E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Prepeare_ReturnValue;                     // 0x3F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x14 (0x14 - 0x0)
// Function wid_MainMenu_FreePlay.wid_MainMenu_FreePlay_C.Get Selected Mission
struct UWid_MainMenu_FreePlay_C_Get_Selected_Mission_Params
{
public:
	class FName                                  Output;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentlySelectedIndex_CurrentlySelected; // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x228 (0x228 - 0x0)
// Function wid_MainMenu_FreePlay.wid_MainMenu_FreePlay_C.Setup Misson Values
struct UWid_MainMenu_FreePlay_C_Setup_Misson_Values_Params
{
public:
	TArray<class FText>                          MissonValues;                                      // 0x0(0x10)(Edit, BlueprintVisible)
	class UDataTable*                            QuestsDataTable;                                   // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEventMap                         CallFunc_Get_Selected_Level_Output_Get;            // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0x28(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestInfoInput                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x60(0x150)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8D3[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_1;    // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDescriptionInfo                      CallFunc_GetQuestDescription_ReturnValue;          // 0x1C0(0x58)(None)
	class UDataTable*                            CallFunc_Map_Find_Value;                           // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8DC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x224(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function wid_MainMenu_FreePlay.wid_MainMenu_FreePlay_C.Update Available Moods
struct UWid_MainMenu_FreePlay_C_Update_Available_Moods_Params
{
public:
	enum class EEventMap                         CallFunc_Get_Selected_Level_Output_Get;            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_914[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            CallFunc_Map_Find_Value;                           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_91D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0x20(0x10)(ReferenceParm)
};

// 0x14 (0x14 - 0x0)
// Function wid_MainMenu_FreePlay.wid_MainMenu_FreePlay_C.Get Selected Weather
struct UWid_MainMenu_FreePlay_C_Get_Selected_Weather_Params
{
public:
	class FName                                  Output;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentlySelectedIndex_CurrentlySelected; // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function wid_MainMenu_FreePlay.wid_MainMenu_FreePlay_C.Get Selected Level
struct UWid_MainMenu_FreePlay_C_Get_Selected_Level_Params
{
public:
	enum class EEventMap                         Output_Get;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_976[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetCurrentlySelectedIndex_CurrentlySelected; // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEventMap                         CallFunc_Array_Get_Item;                           // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA5 (0xA5 - 0x0)
// Function wid_MainMenu_FreePlay.wid_MainMenu_FreePlay_C.Setup Weather Values
struct UWid_MainMenu_FreePlay_C_Setup_Weather_Values_Params
{
public:
	TArray<class FText>                          WeatherValues;                                     // 0x0(0x10)(Edit, BlueprintVisible)
	class UDataTable*                            MoodsDataTable;                                    // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEventMap                         CallFunc_Get_Selected_Level_Output_Get;            // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            CallFunc_Map_Find_Value;                           // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9D3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMoodData                             CallFunc_GetDataTableRowFromName_OutRow;           // 0x48(0x30)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9DD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0x80(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x170 (0x170 - 0x0)
// Function wid_MainMenu_FreePlay.wid_MainMenu_FreePlay_C.Setup Level Values
struct UWid_MainMenu_FreePlay_C_Setup_Level_Values_Params
{
public:
	TArray<class FText>                          LevelValues;                                       // 0x0(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A27[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EEventMap, struct FStruct_MapInformation> Temp_byte_Variable;                                // 0x18(0x50)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEventMap                         CallFunc_Array_Get_Item;                           // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x75(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A3F[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_MapInformation                CallFunc_Map_Find_Value;                           // 0x78(0xE9)(HasGetValueTypeHash)
	uint8                                        Pad_A41[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A42[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x16C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A0 (0x1A0 - 0x0)
// Function wid_MainMenu_FreePlay.wid_MainMenu_FreePlay_C.Update Available Quests
struct UWid_MainMenu_FreePlay_C_Update_Available_Quests_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEventMap                         CallFunc_Get_Selected_Level_Output_Get;            // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AB0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            CallFunc_Map_Find_Value;                           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AB9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0x28(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x3C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AC3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestInfoInput                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x48(0x150)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_ACA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x19C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x41 (0x41 - 0x0)
// Function wid_MainMenu_FreePlay.wid_MainMenu_FreePlay_C.Update Quests
struct UWid_MainMenu_FreePlay_C_Update_Quests_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B2F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AEventSystemBackend*>           CallFunc_GetAllActorsOfClass_OutActors;            // 0x10(0x10)(ReferenceParm)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEventSystemBackend*                   CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue;               // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue_1;             // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue_2;             // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function wid_MainMenu_FreePlay.wid_MainMenu_FreePlay_C.Setup Events
struct UWid_MainMenu_FreePlay_C_Setup_Events_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x10(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x20(0x10)(ZeroConstructor, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function wid_MainMenu_FreePlay.wid_MainMenu_FreePlay_C.Capitalize Label
struct UWid_MainMenu_FreePlay_C_Capitalize_Label_Params
{
public:
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x0(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x18(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function wid_MainMenu_FreePlay.wid_MainMenu_FreePlay_C.Setup Selectable Manager
struct UWid_MainMenu_FreePlay_C_Setup_Selectable_Manager_Params
{
public:
	TArray<TScriptInterface<class ISelectableEntryInterace_C>> K2Node_MakeArray_Array;                            // 0x0(0x10)(ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function wid_MainMenu_FreePlay.wid_MainMenu_FreePlay_C.PreConstruct
struct UWid_MainMenu_FreePlay_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function wid_MainMenu_FreePlay.wid_MainMenu_FreePlay_C.Tick
struct UWid_MainMenu_FreePlay_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A0 (0x1A0 - 0x0)
// Function wid_MainMenu_FreePlay.wid_MainMenu_FreePlay_C.ExecuteUbergraph_wid_MainMenu_FreePlay
struct UWid_MainMenu_FreePlay_C_ExecuteUbergraph_wid_MainMenu_FreePlay_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CB2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EEventMap, struct FStruct_MapInformation> Temp_byte_Variable;                                // 0x8(0x50)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CB8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x5C(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEventMap                         CallFunc_Get_Selected_Level_Output_Get;            // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CC0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_MapInformation                CallFunc_Map_Find_Value;                           // 0xA8(0xE9)(HasGetValueTypeHash)
	uint8                                        Pad_CC6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CCB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x19C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


