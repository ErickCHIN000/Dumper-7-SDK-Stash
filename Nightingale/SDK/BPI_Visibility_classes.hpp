#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_Visibility.BPI_Visibility_C
class IBPI_Visibility_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_Visibility_C* GetDefaultObj();

	void ShowSupportMeshes();
	void HideSupportMeshes(double Duration);
};

}


