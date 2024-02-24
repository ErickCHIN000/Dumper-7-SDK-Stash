#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x3CC - 0x3C0)
// BlueprintGeneratedClass WraithSpawner_Cathedral_ButtonTrap.WraithSpawner_Cathedral_ButtonTrap_C
class AWraithSpawner_Cathedral_ButtonTrap_C : public AWraithSpawner_Cathedral_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Spawn_Delay;                                       // 0x3C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AWraithSpawner_Cathedral_ButtonTrap_C* GetDefaultObj();

	void TrySpawnEnemy();
	void ExecuteUbergraph_WraithSpawner_Cathedral_ButtonTrap(int32 EntryPoint);
};

}


