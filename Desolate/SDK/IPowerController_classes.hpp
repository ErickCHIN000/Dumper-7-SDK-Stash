#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass IPowerController.IPowerController_C
class IIPowerController_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IIPowerController_C* GetDefaultObj();

	void OnConsumerStateChanged(TScriptInterface<class IIPowerConsumer_C> Consumer);
};

}


