#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SpellActor_Eruption_Mod_04_Self.SpellActor_Eruption_Mod_04_Self_C
// (Actor)

class UClass* ASpellActor_Eruption_Mod_04_Self_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpellActor_Eruption_Mod_04_Self_C");

	return Clss;
}


// SpellActor_Eruption_Mod_04_Self_C SpellActor_Eruption_Mod_04_Self.Default__SpellActor_Eruption_Mod_04_Self_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASpellActor_Eruption_Mod_04_Self_C* ASpellActor_Eruption_Mod_04_Self_C::GetDefaultObj()
{
	static class ASpellActor_Eruption_Mod_04_Self_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASpellActor_Eruption_Mod_04_Self_C*>(ASpellActor_Eruption_Mod_04_Self_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpellActor_Eruption_Mod_04_Self.SpellActor_Eruption_Mod_04_Self_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_Eruption_Mod_04_Self_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Eruption_Mod_04_Self_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_Eruption_Mod_04_Self.SpellActor_Eruption_Mod_04_Self_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASpellActor_Eruption_Mod_04_Self_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Eruption_Mod_04_Self_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_Eruption_Mod_04_Self.SpellActor_Eruption_Mod_04_Self_C.ExecuteUbergraph_SpellActor_Eruption_Mod_04_Self
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void ASpellActor_Eruption_Mod_04_Self_C::ExecuteUbergraph_SpellActor_Eruption_Mod_04_Self(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Eruption_Mod_04_Self_C", "ExecuteUbergraph_SpellActor_Eruption_Mod_04_Self");

	Params::ASpellActor_Eruption_Mod_04_Self_C_ExecuteUbergraph_SpellActor_Eruption_Mod_04_Self_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


