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

// 0x2C (0x2C - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.GetFarmingPlotValues
struct ABP_Farming_Plot_Base_C_GetFarmingPlotValues_Params
{
public:
	bool                                         bIsSeededRecord;                                   // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bIsHarvestableRecord;                              // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_819[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentGrowthStageRecord;                          // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentTimeRecord;                                 // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFarmingSeedsRowHandle                CurrentSeedRowRecord;                              // 0xC(0x18)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	float                                        NextStageTimeRecord;                               // 0x24(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GrowthCompleteTimeRecord;                          // 0x28(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.GetWidgetClass
struct ABP_Farming_Plot_Base_C_GetWidgetClass_Params
{
public:
	class UClass*                                Widget;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.OnRep_SoilWet
struct ABP_Farming_Plot_Base_C_OnRep_SoilWet_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_871[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    K2Node_Select_Default;                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.GetGreenhouseEffect
struct ABP_Farming_Plot_Base_C_GetGreenhouseEffect_Params
{
public:
	float                                        Multiplier;                                        // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue_1;        // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8CD[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SelectFloat_ReturnValue;                  // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SelectFloat_ReturnValue_2;                // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B8 (0x1B8 - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.PostLoad
struct ABP_Farming_Plot_Base_C_PostLoad_Params
{
public:
	bool                                         CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_922[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_929[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFarmingSeedData                      CallFunc_GetFarmingSeedsStruct_FarmingSeeds;       // 0x10(0x1A0)(None)
	enum class EValid                            CallFunc_GetFarmingSeedsStruct_Paths;              // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1B2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_92E[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_RecalculateTotalElapsedTime_ElapsedTime;  // 0x1B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x252 (0x252 - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.RecalculateTotalElapsedTime
struct ABP_Farming_Plot_Base_C_RecalculateTotalElapsedTime_Params
{
public:
	float                                        ElapsedTime;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeAccum;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_97D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFarmingGrowthStatesRowHandle> K2Node_MakeArray_Array;                            // 0x18(0x10)(ReferenceParm)
	struct FFarmingGrowthStatesRowHandle         CallFunc_Array_Get_Item;                           // 0x28(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FFarmingGrowthState                   CallFunc_GetFarmingGrowthStatesStruct_FarmingGrowthStates; // 0x40(0x58)(None)
	enum class EValid                            CallFunc_GetFarmingGrowthStatesStruct_Paths;       // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_989[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_996[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_99D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Add_FloatFloat_ReturnValue_1;             // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFarmingSeedData                      CallFunc_GetFarmingSeedsStruct_FarmingSeeds;       // 0xB0(0x1A0)(None)
	enum class EValid                            CallFunc_GetFarmingSeedsStruct_Paths;              // 0x250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x251(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x71 (0x71 - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.UpdateTimeOfDayStat
struct ABP_Farming_Plot_Base_C_UpdateTimeOfDayStat_Params
{
public:
	class UTimeOfDaySubsystem*                   CallFunc_GetWorldSubsystem_ReturnValue;            // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimeOfDayEnum                        CallFunc_GetTimeOfDayEnum_ReturnValue;             // 0x8(0x10)(HasGetValueTypeHash)
	bool                                         CallFunc_RemoveStats_BP_ReturnValue;               // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9FE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_StructToInt_ReturnValue;                  // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct FStatsEnum, int32>               K2Node_MakeMap_Map;                                // 0x20(0x50)(ConstParm)
	bool                                         CallFunc_AddStats_BP_ReturnValue;                  // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x240 (0x240 - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.ConsumeFertilizer
struct ABP_Farming_Plot_Base_C_ConsumeFertilizer_Params
{
public:
	int32                                        CallFunc_GetStat_ReturnValue;                      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EValid                            CallFunc_GetTrait_Paths;                           // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A73[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventoryComponent*                   CallFunc_GetTrait_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A7C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventory*                            CallFunc_GetInventory_ReturnValue;                 // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A84[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A8A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetItem_ReturnValue;                      // 0x30(0x1F0)(ContainsInstancedReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EDataValid                        CallFunc_ItemDataValid_Paths;                      // 0x221(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x222(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x223(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x224(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x228(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x22C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x234(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DealDamageToInventoryItem_ReturnValue;    // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AA4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x23C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6D6 (0x6D6 - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.FertilizerUpdated
struct ABP_Farming_Plot_Base_C_FertilizerUpdated_Params
{
public:
	class UInventory*                            Inventory;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Location;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B31[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetItem_ReturnValue;                      // 0x10(0x1F0)(ContainsInstancedReference)
	struct FItemStaticData                       CallFunc_GetStaticItemData_StaticData;             // 0x200(0x4D0)(None)
	enum class EDataValid                        CallFunc_GetStaticItemData_Paths;                  // 0x6D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDataValid                        CallFunc_ItemDataValid_Paths;                      // 0x6D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x6D2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x6D3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_AddStats_BP_ReturnValue;                  // 0x6D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RemoveStats_BP_ReturnValue;               // 0x6D5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x58 (0x58 - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.GetAdditionalStats
struct ABP_Farming_Plot_Base_C_GetAdditionalStats_Params
{
public:
	TArray<struct FIcarusStatReplicated>         Array;                                             // 0x0(0x10)(Parm, OutParm)
	struct FIcarusStatReplicated                 K2Node_MakeStruct_IcarusStatReplicated;            // 0x10(0x18)(None)
	int32                                        CallFunc_GetStat_ReturnValue;                      // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B71[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIcarusStatReplicated                 K2Node_MakeStruct_IcarusStatReplicated_1;          // 0x30(0x18)(None)
	TArray<struct FIcarusStatReplicated>         K2Node_MakeArray_Array;                            // 0x48(0x10)(ReferenceParm)
};

// 0x24 (0x24 - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.ModifyByGrowthSpeed
struct ABP_Farming_Plot_Base_C_ModifyByGrowthSpeed_Params
{
public:
	float                                        Time;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ModifiedTime;                                      // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetGreenhouseEffect_Multiplier;           // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetStat_ReturnValue;                      // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x242 (0x242 - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.CalculateTotalGrowthTime
struct ABP_Farming_Plot_Base_C_CalculateTotalGrowthTime_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C2B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFarmingGrowthStatesRowHandle> K2Node_MakeArray_Array;                            // 0x10(0x10)(ReferenceParm)
	struct FFarmingGrowthStatesRowHandle         CallFunc_Array_Get_Item;                           // 0x20(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C34[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFarmingGrowthState                   CallFunc_GetFarmingGrowthStatesStruct_FarmingGrowthStates; // 0x40(0x58)(None)
	enum class EValid                            CallFunc_GetFarmingGrowthStatesStruct_Paths;       // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x9A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C3B[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFarmingSeedData                      CallFunc_GetFarmingSeedsStruct_FarmingSeeds;       // 0xA0(0x1A0)(None)
	enum class EValid                            CallFunc_GetFarmingSeedsStruct_Paths;              // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x241(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x262 (0x262 - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.SeedAddedToInventory
struct ABP_Farming_Plot_Base_C_SeedAddedToInventory_Params
{
public:
	class UInventory*                            Inventory;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Location;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventorySlot                        CallFunc_Array_Get_Item;                           // 0x18(0x240)(ContainsInstancedReference)
	bool                                         CallFunc_ConsumeItem_ReturnValue;                  // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CBA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x25C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidSeedTypes_Success;                 // 0x261(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB66 (0xB66 - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.ProcessItemRewards
struct ABP_Farming_Plot_Base_C_ProcessItemRewards_Params
{
public:
	bool                                         CropsDecayed;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D95[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             GeneratedItem;                                     // 0x8(0x1F0)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x200(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x204(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAlterationsEnum>              K2Node_MakeArray_Array;                            // 0x208(0x10)(ReferenceParm)
	struct FItemRewards                          CallFunc_GetItemRewardsStruct_ItemRewards;         // 0x218(0x28)(None)
	enum class EValid                            CallFunc_GetItemRewardsStruct_Paths;               // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x241(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DBB[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemRewardEntry                      CallFunc_Array_Get_Item;                           // 0x244(0x88)(NoDestructor)
	bool                                         CallFunc_RemoveItemProperty_ReturnValue;           // 0x2CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DC2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GenerateItemFromReward_ReturnValue;       // 0x2D0(0x1F0)(ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ManuallyForcePlaceItem_ReturnValue;       // 0x4C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EDataValid                        CallFunc_ItemDataValid_Paths;                      // 0x4C5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DCD[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x4C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x4CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x4CD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DD6[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x4D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DD8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FIcarusStatReplicated>         CallFunc_GetAdditionalStats_Array;                 // 0x4D8(0x10)(ReferenceParm)
	int32                                        CallFunc_GetStat_ReturnValue;                      // 0x4E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DE3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_CreateCustomItem_ReturnValue;             // 0x4F0(0x1F0)(ContainsInstancedReference)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x6E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDataValid                        CallFunc_ItemDataValid_Paths_1;                    // 0x6E4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DEB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x6E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x6EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DF3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x6F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ManuallyForcePlaceItem_ReturnValue_1;     // 0x6F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DF7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFarmingSeedData                      CallFunc_GetFarmingSeedsStruct_FarmingSeeds;       // 0x6F8(0x1A0)(None)
	enum class EValid                            CallFunc_GetFarmingSeedsStruct_Paths;              // 0x898(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_3;                    // 0x899(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E02[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemRewards                          CallFunc_GetItemRewardsStruct_ItemRewards_1;       // 0x8A0(0x28)(None)
	enum class EValid                            CallFunc_GetItemRewardsStruct_Paths_1;             // 0x8C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_4;                    // 0x8C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E0E[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemRewardEntry                      CallFunc_Array_Get_Item_1;                         // 0x8CC(0x88)(NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x954(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemData                             CallFunc_GenerateItemFromReward_ReturnValue_1;     // 0x958(0x1F0)(ContainsInstancedReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xB48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E29[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetItemPropertyValue_IntValue;            // 0xB4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDataValid                        CallFunc_GetItemPropertyValue_Paths;               // 0xB50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E32[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0xB54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_5;                    // 0xB58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E39[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0xB5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FCeil_ReturnValue;                        // 0xB60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESetDataSuccess                   CallFunc_SetItemPropertyValue_Paths;               // 0xB64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_6;                    // 0xB65(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21A (0x21A - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.GetAudioData
struct ABP_Farming_Plot_Base_C_GetAudioData_Params
{
public:
	struct FFarmingSeedAudioData                 Data;                                              // 0x0(0x78)(Parm, OutParm)
	struct FFarmingSeedData                      CallFunc_GetFarmingSeedsStruct_FarmingSeeds;       // 0x78(0x1A0)(None)
	enum class EValid                            CallFunc_GetFarmingSeedsStruct_Paths;              // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x219(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x22C (0x22C - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.UpdateMesh
struct ABP_Farming_Plot_Base_C_UpdateMesh_Params
{
public:
	TArray<struct FFarmingGrowthStatesRowHandle> K2Node_MakeArray_Array;                            // 0x0(0x10)(ReferenceParm)
	struct FFarmingGrowthStatesRowHandle         CallFunc_Array_Get_Item;                           // 0x10(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FFarmingSeedData                      CallFunc_GetFarmingSeedsStruct_FarmingSeeds;       // 0x28(0x1A0)(None)
	enum class EValid                            CallFunc_GetFarmingSeedsStruct_Paths;              // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_ED2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFarmingGrowthState                   CallFunc_GetFarmingGrowthStatesStruct_FarmingGrowthStates; // 0x1D0(0x58)(None)
	enum class EValid                            CallFunc_GetFarmingGrowthStatesStruct_Paths;       // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x229(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x22A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x22B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x458 (0x458 - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.DebugPlot
struct ABP_Farming_Plot_Base_C_DebugPlot_Params
{
public:
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x0(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_BoolToText_ReturnValue;              // 0x40(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x58(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_BoolToText_ReturnValue_1;            // 0x98(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0xB0(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_BoolToText_ReturnValue_2;            // 0xF0(0x18)(None)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x108(0x10)(ReferenceParm)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x118(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x158(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x170(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_BoolToText_ReturnValue_3;            // 0x180(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_4;            // 0x198(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_5;            // 0x1D8(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_6;            // 0x218(0x40)(HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F54[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_7;            // 0x260(0x40)(HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x2A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F59[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_8;            // 0x2A8(0x40)(HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x2E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F5F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_9;            // 0x2F0(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_10;           // 0x330(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_BoolToText_ReturnValue_4;            // 0x370(0x18)(None)
	class FText                                  CallFunc_Conv_BoolToText_ReturnValue_5;            // 0x388(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_11;           // 0x3A0(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_12;           // 0x3E0(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x420(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x430(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x448(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.PlaySound
struct ABP_Farming_Plot_Base_C_PlaySound_Params
{
public:
	class UFMODEvent*                            FMODEvent;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F9F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FA0[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_Conv_VectorToTransform_ReturnValue;       // 0x20(0x30)(IsPlainOldData, NoDestructor)
	struct FFMODEventInstance                    CallFunc_PlayEventAtLocation_ReturnValue;          // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.ResetPlot
struct ABP_Farming_Plot_Base_C_ResetPlot_Params
{
public:
	bool                                         WasHarvested;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.Deployable_Interact
struct ABP_Farming_Plot_Base_C_Deployable_Interact_Params
{
public:
	class AActor*                                Interactor;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                K2Node_DynamicCast_AsIcarus_Player_Character;      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FE1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               CallFunc_GetIcarusPlayerController_ReturnValue;    // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.GrowthComplete
struct ABP_Farming_Plot_Base_C_GrowthComplete_Params
{
public:
	int32                                        CallFunc_GetLevelTimeElapsedSec_ReturnValue;       // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x23A (0x23A - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.UpdateGrowthStage
struct ABP_Farming_Plot_Base_C_UpdateGrowthStage_Params
{
public:
	int32                                        SetGrowthStage;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1022[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFarmingGrowthStatesRowHandle> K2Node_MakeArray_Array;                            // 0x8(0x10)(ReferenceParm)
	struct FFarmingGrowthStatesRowHandle         CallFunc_Array_Get_Item;                           // 0x18(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1029[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFarmingGrowthState                   CallFunc_GetFarmingGrowthStatesStruct_FarmingGrowthStates; // 0x38(0x58)(None)
	enum class EValid                            CallFunc_GetFarmingGrowthStatesStruct_Paths;       // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1032[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFarmingSeedData                      CallFunc_GetFarmingSeedsStruct_FarmingSeeds;       // 0x98(0x1A0)(None)
	enum class EValid                            CallFunc_GetFarmingSeedsStruct_Paths;              // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x239(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x421 (0x421 - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.GetSeedType
struct ABP_Farming_Plot_Base_C_GetSeedType_Params
{
public:
	struct FItemData                             InputItem;                                         // 0x0(0x1F0)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FFarmingSeedsRowHandle                SeedRow;                                           // 0x1F0(0x18)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	enum class EValid                            CallFunc_GetTrait_Paths;                           // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_107B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFarmableComponent*                    CallFunc_GetTrait_ReturnValue;                     // 0x210(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFarmableData                         CallFunc_GetFarmableData_OutData;                  // 0x218(0x30)(None)
	bool                                         CallFunc_GetFarmableData_ReturnValue;              // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x249(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1082[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x24C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFarmingSeedsRowHandle                CallFunc_Array_Get_Item;                           // 0x254(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1085[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFarmingSeedData                      CallFunc_GetFarmingSeedsStruct_FarmingSeeds;       // 0x270(0x1A0)(None)
	enum class EValid                            CallFunc_GetFarmingSeedsStruct_Paths;              // 0x410(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1088[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x414(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x418(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x419(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_108D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x41C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FItemsStaticRowHandleFItemsStaticRowHandle_ReturnValue; // 0x420(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x209 (0x209 - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.PlantSeed
struct ABP_Farming_Plot_Base_C_PlantSeed_Params
{
public:
	struct FItemData                             PlantSeedItem;                                     // 0x0(0x1F0)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FFarmingSeedsRowHandle                CallFunc_GetSeedType_SeedRow;                      // 0x1F0(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_UpdateGrowthStage_Success;                // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x408 (0x408 - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.IsValidSeedTypes
struct ABP_Farming_Plot_Base_C_IsValidSeedTypes_Params
{
public:
	struct FItemData                             SeedValidCheck;                                    // 0x0(0x1F0)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	bool                                         Success;                                           // 0x1F0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EValid                            CallFunc_GetTrait_Paths;                           // 0x1F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10D9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFarmableComponent*                    CallFunc_GetTrait_ReturnValue;                     // 0x1F8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFarmableData                         CallFunc_GetFarmableData_OutData;                  // 0x200(0x30)(None)
	bool                                         CallFunc_GetFarmableData_ReturnValue;              // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x231(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10E0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x234(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFarmingSeedsRowHandle                CallFunc_Array_Get_Item;                           // 0x23C(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10E4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFarmingSeedData                      CallFunc_GetFarmingSeedsStruct_FarmingSeeds;       // 0x258(0x1A0)(None)
	enum class EValid                            CallFunc_GetFarmingSeedsStruct_Paths;              // 0x3F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x3F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10E7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x3FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x400(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FItemsStaticRowHandleFItemsStaticRowHandle_ReturnValue; // 0x401(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10EB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x404(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.OnLoaded_F380CEBD4EFB81B062277E990A5C4EF4
struct ABP_Farming_Plot_Base_C_OnLoaded_F380CEBD4EFB81B062277E990A5C4EF4_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.OnLoaded_D606FF354BF0D2CADE3A28BC7D9FF72D
struct ABP_Farming_Plot_Base_C_OnLoaded_D606FF354BF0D2CADE3A28BC7D9FF72D_Params
{
public:
	TSubclassOf<class UObject>                   Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.Snow
struct ABP_Farming_Plot_Base_C_Snow_Params
{
public:
	float                                        Intensity;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.LoadMesh
struct ABP_Farming_Plot_Base_C_LoadMesh_Params
{
public:
	TSoftObjectPtr<class UStaticMesh>            StaticMeshSoft;                                    // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FVector                               Scale;                                             // 0x28(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2C (0x2C - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.SetFarmingPlotValues
struct ABP_Farming_Plot_Base_C_SetFarmingPlotValues_Params
{
public:
	bool                                         bIsSeededRecord;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bIsHarvestableRecord;                              // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_114C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentGrowthStageRecord;                          // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentTimeRecord;                                 // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFarmingSeedsRowHandle                CurrentSeedRowRecord;                              // 0xC(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	float                                        NextStageTimeRecord;                               // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GrowthCompleteTimeRecord;                          // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.MULTI_PlaySound
struct ABP_Farming_Plot_Base_C_MULTI_PlaySound_Params
{
public:
	class UFMODEvent*                            FMODEvent;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.OnItemAdded
struct ABP_Farming_Plot_Base_C_OnItemAdded_Params
{
public:
	class UInventory*                            Inventory;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Location;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x200 (0x200 - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.OnItemRemovedVerbose
struct ABP_Farming_Plot_Base_C_OnItemRemovedVerbose_Params
{
public:
	class UInventory*                            Inventory;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Location;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_117C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             Item;                                              // 0x10(0x1F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x4 (0x4 - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.Rain
struct ABP_Farming_Plot_Base_C_Rain_Params
{
public:
	int32                                        Millilitres;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.WaterComponentActive
struct ABP_Farming_Plot_Base_C_WaterComponentActive_Params
{
public:
	bool                                         IsActive;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.OnFertilizerAdded
struct ABP_Farming_Plot_Base_C_OnFertilizerAdded_Params
{
public:
	class UInventory*                            Inventory;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Location;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.MULTI_PlayItemAddedAudio
struct ABP_Farming_Plot_Base_C_MULTI_PlayItemAddedAudio_Params
{
public:
	struct FItemsStaticRowHandle                 Item;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.PlayFertilizerFX
struct ABP_Farming_Plot_Base_C_PlayFertilizerFX_Params
{
public:
	struct FItemsStaticRowHandle                 Item;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.OnModifierUpdated
struct ABP_Farming_Plot_Base_C_OnModifierUpdated_Params
{
public:
	class UModifierStateComponent*               Component;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bRemoved;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x24EC (0x24EC - 0x0)
// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.ExecuteUbergraph_BP_Farming_Plot_Base
struct ABP_Farming_Plot_Base_C_ExecuteUbergraph_BP_Farming_Plot_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1296[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAlterationsEnum>              K2Node_MakeArray_Array;                            // 0x8(0x10)(ReferenceParm)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Intensity;                            // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_129A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UStaticMesh>            K2Node_CustomEvent_StaticMeshSoft;                 // 0x30(0x28)(HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_Scale;                          // 0x58(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_129E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_UpdateGrowthStage_Success;                // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x6D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetStaticMesh_ReturnValue;                // 0x6E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue;             // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bIsSeededRecord;                      // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bIsHarvestableRecord;                 // 0x7B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        K2Node_Event_CurrentGrowthStageRecord;             // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_CurrentTimeRecord;                    // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFarmingSeedsRowHandle                K2Node_Event_CurrentSeedRowRecord;                 // 0x84(0x18)(NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_NextStageTimeRecord;                  // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_GrowthCompleteTimeRecord;             // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12A9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFarmingSeedAudioData                 CallFunc_GetAudioData_Data;                        // 0xA8(0x78)(None)
	struct FFarmingSeedAudioData                 CallFunc_GetAudioData_Data_1;                      // 0x120(0x78)(None)
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1; // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            K2Node_DynamicCast_AsFMODEvent;                    // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12AD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODEvent*                            K2Node_DynamicCast_AsFMODEvent_1;                  // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12AF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFarmingSeedAudioData                 CallFunc_GetAudioData_Data_2;                      // 0x1C8(0x78)(None)
	class UFMODEvent*                            K2Node_CustomEvent_FMODEvent;                      // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2; // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            K2Node_DynamicCast_AsFMODEvent_2;                  // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EValid                            CallFunc_GetTrait_Paths;                           // 0x259(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12B2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventoryComponent*                   CallFunc_GetTrait_ReturnValue;                     // 0x260(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemData                             K2Node_MakeStruct_ItemData;                        // 0x268(0x1F0)(ContainsInstancedReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x458(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12B5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInventoryIDEnum>              CallFunc_Map_Keys_Keys;                            // 0x460(0x10)(ReferenceParm)
	struct FInventoryIDEnum                      CallFunc_Array_Get_Item;                           // 0x470(0x10)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x480(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12B6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventory*                            CallFunc_Map_Find_Value;                           // 0x488(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x490(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x491(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12B8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FItemData>                     CallFunc_GetAllItems_ReturnValue;                  // 0x498(0x10)(ReferenceParm, ContainsInstancedReference)
	class UInventory*                            K2Node_CustomEvent_Inventory_2;                    // 0x4A8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Location_2;                     // 0x4B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12BA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_Array_Get_Item_1;                         // 0x4B8(0x1F0)(ContainsInstancedReference)
	int32                                        CallFunc_GetItemStackCount_ReturnValue;            // 0x6A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12BB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x6B0(0x40)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x6F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12BD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0x6F8(0x18)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x710(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12BE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x718(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x758(0x10)(ReferenceParm)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x768(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12C3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x770(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x788(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable;                               // 0x798(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsIcarus_Item;             // 0x7A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x7A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIcarusItemSpawnParametersAdvanced    K2Node_MakeStruct_IcarusItemSpawnParametersAdvanced; // 0x7B0(0x38)(None)
	struct FIcarusItemSpawnParameters            K2Node_MakeStruct_IcarusItemSpawnParameters;       // 0x7E8(0x90)(None)
	class UInventory*                            K2Node_CustomEvent_Inventory_1;                    // 0x878(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Location_1;                     // 0x880(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12CD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             K2Node_CustomEvent_Item_2;                         // 0x888(0x1F0)(ConstParm, ContainsInstancedReference)
	int32                                        Temp_int_Variable;                                 // 0xA78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasItems_ReturnValue;                     // 0xA7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12CF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UObject>                   K2Node_CustomEvent_Loaded;                         // 0xA80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue_1;                   // 0xA88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue_2;                   // 0xA89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12D3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_ModifyByGrowthSpeed_ModifiedTime;         // 0xA8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0xA90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0xA94(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_1;             // 0xAA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0xAA4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0xAB0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12D5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Temp_object_Variable;                              // 0xAC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           K2Node_DynamicCast_AsStatic_Mesh;                  // 0xAC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xAD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetStaticMesh_ReturnValue_1;              // 0xAD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12D7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0xAD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0xAD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12D8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        Temp_object_Variable_1;                            // 0xAE0(0x10)(ConstParm, ReferenceParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xAF0(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue_3;                   // 0xB00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12DE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_CustomEvent_Loaded_1;                       // 0xB08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0xB10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0xB14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0xB15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0xB16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12E4[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFarmingGrowthState                   CallFunc_GetFarmingGrowthStatesStruct_FarmingGrowthStates; // 0xB18(0x58)(None)
	enum class EValid                            CallFunc_GetFarmingGrowthStatesStruct_Paths;       // 0xB70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0xB71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0xB72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0xB73(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12E8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFarmingSeedData                      CallFunc_GetFarmingSeedsStruct_FarmingSeeds;       // 0xB78(0x1A0)(None)
	enum class EValid                            CallFunc_GetFarmingSeedsStruct_Paths;              // 0xD18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFarmingSeedData                      CallFunc_GetFarmingSeedsStruct_FarmingSeeds_1;     // 0xD20(0x1A0)(None)
	enum class EValid                            CallFunc_GetFarmingSeedsStruct_Paths_1;            // 0xEC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0xEC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_3;                    // 0xEC2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FFarmingGrowthStatesRowHandleFFarmingGrowthStatesRowHandle_ReturnValue; // 0xEC3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12EC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFarmingSeedData                      CallFunc_GetFarmingSeedsStruct_FarmingSeeds_2;     // 0xEC8(0x1A0)(None)
	enum class EValid                            CallFunc_GetFarmingSeedsStruct_Paths_2;            // 0x1068(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_4;                    // 0x1069(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12ED[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_1;                               // 0x106C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x1070(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12EF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x1074(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_2;            // 0x1078(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x107C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        Temp_object_Variable_2;                            // 0x1080(0x10)(ConstParm, ReferenceParm)
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit;                   // 0x1090(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_LineTraceSingle_ReturnValue;              // 0x1118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x1119(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12F5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Event_Millilitres;                          // 0x111C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12F7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModifier                             K2Node_MakeStruct_Modifier;                        // 0x1124(0x20)(NoDestructor)
	int32                                        Temp_int_Variable_2;                               // 0x1144(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_AddModifierState_ReturnValue;             // 0x1148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_5;                 // 0x114C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsActive;                       // 0x1150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12FA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModifier                             K2Node_MakeStruct_Modifier_1;                      // 0x1154(0x20)(NoDestructor)
	int32                                        CallFunc_AddModifierState_ReturnValue_1;           // 0x1174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveModifierState_ReturnValue;          // 0x1178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetStat_ReturnValue;                      // 0x117C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x1180(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_3;            // 0x118C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x1190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1303[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EObjectTypeQuery>          K2Node_MakeArray_Array_2;                          // 0x1198(0x10)(ConstParm, ReferenceParm)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x11A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_130A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        CallFunc_SphereOverlapActors_OutActors;            // 0x11B0(0x10)(ReferenceParm)
	bool                                         CallFunc_SphereOverlapActors_ReturnValue;          // 0x11C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_130B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_FMax_ReturnValue;                         // 0x11C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_Array_Get_Item_2;                         // 0x11C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x11D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_130F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABuildingBase*                         K2Node_DynamicCast_AsBuilding_Base;                // 0x11D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x11E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1312[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Add_FloatFloat_ReturnValue_2;             // 0x11E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1315[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBuildableData                        CallFunc_GetBuildableData_BuildableData;           // 0x11F0(0xB8)(None)
	enum class EDataValid                        CallFunc_GetBuildableData_Paths;                   // 0x12A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1318[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x12AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_5;                    // 0x12B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_131A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x12B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x12B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x12B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x12BA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FBuildingTypesRowHandleFBuildingTypesRowHandle_ReturnValue; // 0x12BB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x12BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_131D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventory*                            K2Node_CustomEvent_Inventory;                      // 0x12C0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Location;                       // 0x12C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1320[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetItem_ReturnValue;                      // 0x12D0(0x1F0)(ContainsInstancedReference)
	enum class EDataValid                        CallFunc_ItemDataValid_Paths;                      // 0x14C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_6;                    // 0x14C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1322[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemsStaticRowHandle                 K2Node_CustomEvent_Item_1;                         // 0x14C4(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 K2Node_CustomEvent_Item;                           // 0x14DC(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1325[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UModifierStateComponent*               K2Node_CustomEvent_Component;                      // 0x14F8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bRemoved;                       // 0x1500(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x1501(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1327[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UModifierStateComponent*               CallFunc_GetModifierStateByUID_ReturnValue;        // 0x1508(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetStat_ReturnValue_1;                    // 0x1510(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x1514(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_132C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x1518(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1528(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_132D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFarmingSubsystem*                     CallFunc_GetWorldSubsystem_ReturnValue;            // 0x1530(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSheltered_ReturnValue;                  // 0x1538(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_5;                // 0x1539(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x153A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x153B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x153C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CheckOutdoorsAndGreenhouse_bIsOutdoors;   // 0x153D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1332[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_CheckOutdoorsAndGreenhouse_GreenhousePieceCount; // 0x1540(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_4;            // 0x1544(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_2;             // 0x1548(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1334[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_MapRangeClamped_ReturnValue_1;            // 0x154C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetLevelTimeElapsedSec_ReturnValue;       // 0x1550(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetLevelTimeElapsedSec_ReturnValue_1;     // 0x1554(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_3;             // 0x1558(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1336[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_5;            // 0x155C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x1560(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1337[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x1570(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_GetRowIndex_ReturnValue;                  // 0x15A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_133B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFarmingSeedData                      CallFunc_GetFarmingSeedsStruct_FarmingSeeds_3;     // 0x15A8(0x1A0)(None)
	enum class EValid                            CallFunc_GetFarmingSeedsStruct_Paths_3;            // 0x1748(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_133F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIcarusStatReplicated                 K2Node_MakeStruct_IcarusStatReplicated;            // 0x1750(0x18)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess_7;                    // 0x1768(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1341[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FIcarusStatReplicated>         K2Node_MakeArray_Array_3;                          // 0x1770(0x10)(ReferenceParm)
	TArray<struct FIcarusStatReplicated>         K2Node_MakeArray_Array_4;                          // 0x1780(0x10)(ReferenceParm)
	TArray<struct FAlterationsEnum>              K2Node_MakeArray_Array_5;                          // 0x1790(0x10)(ReferenceParm)
	struct FItemsStaticRowHandle                 CallFunc_Map_Find_Value_1;                         // 0x17A0(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x17B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_134D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_CreateCustomItem_ReturnValue;             // 0x17C0(0x1F0)(ContainsInstancedReference)
	struct FItemData                             K2Node_MakeStruct_ItemData_1;                      // 0x19B0(0x1F0)(ContainsInstancedReference)
	struct FItemStaticData                       CallFunc_GetItemsStaticStruct_ItemsStatic;         // 0x1BA0(0x4D0)(None)
	enum class EValid                            CallFunc_GetItemsStaticStruct_Paths;               // 0x2070(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1351[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_CreateCustomItem_ReturnValue_1;           // 0x2078(0x1F0)(ContainsInstancedReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess_8;                    // 0x2268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1352[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusItem*                           CallFunc_SpawnItemActor_ReturnValue;               // 0x2270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Crop_Plot_Base_C*                  K2Node_DynamicCast_AsBP_Crop_Plot_Base;            // 0x2278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x2280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1358[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDeployableData                       CallFunc_GetDeployableStruct_Deployable;           // 0x2288(0xA8)(None)
	enum class EValid                            CallFunc_GetDeployableStruct_Paths;                // 0x2330(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PlantSeed_Planted;                        // 0x2331(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_9;                    // 0x2332(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_135C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDeployableSetupRowHandle             CallFunc_Array_Get_Item_3;                         // 0x2334(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x234C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_135D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDeployableSetup                      CallFunc_GetDeployableSetupStruct_DeployableSetup; // 0x2350(0x188)(None)
	enum class EValid                            CallFunc_GetDeployableSetupStruct_Paths;           // 0x24D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_10;                   // 0x24D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x24DA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1363[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x24DC(0x10)(ZeroConstructor, NoDestructor)
};

}
}


