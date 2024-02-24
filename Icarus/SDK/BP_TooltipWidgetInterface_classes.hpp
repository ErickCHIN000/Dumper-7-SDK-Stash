#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_TooltipWidgetInterface.BP_TooltipWidgetInterface_C
class IBP_TooltipWidgetInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBP_TooltipWidgetInterface_C* GetDefaultObj();

	void GetTooltipClassOverride(TSoftClassPtr<class UHuntingWidget>* ClassOverride);
	void GetTooltipRenderLocation(const struct FHitResult& InteractableHit, struct FVector* WorldLocation);
};

}


