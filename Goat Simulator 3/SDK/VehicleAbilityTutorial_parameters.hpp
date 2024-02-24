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
// Function VehicleAbilityTutorial.VehicleAbilityTutorial_C.OnTutorialActivated
struct AVehicleAbilityTutorial_C_OnTutorialActivated_Params
{
public:
	class AGGPlayerController*                   PC;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               Goat;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function VehicleAbilityTutorial.VehicleAbilityTutorial_C.OnVehicleAbilityActivated_Event_0
struct AVehicleAbilityTutorial_C_OnVehicleAbilityActivated_Event_0_Params
{
public:
	class AGGVehicle*                            Vehicle;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 AbilityTags;                                       // 0x8(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x161 (0x161 - 0x0)
// Function VehicleAbilityTutorial.VehicleAbilityTutorial_C.ExecuteUbergraph_VehicleAbilityTutorial
struct AVehicleAbilityTutorial_C_ExecuteUbergraph_VehicleAbilityTutorial_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AC9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayTag>                  K2Node_MakeArray_Array;                            // 0x8(0x10)(ConstParm, ReferenceParm)
	struct FGameplayTagContainer                 CallFunc_MakeGameplayTagContainerFromArray_ReturnValue; // 0x18(0x20)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x38(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x48(0x10)(ZeroConstructor, NoDestructor)
	struct FNotificationProperties               CallFunc_MakeNotificationProperties_ReturnValue;   // 0x58(0x14)(NoDestructor)
	uint8                                        Pad_AD3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGPlayerController*                   K2Node_Event_PC;                                   // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               K2Node_Event_Goat;                                 // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGGTutorialInterface> K2Node_DynamicCast_AsGGTutorial_Interface;         // 0x80(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AD7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetTutorialText_ReturnValue;              // 0x98(0x18)(None)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0xB0(0x8)(NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetTutorialID_ReturnValue;                // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class AGGVehicle*                            K2Node_CustomEvent_Vehicle;                        // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 K2Node_CustomEvent_AbilityTags;                    // 0xD0(0x20)(None)
	struct FNotification                         CallFunc_MakeNotification_ReturnValue;             // 0xF0(0x60)(None)
	bool                                         CallFunc_HasAnyTags_ReturnValue;                   // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x151(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AE2[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGVehicle*                            K2Node_DynamicCast_AsGGVehicle;                    // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


