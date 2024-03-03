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

// 0x24 (0x24 - 0x0)
// Function BP_BaseAI_Dialog.BP_BaseAI_Dialog_C.TakeDamage
struct ABP_BaseAI_Dialog_C_TakeDamage_Params
{
public:
	struct FF_HitData                            HitData;                                           // 0x0(0x1F)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_2892[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Result;                                            // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_AttackResult                    ResultType;                                        // 0x21(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TakeDamage_Result;                        // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_AttackResult                    CallFunc_TakeDamage_ResultType;                    // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_BaseAI_Dialog.BP_BaseAI_Dialog_C.SetHostile
struct ABP_BaseAI_Dialog_C_SetHostile_Params
{
public:
	TArray<class UClass*>                        K2Node_MakeArray_Array;                            // 0x0(0x10)(ReferenceParm)
};

// 0x9 (0x9 - 0x0)
// Function BP_BaseAI_Dialog.BP_BaseAI_Dialog_C.BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_2_ed_dlg_started__DelegateSignature
struct ABP_BaseAI_Dialog_C_BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_2_ed_dlg_started__DelegateSignature_Params
{
public:
	class Abp_dlg_actor_C*                       Dlg_actor;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_dlg_start                    Dlg_status;                                        // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_BaseAI_Dialog.BP_BaseAI_Dialog_C.BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_begingame__DelegateSignature
struct ABP_BaseAI_Dialog_C_BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_begingame__DelegateSignature_Params
{
public:
	bool                                         Loaded_save_file;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_BaseAI_Dialog.BP_BaseAI_Dialog_C.ed_parent_begingame
struct ABP_BaseAI_Dialog_C_Ed_parent_begingame_Params
{
public:
	bool                                         Loaded_save_file;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9C (0x9C - 0x0)
// Function BP_BaseAI_Dialog.BP_BaseAI_Dialog_C.ExecuteUbergraph_BP_BaseAI_Dialog
struct ABP_BaseAI_Dialog_C_ExecuteUbergraph_BP_BaseAI_Dialog_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A3F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPrimitiveComponent*>           K2Node_MakeArray_Array;                            // 0x8(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<class UPrimitiveComponent*>           K2Node_MakeArray_Array_1;                          // 0x18(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<class USkeletalMeshComponent*>        K2Node_MakeArray_Array_2;                          // 0x28(0x10)(ReferenceParm, ContainsInstancedReference)
	class Abp_dlg_actor_C*                       K2Node_ComponentBoundEvent_dlg_actor;              // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_dlg_start                    K2Node_ComponentBoundEvent_dlg_status;             // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A57[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class UPrimitiveComponent*>             K2Node_MakeSet_Set;                                // 0x48(0x50)(ContainsInstancedReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_loaded_save_file;       // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_loaded_save_file;               // 0x9A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x9B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


