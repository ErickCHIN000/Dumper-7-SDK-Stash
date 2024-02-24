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

// 0x40 (0x40 - 0x0)
// Function BP_FLODItemActor.BP_FLODItemActor_C.BndEvt__IcarusFLODActor_K2Node_ComponentBoundEvent_0_OnActorRecordAssigned__DelegateSignature
struct ABP_FLODItemActor_C_BndEvt__IcarusFLODActor_K2Node_ComponentBoundEvent_0_OnActorRecordAssigned__DelegateSignature_Params
{
public:
	class UFLODActorComponent*                   Component;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFLODActorRecordInstance              Current;                                           // 0x8(0x1C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	struct FFLODActorRecordInstance              Previous;                                          // 0x24(0x1C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function BP_FLODItemActor.BP_FLODItemActor_C.ExecuteUbergraph_BP_FLODItemActor
struct ABP_FLODItemActor_C_ExecuteUbergraph_BP_FLODItemActor_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2318[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFLODActorComponent*                   K2Node_ComponentBoundEvent_Component;              // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFLODActorRecordInstance              K2Node_ComponentBoundEvent_Current;                // 0x10(0x1C)(ConstParm, NoDestructor, HasGetValueTypeHash)
	struct FFLODActorRecordInstance              K2Node_ComponentBoundEvent_Previous;               // 0x2C(0x1C)(ConstParm, NoDestructor, HasGetValueTypeHash)
	enum class EValid                            CallFunc_GetTrait_Paths;                           // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2334[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDecayableComponent*                   CallFunc_GetTrait_ReturnValue;                     // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


