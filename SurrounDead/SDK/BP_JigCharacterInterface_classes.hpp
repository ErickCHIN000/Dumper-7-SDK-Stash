#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_JigCharacterInterface.BP_JigCharacterInterface_C
class IBP_JigCharacterInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBP_JigCharacterInterface_C* GetDefaultObj();

	void OnClientDataRequested(TArray<int32>& ActionbarUIDs, bool* Result);
	void OnSpecialContainerattachmentUpdated(class UJSI_Slot_C* ItemRef, bool* Result);
	void OnLoadSavedDataRequested(bool* Result);
	void OnInteractActorOverDistance(class AActor* ActorRef, bool* Result);
	void JigCheckWeaponAmmoCount(bool* Result);
	void GetAnimationInfo(enum class EPlayerSlots* ActiveSlot, double* Leaning, bool* ADS, bool* Crouched, bool* IsFirstPerson_, class FName* WeaponID);
	void OnPickupInteractExecuted(class AActor* PickupRef, bool* Result);
	void RequestServerData(class UBP_JigMultiplayer_C* TargetComp, bool* Result);
	void AddJigWidgetToContent(class UUserWidget* WidgetRef, class FText ContentName, bool* Result);
};

}


