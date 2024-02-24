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

// 0x19 (0x19 - 0x0)
// Function UMG_TalentView_Blueprint.UMG_TalentView_Blueprint_C.GetGraphWidget
struct UUMG_TalentView_Blueprint_C_GetGraphWidget_Params
{
public:
	class UTalentGraphWidget*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTalentGraphWidget*                    K2Node_DynamicCast_AsTalent_Graph_Widget;          // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function UMG_TalentView_Blueprint.UMG_TalentView_Blueprint_C.GetGraphWidget_0
struct UUMG_TalentView_Blueprint_C_GetGraphWidget_0_Params
{
public:
	class UTalentGraphWidget*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTalentGraphWidget*                    K2Node_DynamicCast_AsTalent_Graph_Widget;          // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB1 (0xB1 - 0x0)
// Function UMG_TalentView_Blueprint.UMG_TalentView_Blueprint_C.GetTalentTreeWidgets
struct UUMG_TalentView_Blueprint_C_GetTalentTreeWidgets_Params
{
public:
	TArray<class UTalentTreeWidget*>             ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
	TSet<class UTalentTreeWidget*>               TalentTrees;                                       // 0x10(0x50)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5C08[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UTalentTreeWidget*>             CallFunc_Set_ToArray_Result;                       // 0x70(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x80(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5C18[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x98(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5C20[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_TalentGraph_C*                    K2Node_DynamicCast_AsUMG_Talent_Graph;             // 0xA8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC0 (0xC0 - 0x0)
// Function UMG_TalentView_Blueprint.UMG_TalentView_Blueprint_C.Setup
struct UUMG_TalentView_Blueprint_C_Setup_Params
{
public:
	struct FTalentArchetypesRowHandle            CurrentArchetype;                                  // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5CAA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTalentModelInterface_Const*           CallFunc_GetModel_ReturnValue;                     // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTalentArchetypesRowHandle>    CallFunc_GetArchetypes_ReturnValue;                // 0x28(0x10)(ConstParm, ReferenceParm)
	struct FTalentArchetypesRowHandle            CallFunc_Array_Get_Item;                           // 0x38(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FTalentArchetypesRowHandle            CallFunc_Array_Get_Item_1;                         // 0x50(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x75(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x76(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5CBB[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5CBD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_TalentGraph_C*                    CallFunc_Create_ReturnValue;                       // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_TalentArchetype_Blueprint_C*      CallFunc_Create_ReturnValue_1;                     // 0x88(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateChildSize                       K2Node_MakeStruct_SlateChildSize;                  // 0x98(0x8)(NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xA0(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5CC6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHorizontalBoxSlot*                    CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0xB8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UMG_TalentView_Blueprint.UMG_TalentView_Blueprint_C.OnClick
struct UUMG_TalentView_Blueprint_C_OnClick_Params
{
public:
	struct FTalentArchetypesRowHandle            Archetype;                                         // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UMG_TalentView_Blueprint.UMG_TalentView_Blueprint_C.OnModelViewChanged
struct UUMG_TalentView_Blueprint_C_OnModelViewChanged_Params
{
public:
	class UTalentModelInterface*                 InModel;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTalentViewInterface*                  InView;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function UMG_TalentView_Blueprint.UMG_TalentView_Blueprint_C.ExecuteUbergraph_UMG_TalentView_Blueprint
struct UUMG_TalentView_Blueprint_C_ExecuteUbergraph_UMG_TalentView_Blueprint_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTalentArchetypesRowHandle            K2Node_CustomEvent_Archetype;                      // 0x10(0x18)(NoDestructor, HasGetValueTypeHash)
	class UUMG_TalentArchetype_Player_C*         CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DBC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTalentModelInterface_Const*           CallFunc_GetModel_ReturnValue;                     // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTalentArchetypesRowHandle>    CallFunc_GetArchetypes_ReturnValue;                // 0x40(0x10)(ConstParm, ReferenceParm)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DCB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTalentModelInterface*                 K2Node_Event_InModel;                              // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTalentViewInterface*                  K2Node_Event_InView;                               // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ITalentControllerInterface> CallFunc_GetController_ReturnValue;                // 0x68(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
};

}
}


