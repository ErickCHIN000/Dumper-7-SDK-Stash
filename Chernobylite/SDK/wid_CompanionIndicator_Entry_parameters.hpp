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

// 0x9A (0x9A - 0x0)
// Function wid_CompanionIndicator_Entry.wid_CompanionIndicator_Entry_C.GetIndicatorInfoFromDatatable
struct UWid_CompanionIndicator_Entry_C_GetIndicatorInfoFromDatatable_Params
{
public:
	enum class ECompanionIndicatorType           Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_147B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompanionIndicatorTypeInfo           IndicatorInfo;                                     // 0x8(0x30)(Parm, OutParm)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1486[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0x48(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x5C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1499[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompanionIndicatorTypeInfo           CallFunc_GetDataTableRowFromName_OutRow;           // 0x68(0x30)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function wid_CompanionIndicator_Entry.wid_CompanionIndicator_Entry_C.UpdateType
struct UWid_CompanionIndicator_Entry_C_UpdateType_Params
{
public:
	enum class ECompanionIndicatorType           Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14DE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompanionIndicatorTypeInfo           CallFunc_GetIndicatorInfoFromDatatable_IndicatorInfo; // 0x8(0x30)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x38(0x18)(None)
};

// 0x2 (0x2 - 0x0)
// Function wid_CompanionIndicator_Entry.wid_CompanionIndicator_Entry_C.IsValidIndicator
struct UWid_CompanionIndicator_Entry_C_IsValidIndicator_Params
{
public:
	bool                                         IsValid;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function wid_CompanionIndicator_Entry.wid_CompanionIndicator_Entry_C.GetIndicatorLocation
struct UWid_CompanionIndicator_Entry_C_GetIndicatorLocation_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Aba_ch_npc_00_C*                       K2Node_DynamicCast_AsBa_Ch_Npc_00;                 // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_153F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x24(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function wid_CompanionIndicator_Entry.wid_CompanionIndicator_Entry_C.ExecuteUbergraph_wid_CompanionIndicator_Entry
struct UWid_CompanionIndicator_Entry_C_ExecuteUbergraph_wid_CompanionIndicator_Entry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


