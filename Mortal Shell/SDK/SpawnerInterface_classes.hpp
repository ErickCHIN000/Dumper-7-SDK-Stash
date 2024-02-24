#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass SpawnerInterface.SpawnerInterface_C
class ISpawnerInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ISpawnerInterface_C* GetDefaultObj();

	void Spawner_DeAggroEnemy();
	void Spawner_ReEnableEnemy();
	void SetEnabled(bool Enable_);
};

}


