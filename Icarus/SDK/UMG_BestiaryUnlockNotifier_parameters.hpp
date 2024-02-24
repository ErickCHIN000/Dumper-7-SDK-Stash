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

// 0x19 (0x19 - 0x0)
// Function UMG_BestiaryUnlockNotifier.UMG_BestiaryUnlockNotifier_C.OnBestiaryUnlock
struct UUMG_BestiaryUnlockNotifier_C_OnBestiaryUnlock_Params
{
public:
	struct FBestiaryDataRowHandle                Group;                                             // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	enum class EBestiaryUnlockPopup              PopType;                                           // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2C (0x2C - 0x0)
// Function UMG_BestiaryUnlockNotifier.UMG_BestiaryUnlockNotifier_C.OnFishUnlock
struct UUMG_BestiaryUnlockNotifier_C_OnFishUnlock_Params
{
public:
	struct FFishTypeTracking                     Tracking;                                          // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	int32                                        PopType;                                           // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function UMG_BestiaryUnlockNotifier.UMG_BestiaryUnlockNotifier_C.ExecuteUbergraph_UMG_BestiaryUnlockNotifier
struct UUMG_BestiaryUnlockNotifier_C_ExecuteUbergraph_UMG_BestiaryUnlockNotifier_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_292E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_FishUnlock_C*                     CallFunc_Create_ReturnValue;                       // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EValid                            CallFunc_GetIcarusPlayerController_IsValid;        // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2936[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               CallFunc_GetIcarusPlayerController_ReturnValue;    // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_IcarusPlayerControllerSurvival_C*  K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival; // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2940[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBestiaryDataRowHandle                K2Node_CustomEvent_Group;                          // 0x4C(0x18)(NoDestructor, HasGetValueTypeHash)
	enum class EBestiaryUnlockPopup              K2Node_CustomEvent_PopType_1;                      // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_294A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFishTypeTracking                     K2Node_CustomEvent_Tracking;                       // 0x68(0x28)(NoDestructor)
	int32                                        K2Node_CustomEvent_PopType;                        // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_294D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x98(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_BestiaryUnlock_C*                 CallFunc_Create_ReturnValue_1;                     // 0xA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue_1;                   // 0xA8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


