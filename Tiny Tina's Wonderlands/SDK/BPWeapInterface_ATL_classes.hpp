#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPWeapInterface_ATL.BPWeapInterface_ATL_C
class IBPWeapInterface_ATL_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPWeapInterface_ATL_C* GetDefaultObj();

	void SetEmissiveData(const struct FLinearColor& BaseColor, const struct FLinearColor& HighlightColor, const struct FLinearColor& MarkerBaseColor, const struct FLinearColor& MarkerHighlightColor, const struct FLinearColor& HomingOverrideBase, const struct FLinearColor& NewParamHomingOverrideHighlight);
};

}


