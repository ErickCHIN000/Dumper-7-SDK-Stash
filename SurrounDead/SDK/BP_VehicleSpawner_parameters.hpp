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
// Function BP_VehicleSpawner.BP_VehicleSpawner_C.ComponentsToSave
struct ABP_VehicleSpawner_C_ComponentsToSave_Params
{
public:
	TArray<class UActorComponent*>               Components;                                        // 0x0(0x10)(Parm, OutParm, ContainsInstancedReference)
};

// 0x21 (0x21 - 0x0)
// Function BP_VehicleSpawner.BP_VehicleSpawner_C.RandomChance
struct ABP_VehicleSpawner_C_RandomChance_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B1F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Chance;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloatInRange_ReturnValue;           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1BC (0x1BC - 0x0)
// Function BP_VehicleSpawner.BP_VehicleSpawner_C.SpawnSelectVehicles
struct ABP_VehicleSpawner_C_SpawnSelectVehicles_Params
{
public:
	class UClass*                                Vehicle;                                           // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FStruct_VehicleSpawner                CallFunc_GetDataTableRowFromName_OutRow;           // 0x8(0x18)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BAC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_VehicleSpawner                CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x28(0x18)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BB0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_VehicleDT                     CallFunc_Array_Random_OutItem;                     // 0x48(0x30)(ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Random_OutIndex;                    // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BC9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_VehicleDT                     CallFunc_Array_Random_OutItem_1;                   // 0x80(0x30)(ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Random_OutIndex_1;                  // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BCE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_VehicleSpawner                CallFunc_GetDataTableRowFromName_OutRow_2;         // 0xB8(0x18)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_2;    // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BD3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_VehicleSpawner                CallFunc_GetDataTableRowFromName_OutRow_3;         // 0xD8(0x18)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_3;    // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BDC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_VehicleDT                     CallFunc_Array_Random_OutItem_2;                   // 0xF8(0x30)(ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Random_OutIndex_2;                  // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BE2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_VehicleDT                     CallFunc_Array_Random_OutItem_3;                   // 0x130(0x30)(ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Random_OutIndex_3;                  // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BEB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_VehicleSpawner                CallFunc_GetDataTableRowFromName_OutRow_4;         // 0x168(0x18)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_4;    // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x181(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BF8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_VehicleDT                     CallFunc_Array_Random_OutItem_4;                   // 0x188(0x30)(ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Random_OutIndex_4;                  // 0x1B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x165 (0x165 - 0x0)
// Function BP_VehicleSpawner.BP_VehicleSpawner_C.ExecuteUbergraph_BP_VehicleSpawner
struct ABP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CD3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEMSAsyncWait*                         CallFunc_AsyncWaitForOperation_ReturnValue;        // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetBoolCVar_ReturnValue;                  // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CDE[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_SpawnSelectVehicles_Vehicle;              // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x30(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RandomChance_ReturnValue;                 // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CDF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x98(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0xB0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0xC8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0xE0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x140(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_VehicleMaster_C*                   CallFunc_FinishSpawningActor_ReturnValue;          // 0x148(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_VehicleMaster_C*>           CallFunc_GetAllActorsOfClass_OutActors;            // 0x150(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x164(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


