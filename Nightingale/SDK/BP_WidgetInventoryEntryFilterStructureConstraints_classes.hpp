#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x38 - 0x38)
// BlueprintGeneratedClass BP_WidgetInventoryEntryFilterStructureConstraints.BP_WidgetInventoryEntryFilterStructureConstraints_C
class UBP_WidgetInventoryEntryFilterStructureConstraints_C : public UWidgetInventoryEntryFilterStructureConstraints
{
public:

	static class UClass* StaticClass();
	static class UBP_WidgetInventoryEntryFilterStructureConstraints_C* GetDefaultObj();

	class AActor* GetInteractionActor(class ANWXPlayerController* PlayerController, TScriptInterface<class IControllerInteractionInterface> CallFunc_GetLastInteractedActor_self_CastInput, class AActor* CallFunc_GetLastInteractedActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue);
};

}


