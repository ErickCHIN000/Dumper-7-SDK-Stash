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
// Function UMG_TalentView_Workshop.UMG_TalentView_Workshop_C.GetGraphWidget
struct UUMG_TalentView_Workshop_C_GetGraphWidget_Params
{
public:
	class UTalentGraphWidget*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTalentGraphWidget*                    K2Node_DynamicCast_AsTalent_Graph_Widget;          // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xAA (0xAA - 0x0)
// Function UMG_TalentView_Workshop.UMG_TalentView_Workshop_C.GetTalentTreeWidgets
struct UUMG_TalentView_Workshop_C_GetTalentTreeWidgets_Params
{
public:
	TArray<class UTalentTreeWidget*>             ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
	TSet<class UTalentTreeWidget*>               Talent_Trees;                                      // 0x10(0x50)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1679[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UTalentTreeWidget*>             CallFunc_Set_ToArray_Result;                       // 0x70(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x80(0x10)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_167F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_TalentGraph_C*                    K2Node_DynamicCast_AsUMG_Talent_Graph;             // 0xA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC4 (0xC4 - 0x0)
// Function UMG_TalentView_Workshop.UMG_TalentView_Workshop_C.Setup
struct UUMG_TalentView_Workshop_C_Setup_Params
{
public:
	struct FTalentArchetypesRowHandle            CurrentArchetype;                                  // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16E7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTalentModelInterface_Const*           CallFunc_GetModel_ReturnValue;                     // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTalentArchetypesRowHandle>    CallFunc_GetArchetypes_ReturnValue;                // 0x28(0x10)(ConstParm, ReferenceParm)
	struct FTalentArchetypesRowHandle            CallFunc_Array_Get_Item;                           // 0x38(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FTalentArchetypesRowHandle            CallFunc_Array_Get_Item_1;                         // 0x50(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16F7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_TalentArchetype_Orbital_C*        CallFunc_Create_ReturnValue;                       // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16FC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x88(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_170A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_TalentGraph_C*                    CallFunc_Create_ReturnValue_1;                     // 0x98(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0xA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1719[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xB0(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UMG_TalentView_Workshop.UMG_TalentView_Workshop_C.OnClick
struct UUMG_TalentView_Workshop_C_OnClick_Params
{
public:
	struct FTalentArchetypesRowHandle            Archetype;                                         // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UMG_TalentView_Workshop.UMG_TalentView_Workshop_C.OnModelViewChanged
struct UUMG_TalentView_Workshop_C_OnModelViewChanged_Params
{
public:
	class UTalentModelInterface*                 InModel;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTalentViewInterface*                  InView;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function UMG_TalentView_Workshop.UMG_TalentView_Workshop_C.Tick
struct UUMG_TalentView_Workshop_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UMG_TalentView_Workshop.UMG_TalentView_Workshop_C.ResearchResult
struct UUMG_TalentView_Workshop_C_ResearchResult_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1F8 (0x1F8 - 0x0)
// Function UMG_TalentView_Workshop.UMG_TalentView_Workshop_C.ReplicationResult2
struct UUMG_TalentView_Workshop_C_ReplicationResult2_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17F2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             Item;                                              // 0x8(0x1F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x6E8 (0x6E8 - 0x0)
// Function UMG_TalentView_Workshop.UMG_TalentView_Workshop_C.ExecuteUbergraph_UMG_TalentView_Workshop
struct UUMG_TalentView_Workshop_C_ExecuteUbergraph_UMG_TalentView_Workshop_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bSuccess;                       // 0x4(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18BC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             K2Node_CustomEvent_Item;                           // 0x8(0x1F0)(ConstParm, ContainsInstancedReference)
	class FText                                  Temp_text_Variable;                                // 0x1F8(0x18)(None)
	struct FItemableData                         CallFunc_GetItemableData_ItemableData;             // 0x210(0xE8)(None)
	enum class EDataValid                        CallFunc_GetItemableData_Paths;                    // 0x2F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x2F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18C4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x300(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x340(0x10)(ReferenceParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x350(0x10)(ZeroConstructor, NoDestructor)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x360(0x18)(None)
	struct FConfirmationPopupDetails             K2Node_MakeStruct_ConfirmationPopupDetails;        // 0x378(0x98)(ContainsInstancedReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x410(0x10)(ZeroConstructor, NoDestructor)
	struct FConfirmationPopupDetails             K2Node_MakeStruct_ConfirmationPopupDetails_1;      // 0x420(0x98)(ContainsInstancedReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x4B8(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x4C8(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18D2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_1;                              // 0x4E0(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x4F8(0x10)(ZeroConstructor, NoDestructor)
	struct FTalentArchetypesRowHandle            K2Node_CustomEvent_Archetype;                      // 0x508(0x18)(NoDestructor, HasGetValueTypeHash)
	class UUMG_TalentArchetype_Player_C*         CallFunc_Array_Get_Item;                           // 0x520(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x528(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18E4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTalentModelInterface_Const*           CallFunc_GetModel_ReturnValue;                     // 0x530(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTalentArchetypesRowHandle>    CallFunc_GetArchetypes_ReturnValue;                // 0x538(0x10)(ConstParm, ReferenceParm)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x548(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x54C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18ED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTalentModelInterface*                 K2Node_Event_InModel;                              // 0x550(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTalentViewInterface*                  K2Node_Event_InView;                               // 0x558(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x560(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x598(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EValid                            CallFunc_GetIcarusPlayerController_IsValid;        // 0x59C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18FD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               CallFunc_GetIcarusPlayerController_ReturnValue;    // 0x5A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bSuccess_1;                     // 0x5A8(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1908[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayerDataComponent*                  CallFunc_GetPlayerDataComponent_ReturnValue;       // 0x5B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x5B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_190E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x5BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x5C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface;       // 0x5C8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x5D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x5D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_191A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_UserInterface_Base_C*             CallFunc_GetUserInterface_UserInterface;           // 0x5E0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x5E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1926[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_ConfirmationPopup_C*              CallFunc_GetConfirmationWindow_ConfirmationWidget; // 0x5F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x5F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x5FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_192D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x600(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_1;     // 0x608(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x618(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1937[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x620(0x18)(None)
	class UUMG_UserInterface_Base_C*             CallFunc_GetUserInterface_UserInterface_1;         // 0x638(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FConfirmationPopupDetails             K2Node_MakeStruct_ConfirmationPopupDetails_2;      // 0x640(0x98)(ContainsInstancedReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x6D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1944[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_ConfirmationPopup_C*              CallFunc_GetConfirmationWindow_ConfirmationWidget_1; // 0x6E0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


