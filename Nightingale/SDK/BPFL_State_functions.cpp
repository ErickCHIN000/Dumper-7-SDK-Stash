#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_State.BPFL_State_C
// (None)

class UClass* UBPFL_State_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_State_C");

	return Clss;
}


// BPFL_State_C BPFL_State.Default__BPFL_State_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_State_C* UBPFL_State_C::GetDefaultObj()
{
	static class UBPFL_State_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_State_C*>(UBPFL_State_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_State.BPFL_State_C.HailDamageTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                HailDamageTag                                                    (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::HailDamageTag(class UObject* __WorldContext, struct FGameplayTag* HailDamageTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "HailDamageTag");

	Params::UBPFL_State_C_HailDamageTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (HailDamageTag != nullptr)
		*HailDamageTag = std::move(Parms.HailDamageTag);

}


// Function BPFL_State.BPFL_State_C.GetHopeRegenTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Tag                                                              (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::GetHopeRegenTag(class UObject* __WorldContext, struct FGameplayTag* Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "GetHopeRegenTag");

	Params::UBPFL_State_C_GetHopeRegenTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Tag != nullptr)
		*Tag = std::move(Parms.Tag);

}


// Function BPFL_State.BPFL_State_C.GetHopeDrainTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Tag                                                              (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::GetHopeDrainTag(class UObject* __WorldContext, struct FGameplayTag* Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "GetHopeDrainTag");

	Params::UBPFL_State_C_GetHopeDrainTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Tag != nullptr)
		*Tag = std::move(Parms.Tag);

}


// Function BPFL_State.BPFL_State_C.AmmoDamageTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                AmmoDamageTag                                                    (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::AmmoDamageTag(class UObject* __WorldContext, struct FGameplayTag* AmmoDamageTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "AmmoDamageTag");

	Params::UBPFL_State_C_AmmoDamageTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (AmmoDamageTag != nullptr)
		*AmmoDamageTag = std::move(Parms.AmmoDamageTag);

}


// Function BPFL_State.BPFL_State_C.MiasmaDamageTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                MiasmaTag                                                        (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::MiasmaDamageTag(class UObject* __WorldContext, struct FGameplayTag* MiasmaTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "MiasmaDamageTag");

	Params::UBPFL_State_C_MiasmaDamageTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (MiasmaTag != nullptr)
		*MiasmaTag = std::move(Parms.MiasmaTag);

}


// Function BPFL_State.BPFL_State_C.PoisonDamageTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                PoisonTag                                                        (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::PoisonDamageTag(class UObject* __WorldContext, struct FGameplayTag* PoisonTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "PoisonDamageTag");

	Params::UBPFL_State_C_PoisonDamageTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (PoisonTag != nullptr)
		*PoisonTag = std::move(Parms.PoisonTag);

}


// Function BPFL_State.BPFL_State_C.FireDamageTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                FireTag                                                          (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::FireDamageTag(class UObject* __WorldContext, struct FGameplayTag* FireTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "FireDamageTag");

	Params::UBPFL_State_C_FireDamageTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (FireTag != nullptr)
		*FireTag = std::move(Parms.FireTag);

}


// Function BPFL_State.BPFL_State_C.GetHailTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                HailGameplayTag                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::GetHailTag(class UObject* __WorldContext, struct FGameplayTag* HailGameplayTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "GetHailTag");

	Params::UBPFL_State_C_GetHailTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (HailGameplayTag != nullptr)
		*HailGameplayTag = std::move(Parms.HailGameplayTag);

}


// Function BPFL_State.BPFL_State_C.MeleeDamageTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                MeleeTag                                                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::MeleeDamageTag(class UObject* __WorldContext, struct FGameplayTag* MeleeTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "MeleeDamageTag");

	Params::UBPFL_State_C_MeleeDamageTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (MeleeTag != nullptr)
		*MeleeTag = std::move(Parms.MeleeTag);

}


// Function BPFL_State.BPFL_State_C.GetBurningTag
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                BurningGameplayTag                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                BurningTag                                                       (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::GetBurningTag(class UObject* __WorldContext, struct FGameplayTag* BurningGameplayTag, const struct FGameplayTag& BurningTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "GetBurningTag");

	Params::UBPFL_State_C_GetBurningTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.BurningTag = BurningTag;

	UObject::ProcessEvent(Func, &Parms);

	if (BurningGameplayTag != nullptr)
		*BurningGameplayTag = std::move(Parms.BurningGameplayTag);

}


// Function BPFL_State.BPFL_State_C.MovingTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                MovingTag                                                        (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::MovingTag(class UObject* __WorldContext, struct FGameplayTag* MovingTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "MovingTag");

	Params::UBPFL_State_C_MovingTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (MovingTag != nullptr)
		*MovingTag = std::move(Parms.MovingTag);

}


// Function BPFL_State.BPFL_State_C.TargetIsSourceTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                InsideKillVolumeTag                                              (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::TargetIsSourceTag(class UObject* __WorldContext, struct FGameplayTag* InsideKillVolumeTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "TargetIsSourceTag");

	Params::UBPFL_State_C_TargetIsSourceTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (InsideKillVolumeTag != nullptr)
		*InsideKillVolumeTag = std::move(Parms.InsideKillVolumeTag);

}


// Function BPFL_State.BPFL_State_C.ComboCountTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                ComboCountTag                                                    (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::ComboCountTag(class UObject* __WorldContext, struct FGameplayTag* ComboCountTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "ComboCountTag");

	Params::UBPFL_State_C_ComboCountTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (ComboCountTag != nullptr)
		*ComboCountTag = std::move(Parms.ComboCountTag);

}


// Function BPFL_State.BPFL_State_C.PelletsTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                PelletsTag                                                       (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::PelletsTag(class UObject* __WorldContext, struct FGameplayTag* PelletsTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "PelletsTag");

	Params::UBPFL_State_C_PelletsTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (PelletsTag != nullptr)
		*PelletsTag = std::move(Parms.PelletsTag);

}


// Function BPFL_State.BPFL_State_C.DeconstructTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                DeconstructTag                                                   (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::DeconstructTag(class UObject* __WorldContext, struct FGameplayTag* DeconstructTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "DeconstructTag");

	Params::UBPFL_State_C_DeconstructTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (DeconstructTag != nullptr)
		*DeconstructTag = std::move(Parms.DeconstructTag);

}


// Function BPFL_State.BPFL_State_C.Item Effectiveness Tag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                NewParam                                                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::Item_Effectiveness_Tag(class UObject* __WorldContext, struct FGameplayTag* NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "Item Effectiveness Tag");

	Params::UBPFL_State_C_Item_Effectiveness_Tag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);

}


// Function BPFL_State.BPFL_State_C.PieceHealthTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                PieceHealthTag                                                   (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::PieceHealthTag(class UObject* __WorldContext, struct FGameplayTag* PieceHealthTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "PieceHealthTag");

	Params::UBPFL_State_C_PieceHealthTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (PieceHealthTag != nullptr)
		*PieceHealthTag = std::move(Parms.PieceHealthTag);

}


// Function BPFL_State.BPFL_State_C.DropNoneResourcesTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                DropNoneTag                                                      (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::DropNoneResourcesTag(class UObject* __WorldContext, struct FGameplayTag* DropNoneTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "DropNoneResourcesTag");

	Params::UBPFL_State_C_DropNoneResourcesTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (DropNoneTag != nullptr)
		*DropNoneTag = std::move(Parms.DropNoneTag);

}


// Function BPFL_State.BPFL_State_C.DropPartialResourcesTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                DropPartialTag                                                   (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::DropPartialResourcesTag(class UObject* __WorldContext, struct FGameplayTag* DropPartialTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "DropPartialResourcesTag");

	Params::UBPFL_State_C_DropPartialResourcesTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (DropPartialTag != nullptr)
		*DropPartialTag = std::move(Parms.DropPartialTag);

}


// Function BPFL_State.BPFL_State_C.RearHemisphereTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                RearHemisphereTag                                                (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::RearHemisphereTag(class UObject* __WorldContext, struct FGameplayTag* RearHemisphereTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "RearHemisphereTag");

	Params::UBPFL_State_C_RearHemisphereTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (RearHemisphereTag != nullptr)
		*RearHemisphereTag = std::move(Parms.RearHemisphereTag);

}


// Function BPFL_State.BPFL_State_C.ForwardHemisphereTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                ForwardHemisphereTag                                             (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::ForwardHemisphereTag(class UObject* __WorldContext, struct FGameplayTag* ForwardHemisphereTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "ForwardHemisphereTag");

	Params::UBPFL_State_C_ForwardHemisphereTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (ForwardHemisphereTag != nullptr)
		*ForwardHemisphereTag = std::move(Parms.ForwardHemisphereTag);

}


// Function BPFL_State.BPFL_State_C.Power Swing Damage Modifier Tag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                PowerSwingDamageModifierTag                                      (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::Power_Swing_Damage_Modifier_Tag(class UObject* __WorldContext, struct FGameplayTag* PowerSwingDamageModifierTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "Power Swing Damage Modifier Tag");

	Params::UBPFL_State_C_Power_Swing_Damage_Modifier_Tag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (PowerSwingDamageModifierTag != nullptr)
		*PowerSwingDamageModifierTag = std::move(Parms.PowerSwingDamageModifierTag);

}


// Function BPFL_State.BPFL_State_C.PowerSwingChargedTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                PowerSwingTag                                                    (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::PowerSwingChargedTag(class UObject* __WorldContext, struct FGameplayTag* PowerSwingTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "PowerSwingChargedTag");

	Params::UBPFL_State_C_PowerSwingChargedTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (PowerSwingTag != nullptr)
		*PowerSwingTag = std::move(Parms.PowerSwingTag);

}


// Function BPFL_State.BPFL_State_C.MarkedForDebugRespawn
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                MarkedForDebugRespawnTag                                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::MarkedForDebugRespawn(class UObject* __WorldContext, struct FGameplayTag* MarkedForDebugRespawnTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "MarkedForDebugRespawn");

	Params::UBPFL_State_C_MarkedForDebugRespawn_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (MarkedForDebugRespawnTag != nullptr)
		*MarkedForDebugRespawnTag = std::move(Parms.MarkedForDebugRespawnTag);

}


// Function BPFL_State.BPFL_State_C.MarkedForDebugDeathTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                MarkedForDebugDeathTag                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::MarkedForDebugDeathTag(class UObject* __WorldContext, struct FGameplayTag* MarkedForDebugDeathTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "MarkedForDebugDeathTag");

	Params::UBPFL_State_C_MarkedForDebugDeathTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (MarkedForDebugDeathTag != nullptr)
		*MarkedForDebugDeathTag = std::move(Parms.MarkedForDebugDeathTag);

}


// Function BPFL_State.BPFL_State_C.InsideKillVolumeTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                InsideKillVolumeTag                                              (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::InsideKillVolumeTag(class UObject* __WorldContext, struct FGameplayTag* InsideKillVolumeTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "InsideKillVolumeTag");

	Params::UBPFL_State_C_InsideKillVolumeTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (InsideKillVolumeTag != nullptr)
		*InsideKillVolumeTag = std::move(Parms.InsideKillVolumeTag);

}


// Function BPFL_State.BPFL_State_C.DropAllResourcesTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                DropAllTag                                                       (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::DropAllResourcesTag(class UObject* __WorldContext, struct FGameplayTag* DropAllTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "DropAllResourcesTag");

	Params::UBPFL_State_C_DropAllResourcesTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (DropAllTag != nullptr)
		*DropAllTag = std::move(Parms.DropAllTag);

}


// Function BPFL_State.BPFL_State_C.StrengthTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                StrengthTag                                                      (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::StrengthTag(class UObject* __WorldContext, struct FGameplayTag* StrengthTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "StrengthTag");

	Params::UBPFL_State_C_StrengthTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (StrengthTag != nullptr)
		*StrengthTag = std::move(Parms.StrengthTag);

}


// Function BPFL_State.BPFL_State_C.DamageBlockedAmountTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                BlockingTag                                                      (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::DamageBlockedAmountTag(class UObject* __WorldContext, struct FGameplayTag* BlockingTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "DamageBlockedAmountTag");

	Params::UBPFL_State_C_DamageBlockedAmountTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (BlockingTag != nullptr)
		*BlockingTag = std::move(Parms.BlockingTag);

}


// Function BPFL_State.BPFL_State_C.EnvironmentalTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                EnvironmentalTag                                                 (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::EnvironmentalTag(class UObject* __WorldContext, struct FGameplayTag* EnvironmentalTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "EnvironmentalTag");

	Params::UBPFL_State_C_EnvironmentalTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (EnvironmentalTag != nullptr)
		*EnvironmentalTag = std::move(Parms.EnvironmentalTag);

}


// Function BPFL_State.BPFL_State_C.MissileTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                MissileTag                                                       (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::MissileTag(class UObject* __WorldContext, struct FGameplayTag* MissileTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "MissileTag");

	Params::UBPFL_State_C_MissileTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (MissileTag != nullptr)
		*MissileTag = std::move(Parms.MissileTag);

}


// Function BPFL_State.BPFL_State_C.FriendTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                FriendTag                                                        (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::FriendTag(class UObject* __WorldContext, struct FGameplayTag* FriendTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "FriendTag");

	Params::UBPFL_State_C_FriendTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (FriendTag != nullptr)
		*FriendTag = std::move(Parms.FriendTag);

}


// Function BPFL_State.BPFL_State_C.ZKillPlaneTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                ZKillPlaneTag                                                    (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::ZKillPlaneTag(class UObject* __WorldContext, struct FGameplayTag* ZKillPlaneTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "ZKillPlaneTag");

	Params::UBPFL_State_C_ZKillPlaneTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (ZKillPlaneTag != nullptr)
		*ZKillPlaneTag = std::move(Parms.ZKillPlaneTag);

}


// Function BPFL_State.BPFL_State_C.MeleeTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                MeleeTag                                                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::MeleeTag(class UObject* __WorldContext, struct FGameplayTag* MeleeTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "MeleeTag");

	Params::UBPFL_State_C_MeleeTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (MeleeTag != nullptr)
		*MeleeTag = std::move(Parms.MeleeTag);

}


// Function BPFL_State.BPFL_State_C.BlockingTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                BlockingTag                                                      (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::BlockingTag(class UObject* __WorldContext, struct FGameplayTag* BlockingTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "BlockingTag");

	Params::UBPFL_State_C_BlockingTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (BlockingTag != nullptr)
		*BlockingTag = std::move(Parms.BlockingTag);

}


// Function BPFL_State.BPFL_State_C.RightQuadrantTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                RightQuadrantTag                                                 (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::RightQuadrantTag(class UObject* __WorldContext, struct FGameplayTag* RightQuadrantTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "RightQuadrantTag");

	Params::UBPFL_State_C_RightQuadrantTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (RightQuadrantTag != nullptr)
		*RightQuadrantTag = std::move(Parms.RightQuadrantTag);

}


// Function BPFL_State.BPFL_State_C.LeftQuadrantTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                LeftQuadrantTag                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::LeftQuadrantTag(class UObject* __WorldContext, struct FGameplayTag* LeftQuadrantTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "LeftQuadrantTag");

	Params::UBPFL_State_C_LeftQuadrantTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (LeftQuadrantTag != nullptr)
		*LeftQuadrantTag = std::move(Parms.LeftQuadrantTag);

}


// Function BPFL_State.BPFL_State_C.RearQuadrantTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                RearQuadrantTag                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::RearQuadrantTag(class UObject* __WorldContext, struct FGameplayTag* RearQuadrantTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "RearQuadrantTag");

	Params::UBPFL_State_C_RearQuadrantTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (RearQuadrantTag != nullptr)
		*RearQuadrantTag = std::move(Parms.RearQuadrantTag);

}


// Function BPFL_State.BPFL_State_C.ForwardQuadrantTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                ForwardQuadrantTag                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::ForwardQuadrantTag(class UObject* __WorldContext, struct FGameplayTag* ForwardQuadrantTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "ForwardQuadrantTag");

	Params::UBPFL_State_C_ForwardQuadrantTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (ForwardQuadrantTag != nullptr)
		*ForwardQuadrantTag = std::move(Parms.ForwardQuadrantTag);

}


// Function BPFL_State.BPFL_State_C.HeadshotTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                HeadshotTag                                                      (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::HeadshotTag(class UObject* __WorldContext, struct FGameplayTag* HeadshotTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "HeadshotTag");

	Params::UBPFL_State_C_HeadshotTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (HeadshotTag != nullptr)
		*HeadshotTag = std::move(Parms.HeadshotTag);

}


// Function BPFL_State.BPFL_State_C.FriendlyFireTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                FriendlyFireTag                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::FriendlyFireTag(class UObject* __WorldContext, struct FGameplayTag* FriendlyFireTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "FriendlyFireTag");

	Params::UBPFL_State_C_FriendlyFireTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (FriendlyFireTag != nullptr)
		*FriendlyFireTag = std::move(Parms.FriendlyFireTag);

}


// Function BPFL_State.BPFL_State_C.OwnedBySamePlayerTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                OwnedBySamePlayerTag                                             (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::OwnedBySamePlayerTag(class UObject* __WorldContext, struct FGameplayTag* OwnedBySamePlayerTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "OwnedBySamePlayerTag");

	Params::UBPFL_State_C_OwnedBySamePlayerTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (OwnedBySamePlayerTag != nullptr)
		*OwnedBySamePlayerTag = std::move(Parms.OwnedBySamePlayerTag);

}


// Function BPFL_State.BPFL_State_C.PlayerOwnedTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                PlayerOwnedTag                                                   (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::PlayerOwnedTag(class UObject* __WorldContext, struct FGameplayTag* PlayerOwnedTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "PlayerOwnedTag");

	Params::UBPFL_State_C_PlayerOwnedTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayerOwnedTag != nullptr)
		*PlayerOwnedTag = std::move(Parms.PlayerOwnedTag);

}


// Function BPFL_State.BPFL_State_C.StructureCompleteTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                StructureCompleteTag                                             (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::StructureCompleteTag(class UObject* __WorldContext, struct FGameplayTag* StructureCompleteTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "StructureCompleteTag");

	Params::UBPFL_State_C_StructureCompleteTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (StructureCompleteTag != nullptr)
		*StructureCompleteTag = std::move(Parms.StructureCompleteTag);

}


// Function BPFL_State.BPFL_State_C.SchematicTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                SchematicTag                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::SchematicTag(class UObject* __WorldContext, struct FGameplayTag* SchematicTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "SchematicTag");

	Params::UBPFL_State_C_SchematicTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (SchematicTag != nullptr)
		*SchematicTag = std::move(Parms.SchematicTag);

}


// Function BPFL_State.BPFL_State_C.InvulnerabilityTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                InvulnerabilityTag                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::InvulnerabilityTag(class UObject* __WorldContext, struct FGameplayTag* InvulnerabilityTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "InvulnerabilityTag");

	Params::UBPFL_State_C_InvulnerabilityTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (InvulnerabilityTag != nullptr)
		*InvulnerabilityTag = std::move(Parms.InvulnerabilityTag);

}


// Function BPFL_State.BPFL_State_C.GodModeTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                GodModeTag                                                       (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBPFL_State_C::GodModeTag(class UObject* __WorldContext, struct FGameplayTag* GodModeTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_State_C", "GodModeTag");

	Params::UBPFL_State_C_GodModeTag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (GodModeTag != nullptr)
		*GodModeTag = std::move(Parms.GodModeTag);

}

}


