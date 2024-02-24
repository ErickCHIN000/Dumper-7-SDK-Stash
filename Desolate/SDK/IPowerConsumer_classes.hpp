#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass IPowerConsumer.IPowerConsumer_C
class IIPowerConsumer_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IIPowerConsumer_C* GetDefaultObj();

	void AddChangeStateListeners(class AActor* Listener);
	void Power(bool On);
	void GetLoadValue(float* Load);
};

}


