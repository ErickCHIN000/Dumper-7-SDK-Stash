#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CreatureAbility_GiantTreeClubInteraction.GA_CreatureAbility_GiantTreeClubInteraction_C
// (None)

class UClass* UGA_CreatureAbility_GiantTreeClubInteraction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CreatureAbility_GiantTreeClubInteraction_C");

	return Clss;
}


// GA_CreatureAbility_GiantTreeClubInteraction_C GA_CreatureAbility_GiantTreeClubInteraction.Default__GA_CreatureAbility_GiantTreeClubInteraction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CreatureAbility_GiantTreeClubInteraction_C* UGA_CreatureAbility_GiantTreeClubInteraction_C::GetDefaultObj()
{
	static class UGA_CreatureAbility_GiantTreeClubInteraction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CreatureAbility_GiantTreeClubInteraction_C*>(UGA_CreatureAbility_GiantTreeClubInteraction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_CreatureAbility_GiantTreeClubInteraction.GA_CreatureAbility_GiantTreeClubInteraction_C.HandleEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventTags                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CreateAndEquipItemFromItemID_Success                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_GiantTreeClubInteraction_C::HandleEvent(const struct FGameplayTag& EventTags, const struct FGameplayEventData& EventData, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, bool CallFunc_CreateAndEquipItemFromItemID_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_GiantTreeClubInteraction_C", "HandleEvent");

	Params::UGA_CreatureAbility_GiantTreeClubInteraction_C_HandleEvent_Params Parms{};

	Parms.EventTags = EventTags;
	Parms.EventData = EventData;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.CallFunc_CreateAndEquipItemFromItemID_Success = CallFunc_CreateAndEquipItemFromItemID_Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_CreatureAbility_GiantTreeClubInteraction.GA_CreatureAbility_GiantTreeClubInteraction_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_CreatureAbility_GiantTreeClubInteraction_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_GiantTreeClubInteraction_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_CreatureAbility_GiantTreeClubInteraction.GA_CreatureAbility_GiantTreeClubInteraction_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_GiantTreeClubInteraction_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_GiantTreeClubInteraction_C", "K2_OnEndAbility");

	Params::UGA_CreatureAbility_GiantTreeClubInteraction_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_CreatureAbility_GiantTreeClubInteraction.GA_CreatureAbility_GiantTreeClubInteraction_C.ExecuteUbergraph_GA_CreatureAbility_GiantTreeClubInteraction
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_GiantTreeClubInteraction_C::ExecuteUbergraph_GA_CreatureAbility_GiantTreeClubInteraction(int32 EntryPoint, bool K2Node_Event_bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_GiantTreeClubInteraction_C", "ExecuteUbergraph_GA_CreatureAbility_GiantTreeClubInteraction");

	Params::UGA_CreatureAbility_GiantTreeClubInteraction_C_ExecuteUbergraph_GA_CreatureAbility_GiantTreeClubInteraction_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}

}


