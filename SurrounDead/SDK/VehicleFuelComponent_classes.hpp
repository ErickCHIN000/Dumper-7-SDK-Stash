#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5C (0x114 - 0xB8)
// BlueprintGeneratedClass VehicleFuelComponent.VehicleFuelComponent_C
class UVehicleFuelComponent_C : public UBaseComponent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                          FuelRestore_Timer;                                 // 0xC0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentFuel;                                       // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxFuel;                                           // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       WasteTime;                                         // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       WasteOfFuelPerTime;                                // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Empty;                                             // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28A6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            FuelUpdate;                                        // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ABP_VehicleMaster_C*                   Vehicle;                                           // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerCharacter_C*                 PlayerRef;                                         // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        FuelMultiplier;                                    // 0x110(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UVehicleFuelComponent_C* GetDefaultObj();

	void UpdateUIFuel(double Fuel, bool CallFunc_IsValid_ReturnValue);
	void FuelSpend();
	void StartFuelSpend();
	void AddFuel(double FuelPercent);
	void StopSpendFuel();
	void LoadComponent();
	void ReceiveBeginPlay();
	void Event_FuelX(float NewValue);
	void ExecuteUbergraph_VehicleFuelComponent(int32 EntryPoint, float K2Node_CustomEvent_NewValue, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_Multiply_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_Less_DoubleDouble_ReturnValue, double K2Node_CustomEvent_FuelPercent, double CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetForwardSpeedMPH_ReturnValue, double CallFunc_Abs_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool K2Node_Select_Default, class ABP_PlayerCharacter_C* CallFunc_CastToCharacter_Character, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Abs_A_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void FuelUpdate__DelegateSignature(double FuelInput);
};

}


