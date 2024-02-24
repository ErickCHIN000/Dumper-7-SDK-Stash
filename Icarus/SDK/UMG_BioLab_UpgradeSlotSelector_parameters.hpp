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
// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.GetBaseMargin
struct UUMG_BioLab_UpgradeSlotSelector_C_GetBaseMargin_Params
{
public:
	struct FVector2D                             BaseSize;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.GetBaseSize
struct UUMG_BioLab_UpgradeSlotSelector_C_GetBaseSize_Params
{
public:
	struct FVector2D                             BaseSize;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9D (0x9D - 0x0)
// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.CanChooseUpgrades
struct UUMG_BioLab_UpgradeSlotSelector_C_CanChooseUpgrades_Params
{
public:
	struct FLivingItemSlotState                  LivingItemSlotState;                               // 0x0(0x98)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x98(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue;             // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x9A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x9B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x98 (0x98 - 0x0)
// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.SetSlotState
struct UUMG_BioLab_UpgradeSlotSelector_C_SetSlotState_Params
{
public:
	struct FLivingItemSlotState                  SlotState;                                         // 0x0(0x98)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x18 (0x18 - 0x0)
// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.UpgradeChoiceClicked
struct UUMG_BioLab_UpgradeSlotSelector_C_UpgradeChoiceClicked_Params
{
public:
	struct FLivingItemUpgradesRowHandle          Upgrade;                                           // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.ChoiceHovered
struct UUMG_BioLab_UpgradeSlotSelector_C_ChoiceHovered_Params
{
public:
	struct FLivingItemUpgradesRowHandle          Upgrade;                                           // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.ChoiceUnhovered
struct UUMG_BioLab_UpgradeSlotSelector_C_ChoiceUnhovered_Params
{
public:
	struct FLivingItemUpgradesRowHandle          Upgrade;                                           // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.OnMouseLeave
struct UUMG_BioLab_UpgradeSlotSelector_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x4B0 (0x4B0 - 0x0)
// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.ExecuteUbergraph_UMG_BioLab_UpgradeSlotSelector
struct UUMG_BioLab_UpgradeSlotSelector_C_ExecuteUbergraph_UMG_BioLab_UpgradeSlotSelector_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_3BA8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLivingItemUpgradeData                CallFunc_GetLivingItemUpgradesStruct_LivingItemUpgrades; // 0x28(0xA8)(None)
	enum class EValid                            CallFunc_GetLivingItemUpgradesStruct_Paths;        // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BB1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FConfirmationPopupDetails             K2Node_MakeStruct_ConfirmationPopupDetails;        // 0xD8(0x98)(ContainsInstancedReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BBC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x174(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x184(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x194(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x1A4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_3BDC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_BioLab_PurchaseUpgradeDetails_C*  CallFunc_Create_ReturnValue;                       // 0x1B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x1C0(0x8)(NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x1C8(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BF1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLivingItemSlotState                  K2Node_CustomEvent_SlotState;                      // 0x1E0(0x98)(None)
	bool                                         CallFunc_CanChooseUpgrades_ReturnValue;            // 0x278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C05[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLivingItemUpgradesRowHandle          CallFunc_Array_Get_Item;                           // 0x27C(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x294(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_BioLab_UpgradeSlotChoice_C*       CallFunc_Create_ReturnValue_1;                     // 0x298(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x2A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLivingItemUpgradesRowHandle          K2Node_CustomEvent_Upgrade_2;                      // 0x2A8(0x18)(NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x2C0(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C1C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x2DC(0x10)(ZeroConstructor, NoDestructor)
	enum class EValid                            CallFunc_GetIcarusPlayerController_IsValid;        // 0x2EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C2E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               CallFunc_GetIcarusPlayerController_ReturnValue;    // 0x2F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface;       // 0x2F8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x308(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C3A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayerDataComponent*                  CallFunc_GetPlayerDataComponent_ReturnValue;       // 0x310(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_UserInterface_Base_C*             CallFunc_GetUserInterface_UserInterface;           // 0x318(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ClientOnly_CanAffordWorkshopCosts_ReturnValue; // 0x320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C47[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_ConfirmationPopup_C*              CallFunc_GetConfirmationWindow_ConfirmationWidget; // 0x328(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x330(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C52[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x338(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_1;     // 0x340(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C64[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_UserInterface_Base_C*             CallFunc_GetUserInterface_UserInterface_1;         // 0x358(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ConfirmationPopup_C*              CallFunc_GetConfirmationWindow_ConfirmationWidget_1; // 0x360(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLivingItemUpgradesRowHandle          K2Node_CustomEvent_Upgrade_1;                      // 0x368(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FLivingItemUpgradesRowHandle          K2Node_CustomEvent_Upgrade;                        // 0x380(0x18)(NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x398(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x3A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0x3A8(0x70)(ConstParm)
	struct FConfirmationPopupDetails             K2Node_MakeStruct_ConfirmationPopupDetails_1;      // 0x418(0x98)(ContainsInstancedReference)
};

// 0x4 (0x4 - 0x0)
// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.OnSlotUnfocused__DelegateSignature
struct UUMG_BioLab_UpgradeSlotSelector_C_OnSlotUnfocused__DelegateSignature_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.OnSlotFocused__DelegateSignature
struct UUMG_BioLab_UpgradeSlotSelector_C_OnSlotFocused__DelegateSignature_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.OnChoiceUnhovered__DelegateSignature
struct UUMG_BioLab_UpgradeSlotSelector_C_OnChoiceUnhovered__DelegateSignature_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLivingItemUpgradesRowHandle          Upgrade;                                           // 0x4(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.OnChoiceHovered__DelegateSignature
struct UUMG_BioLab_UpgradeSlotSelector_C_OnChoiceHovered__DelegateSignature_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLivingItemUpgradesRowHandle          Upgrade;                                           // 0x4(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.OnShowChoices__DelegateSignature
struct UUMG_BioLab_UpgradeSlotSelector_C_OnShowChoices__DelegateSignature_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.CommitSlotChange__DelegateSignature
struct UUMG_BioLab_UpgradeSlotSelector_C_CommitSlotChange__DelegateSignature_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLivingItemUpgradesRowHandle          Upgrade;                                           // 0x4(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

}
}


