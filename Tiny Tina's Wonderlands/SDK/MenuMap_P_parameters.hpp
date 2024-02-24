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
// Function MenuMap_P.MenuMap_P_C.BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_1_MainMenuViewpointChangedDelegate__DelegateSignature
struct AMenuMap_P_C_BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_1_MainMenuViewpointChangedDelegate__DelegateSignature_Params
{
public:
	enum class EMainMenuViewpointType            MenuTransition;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function MenuMap_P.MenuMap_P_C.ExecuteUbergraph_MenuMap_P
struct AMenuMap_P_C_ExecuteUbergraph_MenuMap_P_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInitialPlayerStatus              CallFunc_Start_OutInitialPlayerStatus;             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMainMenuViewpointType            K2Node_ActorBoundEvent_MenuTransition;             // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum1_CmpSuccess;                     // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


