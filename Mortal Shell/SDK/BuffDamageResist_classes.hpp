#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x74 - 0x68)
// BlueprintGeneratedClass BuffDamageResist.BuffDamageResist_C
class UBuffDamageResist_C : public UBuffObjectTimeBased_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        DamageResistAmount;                                // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBuffDamageResist_C* GetDefaultObj();

	void OnBuffStart();
	void OnBuffEnd(bool bInterrupted);
	void ExecuteUbergraph_BuffDamageResist(int32 EntryPoint, class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, bool K2Node_Event_bInterrupted, float CallFunc_Add_FloatFloat_ReturnValue, class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC_1, float CallFunc_Subtract_FloatFloat_ReturnValue);
};

}


