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

// 0xC (0xC - 0x0)
// Function BP_Veranus_AI.BP_Veranus_AI_C.Death
struct ABP_Veranus_AI_C_Death_Params
{
public:
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_Veranus_AI.BP_Veranus_AI_C.GetMontages
struct ABP_Veranus_AI_C_GetMontages_Params
{
public:
	enum class E_MontageAction                   Action;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            Montages;                                          // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_Veranus_AI.BP_Veranus_AI_C.OnCollisionActivated
struct ABP_Veranus_AI_C_OnCollisionActivated_Params
{
public:
	enum class E_CollisionPart                   Selection;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_Veranus_AI.BP_Veranus_AI_C.ExecuteUbergraph_BP_Veranus_AI
struct ABP_Veranus_AI_C_ExecuteUbergraph_BP_Veranus_AI_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1194[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetAllSocketNames_ReturnValue;            // 0x8(0x10)(ReferenceParm)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue;         // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue_1;       // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue_2;       // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue_3;       // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_CollisionPart                   K2Node_Event_Selection;                            // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue_4;       // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue_5;       // 0x1F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


