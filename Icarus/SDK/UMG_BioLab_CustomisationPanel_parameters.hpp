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

// 0x1F0 (0x1F0 - 0x0)
// Function UMG_BioLab_CustomisationPanel.UMG_BioLab_CustomisationPanel_C.SelectItem
struct UUMG_BioLab_CustomisationPanel_C_SelectItem_Params
{
public:
	struct FItemData                             Item;                                              // 0x0(0x1F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG_BioLab_CustomisationPanel.UMG_BioLab_CustomisationPanel_C.OnShowChoices
struct UUMG_BioLab_CustomisationPanel_C_OnShowChoices_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function UMG_BioLab_CustomisationPanel.UMG_BioLab_CustomisationPanel_C.OnChoiceHovered
struct UUMG_BioLab_CustomisationPanel_C_OnChoiceHovered_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLivingItemUpgradesRowHandle          Upgrade;                                           // 0x4(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function UMG_BioLab_CustomisationPanel.UMG_BioLab_CustomisationPanel_C.OnChoiceUnhovered
struct UUMG_BioLab_CustomisationPanel_C_OnChoiceUnhovered_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLivingItemUpgradesRowHandle          Upgrade;                                           // 0x4(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function UMG_BioLab_CustomisationPanel.UMG_BioLab_CustomisationPanel_C.CommitSlotChange
struct UUMG_BioLab_CustomisationPanel_C_CommitSlotChange_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLivingItemUpgradesRowHandle          Upgrade;                                           // 0x4(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UMG_BioLab_CustomisationPanel.UMG_BioLab_CustomisationPanel_C.OnSlotFocused
struct UUMG_BioLab_CustomisationPanel_C_OnSlotFocused_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UMG_BioLab_CustomisationPanel.UMG_BioLab_CustomisationPanel_C.OnSlotUnfocused
struct UUMG_BioLab_CustomisationPanel_C_OnSlotUnfocused_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x961 (0x961 - 0x0)
// Function UMG_BioLab_CustomisationPanel.UMG_BioLab_CustomisationPanel_C.ExecuteUbergraph_UMG_BioLab_CustomisationPanel
struct UUMG_BioLab_CustomisationPanel_C_ExecuteUbergraph_UMG_BioLab_CustomisationPanel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FB2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             K2Node_CustomEvent_Item;                           // 0x10(0x1F0)(ConstParm, ContainsInstancedReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x200(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x204(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x208(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x20C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_SlotIndex_5;                    // 0x210(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_SlotIndex_4;                    // 0x214(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLivingItemUpgradesRowHandle          K2Node_CustomEvent_Upgrade_2;                      // 0x218(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_SlotIndex_3;                    // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLivingItemUpgradesRowHandle          K2Node_CustomEvent_Upgrade_1;                      // 0x234(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_SlotIndex_2;                    // 0x24C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLivingItemUpgradesRowHandle          K2Node_CustomEvent_Upgrade;                        // 0x250(0x18)(NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x268(0x10)(ZeroConstructor, NoDestructor)
	struct FLivingItemUpgradeData                CallFunc_GetLivingItemUpgradesStruct_LivingItemUpgrades; // 0x278(0xA8)(None)
	enum class EValid                            CallFunc_GetLivingItemUpgradesStruct_Paths;        // 0x320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4008[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x324(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x334(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4018[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x338(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x348(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Variable;                                 // 0x358(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x35C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLivingItemSlotState>          CallFunc_GetLivingItemSlotStates_Slots;            // 0x360(0x10)(ReferenceParm)
	bool                                         CallFunc_GetLivingItemSlotStates_ReturnValue;      // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4039[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x374(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x378(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4055[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             K2Node_Copy_ReturnValue;                           // 0x380(0x1F0)(ContainsInstancedReference)
	class UUMG_BioLab_UpgradeSlotSelector_C*     CallFunc_Array_Get_Item;                           // 0x570(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x578(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x57C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x57D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EValid                            CallFunc_GetIcarusPlayerController_IsValid;        // 0x57E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4070[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               CallFunc_GetIcarusPlayerController_ReturnValue;    // 0x580(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x588(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_407D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayerDataComponent*                  CallFunc_GetPlayerDataComponent_ReturnValue;       // 0x590(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLivingItemSlotState                  CallFunc_Array_Get_Item_1;                         // 0x598(0x98)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x630(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClientOnly_PurchaseItemUpdate_ReturnValue; // 0x631(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4095[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             K2Node_Copy_ReturnValue_1;                         // 0x638(0x1F0)(ContainsInstancedReference)
	class ABP_LivingItemPreview_C*               CallFunc_GetActorOfClass_ReturnValue;              // 0x828(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x830(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40AF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnchors                              K2Node_MakeStruct_Anchors;                         // 0x834(0x10)(NoDestructor)
	uint8                                        Pad_40B0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_BioLab_UpgradeSlotSelector_C*     CallFunc_Create_ReturnValue;                       // 0x848(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x850(0x30)(IsPlainOldData, NoDestructor)
	struct FVector2D                             CallFunc_GetBaseSize_BaseSize;                     // 0x880(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x888(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Divide_Vector2DFloat_ReturnValue;         // 0x890(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_LivingItemPreview_C*               CallFunc_FinishSpawningActor_ReturnValue;          // 0x898(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0x8A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x8A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40D6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCanvasPanelSlot*                      CallFunc_AddChildToCanvas_ReturnValue;             // 0x8B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                              K2Node_MakeStruct_Anchors_1;                       // 0x8B8(0x10)(NoDestructor)
	class UUMG_WirePin_C*                        CallFunc_Create_ReturnValue_1;                     // 0x8C8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetPinSize_Size;                          // 0x8D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_WirePin_C*                        CallFunc_Array_Get_Item_2;                         // 0x8D8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Divide_Vector2DFloat_ReturnValue_1;       // 0x8E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Subtract_Vector2DVector2D_ReturnValue_1;  // 0x8E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x8F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x8F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40FE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x8F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4103[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCanvasPanelSlot*                      CallFunc_AddChildToCanvas_ReturnValue_1;           // 0x900(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_SlotIndex_1;                    // 0x908(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetLivingItemUpgrade_ReturnValue;         // 0x90C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4127[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_SlotIndex;                      // 0x910(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x914(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x924(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_413D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_BioLab_UpgradeSlotSelector_C*     CallFunc_Array_Get_Item_3;                         // 0x938(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetLivingItemUpgrade_ReturnValue_1;       // 0x940(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4144[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_BioLab_UpgradeSlotSelector_C*     CallFunc_Array_Get_Item_4;                         // 0x948(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x950(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x954(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_BioLab_UpgradeSlotSelector_C*     CallFunc_Array_Get_Item_5;                         // 0x958(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x960(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


