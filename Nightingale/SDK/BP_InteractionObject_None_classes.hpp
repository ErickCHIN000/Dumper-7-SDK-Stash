#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x50 - 0x50)
// BlueprintGeneratedClass BP_InteractionObject_None.BP_InteractionObject_None_C
class UBP_InteractionObject_None_C : public UBP_StructureInteractionObject_C
{
public:

	static class UClass* StaticClass();
	static class UBP_InteractionObject_None_C* GetDefaultObj();

	void IsInteractionAvailable(class UObject* Structure, class APawn* Pawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, bool* CanInteract);
};

}


