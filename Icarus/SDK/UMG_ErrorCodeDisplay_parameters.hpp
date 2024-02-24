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

// 0x188 (0x188 - 0x0)
// Function UMG_ErrorCodeDisplay.UMG_ErrorCodeDisplay_C.ShowError
struct UUMG_ErrorCodeDisplay_C_ShowError_Params
{
public:
	struct FErrorCodesEnum                       ErrorCode;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FText                                  CodeText;                                          // 0x10(0x18)(Edit, BlueprintVisible)
	struct FErrorCodesRowHandle                  CallFunc_StructToRowHandle_ReturnValue;            // 0x28(0x18)(NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0x40(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x58(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_NameToText_ReturnValue_1;            // 0x98(0x18)(None)
	struct FErrorCode                            CallFunc_GetErrorCodesStruct_ErrorCodes;           // 0xB0(0x50)(None)
	enum class EValid                            CallFunc_GetErrorCodesStruct_Paths;                // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F8A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x108(0x40)(HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F96[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x150(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x160(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x178(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_ErrorCodeDisplay.UMG_ErrorCodeDisplay_C.BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
struct UUMG_ErrorCodeDisplay_C_BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
{
public:
	class UUMG_ButtonBase_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x91 (0x91 - 0x0)
// Function UMG_ErrorCodeDisplay.UMG_ErrorCodeDisplay_C.ExecuteUbergraph_UMG_ErrorCodeDisplay
struct UUMG_ErrorCodeDisplay_C_ExecuteUbergraph_UMG_ErrorCodeDisplay_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ButtonBase_C*                     K2Node_ComponentBoundEvent_Button;                 // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface;       // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2120[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUMG_UserInterface_Base_C*>     CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x48(0x10)(ReferenceParm, ContainsInstancedReference)
	class UUMG_UserInterface_Base_C*             CallFunc_GetUserInterface_UserInterface;           // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_UserInterface_Base_C*             CallFunc_Array_Get_Item;                           // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2135[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_213F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*     CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


