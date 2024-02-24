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
// Function UMG_RecipeInput.UMG_RecipeInput_C.IsOutput
struct UUMG_RecipeInput_C_IsOutput_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function UMG_RecipeInput.UMG_RecipeInput_C.UpdateBackgroundImage
struct UUMG_RecipeInput_C_UpdateBackgroundImage_Params
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EProcessorPreview                 Selected;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x258 (0x258 - 0x0)
// Function UMG_RecipeInput.UMG_RecipeInput_C.Intialise
struct UUMG_RecipeInput_C_Intialise_Params
{
public:
	struct FItemData                             NewItem;                                           // 0x0(0x1F0)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	enum class EIcarusResourceType               NewResourceType;                                   // 0x1F0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FF8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Multiplier;                                        // 0x1F4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Output;                                            // 0x1F8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FFE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetResourceImage_ReturnValue;             // 0x200(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_IsResource_ReturnValue;                   // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2008[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetItemIcon_Icon;                         // 0x230(0x28)(HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UMG_RecipeInput.UMG_RecipeInput_C.PreConstruct
struct UUMG_RecipeInput_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function UMG_RecipeInput.UMG_RecipeInput_C.ExecuteUbergraph_UMG_RecipeInput
struct UUMG_RecipeInput_C_ExecuteUbergraph_UMG_RecipeInput_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UMG_RecipeInput.UMG_RecipeInput_C.Selected__DelegateSignature
struct UUMG_RecipeInput_C_Selected__DelegateSignature_Params
{
public:
	class UUMG_RecipeInput_C*                    SelectedRecipe;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


