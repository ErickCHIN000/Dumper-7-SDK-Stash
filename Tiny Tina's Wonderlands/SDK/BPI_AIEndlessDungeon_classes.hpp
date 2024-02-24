#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_AIEndlessDungeon.BPI_AIEndlessDungeon_C
class IBPI_AIEndlessDungeon_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_AIEndlessDungeon_C* GetDefaultObj();

	void AIEndlessDungeon_Get(bool* IsEndlessDungeon);
	void AIEndlessDungeon_Set();
};

}


