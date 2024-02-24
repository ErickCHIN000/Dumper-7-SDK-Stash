#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x98 - 0x80)
// BlueprintGeneratedClass IEftParry_SetEnemyOnFire.IEftParry_SetEnemyOnFire_C
class UIEftParry_SetEnemyOnFire_C : public UBPItemEffectParryBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x80(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        BurnDuration;                                      // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BurnDPS;                                           // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BurnDurationIfFamiliar;                            // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BurnDPSIfFamiliar;                                 // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UIEftParry_SetEnemyOnFire_C* GetDefaultObj();

	void OnParry(class ABaseCharacter_C* ParriedEnemy);
	void ExecuteUbergraph_IEftParry_SetEnemyOnFire(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class ABaseCharacter_C* K2Node_Event_ParriedEnemy, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float K2Node_Select_Default, float K2Node_Select_Default_1);
};

}


