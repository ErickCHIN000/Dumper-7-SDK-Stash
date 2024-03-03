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

// 0x1 (0x1 - 0x0)
// Function NPC_DynamicSex_Base.NPC_DynamicSex_Base_C.BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_begingame__DelegateSignature
struct ANPC_DynamicSex_Base_C_BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_begingame__DelegateSignature_Params
{
public:
	bool                                         Loaded_save_file;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function NPC_DynamicSex_Base.NPC_DynamicSex_Base_C.ed_parent_begingame
struct ANPC_DynamicSex_Base_C_Ed_parent_begingame_Params
{
public:
	bool                                         Loaded_save_file;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function NPC_DynamicSex_Base.NPC_DynamicSex_Base_C.BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_2_ed_dlg_started__DelegateSignature
struct ANPC_DynamicSex_Base_C_BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_2_ed_dlg_started__DelegateSignature_Params
{
public:
	class Abp_dlg_actor_C*                       Dlg_actor;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_dlg_start                    Dlg_status;                                        // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function NPC_DynamicSex_Base.NPC_DynamicSex_Base_C.ExecuteUbergraph_NPC_DynamicSex_Base
struct ANPC_DynamicSex_Base_C_ExecuteUbergraph_NPC_DynamicSex_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UPrimitiveComponent*>           K2Node_MakeArray_Array;                            // 0x18(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         K2Node_ComponentBoundEvent_loaded_save_file;       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_loaded_save_file;               // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F3D[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USkeletalMeshComponent*>        K2Node_MakeArray_Array_1;                          // 0x30(0x10)(ReferenceParm, ContainsInstancedReference)
	class Abp_dlg_actor_C*                       K2Node_ComponentBoundEvent_dlg_actor;              // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_dlg_start                    K2Node_ComponentBoundEvent_dlg_status;             // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F4F[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPrimitiveComponent*>           K2Node_MakeArray_Array_2;                          // 0x50(0x10)(ReferenceParm, ContainsInstancedReference)
	TSet<class UPrimitiveComponent*>             K2Node_MakeSet_Set;                                // 0x60(0x50)(ContainsInstancedReference)
};

}
}


