#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x448 - 0x420)
// BlueprintGeneratedClass GenericFood.GenericFood_C
class AGenericFood_C : public AGenericLootItem_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class E_FoodType                        FoodType;                                          // 0x428(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1695[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SmallHPRegen;                                      // 0x42C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MiddleHPRegen;                                     // 0x430(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RegenWorkTime;                                     // 0x434(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SmallHungerAdd;                                    // 0x438(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MIddleHungerAdd;                                   // 0x43C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RawHungerAdd;                                      // 0x440(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HealthDamage;                                      // 0x444(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGenericFood_C* GetDefaultObj();

	void GetHealthDamage(class ASHPlayerCharacter* PlayerCharacter, float* Damage, float CallFunc_GetMaxValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void GetSelection();
	void OnUse(class ASHPlayerCharacter* Character);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_GenericFood(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, enum class E_FoodType Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, enum class E_FoodType Temp_byte_Variable_1, float Temp_float_Variable_2, class ASHPlayerCharacter* K2Node_Event_Character, float CallFunc_GetHealthDamage_Damage, float CallFunc_ApplyDamage_ReturnValue, float CallFunc_GetMaxValue_ReturnValue, float CallFunc_GetMaxValue_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ASHEffect_HealOverTime* CallFunc_FinishSpawningActor_ReturnValue, float K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_Select_Default_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1);
};

}


