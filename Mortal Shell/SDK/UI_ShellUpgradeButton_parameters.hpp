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

// 0x88 (0x88 - 0x0)
// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.SetObtainedBGSize
struct UUI_ShellUpgradeButton_C_SetObtainedBGSize_Params
{
public:
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x0(0x88)(None)
};

// 0x18 (0x18 - 0x0)
// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.SetIconArtColor
struct UUI_ShellUpgradeButton_C_SetIconArtColor_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_LinearColorLerp_ReturnValue;              // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FInterpTo_ReturnValue;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.CreateButtonMID
struct UUI_ShellUpgradeButton_C_CreateButtonMID_Params
{
public:
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.SetSelectionMat
struct UUI_ShellUpgradeButton_C_SetSelectionMat_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C85[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable_1;                            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_Select_Default;                             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x20(0x88)(None)
};

// 0x88 (0x88 - 0x0)
// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.SetObtainedFillingSize
struct UUI_ShellUpgradeButton_C_SetObtainedFillingSize_Params
{
public:
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x0(0x88)(None)
};

// 0x88 (0x88 - 0x0)
// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.SetFillingSize
struct UUI_ShellUpgradeButton_C_SetFillingSize_Params
{
public:
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x0(0x88)(None)
};

// 0x88 (0x88 - 0x0)
// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.SetPreviewTexture
struct UUI_ShellUpgradeButton_C_SetPreviewTexture_Params
{
public:
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x0(0x88)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.GetUpgradeName
struct UUI_ShellUpgradeButton_C_GetUpgradeName_Params
{
public:
	class FName                                  Upgrade;                                           // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.GetCost
struct UUI_ShellUpgradeButton_C_GetCost_Params
{
public:
	int32                                        Tar;                                               // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Glimpses;                                          // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.SetDetails
struct UUI_ShellUpgradeButton_C_SetDetails_Params
{
public:
	int32                                        Tar;                                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Glimpses;                                          // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Locked;                                            // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D0B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Upgrade;                                           // 0xC(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.UpdateState
struct UUI_ShellUpgradeButton_C_UpdateState_Params
{
public:
	bool                                         CanBuy;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Obtained;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ShellNameKnown;                                    // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.PlayCantBuyAnim
struct UUI_ShellUpgradeButton_C_PlayCantBuyAnim_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.PlayFilling
struct UUI_ShellUpgradeButton_C_PlayFilling_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.ResetFilling
struct UUI_ShellUpgradeButton_C_ResetFilling_Params
{
public:
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PauseAnimation_ReturnValue;               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB (0xB - 0x0)
// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.SetIconArtRenderOpacity
struct UUI_ShellUpgradeButton_C_SetIconArtRenderOpacity_Params
{
public:
	bool                                         ShellKnown;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D9D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Local_Opacity;                                     // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.PlayBuyIconAnim
struct UUI_ShellUpgradeButton_C_PlayBuyIconAnim_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.SetSkillHighlighted
struct UUI_ShellUpgradeButton_C_SetSkillHighlighted_Params
{
public:
	bool                                         Highlight;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Local_Highlight;                                   // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E1A[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_1;                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0xF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        Temp_float_Variable_2;                             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_2;                              // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E3B[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default;                             // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E3F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default_2;                           // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.SetIconDetails
struct UUI_ShellUpgradeButton_C_SetIconDetails_Params
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShellKnown;                                        // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Unlocked;                                          // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         SkipOuterIconOpacity;                              // 0xA(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Local_SkipOuterIconOpacity;                        // 0xB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Local_Unlocked;                                    // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Local_ShellKnown;                                  // 0xD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E97[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable;                               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_1;                             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E9C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default;                             // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x20(0x88)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.PreConstruct
struct UUI_ShellUpgradeButton_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.Tick
struct UUI_ShellUpgradeButton_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x46 (0x46 - 0x0)
// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.ExecuteUbergraph_UI_ShellUpgradeButton
struct UUI_ShellUpgradeButton_C_ExecuteUbergraph_UI_ShellUpgradeButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x8(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x45(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.OnButtonReleased__DelegateSignature
struct UUI_ShellUpgradeButton_C_OnButtonReleased__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.OnButtonPressed__DelegateSignature
struct UUI_ShellUpgradeButton_C_OnButtonPressed__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.OnButtonHovered__DelegateSignature
struct UUI_ShellUpgradeButton_C_OnButtonHovered__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


