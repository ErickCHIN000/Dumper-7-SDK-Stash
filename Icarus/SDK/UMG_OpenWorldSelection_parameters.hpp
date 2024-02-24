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
// Function UMG_OpenWorldSelection.UMG_OpenWorldSelection_C.BndEvt__UMG_TerrainSelection_DevelopmentProspects_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
struct UUMG_OpenWorldSelection_C_BndEvt__UMG_TerrainSelection_DevelopmentProspects_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
{
public:
	class UUMG_ButtonBase_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UMG_OpenWorldSelection.UMG_OpenWorldSelection_C.OpenWorldSelected
struct UUMG_OpenWorldSelection_C_OpenWorldSelected_Params
{
public:
	struct FProspectListRowHandle                Prospect;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UMG_OpenWorldSelection.UMG_OpenWorldSelection_C.BndEvt__UMG_OpenWorldSelection_UMG_OpenWorldButton_PRO_K2Node_ComponentBoundEvent_0_ProspectSelected__DelegateSignature
struct UUMG_OpenWorldSelection_C_BndEvt__UMG_OpenWorldSelection_UMG_OpenWorldButton_PRO_K2Node_ComponentBoundEvent_0_ProspectSelected__DelegateSignature_Params
{
public:
	struct FProspectListRowHandle                Prospect;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UMG_OpenWorldSelection.UMG_OpenWorldSelection_C.BndEvt__UMG_OpenWorldSelection_UMG_OpenWorldButton_STYX_K2Node_ComponentBoundEvent_2_ProspectSelected__DelegateSignature
struct UUMG_OpenWorldSelection_C_BndEvt__UMG_OpenWorldSelection_UMG_OpenWorldButton_STYX_K2Node_ComponentBoundEvent_2_ProspectSelected__DelegateSignature_Params
{
public:
	struct FProspectListRowHandle                Prospect;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0xB8 (0xB8 - 0x0)
// Function UMG_OpenWorldSelection.UMG_OpenWorldSelection_C.ExecuteUbergraph_UMG_OpenWorldSelection
struct UUMG_OpenWorldSelection_C_ExecuteUbergraph_UMG_OpenWorldSelection_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_546F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_547B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_ButtonBase_C*                     K2Node_ComponentBoundEvent_Button;                 // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5484[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x28(0x10)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5491[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_OpenWorldButton_C*                K2Node_DynamicCast_AsUMG_Open_World_Button;        // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_54A2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x58(0x10)(ZeroConstructor, NoDestructor)
	struct FProspectListRowHandle                K2Node_CustomEvent_Prospect;                       // 0x68(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FProspectListRowHandle                K2Node_ComponentBoundEvent_Prospect_1;             // 0x80(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue_1;                // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FProspectListRowHandle                K2Node_ComponentBoundEvent_Prospect;               // 0xA0(0x18)(NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UMG_OpenWorldSelection.UMG_OpenWorldSelection_C.OpenWorldProspectSelected__DelegateSignature
struct UUMG_OpenWorldSelection_C_OpenWorldProspectSelected__DelegateSignature_Params
{
public:
	struct FProspectListRowHandle                Prospect;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

}
}


