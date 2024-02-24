#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_Survival.BPFL_Survival_C
class UBPFL_Survival_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_Survival_C* GetDefaultObj();

	void Get_Tired_Threshold_Percentage(class UObject* __WorldContext, double* TiredThreshold);
	void Get_Starving_Threshold_Percentage(class UObject* __WorldContext, double* StarvingThreshold);
};

}


