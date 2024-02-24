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

// 0x1A (0x1A - 0x0)
// Function FishZoneRow.FishZoneRow_C.LessThan
struct UFishZoneRow_C_LessThan_Params
{
public:
	class UObject*                               Other;                                             // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1BD4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFishZoneRow_C*                        K2Node_DynamicCast_AsFish_Zone_Row;                // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LexicalLess_Name_ReturnValue;             // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function FishZoneRow.FishZoneRow_C.Set Row
struct UFishZoneRow_C_Set_Row_Params
{
public:
	class FName                                  RowName;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC2 (0xC2 - 0x0)
// Function FishZoneRow.FishZoneRow_C.ExecuteUbergraph_FishZoneRow
struct UFishZoneRow_C_ExecuteUbergraph_FishZoneRow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_ReplaceInline_ReturnValue;                // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x8(0x18)(None)
	class FName                                  K2Node_CustomEvent_RowName;                        // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FFishSpawnZonesRowHandle              CallFunc_MakeFishSpawnZones_ReturnValue;           // 0x38(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FFishSpawnZones                       CallFunc_GetFishSpawnZonesStruct_FishSpawnZones;   // 0x50(0x70)(None)
	enum class EValid                            CallFunc_GetFishSpawnZonesStruct_Paths;            // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


