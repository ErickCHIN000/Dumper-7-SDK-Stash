#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_Threat.BPI_Threat_C
class IBPI_Threat_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_Threat_C* GetDefaultObj();

	void GetThreat(class AActor* ThreateningActor, double* Threat);
	void ModifyThreat(class AActor* ThreateningActor, double Threat, bool* Success);
};

}


