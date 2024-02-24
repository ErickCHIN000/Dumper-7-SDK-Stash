#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x438 - 0x430)
// BlueprintGeneratedClass HerbalTea.HerbalTea_C
class AHerbalTea_C : public AGenericWater_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AHerbalTea_C* GetDefaultObj();

	void OnUse(class ASHPlayerCharacter* Character);
	void ExecuteUbergraph_HerbalTea(int32 EntryPoint, class ASHPlayerCharacter* K2Node_Event_Character, float CallFunc_GetValue_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
};

}


