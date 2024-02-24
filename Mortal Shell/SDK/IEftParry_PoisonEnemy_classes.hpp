#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x9C - 0x80)
// BlueprintGeneratedClass IEftParry_PoisonEnemy.IEftParry_PoisonEnemy_C
class UIEftParry_PoisonEnemy_C : public UBPItemEffectParryBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x80(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Duration;                                          // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DPS;                                               // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DurationIfFamiliar;                                // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DPSIfFamiliar;                                     // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ApplyFrequency;                                    // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UIEftParry_PoisonEnemy_C* GetDefaultObj();

	void OnParry(class ABaseCharacter_C* ParriedEnemy);
	void ExecuteUbergraph_IEftParry_PoisonEnemy(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class ABaseCharacter_C* K2Node_Event_ParriedEnemy, float K2Node_Select_Default, float K2Node_Select_Default_1);
};

}


