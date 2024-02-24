#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass UsableActorInterface.UsableActorInterface_C
class IUsableActorInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IUsableActorInterface_C* GetDefaultObj();

	void GetInteractionWidgetLocation(struct FVector* WidgetLocation);
	void GetUnidentifiedText(class FText* UnidentifiedText);
	void GetID(class FName* ID);
	void GetUseActionText(class FText* ActionText);
	void GetIsActorUsable(bool* IsUsable);
	void EndOutlineFocus(bool* Success);
	void BeginOutlineFocus(bool* Success);
	void OnActorUsed(class APlayerController* Controller, bool* Success);
};

}


