#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass WidgetSelector.WidgetSelector_C
class IWidgetSelector_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IWidgetSelector_C* GetDefaultObj();

	void GetSelectedWidget(class UWidget** Widget);
};

}


