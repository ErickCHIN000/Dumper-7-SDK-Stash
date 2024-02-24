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
// Function VehiclePassengerTutorial.VehiclePassengerTutorial_C.OnTutorialActivated
struct AVehiclePassengerTutorial_C_OnTutorialActivated_Params
{
public:
	class AGGPlayerController*                   PC;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               Goat;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function VehiclePassengerTutorial.VehiclePassengerTutorial_C.OnVehicleAbilityActivated_Event_0
struct AVehiclePassengerTutorial_C_OnVehicleAbilityActivated_Event_0_Params
{
public:
	class AGGVehicle*                            Vehicle;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 AbilityTags;                                       // 0x8(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1C0 (0x1C0 - 0x0)
// Function VehiclePassengerTutorial.VehiclePassengerTutorial_C.ExecuteUbergraph_VehiclePassengerTutorial
struct AVehiclePassengerTutorial_C_ExecuteUbergraph_VehiclePassengerTutorial_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(ZeroConstructor, NoDestructor)
	struct FNotificationProperties               CallFunc_MakeNotificationProperties_ReturnValue;   // 0x24(0x14)(NoDestructor)
	class AGGPlayerController*                   K2Node_Event_PC;                                   // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               K2Node_Event_Goat;                                 // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGVehicle*                            K2Node_DynamicCast_AsGGVehicle;                    // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BFA[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x58(0x8)(NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetTutorialID_ReturnValue;                // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class AGGVehicle*                            K2Node_CustomEvent_Vehicle;                        // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 K2Node_CustomEvent_AbilityTags;                    // 0x78(0x20)(None)
	TArray<struct FGameplayTag>                  K2Node_MakeArray_Array;                            // 0x98(0x10)(ConstParm, ReferenceParm)
	class AGGVehicle*                            K2Node_DynamicCast_AsGGVehicle_1;                  // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C10[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 CallFunc_MakeGameplayTagContainerFromArray_ReturnValue; // 0xB8(0x20)(None)
	bool                                         CallFunc_HasAnyTags_ReturnValue;                   // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C19[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNotificationProperties               CallFunc_MakeNotificationProperties_ReturnValue_1; // 0xDC(0x14)(NoDestructor)
	class FString                                CallFunc_GetTutorialID_ReturnValue_1;              // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FNotification                         CallFunc_MakeNotification_ReturnValue;             // 0x100(0x60)(None)
	struct FNotification                         CallFunc_MakeNotification_ReturnValue_1;           // 0x160(0x60)(None)
};

}
}


