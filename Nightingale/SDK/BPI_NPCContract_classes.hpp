#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_NPCContract.BPI_NPCContract_C
class IBPI_NPCContract_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_NPCContract_C* GetDefaultObj();

	void GetHiringStatus(enum class Enum_HiringStatus* ReturnedStatus);
	void GetContractCost(const class FString& PlayerId, int32* ContractCost);
	void GetCurrentActionStationType(enum class Enum_ActionStationType* ActionStationType);
	void ClearOrderTarget(bool* Success);
	void SetOrderTarget(class AActor* OrderTarget, enum class E_PingVerbs Verb, bool* Success);
	void GetEmployerPawn(class APawn** EmployerPawn);
	void StopContract(bool* bSuccess);
	void StartContract(class APawn* EmployerPawn, double Duration, bool* bSuccess);
};

}


