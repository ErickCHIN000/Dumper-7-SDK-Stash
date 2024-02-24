#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_FluxExportData.BPI_FluxExportData_C
class IBPI_FluxExportData_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_FluxExportData_C* GetDefaultObj();

	void CopyPropertiesToObject(class UObject* Destination, bool* Done);
	void ClearExternalReferences();
	void GetExternalReferences(TArray<class UTexture*>* Objects);
};

}


