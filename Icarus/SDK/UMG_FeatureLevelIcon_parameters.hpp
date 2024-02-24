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

// 0x18 (0x18 - 0x0)
// Function UMG_FeatureLevelIcon.UMG_FeatureLevelIcon_C.SetFeatureLevel
struct UUMG_FeatureLevelIcon_C_SetFeatureLevel_Params
{
public:
	struct FFeatureLevelsRowHandle               FeatureLevel;                                      // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UMG_FeatureLevelIcon.UMG_FeatureLevelIcon_C.PreConstruct
struct UUMG_FeatureLevelIcon_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xE1 (0xE1 - 0x0)
// Function UMG_FeatureLevelIcon.UMG_FeatureLevelIcon_C.ExecuteUbergraph_UMG_FeatureLevelIcon
struct UUMG_FeatureLevelIcon_C_ExecuteUbergraph_UMG_FeatureLevelIcon_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFeatureLevelsRowHandle               K2Node_CustomEvent_FeatureLevel;                   // 0xC(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BF2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFeatureLevelData                     CallFunc_GetFeatureLevelsStruct_FeatureLevels;     // 0x28(0x98)(None)
	enum class EValid                            CallFunc_GetFeatureLevelsStruct_Paths;             // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C05[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_LoadAsset_Blocking_ReturnValue;           // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C0A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


