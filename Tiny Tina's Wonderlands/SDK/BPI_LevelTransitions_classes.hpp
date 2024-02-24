#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_LevelTransitions.BPI_LevelTransitions_C
class IBPI_LevelTransitions_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_LevelTransitions_C* GetDefaultObj();

	void LevelTransition_OnPrisonBreak();
	void LevelTransition_OnPrisonStart();
	void LevelTransition_OnDungeonStop();
	void LevelTransition_OnDungeonStart();
};

}


