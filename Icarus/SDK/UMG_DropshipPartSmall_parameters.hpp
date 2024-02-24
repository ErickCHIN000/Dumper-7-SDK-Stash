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
// Function UMG_DropshipPartSmall.UMG_DropshipPartSmall_C.Initialise
struct UUMG_DropshipPartSmall_C_Initialise_Params
{
public:
	class UUMG_DropshipEditor_Dropship_C*        Parent;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x94 (0x94 - 0x0)
// Function UMG_DropshipPartSmall.UMG_DropshipPartSmall_C.UpdateState
struct UUMG_DropshipPartSmall_C_UpdateState_Params
{
public:
	struct FRocketableData                       CallFunc_GetRocketableData_Rocketable;             // 0x0(0x90)(None)
	enum class EDataValid                        CallFunc_GetRocketableData_Paths;                  // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EDataValid                        CallFunc_ItemDataValid_Paths;                      // 0x92(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x93(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1F0 (0x1F0 - 0x0)
// Function UMG_DropshipPartSmall.UMG_DropshipPartSmall_C.Update
struct UUMG_DropshipPartSmall_C_Update_Params
{
public:
	struct FItemData                             Item;                                              // 0x0(0x1F0)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0x8 (0x8 - 0x0)
// Function UMG_DropshipPartSmall.UMG_DropshipPartSmall_C.OnLoaded_6FF29948471A55576D5E19A5F0534075
struct UUMG_DropshipPartSmall_C_OnLoaded_6FF29948471A55576D5E19A5F0534075_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function UMG_DropshipPartSmall.UMG_DropshipPartSmall_C.LoadIcon
struct UUMG_DropshipPartSmall_C_LoadIcon_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             Texture;                                           // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function UMG_DropshipPartSmall.UMG_DropshipPartSmall_C.ExecuteUbergraph_UMG_DropshipPartSmall
struct UUMG_DropshipPartSmall_C_ExecuteUbergraph_UMG_DropshipPartSmall_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4994[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	class UObject*                               Temp_object_Variable;                              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_49C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             K2Node_CustomEvent_Texture;                        // 0x38(0x28)(HasGetValueTypeHash)
};

}
}


