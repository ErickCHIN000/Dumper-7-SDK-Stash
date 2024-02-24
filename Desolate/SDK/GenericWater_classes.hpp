#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x430 - 0x420)
// BlueprintGeneratedClass GenericWater.GenericWater_C
class AGenericWater_C : public AGenericLootItem_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        BaseThirstyRegen;                                  // 0x428(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Damage;                                            // 0x42C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGenericWater_C* GetDefaultObj();

	void OnUse(class ASHPlayerCharacter* Character);
	void ExecuteUbergraph_GenericWater(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class ASHPlayerCharacter* K2Node_Event_Character, float CallFunc_GetMaxValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}


