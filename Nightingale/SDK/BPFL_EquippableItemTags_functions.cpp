#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_EquippableItemTags.BPFL_EquippableItemTags_C
// (None)

class UClass* UBPFL_EquippableItemTags_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_EquippableItemTags_C");

	return Clss;
}


// BPFL_EquippableItemTags_C BPFL_EquippableItemTags.Default__BPFL_EquippableItemTags_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_EquippableItemTags_C* UBPFL_EquippableItemTags_C::GetDefaultObj()
{
	static class UBPFL_EquippableItemTags_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_EquippableItemTags_C*>(UBPFL_EquippableItemTags_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_EquippableItemTags.BPFL_EquippableItemTags_C.MainHandTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                SledgehammerTag                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_EquippableItemTags_C::MainHandTag(class UObject* __WorldContext, struct FGameplayTag* SledgehammerTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_EquippableItemTags_C", "MainHandTag");

	Params::UBPFL_EquippableItemTags_C_MainHandTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (SledgehammerTag != nullptr)
		*SledgehammerTag = std::move(Parms.SledgehammerTag);

}


// Function BPFL_EquippableItemTags.BPFL_EquippableItemTags_C.GearAndClothingSlotTags
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       Tags                                                             (Parm, OutParm)

void UBPFL_EquippableItemTags_C::GearAndClothingSlotTags(class UObject* __WorldContext, struct FGameplayTagContainer* Tags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_EquippableItemTags_C", "GearAndClothingSlotTags");

	Params::UBPFL_EquippableItemTags_C_GearAndClothingSlotTags_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Tags != nullptr)
		*Tags = std::move(Parms.Tags);

}


// Function BPFL_EquippableItemTags.BPFL_EquippableItemTags_C.AxepickTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                AxepickTag                                                       (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_EquippableItemTags_C::AxepickTag(class UObject* __WorldContext, struct FGameplayTag* AxepickTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_EquippableItemTags_C", "AxepickTag");

	Params::UBPFL_EquippableItemTags_C_AxepickTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (AxepickTag != nullptr)
		*AxepickTag = std::move(Parms.AxepickTag);

}


// Function BPFL_EquippableItemTags.BPFL_EquippableItemTags_C.HuntingKnifeTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                HuntingKnifeTag                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_EquippableItemTags_C::HuntingKnifeTag(class UObject* __WorldContext, struct FGameplayTag* HuntingKnifeTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_EquippableItemTags_C", "HuntingKnifeTag");

	Params::UBPFL_EquippableItemTags_C_HuntingKnifeTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (HuntingKnifeTag != nullptr)
		*HuntingKnifeTag = std::move(Parms.HuntingKnifeTag);

}


// Function BPFL_EquippableItemTags.BPFL_EquippableItemTags_C.SledgehammerTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                SledgehammerTag                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_EquippableItemTags_C::SledgehammerTag(class UObject* __WorldContext, struct FGameplayTag* SledgehammerTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_EquippableItemTags_C", "SledgehammerTag");

	Params::UBPFL_EquippableItemTags_C_SledgehammerTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (SledgehammerTag != nullptr)
		*SledgehammerTag = std::move(Parms.SledgehammerTag);

}

}


