#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_LoadingState.BPI_LoadingState_C
class IBPI_LoadingState_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_LoadingState_C* GetDefaultObj();

	void UpdateLoadingState(enum class E_LoadingState LoadingState);
};

}


