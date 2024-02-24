#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class SMExtendedRuntime.SMExtendedGraphPropertyHelpers
class USMExtendedGraphPropertyHelpers : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USMExtendedGraphPropertyHelpers* GetDefaultObj();

	class FText ObjectToText(class UObject* InObject, class FName InFunctionName);
	void BreakTextGraphProperty(struct FSMTextGraphProperty& GraphProperty, class FText* Result);
};

}


