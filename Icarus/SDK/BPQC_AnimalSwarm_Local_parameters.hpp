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

// 0x248 (0x248 - 0x0)
// Function BPQC_AnimalSwarm_Local.BPQC_AnimalSwarm_Local_C.GetCreatureToSpawnFromAtmosphere
struct UBPQC_AnimalSwarm_Local_C_GetCreatureToSpawnFromAtmosphere_Params
{
public:
	struct FAtmospheresEnum                      Atmosphere;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FAISetupRowHandle                     OutCreature;                                       // 0x10(0x18)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchRowEnum_CmpSuccess;                   // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2093[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAISetupRowHandle                     Temp_struct_Variable;                              // 0x30(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FAISetupRowHandle                     Temp_struct_Variable_1;                            // 0x48(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FAISetupRowHandle                     Temp_struct_Variable_2;                            // 0x60(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAISetupRowHandle                     Temp_struct_Variable_3;                            // 0x7C(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FAISetupRowHandle                     Temp_struct_Variable_4;                            // 0x94(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FAISetupRowHandle                     Temp_struct_Variable_5;                            // 0xAC(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_2;                               // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAISetupRowHandle                     Temp_struct_Variable_6;                            // 0xC8(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FAISetupRowHandle                     Temp_struct_Variable_7;                            // 0xE0(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FAISetupRowHandle                     Temp_struct_Variable_8;                            // 0xF8(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_3;                               // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAISetupRowHandle                     Temp_struct_Variable_9;                            // 0x114(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FAISetupRowHandle                     Temp_struct_Variable_10;                           // 0x12C(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FAISetupRowHandle                     Temp_struct_Variable_11;                           // 0x144(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FAISetupRowHandle                     Temp_struct_Variable_12;                           // 0x15C(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_4;                               // 0x174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAISetupRowHandle                     Temp_struct_Variable_13;                           // 0x178(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FAISetupRowHandle                     Temp_struct_Variable_14;                           // 0x190(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FAISetupRowHandle                     Temp_struct_Variable_15;                           // 0x1A8(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomInteger_ReturnValue;                // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomInteger_ReturnValue_1;              // 0x1C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAISetupRowHandle                     K2Node_Select_Default;                             // 0x1C8(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FAISetupRowHandle                     K2Node_Select_Default_1;                           // 0x1E0(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomInteger_ReturnValue_2;              // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAISetupRowHandle                     K2Node_Select_Default_2;                           // 0x1FC(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomInteger_ReturnValue_3;              // 0x214(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAISetupRowHandle                     K2Node_Select_Default_3;                           // 0x218(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FAISetupRowHandle                     K2Node_Select_Default_4;                           // 0x230(0x18)(NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BPQC_AnimalSwarm_Local.BPQC_AnimalSwarm_Local_C.ModifyTimeByAttraction
struct UBPQC_AnimalSwarm_Local_C_ModifyTimeByAttraction_Params
{
public:
	float                                        RawValue;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ModifiedValue;                                     // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIcarusStatContainer*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetStat_ReturnValue;                      // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2213[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE0 (0xE0 - 0x0)
// Function BPQC_AnimalSwarm_Local.BPQC_AnimalSwarm_Local_C.GetFallbackCreature
struct UBPQC_AnimalSwarm_Local_C_GetFallbackCreature_Params
{
public:
	struct FAISetupRowHandle                     CreatureToSpawn;                                   // 0x0(0x18)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActorState*                           CallFunc_GetComponentByClass_ReturnValue;          // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue;             // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_22AA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIcarusBiome                          CallFunc_GetBiomesStruct_Biomes;                   // 0x30(0x80)(None)
	enum class EValid                            CallFunc_GetBiomesStruct_Paths;                    // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_22C2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAtmospheresEnum                      CallFunc_RowHandleToStruct_ReturnValue;            // 0xB8(0x10)(HasGetValueTypeHash)
	struct FAISetupRowHandle                     CallFunc_GetCreatureToSpawnFromAtmosphere_OutCreature; // 0xC8(0x18)(NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function BPQC_AnimalSwarm_Local.BPQC_AnimalSwarm_Local_C.ModifyAmountByAttraction
struct UBPQC_AnimalSwarm_Local_C_ModifyAmountByAttraction_Params
{
public:
	int32                                        RawValue;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ModifiedValue;                                     // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2370[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UIcarusStatContainer*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2379[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetStat_ReturnValue;                      // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Multiply_IntInt_ReturnValue;              // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BPQC_AnimalSwarm_Local.BPQC_AnimalSwarm_Local_C.CanSpawn
struct UBPQC_AnimalSwarm_Local_C_CanSpawn_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsActive_ReturnValue;                     // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x86 (0x86 - 0x0)
// Function BPQC_AnimalSwarm_Local.BPQC_AnimalSwarm_Local_C.Select AITo Spawn
struct UBPQC_AnimalSwarm_Local_C_Select_AITo_Spawn_Params
{
public:
	struct FAISetupRowHandle                     Output;                                            // 0x0(0x18)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	struct FAISetupRowHandle                     CallFunc_GetFallbackCreature_CreatureToSpawn;      // 0x18(0x18)(NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x38(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2472[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABP_AISpawner_C*>               CallFunc_GetAllActorsOfClass_OutActors;            // 0x48(0x10)(ReferenceParm)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2479[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_AISpawner_C*                       CallFunc_Array_Get_Item;                           // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAISetupRowHandle                     CallFunc_PickNewAIToSpawn_Output;                  // 0x68(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PickNewAIToSpawn_Level;                   // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PickNewAIToSpawn_ValidSpawn;              // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue;             // 0x85(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xF0 (0xF0 - 0x0)
// Function BPQC_AnimalSwarm_Local.BPQC_AnimalSwarm_Local_C.ExecuteUbergraph_BPQC_AnimalSwarm_Local
struct UBPQC_AnimalSwarm_Local_C_ExecuteUbergraph_BPQC_AnimalSwarm_Local_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_ModifyTimeByAttraction_ModifiedValue;     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionDifficulty                Temp_byte_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2526[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_2;                               // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_3;                               // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_4;                               // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAISetupRowHandle                     CallFunc_Select_AITo_Spawn_Output;                 // 0x20(0x18)(NoDestructor, HasGetValueTypeHash)
	TArray<struct FAISetupRowHandle>             K2Node_MakeArray_Array;                            // 0x38(0x10)(ReferenceParm)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProspectSubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FProspectInfo                         CallFunc_GetActiveProspectInfo_ReturnValue;        // 0x58(0x90)(ConstParm)
	int32                                        K2Node_Select_Default;                             // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_ModifyAmountByAttraction_ModifiedValue;   // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


