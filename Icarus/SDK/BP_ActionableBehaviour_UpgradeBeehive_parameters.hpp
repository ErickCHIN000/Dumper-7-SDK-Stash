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

// 0x32 (0x32 - 0x0)
// Function BP_ActionableBehaviour_UpgradeBeehive.BP_ActionableBehaviour_UpgradeBeehive_C.CustomDeploymentCheck
struct UBP_ActionableBehaviour_UpgradeBeehive_C_CustomDeploymentCheck_Params
{
public:
	class AActor*                                HitActor;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ValidPlacement;                                    // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4848[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Reason;                                            // 0x10(0x18)(Parm, OutParm)
	class ABP_Beehive_C*                         K2Node_DynamicCast_AsBP_Beehive;                   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanInstallExpansion_Success;              // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x278 (0x278 - 0x0)
// Function BP_ActionableBehaviour_UpgradeBeehive.BP_ActionableBehaviour_UpgradeBeehive_C.BlueprintDeploy
struct UBP_ActionableBehaviour_UpgradeBeehive_C_BlueprintDeploy_Params
{
public:
	struct FTransform                            DeployTransform;                                   // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	class AActor*                                FoundationActor;                                   // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemData                             ItemData;                                          // 0x38(0x1F0)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	int32                                        VarientIndex;                                      // 0x228(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4920[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADeployable*                           K2Node_DynamicCast_AsDeployable;                   // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4930[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Beehive_C*                         K2Node_DynamicCast_AsBP_Beehive;                   // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4950[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                K2Node_DynamicCast_AsIcarus_Player_Character;      // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Add_Expansion_Success;                    // 0x269(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_495A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDeployableSubsystem*                  CallFunc_GetWorldSubsystem_ReturnValue;            // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


