#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x90 - 0x80)
// BlueprintGeneratedClass IEftParry_RestoreResolve.IEftParry_RestoreResolve_C
class UIEftParry_RestoreResolve_C : public UBPItemEffectParryBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x80(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        ResolveGained;                                     // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ResolveGainedIfFamiliar;                           // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UIEftParry_RestoreResolve_C* GetDefaultObj();

	void OnParry(class ABaseCharacter_C* ParriedEnemy);
	void ExecuteUbergraph_IEftParry_RestoreResolve(int32 EntryPoint, bool Temp_bool_Variable, class ABaseCharacter_C* K2Node_Event_ParriedEnemy, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, float K2Node_Select_Default);
};

}


