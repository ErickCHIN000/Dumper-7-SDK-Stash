#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EncounterEventsObject.BP_EncounterEventsObject_C
// (None)

class UClass* UBP_EncounterEventsObject_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EncounterEventsObject_C");

	return Clss;
}


// BP_EncounterEventsObject_C BP_EncounterEventsObject.Default__BP_EncounterEventsObject_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_EncounterEventsObject_C* UBP_EncounterEventsObject_C::GetDefaultObj()
{
	static class UBP_EncounterEventsObject_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_EncounterEventsObject_C*>(UBP_EncounterEventsObject_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_EncounterEventsObject.BP_EncounterEventsObject_C.OnOfferingTaken__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Offering_Structure                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Offering_Taker                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Offering_Score                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterEventsObject_C::OnOfferingTaken__DelegateSignature(class AActor* Offering_Structure, class AActor* Offering_Taker, double Offering_Score)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterEventsObject_C", "OnOfferingTaken__DelegateSignature");

	Params::UBP_EncounterEventsObject_C_OnOfferingTaken__DelegateSignature_Params Parms{};

	Parms.Offering_Structure = Offering_Structure;
	Parms.Offering_Taker = Offering_Taker;
	Parms.Offering_Score = Offering_Score;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EncounterEventsObject.BP_EncounterEventsObject_C.OnOfferingMade__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Offering_Structure                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Offering_Instigator                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Offered_Item                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_EncounterEventsObject_C::OnOfferingMade__DelegateSignature(class AActor* Offering_Structure, class AActor* Offering_Instigator, class FText Offered_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterEventsObject_C", "OnOfferingMade__DelegateSignature");

	Params::UBP_EncounterEventsObject_C_OnOfferingMade__DelegateSignature_Params Parms{};

	Parms.Offering_Structure = Offering_Structure;
	Parms.Offering_Instigator = Offering_Instigator;
	Parms.Offered_Item = Offered_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EncounterEventsObject.BP_EncounterEventsObject_C.OnEncounterInteraction__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterEventsObject_C::OnEncounterInteraction__DelegateSignature(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EncounterEventsObject_C", "OnEncounterInteraction__DelegateSignature");

	Params::UBP_EncounterEventsObject_C_OnEncounterInteraction__DelegateSignature_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}

}


