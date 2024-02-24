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

// 0x2 (0x2 - 0x0)
// Function wbp_cc_sw_NavButtons.wbp_cc_sw_NavButtons_C.OnInputMethodChanged
struct UWbp_cc_sw_NavButtons_C_OnInputMethodChanged_Params
{
public:
	enum class ECommonInputType                  CurrentInputType;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function wbp_cc_sw_NavButtons.wbp_cc_sw_NavButtons_C.EnableRandomize
struct UWbp_cc_sw_NavButtons_C_EnableRandomize_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function wbp_cc_sw_NavButtons.wbp_cc_sw_NavButtons_C.Tick
struct UWbp_cc_sw_NavButtons_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function wbp_cc_sw_NavButtons.wbp_cc_sw_NavButtons_C.BndEvt__wbp_cc_sw_NavButtons_BU_C_AutoRotate_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature
struct UWbp_cc_sw_NavButtons_C_BndEvt__wbp_cc_sw_NavButtons_BU_C_AutoRotate_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function wbp_cc_sw_NavButtons.wbp_cc_sw_NavButtons_C.BndEvt__wbp_cc_sw_NavButtons_BU_C_CycleZoom_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature
struct UWbp_cc_sw_NavButtons_C_BndEvt__wbp_cc_sw_NavButtons_BU_C_CycleZoom_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function wbp_cc_sw_NavButtons.wbp_cc_sw_NavButtons_C.BndEvt__wbp_cc_sw_NavButtons_BU_C_NavLeft_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature
struct UWbp_cc_sw_NavButtons_C_BndEvt__wbp_cc_sw_NavButtons_BU_C_NavLeft_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function wbp_cc_sw_NavButtons.wbp_cc_sw_NavButtons_C.BndEvt__wbp_cc_sw_NavButtons_BU_C_NavRight_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature
struct UWbp_cc_sw_NavButtons_C_BndEvt__wbp_cc_sw_NavButtons_BU_C_NavRight_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function wbp_cc_sw_NavButtons.wbp_cc_sw_NavButtons_C.BndEvt__wbp_cc_sw_NavButtons_BU_C_Prevoius_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature
struct UWbp_cc_sw_NavButtons_C_BndEvt__wbp_cc_sw_NavButtons_BU_C_Prevoius_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function wbp_cc_sw_NavButtons.wbp_cc_sw_NavButtons_C.BndEvt__wbp_cc_sw_NavButtons_BU_C_Next_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature
struct UWbp_cc_sw_NavButtons_C_BndEvt__wbp_cc_sw_NavButtons_BU_C_Next_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x98 (0x98 - 0x0)
// Function wbp_cc_sw_NavButtons.wbp_cc_sw_NavButtons_C.ExecuteUbergraph_wbp_cc_sw_NavButtons
struct UWbp_cc_sw_NavButtons_C_ExecuteUbergraph_wbp_cc_sw_NavButtons_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x4(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MapRangeClamped_ReturnValue;              // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E8E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MapRangeClamped_ReturnValue_1;            // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_5;               // 0x68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_4;               // 0x70(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_3;               // 0x78(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_2;               // 0x80(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_1;               // 0x88(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button;                 // 0x90(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


