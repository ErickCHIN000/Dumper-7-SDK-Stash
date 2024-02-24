#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x448 - 0x448)
// BlueprintGeneratedClass HumanMeat.HumanMeat_C
class AHumanMeat_C : public AGenericFood_C
{
public:

	static class UClass* StaticClass();
	static class AHumanMeat_C* GetDefaultObj();

	void GetHealthDamage(class ASHPlayerCharacter* PlayerCharacter, float* Damage, float CallFunc_GetHealthDamage_Damage, bool CallFunc_IsKannibale_ReturnValue);
};

}


