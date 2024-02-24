#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x108 (0x130 - 0x28)
// Class SignificanceManager.SignificanceManager
class USignificanceManager : public UObject
{
public:
	uint8                                        Pad_214[0xF0];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftClassPath                        SignificanceManagerClassName;                      // 0x118(0x18)(Edit, Config, GlobalConfig, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USignificanceManager* GetDefaultObj();

	void UnregisterForTickOptim(class AActor* TickOptimActor);
	void OnTickActorEndPlay(class AActor* TickOptimActor, enum class EEndPlayReason EndPlayReason);
};

}


