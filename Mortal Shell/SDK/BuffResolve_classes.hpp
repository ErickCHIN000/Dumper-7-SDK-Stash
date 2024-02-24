#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x74 - 0x68)
// BlueprintGeneratedClass BuffResolve.BuffResolve_C
class UBuffResolve_C : public UBuffObjectTimeBased_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        ResolveBonus;                                      // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBuffResolve_C* GetDefaultObj();

	void OnBuffStart();
	void OnBuffEnd(bool bInterrupted);
	void ExecuteUbergraph_BuffResolve(int32 EntryPoint, bool K2Node_Event_bInterrupted, class AZero_Base_C* CallFunc_GetActorToBuffAs0Base_As0_Base, class AZero_Base_C* CallFunc_GetActorToBuffAs0Base_As0_Base_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
};

}


