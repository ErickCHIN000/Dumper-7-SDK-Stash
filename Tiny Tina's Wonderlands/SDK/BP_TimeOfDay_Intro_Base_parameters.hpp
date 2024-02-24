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

// 0x44 (0x44 - 0x0)
// Function BP_TimeOfDay_Intro_Base.BP_TimeOfDay_Intro_Base_C.UserConstructionScript
struct ABP_TimeOfDay_Intro_Base_C_UserConstructionScript_Params
{
public:
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue;             // 0x14(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x20(0xC)(IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakRotator_Roll1;                       // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch1;                      // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw1;                        // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x38(0xC)(IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_TimeOfDay_Intro_Base.BP_TimeOfDay_Intro_Base_C.PostSiege
struct ABP_TimeOfDay_Intro_Base_C_PostSiege_Params
{
public:
	bool                                         OnLoad;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_TimeOfDay_Intro_Base.BP_TimeOfDay_Intro_Base_C.DuringSiege
struct ABP_TimeOfDay_Intro_Base_C_DuringSiege_Params
{
public:
	bool                                         OnLoad;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_TimeOfDay_Intro_Base.BP_TimeOfDay_Intro_Base_C.PreSiege
struct ABP_TimeOfDay_Intro_Base_C_PreSiege_Params
{
public:
	bool                                         OnLoad;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_TimeOfDay_Intro_Base.BP_TimeOfDay_Intro_Base_C.ButtstallionCutscene
struct ABP_TimeOfDay_Intro_Base_C_ButtstallionCutscene_Params
{
public:
	bool                                         OnLoad;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_TimeOfDay_Intro_Base.BP_TimeOfDay_Intro_Base_C.AfterButtstallionCutscene
struct ABP_TimeOfDay_Intro_Base_C_AfterButtstallionCutscene_Params
{
public:
	bool                                         OnLoad;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function BP_TimeOfDay_Intro_Base.BP_TimeOfDay_Intro_Base_C.ExecuteUbergraph_BP_TimeOfDay_Intro_Base
struct ABP_TimeOfDay_Intro_Base_C_ExecuteUbergraph_BP_TimeOfDay_Intro_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_OnLoad4;                        // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_OnLoad3;                        // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_OnLoad2;                        // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_OnLoad1;                        // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_OnLoad;                         // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


