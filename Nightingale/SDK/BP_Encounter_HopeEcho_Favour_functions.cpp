#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Encounter_HopeEcho_Favour.BP_Encounter_HopeEcho_Favour_C
// (Actor)

class UClass* ABP_Encounter_HopeEcho_Favour_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Encounter_HopeEcho_Favour_C");

	return Clss;
}


// BP_Encounter_HopeEcho_Favour_C BP_Encounter_HopeEcho_Favour.Default__BP_Encounter_HopeEcho_Favour_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Encounter_HopeEcho_Favour_C* ABP_Encounter_HopeEcho_Favour_C::GetDefaultObj()
{
	static class ABP_Encounter_HopeEcho_Favour_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Encounter_HopeEcho_Favour_C*>(ABP_Encounter_HopeEcho_Favour_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Encounter_HopeEcho_Favour.BP_Encounter_HopeEcho_Favour_C.Spawn Hope Echo Escape AVFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Encounter_HopeEcho_Favour_C::Spawn_Hope_Echo_Escape_AVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_HopeEcho_Favour_C", "Spawn Hope Echo Escape AVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Encounter_HopeEcho_Favour.BP_Encounter_HopeEcho_Favour_C.Restore Rewards On Persistence
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FEncounterFavourData>CallFunc_GenerateFavourRewards_ReturnValue                       (ReferenceParm)

void ABP_Encounter_HopeEcho_Favour_C::Restore_Rewards_On_Persistence(TArray<struct FEncounterFavourData>& CallFunc_GenerateFavourRewards_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_HopeEcho_Favour_C", "Restore Rewards On Persistence");

	Params::ABP_Encounter_HopeEcho_Favour_C_Restore_Rewards_On_Persistence_Params Parms{};

	Parms.CallFunc_GenerateFavourRewards_ReturnValue = CallFunc_GenerateFavourRewards_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_HopeEcho_Favour.BP_Encounter_HopeEcho_Favour_C.Cycle Through Glyphs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_HopeEcho_Favour_C::Cycle_Through_Glyphs(int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_HopeEcho_Favour_C", "Cycle Through Glyphs");

	Params::ABP_Encounter_HopeEcho_Favour_C_Cycle_Through_Glyphs_Params Parms{};

	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_HopeEcho_Favour.BP_Encounter_HopeEcho_Favour_C.GetInteractText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// class FString                      InteractText                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void ABP_Encounter_HopeEcho_Favour_C::GetInteractText(const struct FInteractionData& InteractionData, class FString* InteractText, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_HopeEcho_Favour_C", "GetInteractText");

	Params::ABP_Encounter_HopeEcho_Favour_C_GetInteractText_Params Parms{};

	Parms.InteractionData = InteractionData;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractText != nullptr)
		*InteractText = std::move(Parms.InteractText);

}


// Function BP_Encounter_HopeEcho_Favour.BP_Encounter_HopeEcho_Favour_C.GetInteractionTag
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                InteractionTag                                                   (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_Encounter_HopeEcho_Favour_C::GetInteractionTag(struct FGameplayTag* InteractionTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_HopeEcho_Favour_C", "GetInteractionTag");

	Params::ABP_Encounter_HopeEcho_Favour_C_GetInteractionTag_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InteractionTag != nullptr)
		*InteractionTag = std::move(Parms.InteractionTag);

	return Parms.ReturnValue;

}


// Function BP_Encounter_HopeEcho_Favour.BP_Encounter_HopeEcho_Favour_C.Initialize
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEncounterBase*              SpawningEncounter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EEncounterRewardType    EncounterRewardType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_HopeEcho_Favour_C::Initialize(class AEncounterBase* SpawningEncounter, enum class EEncounterRewardType EncounterRewardType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_HopeEcho_Favour_C", "Initialize");

	Params::ABP_Encounter_HopeEcho_Favour_C_Initialize_Params Parms{};

	Parms.SpawningEncounter = SpawningEncounter;
	Parms.EncounterRewardType = EncounterRewardType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_HopeEcho_Favour.BP_Encounter_HopeEcho_Favour_C.ExecuteUbergraph_BP_Encounter_HopeEcho_Favour
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FEncounterFavourData>CallFunc_GenerateFavourRewards_ReturnValue                       (ReferenceParm)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEncounterBase*              K2Node_Event_SpawningEncounter                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EEncounterRewardType    K2Node_Event_EncounterRewardType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_HopeEcho_Favour_C::ExecuteUbergraph_BP_Encounter_HopeEcho_Favour(int32 EntryPoint, TArray<struct FEncounterFavourData>& CallFunc_GenerateFavourRewards_ReturnValue, int32 Temp_int_Variable, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AEncounterBase* K2Node_Event_SpawningEncounter, enum class EEncounterRewardType K2Node_Event_EncounterRewardType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_HopeEcho_Favour_C", "ExecuteUbergraph_BP_Encounter_HopeEcho_Favour");

	Params::ABP_Encounter_HopeEcho_Favour_C_ExecuteUbergraph_BP_Encounter_HopeEcho_Favour_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GenerateFavourRewards_ReturnValue = CallFunc_GenerateFavourRewards_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_SpawningEncounter = K2Node_Event_SpawningEncounter;
	Parms.K2Node_Event_EncounterRewardType = K2Node_Event_EncounterRewardType;

	UObject::ProcessEvent(Func, &Parms);

}

}


