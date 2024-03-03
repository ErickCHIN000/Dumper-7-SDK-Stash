#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass I_MontageManagerComponent.I_MontageManagerComponent_C
class II_MontageManagerComponent_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class II_MontageManagerComponent_C* GetDefaultObj();

	void GetMontages(enum class E_MontageAction Action, class UDataTable** Montages);
};

}


