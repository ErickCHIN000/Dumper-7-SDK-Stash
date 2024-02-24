#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x58 - 0x28)
// BlueprintGeneratedClass BP_EncounterEventsObject.BP_EncounterEventsObject_C
class UBP_EncounterEventsObject_C : public UNWXObjectComponent
{
public:
	FMulticastInlineDelegateProperty_            OnEncounterInteraction;                            // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnOfferingMade;                                    // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnOfferingTaken;                                   // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UBP_EncounterEventsObject_C* GetDefaultObj();

	void OnOfferingTaken__DelegateSignature(class AActor* Offering_Structure, class AActor* Offering_Taker, double Offering_Score);
	void OnOfferingMade__DelegateSignature(class AActor* Offering_Structure, class AActor* Offering_Instigator, class FText Offered_Item);
	void OnEncounterInteraction__DelegateSignature(class AActor* Actor);
};

}


