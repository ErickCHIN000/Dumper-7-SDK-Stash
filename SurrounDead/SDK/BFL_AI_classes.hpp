#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BFL_AI.BFL_AI_C
class UBFL_AI_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBFL_AI_C* GetDefaultObj();

	void SpawnFloatingDamageText(double Damage, const struct FLinearColor& Colour, class UObject* __WorldContext, bool CallFunc_GetBoolCVar_ReturnValue, class UCombatText_C* CallFunc_Create_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue);
};

}


