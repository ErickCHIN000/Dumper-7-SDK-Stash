#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C
class IBPI_IO_ExplodingPipe_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_IO_ExplodingPipe_C* GetDefaultObj();

	void GetPipeFlowState(bool* HasFlow);
	void GetPipeDestroyedState(bool* Destroyed);
	void SetPipeState(enum class Enum_IO_ExplodingPipe_DestroyedState PipeState);
	void SetPipeFlowState(bool HasFlow);
	void DestroyPipe();
};

}


