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

// 0x9 (0x9 - 0x0)
// Function BP_Vehicle_PoliceCar.BP_Vehicle_PoliceCar_C.SpawnPolicePassengers
struct ABP_Vehicle_PoliceCar_C_SpawnPolicePassengers_Params
{
public:
	class AActor*                                TargetActor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasPolicePassenger;                                // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x42 (0x42 - 0x0)
// Function BP_Vehicle_PoliceCar.BP_Vehicle_PoliceCar_C.FindSirenMeshComponent
struct ABP_Vehicle_PoliceCar_C_FindSirenMeshComponent_Params
{
public:
	class UStaticMeshComponent*                  SirenMeshComponent;                                // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsValid;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A47[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A49[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A4F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UStaticMeshComponent*>          CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x20(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A56[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BP_Vehicle_PoliceCar.BP_Vehicle_PoliceCar_C.ToggleSirenMaterial
struct ABP_Vehicle_PoliceCar_C_ToggleSirenMaterial_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         EnableSirens;                                      // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A7C[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  CallFunc_FindSirenMeshComponent_SirenMeshComponent; // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindSirenMeshComponent_IsValid;           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA (0xA - 0x0)
// Function BP_Vehicle_PoliceCar.BP_Vehicle_PoliceCar_C.CharacterEnter
struct ABP_Vehicle_PoliceCar_C_CharacterEnter_Params
{
public:
	class AGGCharacter*                          Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AsPassanger;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         PlacedFromManager;                                 // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_Vehicle_PoliceCar.BP_Vehicle_PoliceCar_C.ToggleSiren
struct ABP_Vehicle_PoliceCar_C_ToggleSiren_Params
{
public:
	bool                                         bSirenEnabled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function BP_Vehicle_PoliceCar.BP_Vehicle_PoliceCar_C.ExecuteUbergraph_BP_Vehicle_PoliceCar
struct ABP_Vehicle_PoliceCar_C_ExecuteUbergraph_BP_Vehicle_PoliceCar_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_ADD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGCharacter*                          K2Node_Event_Character;                            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_AsPassanger;                          // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_PlacedFromManager;                    // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AE0[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_1;            // 0x1C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AE6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_GGNPC_Police_C*                    K2Node_DynamicCast_AsBP_GGNPC_Police;              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bSirenEnabled;                        // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AF1[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBlackboardComponent*                  CallFunc_GetBlackboard_ReturnValue;                // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlaying_ReturnValue;                    // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AF7[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


