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

// 0x8 (0x8 - 0x0)
// Function BP_FlammableFISM.BP_FlammableFISM_C.CombustedEnter
struct UBP_FlammableFISM_C_CombustedEnter_Params
{
public:
	class UFlammableInstanceFLOD*                Instance;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x13 (0x13 - 0x0)
// Function BP_FlammableFISM.BP_FlammableFISM_C.CombustingExit
struct UBP_FlammableFISM_C_CombustingExit_Params
{
public:
	class UFlammableInstanceFLOD*                Instance;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     CallFunc_Map_Find_Value;                           // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Map_Remove_ReturnValue;                   // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x104 (0x104 - 0x0)
// Function BP_FlammableFISM.BP_FlammableFISM_C.CombustingEnter
struct UBP_FlammableFISM_C_CombustingEnter_Params
{
public:
	class UFlammableInstanceFLOD*                Instance;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBoxSphereBounds                      CallFunc_GetFlammableWorldBounds_ReturnValue;      // 0x8(0x1C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3027[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     Temp_object_Variable;                              // 0x28(0x8)(ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_303D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     CallFunc_AddComponentByClass_ReturnValue;          // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue;         // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_304B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakVector_X;                            // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x64(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x70(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x7C(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x18 (0x18 - 0x0)
// Function BP_FlammableFISM.BP_FlammableFISM_C.OnReplacedInstanceCombusted
struct UBP_FlammableFISM_C_OnReplacedInstanceCombusted_Params
{
public:
	struct FFLODInstanceID                       NewInstance;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class UFlammableInstanceFLOD*                Instance;                                          // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function BP_FlammableFISM.BP_FlammableFISM_C.TryReplaceInstanceCombusted
struct UBP_FlammableFISM_C_TryReplaceInstanceCombusted_Params
{
public:
	class UFlammableInstanceFLOD*                Instance;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFLODRecord*                           BurntRecord;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFLODRecord*                           CallFunc_GetRegisteredRecord_ReturnValue;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                K2Node_MakeArray_Array;                            // 0x18(0x10)(ReferenceParm)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31BE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFLODRecord*                           CallFunc_GetRegisteredRecord_ReturnValue_1;        // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFLODRecord*                           CallFunc_FindReplacementBurntRecord_ReturnValue;   // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31D7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SwapRecordInstance_ReturnValue;           // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFLODInstanceID                       K2Node_MakeStruct_FLODInstanceID;                  // 0x48(0x10)(NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_FlammableFISM.BP_FlammableFISM_C.OnFlammableInstanceState_Combusting_Enter
struct UBP_FlammableFISM_C_OnFlammableInstanceState_Combusting_Enter_Params
{
public:
	class UFlammableInstance*                    Instance;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFlammableState*                       State;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_FlammableFISM.BP_FlammableFISM_C.OnFlammableInstanceState_Combusted_Enter
struct UBP_FlammableFISM_C_OnFlammableInstanceState_Combusted_Enter_Params
{
public:
	class UFlammableInstance*                    Instance;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFlammableState*                       State;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_FlammableFISM.BP_FlammableFISM_C.OnFlammableInstanceState_Combusting_Exit
struct UBP_FlammableFISM_C_OnFlammableInstanceState_Combusting_Exit_Params
{
public:
	class UFlammableInstance*                    Instance;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFlammableState*                       State;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_FlammableFISM.BP_FlammableFISM_C.OnFlammableInstanceDetached
struct UBP_FlammableFISM_C_OnFlammableInstanceDetached_Params
{
public:
	class UFlammableInstance*                    Instance;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_FlammableFISM.BP_FlammableFISM_C.OnFlammableInstanceAttached
struct UBP_FlammableFISM_C_OnFlammableInstanceAttached_Params
{
public:
	class UFlammableInstance*                    Instance;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC8 (0xC8 - 0x0)
// Function BP_FlammableFISM.BP_FlammableFISM_C.ExecuteUbergraph_BP_FlammableFISM
struct UBP_FlammableFISM_C_ExecuteUbergraph_BP_FlammableFISM_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_342D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFlammableInstance*                    K2Node_CustomEvent_Instance_2;                     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFlammableState*                       K2Node_CustomEvent_State_2;                        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFlammableInstance*                    K2Node_CustomEvent_Instance_1;                     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFlammableState*                       K2Node_CustomEvent_State_1;                        // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFlammableInstanceFLOD*                K2Node_DynamicCast_AsFlammable_Instance_FLOD;      // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_344F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFlammableInstanceFLOD*                K2Node_DynamicCast_AsFlammable_Instance_FLOD_1;    // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3453[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x44(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_3460[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFlammableInstance*                    K2Node_CustomEvent_Instance;                       // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFlammableState*                       K2Node_CustomEvent_State;                          // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x68(0x10)(ZeroConstructor, NoDestructor)
	class UFlammableInstanceFLOD*                K2Node_DynamicCast_AsFlammable_Instance_FLOD_2;    // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3483[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFlammableInstance*                    K2Node_Event_Instance_1;                           // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFlammableState*                       CallFunc_GetFlammableState_ReturnValue;            // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFlammableState*                       CallFunc_GetFlammableState_ReturnValue_1;          // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFlammableInstance*                    K2Node_Event_Instance;                             // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xA8(0x10)(ZeroConstructor, NoDestructor)
	class UFlammableState*                       CallFunc_GetFlammableState_ReturnValue_2;          // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFlammableState*                       CallFunc_GetFlammableState_ReturnValue_3;          // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


