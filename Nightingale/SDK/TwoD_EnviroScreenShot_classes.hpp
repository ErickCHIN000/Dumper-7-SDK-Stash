#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2C0 - 0x2B8)
// BlueprintGeneratedClass TwoD_EnviroScreenShot.TwoD_EnviroScreenShot_C
class ATwoD_EnviroScreenShot_C : public ASceneCapture2D
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ATwoD_EnviroScreenShot_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_TwoD_EnviroScreenShot(int32 EntryPoint);
};

}


