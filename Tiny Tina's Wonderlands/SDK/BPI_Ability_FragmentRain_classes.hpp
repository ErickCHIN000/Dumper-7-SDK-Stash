#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_Ability_FragmentRain.BPI_Ability_FragmentRain_C
class IBPI_Ability_FragmentRain_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_Ability_FragmentRain_C* GetDefaultObj();

	void FragmentRain_GetTargetExternal(class AActor** FragmentRainTarget, bool* Res);
};

}


