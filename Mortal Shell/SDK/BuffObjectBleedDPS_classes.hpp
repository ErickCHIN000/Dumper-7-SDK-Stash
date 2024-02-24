#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x88 - 0x68)
// BlueprintGeneratedClass BuffObjectBleedDPS.BuffObjectBleedDPS_C
class UBuffObjectBleedDPS_C : public UBuffObjectTimeBased_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                          DPSTimer;                                          // 0x70(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        DPSApplyFrequency;                                 // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        DPS;                                               // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UParticleSystemComponent*              PoisonVFXOnStatue;                                 // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBuffObjectBleedDPS_C* GetDefaultObj();

	float GetDamage(float CallFunc_Multiply_FloatFloat_ReturnValue);
	void ApplyDPS();
	void OnBuffEnd(bool bInterrupted);
	void OnBuffStart();
	void ExecuteUbergraph_BuffObjectBleedDPS(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_Event_bInterrupted, float CallFunc_GetDamage_ReturnValue, float CallFunc_GetDamage_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_ApplyDamage_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
};

}


