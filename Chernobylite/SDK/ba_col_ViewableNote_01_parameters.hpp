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

// 0x98 (0x98 - 0x0)
// Function ba_col_ViewableNote_01.ba_col_ViewableNote_01_C.SetRelativeLocation
struct Aba_col_ViewableNote_01_C_SetRelativeLocation_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0xC(0x8C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x4 (0x4 - 0x0)
// Function ba_col_ViewableNote_01.ba_col_ViewableNote_01_C.ReceiveTick
struct Aba_col_ViewableNote_01_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x27C (0x27C - 0x0)
// Function ba_col_ViewableNote_01.ba_col_ViewableNote_01_C.ExecuteUbergraph_ba_col_ViewableNote_01
struct Aba_col_ViewableNote_01_C_ExecuteUbergraph_ba_col_ViewableNote_01_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C3D[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Temp_struct_Variable;                              // 0x10(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x40(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x4C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x58(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x68(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetStaticMesh_ReturnValue;                // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x75(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C6C[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x78(0x8C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                        Pad_C72[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IMovieSceneTransformOrigin> K2Node_DynamicCast_AsTransform_Origin;             // 0x108(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C81[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_BP_GetTransformOrigin_ReturnValue;        // 0x120(0x30)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x151(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C8E[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x154(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInPIE_ReturnValue;                      // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C97[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x164(0x8C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult_1;  // 0x1F0(0x8C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

}
}


