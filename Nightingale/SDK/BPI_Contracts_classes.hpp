#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_Contracts.BPI_Contracts_C
class IBPI_Contracts_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_Contracts_C* GetDefaultObj();

	void IssueOrder(enum class E_PingVerbs Verb, class AActor* OrderTarget, bool* Success);
	void RemoveContractor(class AActor* NpcActor, bool* Success);
	void AddContractor(class AActor* NpcActor, bool* Success);
};

}


