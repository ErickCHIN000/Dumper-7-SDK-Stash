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

// 0xC2 (0xC2 - 0x0)
// Function BP_Flammable_SpontaneouslyCombustStuff.BP_Flammable_SpontaneouslyCombustStuff_C.SpontaneouslyCombustStuff
struct UBP_Flammable_SpontaneouslyCombustStuff_C_SpontaneouslyCombustStuff_Params
{
public:
	bool                                         LitSomething;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_658[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCurrentState_ReturnValue;               // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_665[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ADisasterController*                   CallFunc_GetDisasterController_ReturnValue;        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x30(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBoxSphereBounds                      K2Node_MakeStruct_BoxSphereBounds;                 // 0x3C(0x1C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UFlammableInstance*>            CallFunc_GetFlammableInstancesIntersectingBounds_ReturnValue; // 0x58(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_676[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFlammableInstance*                    CallFunc_Array_Get_Item;                           // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_67F[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFlammableTargetIgnite                CallFunc_MakeFlammableTargetIgniteFromInstance_ReturnValue; // 0x80(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_CanPropagateToTarget_ReturnValue;         // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFlammableState                   CallFunc_GetFlammableState_ReturnValue;            // 0xB2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0xB3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_689[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFlammableInstance*                    CallFunc_TryIgniteFlammableTarget_OutInstance;     // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TryIgniteFlammableTarget_ReturnValue;     // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x14 (0x14 - 0x0)
// Function BP_Flammable_SpontaneouslyCombustStuff.BP_Flammable_SpontaneouslyCombustStuff_C.OnFlammableInstanceState_Combusting_Tick
struct UBP_Flammable_SpontaneouslyCombustStuff_C_OnFlammableInstanceState_Combusting_Tick_Params
{
public:
	class UFlammableInstance*                    Instance;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFlammableState*                       State;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaSeconds;                                      // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_Flammable_SpontaneouslyCombustStuff.BP_Flammable_SpontaneouslyCombustStuff_C.OnFlammableInstanceState_Combusting_Enter
struct UBP_Flammable_SpontaneouslyCombustStuff_C_OnFlammableInstanceState_Combusting_Enter_Params
{
public:
	class UFlammableInstance*                    Instance;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFlammableState*                       State;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function BP_Flammable_SpontaneouslyCombustStuff.BP_Flammable_SpontaneouslyCombustStuff_C.ExecuteUbergraph_BP_Flammable_SpontaneouslyCombustStuff
struct UBP_Flammable_SpontaneouslyCombustStuff_C_ExecuteUbergraph_BP_Flammable_SpontaneouslyCombustStuff_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_71C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFlammableInstance*                    K2Node_Event_Instance_1;                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFlammableState*                       K2Node_Event_State_1;                              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SpontaneouslyCombustStuff_LitSomething;   // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_72F[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFlammableInstance*                    K2Node_Event_Instance;                             // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFlammableState*                       K2Node_Event_State;                                // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SpontaneouslyCombustStuff_LitSomething_1; // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


