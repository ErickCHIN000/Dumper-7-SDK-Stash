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

// 0x412 (0x412 - 0x0)
// Function BP_ResourceStack_Base.BP_ResourceStack_Base_C.Deployable_Interact
struct ABP_ResourceStack_Base_C_Deployable_Interact_Params
{
public:
	class AActor*                                Interactor;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemData                             ItemTemplate;                                      // 0x8(0x1F0)(Edit, BlueprintVisible, ContainsInstancedReference)
	class ABP_IcarusPlayerCharacterSurvival_C*   K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival; // 0x1F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5ED5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_IcarusPlayerControllerSurvival_C*  K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival; // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESetDataSuccess                   CallFunc_SetItemPropertyValue_Paths;               // 0x219(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x21A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5EDF[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetItemTemplateStruct_ItemTemplate;       // 0x220(0x1F0)(ContainsInstancedReference)
	enum class EValid                            CallFunc_GetItemTemplateStruct_Paths;              // 0x410(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x411(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


