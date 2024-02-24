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

// 0x1 (0x1 - 0x0)
// Function UMG_ListElement.UMG_ListElement_C.FullUpdate
struct UUMG_ListElement_C_FullUpdate_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UMG_ListElement.UMG_ListElement_C.GetOverlay
struct UUMG_ListElement_C_GetOverlay_Params
{
public:
	class UOverlay*                              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UMG_ListElement.UMG_ListElement_C.UpdateTrigger
struct UUMG_ListElement_C_UpdateTrigger_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2D8 (0x2D8 - 0x0)
// Function UMG_ListElement.UMG_ListElement_C.OnMouseButtonDown
struct UUMG_ListElement_C_OnMouseButtonDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x160(0xB8)(None)
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FEventReply                           CallFunc_Handled_ReturnValue_1;                    // 0x220(0xB8)(None)
};

// 0x1D (0x1D - 0x0)
// Function UMG_ListElement.UMG_ListElement_C.UpdateVisibility
struct UUMG_ListElement_C_UpdateVisibility_Params
{
public:
	struct FTagQueriesRowHandle                  ItemQuery;                                         // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FTagQueriesRowHandleFTagQueriesRowHandle_ReturnValue; // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue;             // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_ListElement.UMG_ListElement_C.SetState
struct UUMG_ListElement_C_SetState_Params
{
public:
	bool                                         Valid;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function UMG_ListElement.UMG_ListElement_C.CreateResourceWidget
struct UUMG_ListElement_C_CreateResourceWidget_Params
{
public:
	struct FResourceItem                         ResourceItem;                                      // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	class UUMG_RecipeElementImage_C*             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_RecipeElementImage_C*             CallFunc_Create_ReturnValue;                       // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetResourceImage_ReturnValue;             // 0x18(0x28)(HasGetValueTypeHash)
};

// 0x270 (0x270 - 0x0)
// Function UMG_ListElement.UMG_ListElement_C.CreateOutputItem
struct UUMG_ListElement_C_CreateOutputItem_Params
{
public:
	struct FItemData                             CraftingOutput;                                    // 0x0(0x1F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class FText                                  Name;                                              // 0x1F0(0x18)(Parm, OutParm)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x208(0x28)(Parm, OutParm, HasGetValueTypeHash)
	class FText                                  CallFunc_GetItemName_Name;                         // 0x230(0x18)(None)
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetItemIcon_Icon;                         // 0x248(0x28)(HasGetValueTypeHash)
};

// 0x270 (0x270 - 0x0)
// Function UMG_ListElement.UMG_ListElement_C.CreateInputItem
struct UUMG_ListElement_C_CreateInputItem_Params
{
public:
	struct FItemData                             CraftingInput;                                     // 0x0(0x1F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class FText                                  Name;                                              // 0x1F0(0x18)(Parm, OutParm)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x208(0x28)(Parm, OutParm, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetItemIcon_Icon;                         // 0x230(0x28)(HasGetValueTypeHash)
	class FText                                  CallFunc_GetItemName_Name;                         // 0x258(0x18)(None)
};

// 0x2D (0x2D - 0x0)
// Function UMG_ListElement.UMG_ListElement_C.InitialiseToolTip
struct UUMG_ListElement_C_InitialiseToolTip_Params
{
public:
	class UUMG_RecipeToolTip_C*                  CallFunc_Create_ReturnValue;                       // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FProcessingItem                       K2Node_MakeStruct_ProcessingItem;                  // 0x8(0x24)(NoDestructor)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue;             // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UMG_ListElement.UMG_ListElement_C.GetHoverCornerWidget
struct UUMG_ListElement_C_GetHoverCornerWidget_Params
{
public:
	class UOverlay*                              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function UMG_ListElement.UMG_ListElement_C.GetResourceImage
struct UUMG_ListElement_C_GetResourceImage_Params
{
public:
	enum class EIcarusResourceType               Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4058[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            RecipeIcon;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4067[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Temp_object_Variable;                              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_407B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            K2Node_Select_Default;                             // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function UMG_ListElement.UMG_ListElement_C.GetResourceOutputs
struct UUMG_ListElement_C_GetResourceOutputs_Params
{
public:
	TArray<struct FResourceItem>                 ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm)
	class ACharacter*                            CallFunc_GetPlayerCharacter_ReturnValue;           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FProcessorRecipesRowHandle            CallFunc_GetProcessorRecipe_ReturnValue;           // 0x18(0x18)(NoDestructor, HasGetValueTypeHash)
	TArray<struct FResourceItem>                 CallFunc_CreateRecipeOutputResourceData_ReturnValue; // 0x30(0x10)(ReferenceParm)
};

// 0x40 (0x40 - 0x0)
// Function UMG_ListElement.UMG_ListElement_C.GetResourceInputs
struct UUMG_ListElement_C_GetResourceInputs_Params
{
public:
	TArray<struct FResourceItem>                 ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm)
	class ACharacter*                            CallFunc_GetPlayerCharacter_ReturnValue;           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FProcessorRecipesRowHandle            CallFunc_GetProcessorRecipe_ReturnValue;           // 0x18(0x18)(NoDestructor, HasGetValueTypeHash)
	TArray<struct FResourceItem>                 CallFunc_CreateRecipeInputResourceData_ReturnValue; // 0x30(0x10)(ReferenceParm)
};

// 0x40 (0x40 - 0x0)
// Function UMG_ListElement.UMG_ListElement_C.GetProcessorOutputs
struct UUMG_ListElement_C_GetProcessorOutputs_Params
{
public:
	TArray<struct FItemData>                     ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
	class ACharacter*                            CallFunc_GetPlayerCharacter_ReturnValue;           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FProcessorRecipesRowHandle            CallFunc_GetProcessorRecipe_ReturnValue;           // 0x18(0x18)(NoDestructor, HasGetValueTypeHash)
	TArray<struct FItemData>                     CallFunc_CreateRecipeOutputItemData_ReturnValue;   // 0x30(0x10)(ReferenceParm, ContainsInstancedReference)
};

// 0x40 (0x40 - 0x0)
// Function UMG_ListElement.UMG_ListElement_C.GetProcessorInputs
struct UUMG_ListElement_C_GetProcessorInputs_Params
{
public:
	TArray<struct FItemData>                     ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
	class ACharacter*                            CallFunc_GetPlayerCharacter_ReturnValue;           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FProcessorRecipesRowHandle            CallFunc_GetProcessorRecipe_ReturnValue;           // 0x18(0x18)(NoDestructor, HasGetValueTypeHash)
	TArray<struct FItemData>                     CallFunc_CreateRecipeInputItemData_ReturnValue;    // 0x30(0x10)(ReferenceParm, ContainsInstancedReference)
};

// 0x18 (0x18 - 0x0)
// Function UMG_ListElement.UMG_ListElement_C.GetProcessorRecipe
struct UUMG_ListElement_C_GetProcessorRecipe_Params
{
public:
	struct FProcessorRecipesRowHandle            ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// 0x2D8 (0x2D8 - 0x0)
// Function UMG_ListElement.UMG_ListElement_C.OnMouseButtonUp
struct UUMG_ListElement_C_OnMouseButtonUp_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x160(0xB8)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4389[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue_1;                    // 0x220(0xB8)(None)
};

// 0xA8 (0xA8 - 0x0)
// Function UMG_ListElement.UMG_ListElement_C.OnMouseEnter
struct UUMG_ListElement_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x70 (0x70 - 0x0)
// Function UMG_ListElement.UMG_ListElement_C.OnMouseLeave
struct UUMG_ListElement_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x142 (0x142 - 0x0)
// Function UMG_ListElement.UMG_ListElement_C.ExecuteUbergraph_UMG_ListElement
struct UUMG_ListElement_C_ExecuteUbergraph_UMG_ListElement_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44BB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOverlay*                              CallFunc_GetOverlay_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x10(0x38)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                         K2Node_Event_MouseEvent_1;                         // 0x48(0x70)(ConstParm)
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0xB8(0x70)(ConstParm)
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UOverlay*                              CallFunc_GetHoverCornerWidget_ReturnValue;         // 0x130(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                              CallFunc_GetHoverCornerWidget_ReturnValue_1;       // 0x138(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function UMG_ListElement.UMG_ListElement_C.RecipeSelected__DelegateSignature
struct UUMG_ListElement_C_RecipeSelected__DelegateSignature_Params
{
public:
	struct FProcessorRecipesRowHandle            Recipe;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

}
}


