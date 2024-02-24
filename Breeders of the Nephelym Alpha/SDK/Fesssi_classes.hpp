#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xE78 - 0xE70)
// BlueprintGeneratedClass Fesssi.Fesssi_C
class AFesssi_C : public ASexyManualCharacter
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE70(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AFesssi_C* GetDefaultObj();

	void Reset();
	void OnSetWorldState();
	void OnBecameDailyToy();
	void OnNoLongerDailyToy();
	void ExecuteUbergraph_Fesssi(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_2, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_3, bool Temp_bool_IsClosed_Variable_2, const struct FConditions& K2Node_MakeStruct_Conditions, bool CallFunc_CheckGameFlags_ReturnValue);
};

}


