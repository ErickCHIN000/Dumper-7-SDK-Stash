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

// 0x60 (0x60 - 0x0)
// Function UMG_CharacterCustomisationContainer.UMG_CharacterCustomisationContainer_C.OnCustomisationUpdated
struct UUMG_CharacterCustomisationContainer_C_OnCustomisationUpdated_Params
{
public:
	struct FCharacterCosmetics                   CharacterData;                                     // 0x0(0x34)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	uint8                                        Pad_5033[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ICustomisationWidgetInterface_C> K2Node_DynamicCast_AsCustomisation_Widget_Interface; // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_503C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPreviewCameraSettingsEnum            CallFunc_GetCameraFocus_CameraFocus;               // 0x50(0x10)(HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function UMG_CharacterCustomisationContainer.UMG_CharacterCustomisationContainer_C.OnFail_97CCC08F4ACBB904FC9CD19A62C8CD71
struct UUMG_CharacterCustomisationContainer_C_OnFail_97CCC08F4ACBB904FC9CD19A62C8CD71_Params
{
public:
	struct FResUpdateCosmetics                   Response;                                          // 0x0(0xA8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xA8 (0xA8 - 0x0)
// Function UMG_CharacterCustomisationContainer.UMG_CharacterCustomisationContainer_C.OnSuccess_97CCC08F4ACBB904FC9CD19A62C8CD71
struct UUMG_CharacterCustomisationContainer_C_OnSuccess_97CCC08F4ACBB904FC9CD19A62C8CD71_Params
{
public:
	struct FResUpdateCosmetics                   Response;                                          // 0x0(0xA8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xA8 (0xA8 - 0x0)
// Function UMG_CharacterCustomisationContainer.UMG_CharacterCustomisationContainer_C.OnCustomisationCompleted
struct UUMG_CharacterCustomisationContainer_C_OnCustomisationCompleted_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50C9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOnlineProfileCharacter               NewCharacterInfo;                                  // 0x8(0xA0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x4C (0x4C - 0x0)
// Function UMG_CharacterCustomisationContainer.UMG_CharacterCustomisationContainer_C.OnCosmeticUpdateRequest
struct UUMG_CharacterCustomisationContainer_C_OnCosmeticUpdateRequest_Params
{
public:
	struct FReqUpdateCosmetics                   Request;                                           // 0x0(0x48)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        Retries;                                           // 0x48(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_CharacterCustomisationContainer.UMG_CharacterCustomisationContainer_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
struct UUMG_CharacterCustomisationContainer_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
{
public:
	class UUMG_ButtonBase_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4B4 (0x4B4 - 0x0)
// Function UMG_CharacterCustomisationContainer.UMG_CharacterCustomisationContainer_C.ExecuteUbergraph_UMG_CharacterCustomisationContainer
struct UUMG_CharacterCustomisationContainer_C_ExecuteUbergraph_UMG_CharacterCustomisationContainer_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterCosmetics                   K2Node_MakeStruct_CharacterCosmetics;              // 0x4(0x34)(NoDestructor)
	struct FResUpdateCosmetics                   K2Node_CustomEvent_Response;                       // 0x38(0xA8)(ConstParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xE0(0x10)(ZeroConstructor, NoDestructor)
	struct FResUpdateCosmetics                   Temp_struct_Variable;                              // 0xF0(0xA8)(None)
	bool                                         Temp_bool_Variable;                                // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52A5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerPreviewManager_C*            CallFunc_GetActorOfClass_ReturnValue;              // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x1A8(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_CustomEvent_Success;                        // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52B2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOnlineProfileCharacter               K2Node_CustomEvent_NewCharacterInfo;               // 0x1C0(0xA0)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x260(0x10)(ZeroConstructor, NoDestructor)
	struct FResUpdateCosmetics                   K2Node_CustomEvent_Response_1;                     // 0x270(0xA8)(ConstParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x318(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Variable;                                 // 0x328(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x32C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52C6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FReqUpdateCosmetics                   K2Node_CustomEvent_Request;                        // 0x330(0x48)(None)
	int32                                        K2Node_CustomEvent_Retries;                        // 0x378(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x37C(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x38C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x390(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52D2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUpdateCosmeticsCallbackProxyGen*      CallFunc_UpdateCosmetics_ReturnValue;              // 0x398(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x3A0(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x3E0(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x3F8(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x438(0x10)(ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x448(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52E3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x450(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x468(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UUMG_ButtonBase_C*                     K2Node_ComponentBoundEvent_Button;                 // 0x478(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterCosmetics                   K2Node_Select_Default;                             // 0x480(0x34)(NoDestructor)
};

}
}


