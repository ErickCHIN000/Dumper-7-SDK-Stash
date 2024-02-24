#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_AI_Bamf.BPI_AI_Bamf_C
class IBPI_AI_Bamf_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_AI_Bamf_C* GetDefaultObj();

	void AI_Teleport_Out();
	void AI_Bamf_Out();
	void AI_Bamf_In();
};

}


