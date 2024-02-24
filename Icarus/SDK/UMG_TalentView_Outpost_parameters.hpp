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
// Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.GetGraphWidget
struct UUMG_TalentView_Outpost_C_GetGraphWidget_Params
{
public:
	class UTalentGraphWidget*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTalentGraphWidget*                    K2Node_DynamicCast_AsTalent_Graph_Widget;          // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3D2 (0x3D2 - 0x0)
// Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.CanAddTalent
struct UUMG_TalentView_Outpost_C_CanAddTalent_Params
{
public:
	struct FRowHandle                            TalentRowHandle;                                   // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                         CanAddTalent;                                      // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         FlagFound;                                         // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EValid                            CallFunc_CastToOutpostsRowHandle_Paths;            // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52AF[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOutpostsRowHandle                    CallFunc_CastToOutpostsRowHandle_ReturnValue;      // 0x1C(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOutpost                              CallFunc_GetOutpostsStruct_Outposts;               // 0x38(0x70)(None)
	enum class EValid                            CallFunc_GetOutpostsStruct_Paths;                  // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0xAA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52CC[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIcarusProspect                       CallFunc_GetProspectListStruct_ProspectList;       // 0xB0(0x2C8)(None)
	enum class EValid                            CallFunc_GetProspectListStruct_Paths;              // 0x378(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x37C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x380(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x384(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFlagsMultiRowHandle                  CallFunc_Array_Get_Item;                           // 0x388(0x18)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x3A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x3A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x3A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x3A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3AA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52F3[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFlagSubsystem*                        CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x3B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EValid                            CallFunc_GetIcarusPlayerCharacter_IsValid;         // 0x3B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52FD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue;     // 0x3C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerState*                    CallFunc_GetIcarusPlayerState_ReturnValue;         // 0x3C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasFlagPlayer_ReturnValue;                // 0x3D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_3;                    // 0x3D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xAA (0xAA - 0x0)
// Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.GetTalentTreeWidgets
struct UUMG_TalentView_Outpost_C_GetTalentTreeWidgets_Params
{
public:
	TArray<class UTalentTreeWidget*>             ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
	TSet<class UTalentTreeWidget*>               Talent_Trees;                                      // 0x10(0x50)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5407[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UTalentTreeWidget*>             CallFunc_Set_ToArray_Result;                       // 0x70(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x80(0x10)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5421[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_TalentGraph_C*                    K2Node_DynamicCast_AsUMG_Talent_Graph;             // 0xA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD0 (0xD0 - 0x0)
// Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.Setup
struct UUMG_TalentView_Outpost_C_Setup_Params
{
public:
	class UTalentModelInterface*                 TalentModel;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTalentArchetypesRowHandle            CurrentArchetype;                                  // 0x8(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5531[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTalentsRowHandle>             CallFunc_GetTalents_ReturnValue;                   // 0x28(0x10)(ConstParm, ReferenceParm)
	TArray<struct FTalentArchetypesRowHandle>    CallFunc_GetArchetypes_ReturnValue;                // 0x38(0x10)(ConstParm, ReferenceParm)
	struct FTalentArchetypesRowHandle            CallFunc_Array_Get_Item;                           // 0x48(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FTalentArchetypesRowHandle            CallFunc_Array_Get_Item_1;                         // 0x60(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_554F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_TalentGraph_C*                    CallFunc_Create_ReturnValue;                       // 0x88(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_555C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_TalentArchetype_Player_C*         CallFunc_Create_ReturnValue_1;                     // 0xA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateChildSize                       K2Node_MakeStruct_SlateChildSize;                  // 0xA8(0x8)(NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xB0(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5570[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHorizontalBoxSlot*                    CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0xC8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.OnFail_DE41FEFE44CE6B2F6450E9AB88178931
struct UUMG_TalentView_Outpost_C_OnFail_DE41FEFE44CE6B2F6450E9AB88178931_Params
{
public:
	struct FResGenerateProspects                 Response;                                          // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x18 (0x18 - 0x0)
// Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.OnSuccess_DE41FEFE44CE6B2F6450E9AB88178931
struct UUMG_TalentView_Outpost_C_OnSuccess_DE41FEFE44CE6B2F6450E9AB88178931_Params
{
public:
	struct FResGenerateProspects                 Response;                                          // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x18 (0x18 - 0x0)
// Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.OnClick
struct UUMG_TalentView_Outpost_C_OnClick_Params
{
public:
	struct FTalentArchetypesRowHandle            Archetype;                                         // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.OnModelViewChanged
struct UUMG_TalentView_Outpost_C_OnModelViewChanged_Params
{
public:
	class UTalentModelInterface*                 InModel;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTalentViewInterface*                  InView;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
struct UUMG_TalentView_Outpost_C_BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
{
public:
	class UUMG_ButtonBase_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.ProspectClicked
struct UUMG_TalentView_Outpost_C_ProspectClicked_Params
{
public:
	struct FTalentsRowHandle                     Talent;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.GenerateProspectsFromTalents
struct UUMG_TalentView_Outpost_C_GenerateProspectsFromTalents_Params
{
public:
	TArray<struct FTalentsRowHandle>             ProspectTalentRowHandles;                          // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x659 (0x659 - 0x0)
// Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.ExecuteUbergraph_UMG_TalentView_Outpost
struct UUMG_TalentView_Outpost_C_ExecuteUbergraph_UMG_TalentView_Outpost_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_58B9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FResGenerateProspects                 K2Node_CustomEvent_Response;                       // 0x8(0x18)(ConstParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor)
	struct FResGenerateProspects                 Temp_struct_Variable;                              // 0x30(0x18)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FProspectInfo                         CallFunc_Array_Get_Item;                           // 0x50(0x90)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xEC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_58DC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_58DF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FResGenerateProspects                 K2Node_CustomEvent_Response_1;                     // 0xF8(0x18)(ConstParm)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTalentArchetypesRowHandle            K2Node_CustomEvent_Archetype;                      // 0x11C(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x134(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x138(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_58EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTalentModelInterface_Const*           CallFunc_GetModel_ReturnValue;                     // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTalentArchetypesRowHandle>    CallFunc_GetArchetypes_ReturnValue;                // 0x158(0x10)(ConstParm, ReferenceParm)
	class UTalentModelInterface*                 K2Node_Event_InModel;                              // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTalentViewInterface*                  K2Node_Event_InView;                               // 0x170(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x178(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5901[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_ButtonBase_C*                     K2Node_ComponentBoundEvent_Button;                 // 0x180(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ITalentControllerInterface> CallFunc_GetController_ReturnValue;                // 0x188(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x198(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5909[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_TalentArchetype_Player_C*         CallFunc_Array_Get_Item_1;                         // 0x1A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_590F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTalentsRowHandle                     K2Node_CustomEvent_Talent;                         // 0x1AC(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5915[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTalentsRowHandle>             K2Node_CustomEvent_ProspectTalentRowHandles;       // 0x1C8(0x10)(ConstParm, ReferenceParm)
	struct FProspectInfo                         CallFunc_Map_Find_Value;                           // 0x1D8(0x90)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_591B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTalentsRowHandle                     CallFunc_Array_Get_Item_2;                         // 0x26C(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5920[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTalent                               CallFunc_GetTalentsStruct_Talents;                 // 0x288(0x130)(None)
	enum class EValid                            CallFunc_GetTalentsStruct_Paths;                   // 0x3B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5927[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFProspectServerInfo                  K2Node_MakeStruct_FProspectServerInfo;             // 0x3C0(0x19B)(HasGetValueTypeHash)
	uint8                                        Pad_592B[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x560(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_594C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x564(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EValid                            CallFunc_CastToOutpostsRowHandle_Paths;            // 0x568(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5956[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOutpostsRowHandle                    CallFunc_CastToOutpostsRowHandle_ReturnValue;      // 0x56C(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x584(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5965[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOutpost                              CallFunc_GetOutpostsStruct_Outposts;               // 0x588(0x70)(None)
	enum class EValid                            CallFunc_GetOutpostsStruct_Paths;                  // 0x5F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x5F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x5FA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanAddTalent_CanAddTalent;                // 0x5FB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5979[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x600(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FTalentsRowHandle                     CallFunc_Map_Find_Value_1;                         // 0x610(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x628(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5985[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_Map_Keys_Keys;                            // 0x630(0x10)(ReferenceParm)
	struct FReqGenerateProspects                 K2Node_MakeStruct_ReqGenerateProspects;            // 0x640(0x10)(None)
	class UGenerateProspectsCallbackProxyGen*    CallFunc_GenerateProspects_ReturnValue;            // 0x650(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x658(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1A0 (0x1A0 - 0x0)
// Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.ProspectSelected__DelegateSignature
struct UUMG_TalentView_Outpost_C_ProspectSelected__DelegateSignature_Params
{
public:
	struct FFProspectServerInfo                  ProspectInfo;                                      // 0x0(0x19B)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_5A56[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


