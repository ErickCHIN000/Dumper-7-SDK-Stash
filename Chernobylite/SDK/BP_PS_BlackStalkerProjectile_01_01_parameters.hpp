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

// 0x6E0 (0x6E0 - 0x0)
// Function BP_PS_BlackStalkerProjectile_01_01.BP_PS_BlackStalkerProjectile_01_01_C.UserConstructionScript
struct ABP_PS_BlackStalkerProjectile_01_01_C_UserConstructionScript_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CFF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeightedBlendable                    K2Node_MakeStruct_WeightedBlendable;               // 0x20(0x10)(NoDestructor, UObjectWrapper)
	TArray<struct FWeightedBlendable>            K2Node_MakeArray_Array;                            // 0x30(0x10)(ReferenceParm)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeightedBlendables                   K2Node_MakeStruct_WeightedBlendables;              // 0x48(0x10)(UObjectWrapper)
	uint8                                        Pad_D10[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPostProcessSettings                  K2Node_MakeStruct_PostProcessSettings;             // 0x60(0x680)(UObjectWrapper)
};

// 0x4 (0x4 - 0x0)
// Function BP_PS_BlackStalkerProjectile_01_01.BP_PS_BlackStalkerProjectile_01_01_C.ReceiveTick
struct ABP_PS_BlackStalkerProjectile_01_01_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xDC (0xDC - 0x0)
// Function BP_PS_BlackStalkerProjectile_01_01.BP_PS_BlackStalkerProjectile_01_01_C.ExecuteUbergraph_BP_PS_BlackStalkerProjectile_01_01
struct ABP_PS_BlackStalkerProjectile_01_01_C_ExecuteUbergraph_BP_PS_BlackStalkerProjectile_01_01_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FParticleSysParam                     K2Node_MakeStruct_ParticleSysParam;                // 0x10(0x80)(IsPlainOldData, NoDestructor, UObjectWrapper)
	TArray<struct FParticleSysParam>             K2Node_MakeArray_Array;                            // 0x90(0x10)(ReferenceParm)
	struct FVector                               CallFunc_Conv_FloatToVector_ReturnValue;           // 0xA0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaSeconds;                         // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0xB0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0xBC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0xCC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


