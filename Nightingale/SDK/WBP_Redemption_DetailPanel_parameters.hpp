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

// 0x80 (0x80 - 0x0)
// Function WBP_Redemption_DetailPanel.WBP_Redemption_DetailPanel_C.GetCurrentRedemptionEntry
struct UWBP_Redemption_DetailPanel_C_GetCurrentRedemptionEntry_Params
{
public:
	struct FRedemptionEntry                      CurrentRedemptionEntry;                            // 0x0(0x80)(Parm, OutParm)
};

// 0x10 (0x10 - 0x0)
// Function WBP_Redemption_DetailPanel.WBP_Redemption_DetailPanel_C.TryClaimReward
struct UWBP_Redemption_DetailPanel_C_TryClaimReward_Params
{
public:
	class FString                                CallFunc_GetRedemptionId_ReturnValue;              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function WBP_Redemption_DetailPanel.WBP_Redemption_DetailPanel_C.OnClaimRedemptionResponseHandler
struct UWBP_Redemption_DetailPanel_C_OnClaimRedemptionResponseHandler_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4BD4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                RewardName;                                        // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x64 (0x64 - 0x0)
// Function WBP_Redemption_DetailPanel.WBP_Redemption_DetailPanel_C.UpdateDisplay
struct UWBP_Redemption_DetailPanel_C_UpdateDisplay_Params
{
public:
	bool                                         LSoftObjectReference;                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C1A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRedeemableRewardUIData               CallFunc_TryGetRedemptionUIData_OutData;           // 0x8(0x58)(None)
	enum class EGetResult                        CallFunc_TryGetRedemptionUIData_OutBranches;       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRedemptionValid_ReturnValue;            // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x63(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA1 (0xA1 - 0x0)
// Function WBP_Redemption_DetailPanel.WBP_Redemption_DetailPanel_C.UpdateCurrentRedemptionEntry
struct UWBP_Redemption_DetailPanel_C_UpdateCurrentRedemptionEntry_Params
{
public:
	struct FRedemptionEntry                      RedemptionEntry;                                   // 0x0(0x80)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                CallFunc_GetRedemptionId_ReturnValue;              // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetRedemptionId_ReturnValue_1;            // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_StriStri_ReturnValue;            // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Redemption_DetailPanel.WBP_Redemption_DetailPanel_C.BndEvt__WBP_Redemption_DetailPanel_CBU_Claim_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
struct UWBP_Redemption_DetailPanel_C_BndEvt__WBP_Redemption_DetailPanel_CBU_Claim_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function WBP_Redemption_DetailPanel.WBP_Redemption_DetailPanel_C.ExecuteUbergraph_WBP_Redemption_DetailPanel
struct UWBP_Redemption_DetailPanel_C_ExecuteUbergraph_WBP_Redemption_DetailPanel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C9C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button;                 // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue;    // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x28(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


