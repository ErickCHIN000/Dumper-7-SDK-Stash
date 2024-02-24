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

// 0x544 (0x544 - 0x0)
// Function BP_Deep_Mining_Ore_Deposit.BP_Deep_Mining_Ore_Deposit_C.AssignType
struct ABP_Deep_Mining_Ore_Deposit_C_AssignType_Params
{
public:
	int32                                        ListID;                                            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOreDepositRowHandle                  Temp_struct_Variable;                              // 0x4(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FOreDepositRowHandle                  Temp_struct_Variable_1;                            // 0x1C(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FOreDepositRowHandle                  Temp_struct_Variable_2;                            // 0x34(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FOreDepositRowHandle                  Temp_struct_Variable_3;                            // 0x4C(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FOreDepositRowHandle                  Temp_struct_Variable_4;                            // 0x64(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FOreDepositRowHandle                  Temp_struct_Variable_5;                            // 0x7C(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FOreDepositRowHandle                  Temp_struct_Variable_6;                            // 0x94(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FOreDepositRowHandle                  Temp_struct_Variable_7;                            // 0xAC(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FOreDepositRowHandle                  Temp_struct_Variable_8;                            // 0xC4(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FOreDepositRowHandle                  Temp_struct_Variable_9;                            // 0xDC(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FOreDepositRowHandle                  Temp_struct_Variable_10;                           // 0xF4(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FOreDepositRowHandle                  Temp_struct_Variable_11;                           // 0x10C(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FOreDepositRowHandle                  Temp_struct_Variable_12;                           // 0x124(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4BA8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UProspectSubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIcarusProspect                       CallFunc_GetActiveProspectData_ReturnValue;        // 0x148(0x2C8)(ConstParm)
	int32                                        Temp_int_Variable;                                 // 0x410(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOreDepositRowHandle                  Temp_struct_Variable_13;                           // 0x414(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FTerrainsRowHandleFTerrainsRowHandle_ReturnValue; // 0x42C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BC3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOreDepositRowHandle                  Temp_struct_Variable_14;                           // 0x430(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FOreDepositRowHandle                  Temp_struct_Variable_15;                           // 0x448(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FOreDepositRowHandle                  Temp_struct_Variable_16;                           // 0x460(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FOreDepositRowHandle                  Temp_struct_Variable_17;                           // 0x478(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FOreDepositRowHandle                  Temp_struct_Variable_18;                           // 0x490(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FOreDepositRowHandle                  Temp_struct_Variable_19;                           // 0x4A8(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FOreDepositRowHandle                  Temp_struct_Variable_20;                           // 0x4C0(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FOreDepositRowHandle                  Temp_struct_Variable_21;                           // 0x4D8(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FOreDepositRowHandle                  Temp_struct_Variable_22;                           // 0x4F0(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x508(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue;         // 0x50C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue_1;       // 0x510(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOreDepositRowHandle                  K2Node_Select_Default;                             // 0x514(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FOreDepositRowHandle                  K2Node_Select_Default_1;                           // 0x52C(0x18)(NoDestructor, HasGetValueTypeHash)
};

// 0x1C8 (0x1C8 - 0x0)
// Function BP_Deep_Mining_Ore_Deposit.BP_Deep_Mining_Ore_Deposit_C.GetNodeMaterial
struct ABP_Deep_Mining_Ore_Deposit_C_GetNodeMaterial_Params
{
public:
	struct FOreDeposit                           OreDeposit;                                        // 0x0(0x120)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TSoftObjectPtr<class UMaterialInterface>     ReturnValue;                                       // 0x120(0x28)(Parm, OutParm, ReturnParm, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x149(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_2;                              // 0x14A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D22[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UMaterialInterface>     K2Node_Select_Default;                             // 0x150(0x28)(HasGetValueTypeHash)
	TSoftObjectPtr<class UMaterialInterface>     K2Node_Select_Default_1;                           // 0x178(0x28)(HasGetValueTypeHash)
	TSoftObjectPtr<class UMaterialInterface>     K2Node_Select_Default_2;                           // 0x1A0(0x28)(HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function BP_Deep_Mining_Ore_Deposit.BP_Deep_Mining_Ore_Deposit_C.BiomeUpdated
struct ABP_Deep_Mining_Ore_Deposit_C_BiomeUpdated_Params
{
public:
	bool                                         NewIsDesert;                                       // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FBiomesRowHandleFBiomesRowHandle_ReturnValue; // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FBiomesRowHandleFBiomesRowHandle_ReturnValue_1; // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x122 (0x122 - 0x0)
// Function BP_Deep_Mining_Ore_Deposit.BP_Deep_Mining_Ore_Deposit_C.OnRep_LocalMaterialType
struct ABP_Deep_Mining_Ore_Deposit_C_OnRep_LocalMaterialType_Params
{
public:
	struct FOreDeposit                           CallFunc_GetOreDepositStruct_OreDeposit;           // 0x0(0x120)(None)
	enum class EValid                            CallFunc_GetOreDepositStruct_Paths;                // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_Deep_Mining_Ore_Deposit.BP_Deep_Mining_Ore_Deposit_C.OnLoaded_86CD52A24289457079E06B9B6B8EE0DB
struct ABP_Deep_Mining_Ore_Deposit_C_OnLoaded_86CD52A24289457079E06B9B6B8EE0DB_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Deep_Mining_Ore_Deposit.BP_Deep_Mining_Ore_Deposit_C.OnLoaded_7A08DCE545D5B147504667BA88769DFC
struct ABP_Deep_Mining_Ore_Deposit_C_OnLoaded_7A08DCE545D5B147504667BA88769DFC_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_Deep_Mining_Ore_Deposit.BP_Deep_Mining_Ore_Deposit_C.SetMaterialType
struct ABP_Deep_Mining_Ore_Deposit_C_SetMaterialType_Params
{
public:
	struct FOreDepositRowHandle                  Row;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x31C (0x31C - 0x0)
// Function BP_Deep_Mining_Ore_Deposit.BP_Deep_Mining_Ore_Deposit_C.ExecuteUbergraph_BP_Deep_Mining_Ore_Deposit
struct ABP_Deep_Mining_Ore_Deposit_C_ExecuteUbergraph_BP_Deep_Mining_Ore_Deposit_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F92[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable;                              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    K2Node_DynamicCast_AsMaterial_Interface;           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FA2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOreDepositRowHandle                  K2Node_CustomEvent_Row;                            // 0x24(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FAC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOreDeposit                           CallFunc_GetOreDepositStruct_OreDeposit;           // 0x40(0x120)(None)
	enum class EValid                            CallFunc_GetOreDepositStruct_Paths;                // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x161(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FC7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UMaterialInterface>     CallFunc_GetNodeMaterial_ReturnValue;              // 0x168(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue_1; // 0x191(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FE7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOreDeposit                           CallFunc_GetOreDepositStruct_OreDeposit_1;         // 0x198(0x120)(None)
	enum class EValid                            CallFunc_GetOreDepositStruct_Paths_1;              // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FF4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x2BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x2C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5000[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue;         // 0x2C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x2C8(0x10)(ZeroConstructor, NoDestructor)
	class UObject*                               Temp_object_Variable_1;                            // 0x2D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    K2Node_DynamicCast_AsMaterial_Interface_1;         // 0x2E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x2E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5020[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x2EC(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_5023[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_CustomEvent_Loaded_1;                       // 0x300(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FOreDepositRowHandleFOreDepositRowHandle_ReturnValue; // 0x308(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_502B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x30C(0x10)(ZeroConstructor, NoDestructor)
};

}
}


