#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2A (0x44A - 0x420)
// BlueprintGeneratedClass GenericMedicine.GenericMedicine_C
class AGenericMedicine_C : public AGenericLootItem_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class E_MedicineType                    MedicineType;                                      // 0x428(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16B1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RegenWorkTime;                                     // 0x42C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SmallHPRegen;                                      // 0x430(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MiddleHPRegen;                                     // 0x434(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SedativeHPRegen;                                   // 0x438(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BandagingHPRegen;                                  // 0x43C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECuringType                       CuringType;                                        // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bRemoveDisease;                                    // 0x441(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class ETraumaCuringType                 TraumaCuringType;                                  // 0x442(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16C0[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StressRecover;                                     // 0x444(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RemoveStress;                                      // 0x448(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bRemoveBleeding;                                   // 0x449(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AGenericMedicine_C* GetDefaultObj();

	void HealBleeding(class ASHPlayerCharacter* Character);
	void HealPoisoning(class ASHPlayerCharacter* PlayerCharacter, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void HealStress(class ASHPlayerCharacter* Character, class AController* CallFunc_GetController_ReturnValue, class ASHPlayerController* K2Node_DynamicCast_AsSHPlayer_Controller, bool K2Node_DynamicCast_bSuccess);
	void HealTrauma(class ASHCharacter* Character, bool CallFunc_NotEqual_ByteByte_ReturnValue, class USHTraumaCuringEvent* CallFunc_CreateTraumaCuringEvent_ReturnValue, bool CallFunc_ApplyTraumaCuring_ReturnValue);
	void DoHeal(class ASHPlayerCharacter* Character, enum class E_MedicineType Temp_byte_Variable, class ASHEffect* CallFunc_CreateEffect_ReturnValue, float CallFunc_GetMaxValue_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ASHEffect_HealOverTime* K2Node_DynamicCast_AsSHEffect_Heal_Over_Time, bool K2Node_DynamicCast_bSuccess, float Temp_float_Variable, float K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void RemoveDisease(class ASHPlayerCharacter* Character, class USHCuringEvent* CallFunc_CreateCuringEvent_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_Apply_ReturnValue);
	void OnUse(class ASHPlayerCharacter* Character);
	void ExecuteUbergraph_GenericMedicine(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class ASHPlayerCharacter* K2Node_Event_Character, bool CallFunc_IsValid_ReturnValue);
};

}


