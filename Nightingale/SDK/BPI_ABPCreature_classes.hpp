#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_ABPCreature.BPI_ABPCreature_C
class IBPI_ABPCreature_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_ABPCreature_C* GetDefaultObj();

	void SetAITarget(class AActor* AITarget, bool* Success);
	void SetIsInHitResponse(bool IsInHitResponse);
};

}


