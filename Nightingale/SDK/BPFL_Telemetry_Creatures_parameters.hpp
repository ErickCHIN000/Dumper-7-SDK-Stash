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

// 0x1A0 (0x1A0 - 0x0)
// Function BPFL_Telemetry_Creatures.BPFL_Telemetry_Creatures_C.TelemetryCreatureSpawned
struct UBPFL_Telemetry_Creatures_C_TelemetryCreatureSpawned_Params
{
public:
	class ABP_CreatureBase_C*                    Creature;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                LMapName;                                          // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class ABP_CreatureSpawnerBase_C*             LSquad;                                            // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class ABP_CreatureBase_C*                    LCreature;                                         // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class ANWXAISpawner*                         CallFunc_GetSpawner_Spawner;                       // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_CreatureSpawnerBase_C*             K2Node_DynamicCast_AsBP_Creature_Spawner_Base;     // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5515[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_ObjectToString_ReturnValue;          // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FMetricsEventAttr                     K2Node_MakeStruct_MetricsEventAttr;                // 0x58(0x20)(None)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FMetricsEventAttr                     K2Node_MakeStruct_MetricsEventAttr_1;              // 0x88(0x20)(None)
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMetricsEventAttr                     K2Node_MakeStruct_MetricsEventAttr_2;              // 0xB0(0x20)(None)
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue;          // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FMetricsEventAttr                     K2Node_MakeStruct_MetricsEventAttr_3;              // 0xE0(0x20)(None)
	class FString                                CallFunc_GetCurrentLevelName_ReturnValue;          // 0x100(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_553B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_ObjectToString_ReturnValue_1;        // 0x118(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FMetricsEventAttr                     K2Node_MakeStruct_MetricsEventAttr_4;              // 0x128(0x20)(None)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x148(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_VectorToString_ReturnValue;          // 0x160(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FMetricsEventAttr                     K2Node_MakeStruct_MetricsEventAttr_5;              // 0x170(0x20)(None)
	TArray<struct FMetricsEventAttr>             K2Node_MakeArray_Array;                            // 0x190(0x10)(ConstParm, ReferenceParm)
};

}
}


