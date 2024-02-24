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
// Function BP_SkeletalItem_Shield_Back.BP_SkeletalItem_Shield_Back_C.OnLoaded_80ED98D14DF2AA1232DDA287390DB216
struct ABP_SkeletalItem_Shield_Back_C_OnLoaded_80ED98D14DF2AA1232DDA287390DB216_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20A (0x20A - 0x0)
// Function BP_SkeletalItem_Shield_Back.BP_SkeletalItem_Shield_Back_C.ExecuteUbergraph_BP_SkeletalItem_Shield_Back
struct ABP_SkeletalItem_Shield_Back_C_ExecuteUbergraph_BP_SkeletalItem_Shield_Back_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5FAC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	class UObject*                               Temp_object_Variable;                              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         K2Node_DynamicCast_AsSkeletal_Mesh;                // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5FBF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMeshableData                         CallFunc_GetMeshableData_MeshableData;             // 0x38(0x1D0)(None)
	enum class EDataValid                        CallFunc_GetMeshableData_Paths;                    // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x209(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


