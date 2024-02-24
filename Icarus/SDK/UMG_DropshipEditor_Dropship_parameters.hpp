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

// 0xC8 (0xC8 - 0x0)
// Function UMG_DropshipEditor_Dropship.UMG_DropshipEditor_Dropship_C.RemovePart
struct UUMG_DropshipEditor_Dropship_C_RemovePart_Params
{
public:
	enum class EDropshipPartType                 Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5252[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDropshipModification                 NewLocalVar_0;                                     // 0x8(0x28)(Edit, BlueprintVisible)
	TArray<struct FDropshipPartModification>     Parts;                                             // 0x30(0x10)(Edit, BlueprintVisible)
	class UBackendProxyComponent*                CallFunc_GetBackendProxyComponent_BackendProxyComponent; // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetBackendProxyComponent_bSuccess;        // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5273[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDropshipPartModification             K2Node_MakeStruct_DropshipPartModification;        // 0x50(0x18)(None)
	TArray<struct FDropshipPartModification>     K2Node_MakeArray_Array;                            // 0x68(0x10)(ReferenceParm)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x78(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FDropshipModification                 K2Node_MakeStruct_DropshipModification;            // 0xA0(0x28)(None)
};

// 0x2F0 (0x2F0 - 0x0)
// Function UMG_DropshipEditor_Dropship.UMG_DropshipEditor_Dropship_C.ModifyDropship
struct UUMG_DropshipEditor_Dropship_C_ModifyDropship_Params
{
public:
	class UInventory*                            Inventory;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Slot;                                              // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDropshipPartType                 Type;                                              // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5381[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDropshipModification                 NewLocalVar_0;                                     // 0x10(0x28)(Edit, BlueprintVisible)
	TArray<struct FDropshipPartModification>     Parts;                                             // 0x38(0x10)(Edit, BlueprintVisible)
	class UBackendProxyComponent*                CallFunc_GetBackendProxyComponent_BackendProxyComponent; // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetBackendProxyComponent_bSuccess;        // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53A6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetItem_ReturnValue;                      // 0x58(0x1F0)(ContainsInstancedReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53B4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetItemID_ReturnValue;                    // 0x250(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FDropshipPartModification             K2Node_MakeStruct_DropshipPartModification;        // 0x260(0x18)(None)
	enum class EDataValid                        CallFunc_ItemDataValid_Paths;                      // 0x278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53CA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDropshipPartModification>     K2Node_MakeArray_Array;                            // 0x280(0x10)(ReferenceParm)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x290(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53DA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x298(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x2A0(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x2B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FDropshipModification                 K2Node_MakeStruct_DropshipModification;            // 0x2C8(0x28)(None)
};

// 0x600 (0x600 - 0x0)
// Function UMG_DropshipEditor_Dropship.UMG_DropshipEditor_Dropship_C.Refresh
struct UUMG_DropshipEditor_Dropship_C_Refresh_Params
{
public:
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x0(0x18)(None)
	struct FItemData                             CallFunc_ConvertToItem_ReturnValue;                // 0x18(0x1F0)(ContainsInstancedReference)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x208(0x18)(None)
	struct FItemData                             CallFunc_ConvertToItem_ReturnValue_1;              // 0x220(0x1F0)(ContainsInstancedReference)
	struct FItemData                             CallFunc_ConvertToItem_ReturnValue_2;              // 0x410(0x1F0)(ContainsInstancedReference)
};

// 0xE0 (0xE0 - 0x0)
// Function UMG_DropshipEditor_Dropship.UMG_DropshipEditor_Dropship_C.UpdateDropship
struct UUMG_DropshipEditor_Dropship_C_UpdateDropship_Params
{
public:
	struct FDropship                             Dropship;                                          // 0x0(0xE0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function UMG_DropshipEditor_Dropship.UMG_DropshipEditor_Dropship_C.BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
struct UUMG_DropshipEditor_Dropship_C_BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
{
public:
	class UUMG_ButtonBase_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_DropshipEditor_Dropship.UMG_DropshipEditor_Dropship_C.BndEvt__UMG_BasicButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
struct UUMG_DropshipEditor_Dropship_C_BndEvt__UMG_BasicButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
{
public:
	class UUMG_ButtonBase_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function UMG_DropshipEditor_Dropship.UMG_DropshipEditor_Dropship_C.ExecuteUbergraph_UMG_DropshipEditor_Dropship
struct UUMG_DropshipEditor_Dropship_C_ExecuteUbergraph_UMG_DropshipEditor_Dropship_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_556D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBackendProxyComponent*                CallFunc_GetBackendProxyComponent_BackendProxyComponent; // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetBackendProxyComponent_bSuccess;        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5579[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_ButtonBase_C*                     K2Node_ComponentBoundEvent_Button_1;               // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ButtonBase_C*                     K2Node_ComponentBoundEvent_Button;                 // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface;       // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5596[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_UserInterface_Base_C*             CallFunc_GetUserInterface_UserInterface;           // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


