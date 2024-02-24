#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_AnimationStates.BPI_AnimationStates_C
class IBPI_AnimationStates_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_AnimationStates_C* GetDefaultObj();

	void GetAlertnessLevel(enum class EAlertnessLevelType* AlertnessLevel);
	void SetAlertnessLevel(enum class EAlertnessLevelType AlertnessLevel, bool* Success);
};

}


