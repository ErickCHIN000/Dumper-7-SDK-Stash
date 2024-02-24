#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2A8 - 0x2A0)
// BlueprintGeneratedClass ArsenalPaintComponent.ArsenalPaintComponent_C
class UArsenalPaintComponent_C : public UTTLArsenalPaintComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UArsenalPaintComponent_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_ArsenalPaintComponent(int32 EntryPoint);
};

}


