#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x108 - 0xF8)
// BlueprintGeneratedClass ChargeGaugeHUDComponent.ChargeGaugeHUDComponent_C
class UChargeGaugeHUDComponent_C : public UTTLChargeGaugeHUDComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF8(0x8)(Transient, DuplicateTransient)
	class UMaterialInstanceDynamic*              DynamicMaterial;                                   // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UChargeGaugeHUDComponent_C* GetDefaultObj();

	void UpdateHUDBP(float DeltaSeconds);
	void ExecuteUbergraph_ChargeGaugeHUDComponent(int32 EntryPoint, float K2Node_Event_DeltaSeconds, class AActor* CallFunc_GetOwner_ReturnValue, class AOuterCharacter_C* K2Node_DynamicCast_AsOuter_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
};

}


