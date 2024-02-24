#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x90 - 0x80)
// BlueprintGeneratedClass IEftParry_RestoreHealth.IEftParry_RestoreHealth_C
class UIEftParry_RestoreHealth_C : public UBPItemEffectParryBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x80(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        HealAmount;                                        // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        HealAmountIfFamiliar;                              // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UIEftParry_RestoreHealth_C* GetDefaultObj();

	void OnParry(class ABaseCharacter_C* ParriedEnemy);
	void ExecuteUbergraph_IEftParry_RestoreHealth(int32 EntryPoint, bool Temp_bool_Variable, class ABaseCharacter_C* K2Node_Event_ParriedEnemy, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, int32 K2Node_Select_Default, bool CallFunc_ServerSetHealth_Success);
};

}


