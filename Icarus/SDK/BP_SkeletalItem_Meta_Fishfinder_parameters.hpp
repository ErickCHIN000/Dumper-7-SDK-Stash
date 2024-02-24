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

// 0x11 (0x11 - 0x0)
// Function BP_SkeletalItem_Meta_Fishfinder.BP_SkeletalItem_Meta_Fishfinder_C.Play Fish Finder Finish Sound
struct ABP_SkeletalItem_Meta_Fishfinder_C_Play_Fish_Finder_Finish_Sound_Params
{
public:
	enum class EFMODValid                        CallFunc_PlayEventAttached_IsValid;                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6593[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODAudioComponent*                   CallFunc_PlayEventAttached_ReturnValue;            // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BP_SkeletalItem_Meta_Fishfinder.BP_SkeletalItem_Meta_Fishfinder_C.Play Sonar Sound
struct ABP_SkeletalItem_Meta_Fishfinder_C_Play_Sonar_Sound_Params
{
public:
	enum class EFMODValid                        CallFunc_PlayEventAttached_IsValid;                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65A8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODAudioComponent*                   CallFunc_PlayEventAttached_ReturnValue;            // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_SkeletalItem_Meta_Fishfinder.BP_SkeletalItem_Meta_Fishfinder_C.GetScreenWidget
struct ABP_SkeletalItem_Meta_Fishfinder_C_GetScreenWidget_Params
{
public:
	class UWidgetComponent*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function BP_SkeletalItem_Meta_Fishfinder.BP_SkeletalItem_Meta_Fishfinder_C.ExecuteUbergraph_BP_SkeletalItem_Meta_Fishfinder
struct ABP_SkeletalItem_Meta_Fishfinder_C_ExecuteUbergraph_BP_SkeletalItem_Meta_Fishfinder_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_65D2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CallFunc_GetWidget_ReturnValue;                    // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Fishfinder_C*                       K2Node_DynamicCast_AsW_Fishfinder;                 // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


