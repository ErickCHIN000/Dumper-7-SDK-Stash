#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x16 (0x460 - 0x44A)
// BlueprintGeneratedClass GenericAlcohol.GenericAlcohol_C
class AGenericAlcohol_C : public AGenericMedicine_C
{
public:
	uint8                                        Pad_1733[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x450(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        ThirstyRegen;                                      // 0x458(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TemperatureAddValue;                               // 0x45C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGenericAlcohol_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void OnUse(class ASHPlayerCharacter* Character);
	void ExecuteUbergraph_GenericAlcohol(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class ASHPlayerCharacter* K2Node_Event_Character, float CallFunc_GetMaxValue_ReturnValue, float CallFunc_GetValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
};

}


