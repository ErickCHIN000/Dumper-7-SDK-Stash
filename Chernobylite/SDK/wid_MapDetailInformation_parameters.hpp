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

// 0x199 (0x199 - 0x0)
// Function wid_MapDetailInformation.wid_MapDetailInformation_C.Sort
struct UWid_MapDetailInformation_C_Sort_Params
{
public:
	TMap<class FName, float>                     NewParam;                                          // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
	TMap<class FName, float>                     NewParam1;                                         // 0x50(0x50)(Parm, OutParm)
	TMap<class FName, float>                     T2;                                                // 0xA0(0x50)(Edit, BlueprintVisible)
	TMap<class FName, float>                     T;                                                 // 0xF0(0x50)(Edit, BlueprintVisible)
	TArray<class FName>                          CallFunc_Map_Keys_Keys;                            // 0x140(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x154(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x15C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2399[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_239B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                CallFunc_Map_Values_Values;                        // 0x168(0x10)(ReferenceParm)
	TArray<class FName>                          CallFunc_Map_Keys_Keys_1;                          // 0x178(0x10)(ReferenceParm)
	int32                                        CallFunc_MaxOfFloatArray_IndexOfMaxValue;          // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MaxOfFloatArray_MaxValue;                 // 0x18C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Remove_ReturnValue;                   // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x720 (0x720 - 0x0)
// Function wid_MapDetailInformation.wid_MapDetailInformation_C.Update
struct UWid_MapDetailInformation_C_Update_Params
{
public:
	enum class EEventMap                         Map;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EResourceType                     FoodRationType;                                    // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25CD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, float>                     IngredientsTable;                                  // 0x8(0x50)(Edit, BlueprintVisible)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x5B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25EB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EEventMap, struct FStruct_MapInformation> Temp_byte_Variable_3;                              // 0x60(0x50)(None)
	struct FVector2D                             CallFunc_GetDesiredSize_ReturnValue;               // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetDesiredSize_ReturnValue_1;             // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X;                          // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y;                          // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X_1;                        // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y_1;                        // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0xD4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2616[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0xE0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0xE8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetPosition_ReturnValue;                  // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X_2;                        // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y_2;                        // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_1;               // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0x114(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x115(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x116(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_263E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x118(0x18)(None)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2648[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x138(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x148(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x158(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FStruct_MapInformation                CallFunc_Map_Find_Value;                           // 0x168(0xE9)(HasGetValueTypeHash)
	uint8                                        Pad_2653[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2655[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x260(0x18)(None)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_1;    // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2669[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EEventMap, struct FActiveQuestInfo> CallFunc_GetActiveQuests_ReturnValue;              // 0x290(0x50)(None)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_2;    // 0x2E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveQuestInfo                      CallFunc_Map_Find_Value_1;                         // 0x2E8(0x18)(NoDestructor)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x300(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_268E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EEventMap, struct FActiveQuestInfo> CallFunc_GetActiveQuests_ReturnValue_1;            // 0x308(0x50)(None)
	struct FActiveQuestInfo                      CallFunc_Map_Find_Value_2;                         // 0x358(0x18)(NoDestructor)
	bool                                         CallFunc_Map_Find_ReturnValue_2;                   // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2699[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x378(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x390(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FQuestInfoInput                       CallFunc_GetQuestInfoBP_ReturnValue;               // 0x3A0(0x150)(None)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x4F0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x500(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x510(0x18)(None)
	struct FQuestType                            CallFunc_GetDataTableRowFromName_OutRow;           // 0x528(0x28)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x550(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_26BB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDescriptionInfo                      CallFunc_GetQuestDescription_ReturnValue;          // 0x558(0x58)(None)
	class FText                                  CallFunc_AssignQuestDescVariables_Brief;           // 0x5B0(0x18)(None)
	class FText                                  CallFunc_AssignQuestDescVariables_Text;            // 0x5C8(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue_1;                // 0x5E0(0x18)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x5F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x5F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x5FA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26D0[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x600(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TMap<class FName, float>                     CallFunc_Sort_NewParam1;                           // 0x610(0x50)(None)
	class FString                                CallFunc_Replace_ReturnValue;                      // 0x660(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x670(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_3;    // 0x678(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FResourcesForMap                      CallFunc_Map_Find_Value_3;                         // 0x680(0x50)(HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_3;                   // 0x6D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_26ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EResourceType>             CallFunc_Map_Keys_Keys;                            // 0x6D8(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x6E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EResourceType                     CallFunc_Array_Get_Item;                           // 0x6EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x6ED(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x6EE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2701[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1; // 0x6F0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_Map_Find_Value_4;                         // 0x700(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_4;                   // 0x704(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_270B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Replace_ReturnValue_1;                    // 0x708(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_1;          // 0x718(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function wid_MapDetailInformation.wid_MapDetailInformation_C.ShowPanel
struct UWid_MapDetailInformation_C_ShowPanel_Params
{
public:
	bool                                         Show;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function wid_MapDetailInformation.wid_MapDetailInformation_C.Tick
struct UWid_MapDetailInformation_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function wid_MapDetailInformation.wid_MapDetailInformation_C.PreConstruct
struct UWid_MapDetailInformation_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x44 (0x44 - 0x0)
// Function wid_MapDetailInformation.wid_MapDetailInformation_C.ExecuteUbergraph_wid_MapDetailInformation
struct UWid_MapDetailInformation_C_ExecuteUbergraph_wid_MapDetailInformation_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2841[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x8(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


