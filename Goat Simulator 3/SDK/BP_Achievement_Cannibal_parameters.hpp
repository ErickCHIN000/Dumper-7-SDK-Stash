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
// Function BP_Achievement_Cannibal.BP_Achievement_Cannibal_C.OnHandlerGoatLickedActorDelegate
struct ABP_Achievement_Cannibal_C_OnHandlerGoatLickedActorDelegate_Params
{
public:
	class AGGGoat*                               Goat;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                LickedActor;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function BP_Achievement_Cannibal.BP_Achievement_Cannibal_C.ExecuteUbergraph_BP_Achievement_Cannibal
struct ABP_Achievement_Cannibal_C_ExecuteUbergraph_BP_Achievement_Cannibal_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_97A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGGlobalEventHandler*                 CallFunc_GetGlobalEventHandler_ReturnValue;        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               K2Node_CustomEvent_Goat;                           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_CustomEvent_LickedActor;                    // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PActor_Base_C*                     K2Node_DynamicCast_AsBP_PActor_Base;               // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_985[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGAlternativeGoatDataAsset*           CallFunc_GetCurrentAltGoat_ReturnValue;            // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_98B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInterface*>            CallFunc_GetMaterials_ReturnValue;                 // 0x40(0x10)(ReferenceParm)
	class UMaterialInterface*                    CallFunc_Array_Get_Item;                           // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_99B[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGPlayerController*                   CallFunc_GetGGPlayerController_ReturnValue;        // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGAchievementSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x70(0x10)(ZeroConstructor, NoDestructor)
};

}
}


