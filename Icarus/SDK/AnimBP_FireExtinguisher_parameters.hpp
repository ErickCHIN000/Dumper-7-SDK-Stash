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

// 0x10 (0x10 - 0x0)
// Function AnimBP_FireExtinguisher.AnimBP_FireExtinguisher_C.AnimGraph
struct UAnimBP_FireExtinguisher_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function AnimBP_FireExtinguisher.AnimBP_FireExtinguisher_C.BlueprintUpdateAnimation
struct UAnimBP_FireExtinguisher_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x42 (0x42 - 0x0)
// Function AnimBP_FireExtinguisher.AnimBP_FireExtinguisher_C.ExecuteUbergraph_AnimBP_FireExtinguisher
struct UAnimBP_FireExtinguisher_C_ExecuteUbergraph_AnimBP_FireExtinguisher_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaTimeX;                           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwningActor_ReturnValue;               // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SkeletalItem_FireExtinguisher_C*   K2Node_DynamicCast_AsBP_Skeletal_Item_Fire_Extinguisher; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EValid                            CallFunc_GetTrait_Paths;                           // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5CDE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UActionableComponent*                  CallFunc_GetTrait_ReturnValue;                     // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5CE4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTraitBehaviour*                       CallFunc_GetFirstBehaviourOfType_ReturnValue;      // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Actionable_FireExtinguisher_C*     K2Node_DynamicCast_AsBP_Actionable_Fire_Extinguisher; // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsFiring_Firing;                          // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


