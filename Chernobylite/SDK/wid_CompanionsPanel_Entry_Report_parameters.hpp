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
// Function wid_CompanionsPanel_Entry_Report.wid_CompanionsPanel_Entry_Report_C.SetArrow
struct UWid_CompanionsPanel_Entry_Report_C_SetArrow_Params
{
public:
	int32                                        PsycheNewID;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PsycheOldID;                                       // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        HealthNewID;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        HealthOldID;                                       // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function wid_CompanionsPanel_Entry_Report.wid_CompanionsPanel_Entry_Report_C.UpdatePercentage
struct UWid_CompanionsPanel_Entry_Report_C_UpdatePercentage_Params
{
public:
	class FName                                  CurrEventID;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function wid_CompanionsPanel_Entry_Report.wid_CompanionsPanel_Entry_Report_C.SetEventAndMap2
struct UWid_CompanionsPanel_Entry_Report_C_SetEventAndMap2_Params
{
public:
	class FString                                Mission;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Locaton;                                           // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<enum class EBuffType>                 K2Node_MakeArray_Array;                            // 0x20(0x10)(ReferenceParm)
	TArray<enum class EBuffType>                 K2Node_MakeArray_Array_1;                          // 0x30(0x10)(ReferenceParm)
};

// 0x305 (0x305 - 0x0)
// Function wid_CompanionsPanel_Entry_Report.wid_CompanionsPanel_Entry_Report_C.GetBuffString
struct UWid_CompanionsPanel_Entry_Report_C_GetBuffString_Params
{
public:
	enum class EBuffGroup                        CurrentGroup;                                      // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FirstSet;                                          // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24CB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EBuffType>                 HightestBuffType;                                  // 0x8(0x10)(Edit, BlueprintVisible)
	class FName                                  Temp_name_Variable;                                // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_1;                              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_2;                              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Temp_byte_Variable;                                // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EBuffGroup>                K2Node_MakeArray_Array;                            // 0x40(0x10)(ReferenceParm)
	int32                                        Temp_int_Variable;                                 // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBuffGroup                        CallFunc_Array_Get_Item;                           // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x55(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24F4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24FD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_1;              // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2523[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Select_Default;                             // 0xA4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_252C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EBuffType>                 K2Node_MakeArray_Array_1;                          // 0xB0(0x10)(ReferenceParm)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_1;          // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0xE0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2540[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FStatsModifier                        CallFunc_GetDataTableRowFromName_OutRow;           // 0x108(0x50)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2571[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x160(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0x170(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FStatsModifier                        CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x180(0x50)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_258B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EHealthPhase                      CallFunc_GetCurrentHealthPhase_ReturnValue;        // 0x1E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;    // 0x1E2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1E3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue_2;    // 0x1E4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_25AD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x1E8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_25C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_7;              // 0x200(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_GetCompanionsModifiers_ReturnValue;       // 0x218(0x10)(ReferenceParm)
	class FName                                  CallFunc_Array_Get_Item_1;                         // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_25EE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatsModifier                        CallFunc_GetDataTableRowFromName_OutRow_2;         // 0x238(0x50)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_2;    // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2601[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue_2;          // 0x290(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x2A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_260F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_8;              // 0x2A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_9;              // 0x2B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x2C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x2CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2620[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue_2;          // 0x2D0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_10;             // 0x2E0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_11;             // 0x2F0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x300(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x304(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function wid_CompanionsPanel_Entry_Report.wid_CompanionsPanel_Entry_Report_C.GetCanBeSend
struct UWid_CompanionsPanel_Entry_Report_C_GetCanBeSend_Params
{
public:
	bool                                         CanBeSend;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x265 (0x265 - 0x0)
// Function wid_CompanionsPanel_Entry_Report.wid_CompanionsPanel_Entry_Report_C.SetEventAndMap
struct UWid_CompanionsPanel_Entry_Report_C_SetEventAndMap_Params
{
public:
	class FName                                  EvID;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInnerEvent                           Local;                                             // 0x8(0x48)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27A8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EEventMap, struct FStruct_MapInformation> Temp_byte_Variable;                                // 0x58(0x50)(None)
	TArray<enum class EBuffType>                 K2Node_MakeArray_Array;                            // 0xA8(0x10)(ReferenceParm)
	TArray<enum class EBuffType>                 K2Node_MakeArray_Array_1;                          // 0xB8(0x10)(ReferenceParm)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_MapInformation                CallFunc_Map_Find_Value;                           // 0xD0(0xE9)(HasGetValueTypeHash)
	uint8                                        Pad_2802[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2805[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GenerateBriefReportFromEvent_Brief;       // 0x1C8(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x1E0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x1F0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x200(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInnerEvent>                   CallFunc_GetActiveEvents_ReturnValue;              // 0x208(0x10)(ReferenceParm)
	struct FInnerEvent                           CallFunc_Array_Get_Item;                           // 0x218(0x48)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x264(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function wid_CompanionsPanel_Entry_Report.wid_CompanionsPanel_Entry_Report_C.Select
struct UWid_CompanionsPanel_Entry_Report_C_Select_Params
{
public:
	bool                                         Select;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1C (0x1C - 0x0)
// Function wid_CompanionsPanel_Entry_Report.wid_CompanionsPanel_Entry_Report_C.ShowInfo
struct UWid_CompanionsPanel_Entry_Report_C_ShowInfo_Params
{
public:
	bool                                         Show;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_288D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FColor                                BackgroundColor;                                   // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                CallFunc_Conv_LinearColorToColor_ReturnValue;      // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function wid_CompanionsPanel_Entry_Report.wid_CompanionsPanel_Entry_Report_C.Init
struct UWid_CompanionsPanel_Entry_Report_C_Init_Params
{
public:
	class UTexture2D*                            Image;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  NewName;                                           // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FName                                  NameID;                                            // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x119 (0x119 - 0x0)
// Function wid_CompanionsPanel_Entry_Report.wid_CompanionsPanel_Entry_Report_C.ExecuteUbergraph_wid_CompanionsPanel_Entry_Report
struct UWid_CompanionsPanel_Entry_Report_C_ExecuteUbergraph_wid_CompanionsPanel_Entry_Report_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2975[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2982[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            K2Node_CustomEvent_Image;                          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_NewName;                        // 0x28(0x18)(None)
	class FName                                  K2Node_CustomEvent_NameID;                         // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TScriptInterface<class IWid_IWorkshopUIApp_C> CallFunc_Accept_self_CastInput;                    // 0x70(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_2;          // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_1;          // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_GetCompanionsModifiers_ReturnValue;       // 0x98(0x10)(ReferenceParm)
	TArray<enum class EBuffType>                 K2Node_MakeArray_Array;                            // 0xA8(0x10)(ReferenceParm)
	class FName                                  CallFunc_Array_Get_Item;                           // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStatsModifier                        CallFunc_GetDataTableRowFromName_OutRow;           // 0xC0(0x50)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29A4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


