#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x110 - 0x108)
// BlueprintGeneratedClass ArsenalInstrumentHUDComponent.ArsenalInstrumentHUDComponent_C
class UArsenalInstrumentHUDComponent_C : public UTTLArsenalInstrumentHUDComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x108(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UArsenalInstrumentHUDComponent_C* GetDefaultObj();

	void TTLCanBeginPlay(bool* CanBegin);
	void UpdateHUD();
	void TTLBeginPlay();
	void ExecuteUbergraph_ArsenalInstrumentHUDComponent(int32 EntryPoint);
};

}


