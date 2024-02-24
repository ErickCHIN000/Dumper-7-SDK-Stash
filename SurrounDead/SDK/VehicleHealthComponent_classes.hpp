#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0xF0 - 0xB8)
// BlueprintGeneratedClass VehicleHealthComponent.VehicleHealthComponent_C
class UVehicleHealthComponent_C : public UBaseComponent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       CurrentHealth;                                     // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxHealth;                                         // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            FuelUpdate;                                        // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ABP_VehicleMaster_C*                   Vehicle;                                           // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerCharacter_C*                 PlayerRef;                                         // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UVehicleHealthComponent_C* GetDefaultObj();

	void UpdateUIHealth(double Health, bool CallFunc_IsValid_ReturnValue);
	void AddHealth(double HealthPercent);
	void LoadComponent();
	void ExecuteUbergraph_VehicleHealthComponent(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, double K2Node_CustomEvent_HealthPercent, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, class ABP_PlayerCharacter_C* CallFunc_CastToCharacter_Character);
	void FuelUpdate__DelegateSignature(double FuelInput);
};

}


