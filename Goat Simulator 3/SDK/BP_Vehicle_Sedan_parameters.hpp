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

// 0x28 (0x28 - 0x0)
// Function BP_Vehicle_Sedan.BP_Vehicle_Sedan_C.OnVehicleAppearanceChanged
struct ABP_Vehicle_Sedan_C_OnVehicleAppearanceChanged_Params
{
public:
	class AGGVehicle*                            Vehicle;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                RowName;                                           // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                AppearanceString;                                  // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x43 (0x43 - 0x0)
// Function BP_Vehicle_Sedan.BP_Vehicle_Sedan_C.ExecuteUbergraph_BP_Vehicle_Sedan
struct ABP_Vehicle_Sedan_C_ExecuteUbergraph_BP_Vehicle_Sedan_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_A4E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGVehicle*                            K2Node_CustomEvent_Vehicle;                        // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_RowName;                        // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_AppearanceString;               // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


