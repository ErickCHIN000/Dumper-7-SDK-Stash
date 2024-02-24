#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xE80 - 0xE70)
// BlueprintGeneratedClass DragonMatriarch.DragonMatriarch_C
class ADragonMatriarch_C : public ASexyManualCharacter
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE70(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                     Capsule;                                           // 0xE78(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ADragonMatriarch_C* GetDefaultObj();

	void Reset();
	void OnSetWorldState();
	void ExecuteUbergraph_DragonMatriarch(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_1, bool Temp_bool_IsClosed_Variable, const struct FConditions& K2Node_MakeStruct_Conditions, bool CallFunc_CheckGameFlags_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_2);
};

}


